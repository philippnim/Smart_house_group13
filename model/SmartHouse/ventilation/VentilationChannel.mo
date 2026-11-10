within SmartHouse.ventilation;
model VentilationChannel
  parameter Modelica.Units.SI.Volume V_room = 60 "Room volume";
  parameter Modelica.Units.SI.Temperature T_outMin = 283.15 "Free cooling only above this outdoor temperature 10°C";
  parameter Modelica.Units.SI.Temperature T_comfort = 297.15 "Free cooling when room is warmer than 24°C";
  parameter Modelica.Units.SI.TemperatureDifference dT_min = 2 "Outdoor must be this much colder than room";
  parameter Modelica.Units.SI.ThermalConductance G_HX = 100 "Per cell, big = same as the old direct connection";
  outer TIL.SystemInformationManager sim "Comes from the model around it";

  TIL.GasComponents.Tubes.Tube supplyTube(
    tubeGeometry(
      innerDiameter=0.05,
      length=1,
      nParallelTubes=10),
    pressureDropPosition=TIL.Internals.PressureDropPosition.port_a,
    nCells=10,
    enableHeatPorts=true,
    redeclare model HeatTransferModel =
        TIL.GasComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
        (constantAlpha=100),
    redeclare model PressureDropModel =
        TIL.GasComponents.Tubes.TransportPhenomena.PressureDrop.QuadraticMassFlowDependent
        (mdot_nominal=0.02, pressureDrop_nominal=100),
    wallCellStateType="state south")
    annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=180,
        origin={-30,30})));
  TIL.GasComponents.Tubes.Tube exhaustTube(
    tubeGeometry(
      innerDiameter=0.05,
      length=1,
      nParallelTubes=10),
    pressureDropPosition=TIL.Internals.PressureDropPosition.port_a,
    nCells=10,
    enableHeatPorts=true,
    HeatTransferModel(constantAlpha=100),
    redeclare model PressureDropModel =
        TIL.GasComponents.Tubes.TransportPhenomena.PressureDrop.QuadraticMassFlowDependent
        (mdot_nominal=0.02, pressureDrop_nominal=100),
    wallCellStateType="state south")
    annotation (Placement(transformation(
        extent={{-8,2},{8,-2}},
        rotation=180,
        origin={-30,-10})));
  TIL.GasComponents.Sensors.Sensor_T sensor_T_afterRoom
    annotation (Placement(transformation(extent={{-52,-4},{-44,4}})));
  VentilationController ventilationController(V_room=V_room)
    annotation (Placement(transformation(extent={{-18,46},{2,66}})));
  TIL.GasComponents.Sensors.Sensor_phi sensor_phi
    annotation (Placement(transformation(extent={{-72,-6},{-64,2}})));
  MoistureRecovery moistureRecovery
    annotation (Placement(transformation(extent={{48,10},{68,30}})));
  TIL.Connectors.GasPort gasPortSupply(gasType=sim.gasType1)
    annotation (Placement(transformation(extent={{-100,20},{-80,40}})));
  TIL.Connectors.GasPort gasPortExhaust(gasType=sim.gasType1)
    annotation (Placement(transformation(extent={{-100,-20},{-80,0}})));
  Modelica.Blocks.Interfaces.RealInput Occupancy
    annotation (Placement(transformation(extent={{-106,-102},{-66,-62}})));
  Modelica.Blocks.Interfaces.RealInput Toutdoor
    annotation (Placement(transformation(extent={{-106,-72},{-66,-32}})));
  TIL.GasComponents.Boundaries.Boundary boundary(boundaryType="p")
    annotation (Placement(transformation(extent={{84,-20},{92,0}})));
  TIL.GasComponents.Boundaries.Boundary boundary1(
    use_temperatureInput=true,
    use_mixingRatioInput=true,
    boundaryType="p")
    annotation (Placement(transformation(extent={{118,22},{126,42}})));
  TIL.GasComponents.Fans.SimpleFan simpleFan(
    presetVariableType="V_flow",
    use_volumeFlowRateInput=true,
    eta=0.33) annotation (Placement(transformation(
        extent={{8,-8},{-8,8}},
        rotation=90,
        origin={94,30})));
  Modelica.Blocks.Logical.Hysteresis outdoorwarm(uLow=T_outMin - 1, uHigh=
        T_outMin + 1)
    annotation (Placement(transformation(extent={{54,132},{74,152}})));
  Modelica.Blocks.Logical.Hysteresis roomtowarm(uLow=T_comfort - 1, uHigh=
        T_comfort + 1)
    annotation (Placement(transformation(extent={{54,106},{74,126}})));
  Modelica.Blocks.Math.Feedback dT_roomout
    annotation (Placement(transformation(extent={{14,80},{34,100}})));
  Modelica.Blocks.Logical.Hysteresis outdoorcooler(uLow=dT_min - 1, uHigh=
        dT_min + 1)
    annotation (Placement(transformation(extent={{54,80},{74,100}})));
  Modelica.Blocks.MathBoolean.And and1(nu=3)
    annotation (Placement(transformation(extent={{126,116},{138,128}})));
  Modelica.Thermal.HeatTransfer.Components.Convection bypassHX[10] annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-30,12})));
  Modelica.Blocks.Logical.Switch switch1
    annotation (Placement(transformation(extent={{168,112},{188,132}})));
  Modelica.Blocks.Sources.RealExpression G_off
    annotation (Placement(transformation(extent={{128,136},{148,156}})));
  Modelica.Blocks.Sources.RealExpression realExpression(y=G_HX)
    annotation (Placement(transformation(extent={{130,94},{150,114}})));
  Modelica.Blocks.Routing.Replicator replicator(nout=10)
    annotation (Placement(transformation(extent={{202,112},{222,132}})));
equation

  connect(sensor_phi.sensorValue, ventilationController.phi_room) annotation
    (Line(points={{-68,0},{-68,55.6},{-20.2,55.6}},        color={0,0,127}));
  connect(sensor_phi.sensorValue, moistureRecovery.phi_room) annotation (Line(
        points={{-68,0},{-68,50},{-32,50},{-32,70},{46,70},{46,27}},
                                       color={0,0,127}));
  connect(ventilationController.V_flow, moistureRecovery.V_flow) annotation (
      Line(points={{3,55.8},{26,55.8},{26,34},{80,34},{80,4},{46,4},{46,11}},
        color={0,0,127}));
  connect(sensor_T_afterRoom.sensorValue, moistureRecovery.T_room)
    annotation (Line(points={{-48,2},{-48,8},{20,8},{20,23},{46,23}},
                                         color={0,0,127}));
  connect(gasPortExhaust, exhaustTube.portB) annotation (Line(
      points={{-90,-10},{-38,-10}},
      color={255,153,0},
      thickness=0.5));
  connect(gasPortSupply, supplyTube.portB) annotation (Line(
      points={{-90,30},{-38,30}},
      color={255,153,0},
      thickness=0.5));
  connect(sensor_phi.port, exhaustTube.portB) annotation (Line(
      points={{-68,-6},{-68,-10},{-38,-10}},
      color={255,153,0},
      thickness=0.5));
  connect(sensor_T_afterRoom.port, exhaustTube.portB) annotation (Line(
      points={{-48,-4},{-48,-10},{-38,-10}},
      color={255,153,0},
      thickness=0.5));
  connect(Occupancy, ventilationController.occupancy) annotation (Line(points={{-86,-82},
          {-24,-82},{-24,60},{-20,60}},          color={0,0,127}));
  connect(Occupancy, moistureRecovery.occupancy) annotation (Line(points={{-86,-82},
          {34,-82},{34,15},{46,15}},         color={0,0,127}));
  connect(moistureRecovery.T_out, Toutdoor) annotation (Line(points={{46,19},
          {24,19},{24,-52},{-86,-52}},           color={0,0,127}));
  connect(exhaustTube.portA, boundary.port) annotation (Line(
      points={{-22,-10},{88,-10}},
      color={255,153,0},
      thickness=0.5));
  connect(simpleFan.portA, boundary1.port) annotation (Line(
      points={{102,30},{112,30},{112,32},{122,32}},
      color={255,153,0},
      thickness=0.5));
  connect(supplyTube.portA, simpleFan.portB) annotation (Line(
      points={{-22,30},{86,30}},
      color={255,153,0},
      thickness=0.5));
  connect(moistureRecovery.mixingRatio, boundary1.mixingRatio_in) annotation
    (Line(points={{69,24},{82,24},{82,18},{114,18},{114,30},{118,30}}, color=
          {0,0,127}));
  connect(moistureRecovery.T_supply, boundary1.T_in) annotation (Line(points=
          {{69,16},{116,16},{116,26},{118,26}}, color={0,0,127}));
  connect(ventilationController.V_flow, simpleFan.V_flow_in)
    annotation (Line(points={{3,55.8},{94,55.8},{94,40}},
                                                      color={0,0,127}));
  connect(Toutdoor, outdoorwarm.u) annotation (Line(points={{-86,-52},{24,-52},{
          24,142},{52,142}}, color={0,0,127}));
  connect(sensor_T_afterRoom.sensorValue, roomtowarm.u) annotation (Line(points
        ={{-48,2},{-48,90},{8,90},{8,116},{52,116}}, color={0,0,127}));
  connect(sensor_T_afterRoom.sensorValue, dT_roomout.u1)
    annotation (Line(points={{-48,2},{-48,90},{16,90}}, color={0,0,127}));
  connect(Toutdoor, dT_roomout.u2)
    annotation (Line(points={{-86,-52},{24,-52},{24,82}}, color={0,0,127}));
  connect(dT_roomout.y, outdoorcooler.u)
    annotation (Line(points={{33,90},{52,90}}, color={0,0,127}));
  connect(outdoorwarm.y, and1.u[1]) annotation (Line(points={{75,142},{122,142},
          {122,120.6},{126,120.6}}, color={255,0,255}));
  connect(roomtowarm.y, and1.u[2]) annotation (Line(points={{75,116},{120,116},{
          120,122},{126,122}}, color={255,0,255}));
  connect(outdoorcooler.y, and1.u[3]) annotation (Line(points={{75,90},{124,90},
          {124,118},{126,118},{126,123.4}}, color={255,0,255}));
  connect(supplyTube.heatPort, bypassHX.solid) annotation (Line(
      points={{-30,28},{-30,22}},
      color={204,0,0},
      thickness=0.5));
  connect(exhaustTube.heatPort, bypassHX.fluid) annotation (Line(
      points={{-30,-8},{-30,2}},
      color={204,0,0},
      thickness=0.5));
  connect(and1.y, switch1.u2)
    annotation (Line(points={{138.9,122},{166,122}}, color={255,0,255}));
  connect(G_off.y, switch1.u1) annotation (Line(points={{149,146},{158,146},{158,
          130},{166,130}}, color={0,0,127}));
  connect(realExpression.y, switch1.u3) annotation (Line(points={{151,104},{158,
          104},{158,114},{166,114}}, color={0,0,127}));
  connect(switch1.y, replicator.u)
    annotation (Line(points={{189,122},{200,122}}, color={0,0,127}));
  connect(replicator.y, bypassHX.Gc) annotation (Line(points={{223,122},{234,122},
          {234,12},{-20,12}}, color={0,0,127}));
  connect(and1.y, ventilationController.freeCooling) annotation (Line(points={{138.9,
          122},{138,122},{138,46.4},{-20,46.4}}, color={255,0,255}));
  connect(and1.y, moistureRecovery.bypass) annotation (Line(points={{138.9,122},
          {138,122},{138,46},{46,46},{46,30.4}}, color={255,0,255}));
  connect(sensor_T_afterRoom.sensorValue, ventilationController.T_room)
    annotation (Line(points={{-48,2},{-48,50},{-28,50},{-28,49},{-20,49}},
        color={0,0,127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
end VentilationChannel;
