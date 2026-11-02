within SmartHouse.NilsShowerEvapTests;
model ShowerEvaporator
  "Lumped shower spray: two liquid ports and evaporation to a gas volume"
  import SI = Modelica.Units.SI;
  outer TIL.SystemInformationManager sim;
  parameter TILMedia.Gas.Types.BaseGas gasType = sim.gasType1;
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType
    "Set to a single-component liquid-water medium";
  replaceable package MediaConfiguration = TIL.Utilities.MediaConfiguration
    constrainedby TIL.Utilities.Internals.PartialMediaConfiguration;
  parameter Real Kp(min=0, unit="kg/(m2.s.Pa)")
    "Pressure-based mass transfer coefficient; supply a calibrated value";
  parameter SI.Diameter d32(min=1e-6) = 1e-3
    "Effective droplet diameter; example value, not shower-specific data";
  parameter SI.Time flightTime(min=0) = 0.3
    "Mean airborne time; example value";
  parameter SI.CoefficientOfHeatTransfer alpha(min=0) = 20
    "Sensible heat transfer coefficient; example value";
  parameter SI.Mass mHold(min=1e-6) = 0.05
    "Effective water inventory for temperature dynamics";
  parameter Real maxEvaporatedFraction(min=0, max=1) = 0.99
    "Limits evaporation to available forward water flow";
  parameter SI.Temperature T_start = 313.15;
  TIL.Connectors.LiquidPort liquidIn(liquidType=liquidType);
  TIL.Connectors.LiquidPort liquidOut(liquidType=liquidType);
  TIL.Connectors.HeatPort airHeatPort
    "Connect to the bathroom volume heat port";
  Modelica.Blocks.Interfaces.RealInput pAir(unit="Pa");
  Modelica.Blocks.Interfaces.RealInput xiAir[gasType.nc - 1](each unit="1");
  Modelica.Blocks.Interfaces.RealOutput mEvap_flow(unit="kg/s");
  Modelica.Blocks.Interfaces.RealOutput hEvap(unit="J/kg");
  SI.Temperature TWater(start=T_start, fixed=true);
  SI.Area A "Effective surface area of airborne droplets";
  SI.HeatFlowRate QAirToWater "Positive from room air into water";
protected
  final parameter Integer waterIndex = max(1, gasType.condensingIndex);
  SI.MassFlowRate mForward;
  SI.MassFlowRate mPotential;
  // Property objects use the same media configuration as the supplied Volume.
  // Their enthalpies are determined implicitly by the temperature equations.
  MediaConfiguration.Media.Liquid_ph water(
    final liquidType=liquidType,
    final p=liquidOut.p,
    final xi=zeros(liquidType.nc - 1),
    computeTransportProperties=false);
  MediaConfiguration.Media.Gas_ph roomAir(
    final gasType=gasType,
    final p=pAir,
    final xi=xiAir,
    computeTransportProperties=false);
  MediaConfiguration.Media.Gas_ph surfaceAir(
    final gasType=gasType,
    final p=pAir,
    final xi=xiAir,
    computeTransportProperties=false);
initial equation
  assert(liquidType.nc == 1,
    "Select pure liquid water, not a multicomponent liquid.");
  assert(gasType.nc >= 2 and gasType.condensingIndex > 0,
    "Select moist air with water as the condensing species.");
equation
  // Zero pressure loss. Use a flow source upstream and a pressure boundary
  // downstream, or add a separate hydraulic resistance in the liquid circuit.
  liquidIn.p = liquidOut.p;
  liquidIn.m_flow + liquidOut.m_flow = mEvap_flow;
  liquidIn.h_outflow = water.h;
  liquidOut.h_outflow = water.h;
  liquidIn.xi_outflow = zeros(liquidType.nc - 1);
  liquidOut.xi_outflow = zeros(liquidType.nc - 1);
  assert(noEvent(liquidIn.m_flow >= -1e-8 and
                 liquidOut.m_flow <= 1e-8),
    "ShowerEvaporator supports forward liquid flow only.");
  water.T = TWater;
  roomAir.T = airHeatPort.T;
  surfaceAir.T = TWater;
  // Approximate area for spherical droplets with little shrinkage in flight.
  mForward = noEvent(max(0, liquidIn.m_flow));
  A = 6*mForward*flightTime/(water.d*d32);
  // Evaporation only. Wet-surface storage and condensation are separate models.
  mPotential = A*Kp*(surfaceAir.p_s - roomAir.p_i[waterIndex]);
  mEvap_flow = noEvent(min(maxEvaporatedFraction*mForward,
                          max(0, mPotential)));
  // Pure vapour enthalpy on the GAS medium's reference basis.
  hEvap = surfaceAir.h_i[waterIndex];
  QAirToWater = alpha*A*(airHeatPort.T - TWater);
  airHeatPort.Q_flow = QAirToWater;
  // Fixed effective liquid inventory. The liquid balance above determines
  // outlet flow. Latent heat is applied on the liquid medium's basis, avoiding
  // subtraction of enthalpies from potentially different reference systems.
  mHold*water.cp*der(TWater) =
      liquidIn.m_flow*
        (noEvent(actualStream(liquidIn.h_outflow)) - water.h)
    + liquidOut.m_flow*
        (noEvent(actualStream(liquidOut.h_outflow)) - water.h)
    + QAirToWater
    - mEvap_flow*surfaceAir.delta_hv;
  annotation(Documentation(info="<html><p>Engineering approximation for airborne shower spray near atmospheric pressure. The effective inventory controls temperature response; this is not a droplet population or trajectory model. No evaporation remains when liquid flow stops. Model wet surfaces separately.</p><p>Uses the previously modified gas Volume with mEvap_flow and hEvap inputs. Kp must be supplied. Example geometric and heat-transfer defaults require calibration. The TIL LiquidPort and MediaConfiguration.Media.Liquid_ph interfaces must be checked against the installed TIL release. This model has not been compiled with TIL.</p></html>"));
end ShowerEvaporator;
