within SmartHouse.ventilation;
model VentilationChannel
  parameter Modelica.Units.SI.Volume V_room = 60 "Room volume";
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
    annotation (Placement(transformation(extent={{-52,-6},{-44,2}})));
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
equation

  connect(supplyTube.heatPort, exhaustTube.heatPort) annotation (Line(
      points={{-30,28},{-30,-8}},
      color={204,0,0},
      thickness=0.5));
  connect(sensor_phi.sensorValue, ventilationController.phi_room) annotation
    (Line(points={{-68,0},{-68,52},{-20,52}},              color={0,0,127}));
  connect(sensor_phi.sensorValue, moistureRecovery.phi_room) annotation (Line(
        points={{-68,0},{-68,52},{-32,52},{-32,72},{46,72},{46,27}},
                                       color={0,0,127}));
  connect(ventilationController.V_flow, moistureRecovery.V_flow) annotation (
      Line(points={{3,56},{26,56},{26,34},{80,34},{80,4},{46,4},{46,11}},
        color={0,0,127}));
  connect(sensor_T_afterRoom.sensorValue, moistureRecovery.T_room)
    annotation (Line(points={{-48,0},{-48,8},{20,8},{20,23},{46,23}},
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
      points={{-48,-6},{-48,-10},{-38,-10}},
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
    annotation (Line(points={{3,56},{94,56},{94,40}}, color={0,0,127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
end VentilationChannel;
