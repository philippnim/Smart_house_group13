within SmartHouse;
model TestHousePhilipp
  Rooms.UnheatedRoom unheatedRoom1(
    A_floor=20,
    h=3,
    initialPressure(displayUnit="bar"),
    initialTemperature=296.15,
    gasType=sim.gasType1,
    useVentilation=false,
    redeclare TIL.Utilities.Units.Conversions.Units.degC unitTemp)
    annotation (Placement(transformation(extent={{-2,-12},{18,8}})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_ceiling(
      thermalResistance=0.38) annotation (Placement(transformation(
        extent={{-15,-4},{15,4}},
        rotation=270,
        origin={-7,36})));
  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_wall(TFixed=293.15)
    annotation (Placement(transformation(extent={{-78,6},{-70,18}})));
  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_ceiling(TFixed=293.15)
    annotation (Placement(transformation(
        extent={{-4,-6},{4,6}},
        rotation=270,
        origin={-8,68})));
  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_floor(TFixed=283.15)
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
    annotation (Placement(transformation(extent={{84,-36},{64,-16}})));
  Modelica.Blocks.Sources.TimeTable Occupancy(table=[0,0; 7200,0; 7201,2; 14400,
        2; 14401,0; 86400,0])
    annotation (Placement(transformation(extent={{84,-8},{64,12}})));
  Boundaries.Walls.InternalWall internalWall(
    lengthWall=13,
    heightWall=3,
    gasType=sim.gasType1,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{-58,2},{-38,22}})));
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
    gasType=sim.gasType1,
    enableFloorHeating=true,
    pipeLength=133,
    innerDiameter=0.012,
    wallThickness=0.002,
    nbTubes=1,
    nbCells=10,
    alpha=1000,
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
    cp_B=1000,
    gasType=sim.gasType1)
    annotation (Placement(transformation(extent={{-58,-26},{-38,-6}})));
equation
  connect(heatBoundary_ceiling.heatPort, heatResistor_ceiling.heatPortA)
    annotation (Line(
      points={{-8,68},{-8,56},{-7,56},{-7,51}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_ceiling.heatPortB, unheatedRoom1.heatPort_ceiling)
    annotation (Line(
      points={{-7,21},{-7,7.4},{-1.4,7.4}},
      color={204,0,0},
      thickness=0.5));
  connect(unheatedRoom1.Temperature_sensor, realValue.numberPort)
    annotation (Line(points={{11,9},{11,20},{18.5,20}}, color={0,0,127}));
  connect(Occupancy.y, unheatedRoom1.occupancy)
    annotation (Line(points={{63,2},{24,2},{24,-20},{15,-20},{15,-13}},
                                                          color={0,0,127}));
  connect(Pel.y, unheatedRoom1.P_el)
    annotation (Line(points={{63,-26},{9,-26},{9,-13}}, color={0,0,127}));
  connect(heatBoundary_wall.heatPort, internalWall.heatPort_A_air) annotation (
      Line(
      points={{-74,12},{-58,12}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall.heatPort_B_air, unheatedRoom1.heatPort_walls)
    annotation (Line(
      points={{-38,12},{-12,12},{-12,-2},{-1.4,-2}},
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
  connect(boundaryOverdetermined.port, groundFloor.liquidPort_A) annotation (
      Line(
      points={{12,-56},{-6,-56},{-6,-62},{-10.4,-62}},
      color={0,170,238},
      thickness=0.5));
  connect(boundaryUnderdetermined.port, groundFloor.liquidPort_B) annotation (
      Line(
      points={{12,-76},{-6,-76},{-6,-70},{-10.4,-70}},
      color={0,170,238},
      thickness=0.5));
  connect(solarRadiation.y, compositeWall.RadiationInput)
    annotation (Line(points={{-75,-68},{-52,-68},{-52,-28}}, color={0,0,127}));
  connect(compositeWall.solarGains, groundFloor.heatPort_surfaceConnection)
    annotation (Line(
      points={{-44,-26},{-44,-59.6},{-29.6,-59.6}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall.heatPort_B, unheatedRoom1.heatPort_walls) annotation (
      Line(
      points={{-38,-16},{-12,-16},{-12,-2},{-1.4,-2}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall.heatPort_A, heatBoundary_outside.heatPort) annotation (
      Line(
      points={{-58,-16},{-76,-16}},
      color={204,0,0},
      thickness=0.5));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
end TestHousePhilipp;
