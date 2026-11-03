within SmartHouse.ventilation;
model IdealAirExchange "Models an ideal heat exchange through circulation. Assumes that half of the air 
comes from each room and also half is fed back to each room."
  import SI = Modelica.Units.SI;

  // Gas Information
  outer TIL.SystemInformationManager sim;

  parameter TILMedia.Gas.Types.BaseGas gasType =
    sim.gasType1;

  // Volumetric Exchange
  parameter SI.VolumeFlowRate airExchange(min=0);

  // Pressure exchange:
  parameter SI.Pressure dp_nominal = 10 "Nominal pressure drop";
  parameter SI.MassFlowRate mdot_nominal = 0.1 "Nominal mass flow rate";

  // Connectors
  TIL.Connectors.GasPort gasPort_A1(gasType=gasType) "Air extracted from room A"
    annotation (Placement(transformation(extent={{-110,50},{-90,70}})));
  TIL.Connectors.GasPort gasPort_A2(gasType=gasType) "Mixed air returned to room A"
    annotation (Placement(transformation(extent={{-110,-70},{-90,-50}})));

  TIL.Connectors.GasPort gasPort_B1(gasType=gasType) "Air extracted from room  B"
    annotation (Placement(transformation(extent={{90,50},{110,70}})));
  TIL.Connectors.GasPort gasPort_B2(gasType=gasType) "Mixed air returned to room B"
    annotation (Placement(transformation(extent={{90,-70},{110,-50}})));

  // Gas states calculated by TIL
  TILMedia.Gas.Gas_ph gasA(
    gasType=gasType,
    p=gasPort_A1.p,
    h=inStream(gasPort_A1.h_outflow),
    xi=inStream(gasPort_A1.xi_outflow),
    computeTransportProperties=false);

  TILMedia.Gas.Gas_ph gasB(
    gasType=gasType,
    p=gasPort_B1.p,
    h=inStream(gasPort_B1.h_outflow),
    xi=inStream(gasPort_B1.xi_outflow),
    computeTransportProperties=false);

  // Variables
  SI.Density rhoMean;
  SI.MassFlowRate m_exchange;
  SI.MassFlowRate m_dp;

equation

  // Mean density calculated by TIL
  rhoMean = (gasA.d + gasB.d)/2;

  // 50% of total flow extracted from each room
  m_exchange = rhoMean * airExchange;

  // Pressure-driven equalization flow
  m_dp = (gasPort_A1.p - gasPort_B1.p) * (mdot_nominal / dp_nominal);

  // Extraction from both rooms
  gasPort_A1.m_flow = m_exchange + max(0, m_dp);
  gasPort_B1.m_flow = m_exchange + max(0, -m_dp);

  // Return air to opposite rooms
  gasPort_A2.m_flow = -(m_exchange + max(0, -m_dp));
  gasPort_B2.m_flow = -(m_exchange + max(0, m_dp));

  // Direct cross-over of states (A1 -> B2 and B1 -> A2)
  gasPort_B2.h_outflow = gasA.h;
  gasPort_A2.h_outflow = gasB.h;

  gasPort_B2.xi_outflow = gasA.xi;
  gasPort_A2.xi_outflow = gasB.xi;

  // Reverse-flow properties of extraction ports
  gasPort_A1.h_outflow = gasB.h;
  gasPort_B1.h_outflow = gasA.h;

  gasPort_A1.xi_outflow = gasB.xi;
  gasPort_B1.xi_outflow = gasA.xi;

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
    coordinateSystem(preserveAspectRatio=false)));
end IdealAirExchange;
