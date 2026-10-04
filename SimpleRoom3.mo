model SimpleRoom "One room as RC network - Modelica Standard Library only"
  import SI = Modelica.Units.SI;

  // Geometry and parameters (living room as example)
  parameter SI.Area A_floor = 42 "Floor area";
  parameter SI.Height h = 2.5 "Room height";
  parameter SI.ThermalConductance UA_env = 30 "Envelope: sum of U*A (walls, windows, roof, floor)";
  parameter SI.ThermalConductance G_vent = 3.5 "Ventilation: m_flow*cp*(1-eta_HRV), 0.5 ACH, eta=0.8";
  parameter SI.ThermalConductance G_airMass = 8*3*A_floor "Convection air <-> surfaces, h=8 W/m2K";
  parameter SI.HeatCapacity C_air = A_floor*h*1.2*1005 "Room air";
  parameter SI.HeatCapacity C_mass = 150e3*A_floor "Walls, floor, furniture (150 kJ/m2K)";

  // Capacitances
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor air(C=C_air, T(start=293.15, fixed=true))
    annotation (Placement(transformation(extent={{-10,10},{10,30}})));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor mass(C=C_mass, T(start=293.15, fixed=true))
    annotation (Placement(transformation(extent={{50,10},{70,30}})));

  // Resistances
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor envelope(G=UA_env)
    annotation (Placement(transformation(extent={{-40,10},{-20,30}})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor ventilation(G=G_vent)
    annotation (Placement(transformation(extent={{-40,-30},{-20,-10}})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor airToMass(G=G_airMass)
    annotation (Placement(transformation(extent={{20,-10},{40,10}})));

  // Outdoor temperature (replace with weather data later, e.g. CombiTimeTable)
  Modelica.Blocks.Sources.Sine T_out(amplitude=5, f=1/86400, offset=273.15 - 10)
    annotation (Placement(transformation(extent={{-100,-10},{-80,10}})));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature outdoor
    annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));

  // Heat flow sources
  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow gains(Q_flow=400) "Occupants, appliances, lighting"
    annotation (Placement(transformation(extent={{-40,-60},{-20,-40}})));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow floorHeating
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=90, origin={90,-30})));

  // Control: PI controller keeps room air at 21 degC
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor T_room
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=90, origin={30,50})));
  Modelica.Blocks.Sources.Constant T_set(k=273.15 + 21)
    annotation (Placement(transformation(extent={{0,70},{20,90}})));
  Modelica.Blocks.Continuous.LimPID PI(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=1000, Ti=3600, yMax=3000, yMin=0) "Output = heating power in W"
    annotation (Placement(transformation(extent={{50,70},{70,90}})));

equation
  // Outdoor -> envelope and ventilation -> room air
  connect(T_out.y, outdoor.T)
    annotation (Line(points={{-79,0},{-72,0}}, color={0,0,127}));
  connect(outdoor.port, envelope.port_a)
    annotation (Line(points={{-50,0},{-46,0},{-46,20},{-40,20}}, color={191,0,0}));
  connect(envelope.port_b, air.port)
    annotation (Line(points={{-20,20},{-14,20},{-14,0},{0,0},{0,10}}, color={191,0,0}));
  connect(outdoor.port, ventilation.port_a)
    annotation (Line(points={{-50,0},{-46,0},{-46,-20},{-40,-20}}, color={191,0,0}));
  connect(ventilation.port_b, air.port)
    annotation (Line(points={{-20,-20},{-14,-20},{-14,0},{0,0},{0,10}}, color={191,0,0}));

  // Room air <-> thermal mass
  connect(air.port, airToMass.port_a)
    annotation (Line(points={{0,10},{0,0},{20,0}}, color={191,0,0}));
  connect(airToMass.port_b, mass.port)
    annotation (Line(points={{40,0},{60,0},{60,10}}, color={191,0,0}));

  // Gains into air, floor heating into mass
  connect(gains.port, air.port)
    annotation (Line(points={{-20,-50},{-14,-50},{-14,0},{0,0},{0,10}}, color={191,0,0}));
  connect(floorHeating.port, mass.port)
    annotation (Line(points={{90,-20},{90,0},{60,0},{60,10}}, color={191,0,0}));

  // Control loop
  connect(air.port, T_room.port)
    annotation (Line(points={{0,10},{0,0},{14,0},{14,36},{30,36},{30,40}}, color={191,0,0}));
  connect(T_set.y, PI.u_s)
    annotation (Line(points={{21,80},{48,80}}, color={0,0,127}));
  connect(T_room.T, PI.u_m)
    annotation (Line(points={{30,61},{30,64},{60,64},{60,68}}, color={0,0,127}));
  connect(PI.y, floorHeating.Q_flow)
    annotation (Line(points={{71,80},{100,80},{100,-50},{90,-50},{90,-42}}, color={0,0,127}));

  annotation (
    Diagram(coordinateSystem(extent={{-110,-70},{110,100}})),
    experiment(StopTime=604800, Interval=600));
end SimpleRoom;
