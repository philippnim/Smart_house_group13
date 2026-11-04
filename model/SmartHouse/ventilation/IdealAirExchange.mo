within SmartHouse.ventilation;
model IdealAirExchange "Models an ideal heat exchange through circulation. Assumes that half of the air 
comes from each room and also half is fed back to each room."
  import SI = Modelica.Units.SI;

  // Gas Information
  outer TIL.SystemInformationManager sim;

  parameter TILMedia.Gas.Types.BaseGas gasType =
    sim.gasType1;

  parameter SI.Density rhoMean = 1.2 "Nominal air density to break algebraic loops";

  // Volumetric Exchange
  parameter SI.VolumeFlowRate airExchange(min=0);

  // Pressure exchange:
  parameter SI.Pressure dp_nominal(min=1e-6) "Nominal pressure drop";
  parameter SI.MassFlowRate mdot_nominal(min=0) "Nominal mass flow rate";

  // Connectors
  TIL.Connectors.GasPort gasPort_A1(gasType=gasType) "Air extracted from room A"
    annotation (Placement(transformation(extent={{-110,50},{-90,70}})));
  TIL.Connectors.GasPort gasPort_A2(gasType=gasType) "Mixed air returned to room A"
    annotation (Placement(transformation(extent={{-110,-70},{-90,-50}})));

  TIL.Connectors.GasPort gasPort_B1(gasType=gasType) "Air extracted from room  B"
    annotation (Placement(transformation(extent={{90,50},{110,70}})));
  TIL.Connectors.GasPort gasPort_B2(gasType=gasType) "Mixed air returned to room B"
    annotation (Placement(transformation(extent={{90,-70},{110,-50}})));



  // Variables
  SI.MassFlowRate m_exchange;
  SI.MassFlowRate m_dp;

equation

  // Symmetric air exchange with constant nominal density
  m_exchange = rhoMean * airExchange;

  // Pressure-driven equalization flow
  m_dp = (gasPort_A1.p - gasPort_B1.p) * (mdot_nominal / dp_nominal);

  // Mass flows extracted from both rooms
  gasPort_A1.m_flow = m_exchange + noEvent(max(0, m_dp));
  gasPort_B1.m_flow = m_exchange + noEvent(max(0, -m_dp));

  // Mass flows supplied to the opposite rooms
  gasPort_A2.m_flow = -(m_exchange + noEvent(max(0, -m_dp)));
  gasPort_B2.m_flow = -(m_exchange + noEvent(max(0, m_dp)));

  // Enthalpy transport from A to B and B to A
  gasPort_B2.h_outflow = inStream(gasPort_A1.h_outflow);
  gasPort_A2.h_outflow = inStream(gasPort_B1.h_outflow);

  // Composition transport from A to B and B to A
  gasPort_B2.xi_outflow = inStream(gasPort_A1.xi_outflow);
  gasPort_A2.xi_outflow = inStream(gasPort_B1.xi_outflow);

  // Fallback values for unused reverse flow directions
  gasPort_A1.h_outflow = 25000;
  gasPort_B1.h_outflow = 25000;

  gasPort_A1.xi_outflow = gasType.xi_default;
  gasPort_B1.xi_outflow = gasType.xi_default;


  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
    coordinateSystem(preserveAspectRatio=false)));
end IdealAirExchange;
