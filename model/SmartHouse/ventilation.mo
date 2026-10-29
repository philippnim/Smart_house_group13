within SmartHouse;
package ventilation
  model TestHousePhilipp
    Rooms.UnheatedRoom unheatedRoom1(
      A_floor=20,
      h=3,
      initialPressure(displayUnit="bar"),
      initialTemperature=296.15,
      enableInternalMass=false,
      gasType=sim.gasType1,
      useVentilation=true,
      room_volume(fixedInitialPressure=false),
      redeclare TIL.Utilities.Units.Conversions.Units.degC unitTemp,
      heatPerPerson=70)
      annotation (Placement(transformation(extent={{-2,-12},{18,8}})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_wall(TFixed=293.15)
      annotation (Placement(transformation(extent={{-78,6},{-70,18}})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_ceiling(TFixed=278.15)
      annotation (Placement(transformation(
          extent={{-4,-6},{4,6}},
          rotation=270,
          origin={0,100})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_floor(TFixed=279.15)
      annotation (Placement(transformation(
          extent={{-4,-6},{4,6}},
          rotation=90,
          origin={-20,-92})));
    inner TIL.SystemInformationManager sim(redeclare
        TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
        TILMedia.Liquid.Types.TILMedia_Water liquidType1)
      annotation (Placement(transformation(extent={{80,80},{100,100}})));
    Modelica.Blocks.Interaction.Show.RealValue realValue
      annotation (Placement(transformation(extent={{20,10},{40,30}})));
    Modelica.Blocks.Sources.TimeTable Pel(table=[0.0,0; 28799,0; 28800,50; 61200,
          300; 86400,50])
      annotation (Placement(transformation(extent={{84,-54},{64,-34}})));
    Modelica.Blocks.Sources.TimeTable Occupancy(table=[0,0; 7200,0; 7201,2; 14400,
          2; 14401,0; 86400,0])
      annotation (Placement(transformation(extent={{84,-28},{64,-8}})));
    Boundaries.Walls.InternalWall internalWall(
      lengthWall=13,
      heightWall=3,
      alpha_A=8,
      alpha_B=8,
      thicknessWall=0.15,
      lambdaWall=0.7,
      rhoWall(displayUnit="kg/m3") = 1600,
      cpWall=1000)
      annotation (Placement(transformation(extent={{-60,2},{-40,22}})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_outside(TFixed=278.15)
      annotation (Placement(transformation(extent={{-80,-22},{-72,-10}})));
    Boundaries.Horizontal.GroundFloor groundFloor(
      length=4,
      width=5,
      thickness_upper=0.05,
      lambda_upper=1.4,
      rho_upper(displayUnit="kg/m3") = 2000,
      cp_upper=1000,
      enableSurfaceConnection=true,
      thickness_lower=0.1,
      lambda_lower=0.035,
      rho_lower(displayUnit="kg/m3") = 30,
      cp_lower=1450,
      alpha_up=6,
      enableFloorHeating=true,
      pipeLength=133,
      innerDiameter=0.012,
      wallThickness=0.002,
      nbTubes=1,
      nbCells=10,
      alpha_pipe=1000,
      T_init=293.15,
      liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{-30,-76},{-10,-56}})));
    TIL.LiquidComponents.Boundaries.BoundaryOverdetermined boundaryOverdetermined(
      liquidType=sim.liquidType1,
      pFixed=200000,
      m_flowFixed=-0.05,
      TFixed=308.15)
      annotation (Placement(transformation(extent={{8,-66},{16,-46}})));
    TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined
      boundaryUnderdetermined(liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{8,-86},{16,-66}})));
    Modelica.Blocks.Sources.TimeTable solarRadiation(
      table=[0, 0;
             21600, 0;
             28800, 200;
             36000, 450;
             43200, 600;
             50400, 450;
             57600, 200;
             64800, 0;
             86400, 0])   annotation (Placement(transformation(extent={{-96,-78},{-76,-58}})));

    Boundaries.Walls.CompositeWall compositeWall(
      lengthTotal=5,
      heightTotal=3,
      lengthWindow=1,
      heightWindow=3,
      alpha_A_window=25,
      alpha_B_window=8,
      alpha_A_wall=25,
      alpha_B_wall=8,
      g_value=0.55,
      thicknessWindow=0.04,
      lambdaWindow=0.048,
      thickness_A=0.2,
      lambda_A=0.035,
      rho_A(displayUnit="kg/m3") = 20,
      cp_A=1500,
      thickness_B=0.175,
      lambda_B=0.7,
      rho_B(displayUnit="kg/m3") = 1600,
      cp_B=1000)
      annotation (Placement(transformation(extent={{-60,-26},{-40,-6}})));
    TIL.GasComponents.Boundaries.BoundaryOverdetermined
      boundaryOverdetermined_circulation(
      gasType=sim.gasType1,
      streamVariablesInputType="T",
      use_temperatureInput=true,
      TFixed=278.15,
      boundaryType="p, V_flow",
      pFixed=101300,
      use_volumeFlowRateInput=true,
      V_flowFixed(displayUnit="m3/h") = -0.0083333333333333)
      annotation (Placement(transformation(extent={{126,28},{134,48}})));
    TIL.GasComponents.Boundaries.BoundaryUnderdetermined
      boundaryUnderdetermined_circulation(gasType=sim.gasType1)
      annotation (Placement(transformation(extent={{74,2},{82,22}})));
    Boundaries.Horizontal.Roof roof(
      length=4,
      width=5,
      thickness_upper=0.1,
      lambda_upper=0.039,
      rho_upper(displayUnit="kg/m3") = 50,
      cp_upper=1030,
      enableSurfaceConnection=false,
      thickness_lower=0.02,
      lambda_lower=0.13,
      rho_lower(displayUnit="kg/m3") = 500,
      cp_lower=1600,
      alpha_up=25,
      alpha_down=10)
      annotation (Placement(transformation(extent={{-20,58},{0,78}})));
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
          TIL.GasComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop)
      annotation (Placement(transformation(
          extent={{-8,-2},{8,2}},
          rotation=180,
          origin={64,38})));
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
          TIL.GasComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop)
      annotation (Placement(transformation(
          extent={{-8,2},{8,-2}},
          rotation=180,
          origin={64,12})));
    Modelica.Blocks.Sources.RealExpression realExpression(y=-30/3600)
      annotation (Placement(transformation(extent={{74,48},{94,68}})));
    Modelica.Blocks.Sources.RealExpression realExpression1(y=243.15)
      annotation (Placement(transformation(extent={{80,18},{100,38}})));
    TIL.GasComponents.Sensors.Sensor_T sensor_T_outdoor
      annotation (Placement(transformation(extent={{104,46},{112,54}})));
    TIL.GasComponents.Sensors.Sensor_T sensor_T_beforeRoom
      annotation (Placement(transformation(extent={{46,48},{54,56}})));
    TIL.GasComponents.Sensors.Sensor_T sensor_T_afterRoom
      annotation (Placement(transformation(extent={{48,24},{56,32}})));
  equation


    connect(unheatedRoom1.Temperature_sensor, realValue.numberPort)
      annotation (Line(points={{11,9},{11,20},{18.5,20}}, color={0,0,127}));
    connect(Occupancy.y, unheatedRoom1.occupancy)
      annotation (Line(points={{63,-18},{15,-18},{15,-13}}, color={0,0,127}));
    connect(Pel.y, unheatedRoom1.P_el)
      annotation (Line(points={{63,-44},{20,-44},{20,-22},{9,-22},{9,-13}},
                                                          color={0,0,127}));
    connect(heatBoundary_wall.heatPort, internalWall.heatPort_A_air) annotation (
        Line(
        points={{-74,12},{-60,12}},
        color={204,0,0},
        thickness=0.5));
    connect(internalWall.heatPort_B_air, unheatedRoom1.heatPort_walls)
      annotation (Line(
        points={{-40,12},{-12,12},{-12,-2},{-1.4,-2}},
        color={204,0,0},
        thickness=0.5));
    connect(heatBoundary_floor.heatPort, groundFloor.heatPort_down) annotation (
        Line(
        points={{-20,-92},{-20,-75.6}},
        color={204,0,0},
        thickness=0.5));
    connect(groundFloor.heatPort_up, unheatedRoom1.heatPort_floor) annotation (
        Line(
        points={{-20,-56.4},{-20,-18},{-1.4,-18},{-1.4,-11.4}},
        color={204,0,0},
        thickness=0.5));
    connect(boundaryOverdetermined.port, groundFloor.Input) annotation (Line(
        points={{12,-56},{-6,-56},{-6,-62},{-10.4,-62}},
        color={0,170,238},
        thickness=0.5));
    connect(boundaryUnderdetermined.port, groundFloor.Output) annotation (Line(
        points={{12,-76},{-6,-76},{-6,-70},{-10.4,-70}},
        color={0,170,238},
        thickness=0.5));
    connect(solarRadiation.y, compositeWall.RadiationInput)
      annotation (Line(points={{-75,-68},{-54,-68},{-54,-28}}, color={0,0,127}));
    connect(compositeWall.solarGains, groundFloor.heatPort_surfaceConnection)
      annotation (Line(
        points={{-46,-26},{-46,-59.6},{-29.6,-59.6}},
        color={204,0,0},
        thickness=0.5));
    connect(compositeWall.heatPort_B, unheatedRoom1.heatPort_walls) annotation (
        Line(
        points={{-40,-16},{-12,-16},{-12,-2},{-1.4,-2}},
        color={204,0,0},
        thickness=0.5));
    connect(compositeWall.heatPort_A, heatBoundary_outside.heatPort) annotation (
        Line(
        points={{-60,-16},{-76,-16}},
        color={204,0,0},
        thickness=0.5));
    connect(roof.heatPort_up, heatBoundary_ceiling.heatPort) annotation (Line(
        points={{-10,77.6},{-10,92},{0,92},{0,100}},
        color={204,0,0},
        thickness=0.5));
    connect(roof.heatPort_down, unheatedRoom1.heatPort_ceiling) annotation (Line(
        points={{-10,58.4},{-10,7.4},{-1.4,7.4}},
        color={204,0,0},
        thickness=0.5));
    connect(boundaryOverdetermined_circulation.port, supplyTube.portA)
      annotation (Line(
        points={{130,38},{72,38}},
        color={255,153,0},
        thickness=0.5));
    connect(supplyTube.portB, unheatedRoom1.gasPortA) annotation (Line(
        points={{56,38},{46,38},{46,4},{17.6,4}},
        color={255,153,0},
        thickness=0.5));
    connect(boundaryUnderdetermined_circulation.port, exhaustTube.portA)
      annotation (Line(
        points={{78,12},{72,12}},
        color={255,153,0},
        thickness=0.5));
    connect(exhaustTube.portB, unheatedRoom1.gasPortB) annotation (Line(
        points={{56,12},{48,12},{48,-8},{17.6,-8}},
        color={255,153,0},
        thickness=0.5));
    connect(supplyTube.heatPort, exhaustTube.heatPort) annotation (Line(
        points={{64,36},{64,14}},
        color={204,0,0},
        thickness=0.5));
    connect(realExpression.y, boundaryOverdetermined_circulation.V_flow_in)
      annotation (Line(points={{95,58},{120,58},{120,40},{126,40}}, color={0,0,127}));
    connect(realExpression1.y, boundaryOverdetermined_circulation.T_in)
      annotation (Line(points={{101,28},{120,28},{120,32},{126,32}}, color={0,0,127}));
    connect(sensor_T_outdoor.port, supplyTube.portA) annotation (Line(
        points={{108,46},{108,38},{72,38}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_beforeRoom.port, unheatedRoom1.gasPortA) annotation (Line(
        points={{50,48},{50,38},{46,38},{46,4},{17.6,4}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_afterRoom.port, unheatedRoom1.gasPortB) annotation (Line(
        points={{52,24},{52,12},{48,12},{48,-8},{17.6,-8}},
        color={255,153,0},
        thickness=0.5));
    annotation (
      Icon(coordinateSystem(preserveAspectRatio=false)),
      Diagram(coordinateSystem(preserveAspectRatio=false)),
      experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
  end TestHousePhilipp;
end ventilation;
