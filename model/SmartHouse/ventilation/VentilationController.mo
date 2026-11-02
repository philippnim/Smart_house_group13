within SmartHouse.ventilation;
block VentilationController "Air flow for one room: 0.5 ACH + people + humidity PI"
  parameter Modelica.Units.SI.Volume V_room = 60 "Room volume";
  parameter Real ACH_min = 0.5 "Minimum air changes per hour (task)";
  parameter Real phi_set = 50 "Humidity setpoint in %";

  Modelica.Blocks.Interfaces.RealInput occupancy "Number of persons in the room"
    annotation (Placement(transformation(extent={{-140,20},{-100,60}})));
  Modelica.Blocks.Interfaces.RealInput phi_room "Room humidity in % (from Sensor_phi)"
    annotation (Placement(transformation(extent={{-140,-60},{-100,-20}})));
  Modelica.Blocks.Interfaces.RealOutput V_flow(unit="m3/s") "Air into the room (negative for TIL)"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));

  Modelica.Blocks.Sources.Constant baseFlow(k=ACH_min*V_room/3600) "Always 0.5 ACH"
    annotation (Placement(transformation(extent={{-60,60},{-40,80}})));
  Modelica.Blocks.Math.Gain personFlow(k=30/3600) "25 m3/h per person"
    annotation (Placement(transformation(extent={{-60,30},{-40,50}})));
  Modelica.Blocks.Continuous.LimPID humidityPI(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=0.0015,
    Ti=600,
    yMax=100/3600,
    yMin=0) "Extra air when the room is too humid"
    annotation (Placement(transformation(extent={{-60,-50},{-40,-30}})));
  Modelica.Blocks.Sources.Constant setpoint(k=phi_set) "Humidity setpoint"
    annotation (Placement(transformation(extent={{-90,-90},{-70,-70}})));
  Modelica.Blocks.Math.Max max1
    annotation (Placement(transformation(extent={{-20,36},{0,56}})));
  Modelica.Blocks.Math.Add add
    annotation (Placement(transformation(extent={{18,-10},{38,10}})));
  Modelica.Blocks.Continuous.FirstOrder PhiFilter(
    k=1,
    T=60,
    y_start=40)
    annotation (Placement(transformation(extent={{-92,-50},{-72,-30}})));
equation
  connect(occupancy, personFlow.u)
    annotation (Line(points={{-120,40},{-62,40}}, color={0,0,127}));
  // Swapped on purpose: measured humidity on u_s, setpoint on u_m -> more air when too humid
  connect(setpoint.y, humidityPI.u_m)
    annotation (Line(points={{-69,-80},{-50,-80},{-50,-52}}, color={0,0,127}));
  connect(baseFlow.y, max1.u1) annotation (Line(points={{-39,70},{-30,70},{
          -30,52},{-22,52}}, color={0,0,127}));
  connect(personFlow.y, max1.u2)
    annotation (Line(points={{-39,40},{-22,40}}, color={0,0,127}));
  connect(max1.y, add.u1)
    annotation (Line(points={{1,46},{8,46},{8,6},{16,6}}, color={0,0,127}));
  connect(humidityPI.y, add.u2) annotation (Line(points={{-39,-40},{8,-40},{8,
          -6},{16,-6}}, color={0,0,127}));
  connect(phi_room, PhiFilter.u)
    annotation (Line(points={{-120,-40},{-94,-40}}, color={0,0,127}));
  connect(PhiFilter.y, humidityPI.u_s)
    annotation (Line(points={{-71,-40},{-62,-40}}, color={0,0,127}));
  connect(add.y, V_flow)
    annotation (Line(points={{39,0},{110,0}}, color={0,0,127}));
  annotation (Icon(graphics={
        Rectangle(extent={{-100,100},{100,-100}}, lineColor={0,0,127},
          fillColor={255,255,255}, fillPattern=FillPattern.Solid),
        Text(extent={{-90,40},{90,-40}}, textString="Vent\nCtrl", lineColor={0,0,127})}));
end VentilationController;
