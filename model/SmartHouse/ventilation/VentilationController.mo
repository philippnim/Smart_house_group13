within SmartHouse.ventilation;
block VentilationController "Air flow for one room: 0.5 ACH + people + humidity PI"
  parameter Modelica.Units.SI.Volume V_room = 60 "Room volume";
  parameter Real ACH_min = 0.5 "Minimum air changes per hour (task)";
  parameter Real phi_set = 60 "Humidity setpoint in %";
  parameter Modelica.Units.SI.Temperature T_comfort = 295.15 "Cool down to this";
  parameter Real ACH_boost = 4 "Max extra air changes per hour for cooling";


  Modelica.Blocks.Interfaces.RealInput occupancy "Number of persons in the room"
    annotation (Placement(transformation(extent={{-140,20},{-100,60}})));
  Modelica.Blocks.Interfaces.RealInput phi_room "Room humidity in % (from Sensor_phi)"
    annotation (Placement(transformation(extent={{-142,-24},{-102,16}})));
  Modelica.Blocks.Interfaces.RealOutput V_flow(unit="m3/s") "Air into the room (negative for TIL)"
    annotation (Placement(transformation(extent={{100,-12},{120,8}})));

  Modelica.Blocks.Sources.Constant baseFlow(k=ACH_min*V_room/3600) "Always 0.5 ACH"
    annotation (Placement(transformation(extent={{-60,60},{-40,80}})));
  Modelica.Blocks.Math.Gain personFlow(k=30/3600) "25 m3/h per person"
    annotation (Placement(transformation(extent={{-60,30},{-40,50}})));
  Modelica.Blocks.Continuous.LimPID humidityPI(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=0.0015,
    Ti=600,
    yMax=50/3600,
    yMin=0) "Extra air when the room is too humid"
    annotation (Placement(transformation(extent={{-62,-14},{-42,6}})));
  Modelica.Blocks.Sources.Constant setpoint(k=phi_set) "Humidity setpoint"
    annotation (Placement(transformation(extent={{-92,-54},{-72,-34}})));
  Modelica.Blocks.Math.Max max1
    annotation (Placement(transformation(extent={{-20,36},{0,56}})));
  Modelica.Blocks.Continuous.FirstOrder PhiFilter(
    k=1,
    T=60,
    y_start=40)
    annotation (Placement(transformation(extent={{-94,-14},{-74,6}})));
  Modelica.Blocks.Interfaces.RealInput T_room
    annotation (Placement(transformation(extent={{-140,-90},{-100,-50}})));
  Modelica.Blocks.Continuous.LimPID coolingPI(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=ACH_boost*V_room/3600/2,
    Ti=1800,
    yMax=ACH_boost*V_room/3600,
    yMin=0) annotation (Placement(transformation(extent={{-60,-80},{-40,-60}})));
  Modelica.Blocks.Sources.Constant T_set(k=T_comfort)
    annotation (Placement(transformation(extent={{-94,-134},{-74,-114}})));
  Modelica.Blocks.Logical.Switch switch1
    annotation (Placement(transformation(extent={{26,-106},{46,-86}})));
  Modelica.Blocks.Sources.RealExpression realExpression
    annotation (Placement(transformation(extent={{-36,-128},{-16,-108}})));
  Modelica.Blocks.Math.MultiSum multiSum(nu=3)
    annotation (Placement(transformation(extent={{66,-8},{78,4}})));
  Modelica.Blocks.Interfaces.BooleanInput freeCooling
    annotation (Placement(transformation(extent={{-140,-116},{-100,-76}})));
equation
  connect(occupancy, personFlow.u)
    annotation (Line(points={{-120,40},{-62,40}}, color={0,0,127}));
  // Swapped on purpose: measured humidity on u_s, setpoint on u_m -> more air when too humid
  connect(setpoint.y, humidityPI.u_m)
    annotation (Line(points={{-71,-44},{-52,-44},{-52,-16}}, color={0,0,127}));
  connect(baseFlow.y, max1.u1) annotation (Line(points={{-39,70},{-30,70},{
          -30,52},{-22,52}}, color={0,0,127}));
  connect(personFlow.y, max1.u2)
    annotation (Line(points={{-39,40},{-22,40}}, color={0,0,127}));
  connect(phi_room, PhiFilter.u)
    annotation (Line(points={{-122,-4},{-96,-4}},   color={0,0,127}));
  connect(PhiFilter.y, humidityPI.u_s)
    annotation (Line(points={{-73,-4},{-64,-4}},   color={0,0,127}));
  connect(T_room, coolingPI.u_s)
    annotation (Line(points={{-120,-70},{-62,-70}}, color={0,0,127}));
  connect(T_set.y, coolingPI.u_m) annotation (Line(points={{-73,-124},{-50,-124},
          {-50,-82}}, color={0,0,127}));
  connect(coolingPI.y, switch1.u1) annotation (Line(points={{-39,-70},{16,-70},{
          16,-88},{24,-88}}, color={0,0,127}));
  connect(realExpression.y, switch1.u3) annotation (Line(points={{-15,-118},{16,
          -118},{16,-104},{24,-104}}, color={0,0,127}));
  connect(humidityPI.y, multiSum.u[1]) annotation (Line(points={{-41,-4},{12.5,-4},
          {12.5,-3.4},{66,-3.4}}, color={0,0,127}));
  connect(max1.y, multiSum.u[2]) annotation (Line(points={{1,46},{42,46},{42,-2},
          {66,-2}}, color={0,0,127}));
  connect(switch1.y, multiSum.u[3]) annotation (Line(points={{47,-96},{52,-96},{
          52,-0.6},{66,-0.6}}, color={0,0,127}));
  connect(multiSum.y, V_flow)
    annotation (Line(points={{79.02,-2},{110,-2}}, color={0,0,127}));
  connect(freeCooling, switch1.u2)
    annotation (Line(points={{-120,-96},{24,-96}}, color={255,0,255}));
  annotation (Icon(graphics={
        Rectangle(extent={{-100,100},{100,-100}}, lineColor={0,0,127},
          fillColor={255,255,255}, fillPattern=FillPattern.Solid),
        Text(extent={{-90,40},{90,-40}}, textString="Vent\nCtrl", lineColor={0,0,127})}));
end VentilationController;
