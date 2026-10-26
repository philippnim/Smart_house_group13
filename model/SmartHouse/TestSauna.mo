within SmartHouse;
model TestSauna
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
  Modelica.Blocks.Sources.TimeTable Occupancy(table=[0,0; 7200,0; 7201,2; 14400,
        2; 14401,0; 86400,0])
    annotation (Placement(transformation(extent={{84,-28},{64,-8}})));
  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_outside(TFixed=278.15)
    annotation (Placement(transformation(extent={{-80,-22},{-72,-10}})));
  Boundaries.Horizontal.GroundFloor groundFloor(
    length=2,
    width=3,
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
    enableFloorHeating=false,
    pipeLength=133,
    innerDiameter=0.012,
    wallThickness=0.002,
    nbTubes=1,
    nbCells=10,
    alpha_pipe=1000,
    T_init=293.15,
    liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{-30,-76},{-10,-56}})));
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
    lengthTotal=10,
    heightTotal=2.5,
    lengthWindow=1,
    heightWindow=2.5,
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
    TFixed=278.15,
    boundaryType="p, V_flow",
    pFixed=101300,
    V_flowFixed(displayUnit="m3/h") = -0.0041666666666667)
    annotation (Placement(transformation(extent={{74,28},{82,48}})));
  TIL.GasComponents.Boundaries.BoundaryUnderdetermined
    boundaryUnderdetermined_circulation(gasType=sim.gasType1)
    annotation (Placement(transformation(extent={{74,2},{82,22}})));
  Boundaries.Horizontal.Roof roof(
    length=2,
    width=3,
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
  Rooms.Sauna sauna(yMax=15000, useVentilation=true)
    annotation (Placement(transformation(extent={{-4,-14},{16,6}})));
  Modelica.Blocks.Sources.BooleanConstant booleanConstant
    annotation (Placement(transformation(extent={{-118,18},{-98,38}})));
equation
  connect(heatBoundary_floor.heatPort, groundFloor.heatPort_down) annotation (
      Line(
      points={{-20,-92},{-20,-75.6}},
      color={204,0,0},
      thickness=0.5));
  connect(solarRadiation.y, compositeWall.RadiationInput)
    annotation (Line(points={{-75,-68},{-54,-68},{-54,-28}}, color={0,0,127}));
  connect(compositeWall.solarGains, groundFloor.heatPort_surfaceConnection)
    annotation (Line(
      points={{-46,-26},{-46,-59.6},{-29.6,-59.6}},
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
  connect(roof.heatPort_down, sauna.heatPort_ceiling) annotation (Line(
      points={{-10,58.4},{-10,5.4},{-3.4,5.4}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall.heatPort_B, sauna.heatPort_walls) annotation (Line(
      points={{-40,-16},{-14,-16},{-14,-4},{-3.4,-4}},
      color={204,0,0},
      thickness=0.5));
  connect(groundFloor.heatPort_up, sauna.heatPort_floor) annotation (Line(
      points={{-20,-56.4},{-20,-13.4},{-3.4,-13.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Occupancy.y, sauna.occupancy) annotation (Line(points={{63,-18},{18,
          -18},{18,-20},{13,-20},{13,-15}}, color={0,0,127}));
  connect(sauna.gasPortB, boundaryUnderdetermined_circulation.port) annotation
    (Line(
      points={{16,-10},{58,-10},{58,12},{78,12}},
      color={255,153,0},
      thickness=0.5));
  connect(sauna.gasPortA, boundaryOverdetermined_circulation.port) annotation (
      Line(
      points={{16,2},{56,2},{56,38},{78,38}},
      color={255,153,0},
      thickness=0.5));
  connect(booleanConstant.y, sauna.SaunaSwitch) annotation (Line(points={{-97,
          28},{-40,28},{-40,6},{16.4,6},{16.4,5}}, color={255,0,255}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
end TestSauna;
