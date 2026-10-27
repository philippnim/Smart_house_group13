within SmartHouse;
model House
  Rooms.Sauna Sauna(
    A_floor=10,
    h=2.2,
    enableInternalMass=false,
    TSauna=353.15,
    yMax=20000,
    useVentilation=false)
    annotation (Placement(transformation(extent={{-140,60},{-120,80}})));
  Rooms.UnheatedRoom BathroomPlaceholder(
    A_floor=14,
    h=2.2,
    useVentilation=false)
    annotation (Placement(transformation(extent={{-40,60},{-20,80}})));
  Rooms.UnheatedRoom Bedroom(
    A_floor=24,
    h=2.2,
    useVentilation=false)
    annotation (Placement(transformation(extent={{60,60},{80,80}})));
  Rooms.UnheatedRoom Kitchen(
    A_floor=24,
    h=2.2,
    useVentilation=false)
    annotation (Placement(transformation(extent={{-140,-40},{-120,-20}})));
  Rooms.UnheatedRoom Livingroom(
    A_floor=48,
    h=2.2,
    useVentilation=false)
    annotation (Placement(transformation(extent={{12,-40},{32,-20}})));
  Rooms.UnheatedRoom Garage(
    A_floor=15,
    h=2.2,
    useVentilation=false)
    annotation (Placement(transformation(extent={{140,-40},{160,-20}})));
  Boundaries.Horizontal.Roof SaunaRoof(
    length=4,
    width=2.5,
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
    annotation (Placement(transformation(extent={{-140,160},{-120,180}})));
  Boundaries.Horizontal.Roof BathroomRoof(
    length=4,
    width=3.5,
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
    annotation (Placement(transformation(extent={{-40,160},{-20,180}})));
  Boundaries.Horizontal.Roof BedroomRoof(
    length=4,
    width=6,
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
    annotation (Placement(transformation(extent={{60,160},{80,180}})));
  Boundaries.Horizontal.Roof GarageRoof(
    length=5,
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
    annotation (Placement(transformation(extent={{140,160},{160,180}})));
  Boundaries.Horizontal.Roof KitchenRoof(
    length=6,
    width=4,
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
    annotation (Placement(transformation(extent={{-200,128},{-180,148}})));
  Boundaries.Horizontal.Roof KitchenRoof1(
    length=6,
    width=8,
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
    annotation (Placement(transformation(extent={{10,132},{30,152}})));
  Boundaries.Walls.InternalWall internalWall(
    lengthWall=4,
    heightWall=2.2,
    alpha_A=8,
    alpha_B=8,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{-90,60},{-70,80}})));
  Boundaries.Walls.InternalWall internalWall1(
    lengthWall=4,
    heightWall=2.2,
    alpha_A=8,
    alpha_B=8,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{10,60},{30,80}})));
  Boundaries.Walls.InternalWall internalWall2(
    lengthWall=5,
    heightWall=2.2,
    alpha_A=8,
    alpha_B=8,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{74,-40},{94,-20}})));
  Boundaries.Walls.InternalWall internalWall3(
    lengthWall=6,
    heightWall=2.2,
    alpha_A=8,
    alpha_B=8,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{-70,-40},{-50,-20}})));
  Boundaries.Walls.InternalWall internalWall4(
    lengthWall=2.5,
    heightWall=2.2,
    alpha_A=8,
    alpha_B=8,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-130,20})));
  Boundaries.Walls.InternalWall internalWall5(
    lengthWall=1.5,
    heightWall=2.2,
    alpha_A=8,
    alpha_B=8,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-80,20})));
  Boundaries.Walls.InternalWall internalWall6(
    lengthWall=2,
    heightWall=2.2,
    alpha_A=8,
    alpha_B=8,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=270,
        origin={-18,20})));
  Boundaries.Walls.InternalWall internalWall7(
    lengthWall=6,
    heightWall=2.2,
    alpha_A=8,
    alpha_B=8,
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=270,
        origin={46,20})));
  Boundaries.Walls.CompositeWall compositeWall(
    lengthTotal=6.5,
    heightTotal=2.2,
    lengthWindow=4,
    heightWindow=2.2,
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
    annotation (Placement(transformation(extent={{-180,60},{-160,80}})));
  Boundaries.Walls.CompositeWall compositeWall1(
    lengthTotal=10,
    heightTotal=2.2,
    lengthWindow=5,
    heightWindow=1,
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
    annotation (Placement(transformation(extent={{-180,-40},{-160,-20}})));
  Boundaries.Walls.CompositeWall compositeWall2(
    lengthTotal=9,
    heightTotal=2.2,
    lengthWindow=3,
    heightWindow=1,
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
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=90,
        origin={22,-66})));
  Boundaries.Walls.CompositeWall compositeWall3(
    lengthTotal=11,
    heightTotal=2.2,
    lengthWindow=0,
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
    annotation (Placement(transformation(extent={{10,-10},{-10,10}},
        rotation=0,
        origin={188,-32})));
  Boundaries.Walls.CompositeWall compositeWall4(
    lengthTotal=10,
    heightTotal=2.2,
    lengthWindow=2,
    heightWindow=1,
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
    annotation (Placement(transformation(extent={{10,-10},{-10,10}},
        rotation=0,
        origin={112,70})));
  Boundaries.Walls.CompositeWall compositeWall5(
    lengthTotal=3.5,
    heightTotal=2.2,
    lengthWindow=1,
    heightWindow=1,
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
    annotation (Placement(transformation(extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-30,106})));
  Boundaries.Horizontal.GroundFloor SaunaFloor(
    length=2.5,
    width=4,
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
    annotation (Placement(transformation(extent={{-140,-162},{-120,-142}})));
  Boundaries.Horizontal.GroundFloor KitchenFloor(
    length=6,
    width=4,
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
    annotation (Placement(transformation(extent={{-200,-140},{-180,-120}})));
  Boundaries.Horizontal.GroundFloor BathroomFloor(
    length=4,
    width=3.5,
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
    annotation (Placement(transformation(extent={{-44,-162},{-24,-142}})));
  Boundaries.Horizontal.GroundFloor LivingroomFloor(
    length=6,
    width=8,
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
    annotation (Placement(transformation(extent={{10,-142},{30,-122}})));
  Boundaries.Horizontal.GroundFloor BedroomFloor(
    length=4,
    width=6,
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
    annotation (Placement(transformation(extent={{62,-162},{82,-142}})));
  Boundaries.Horizontal.GroundFloor GarageFloor(
    length=5,
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
    annotation (Placement(transformation(extent={{140,-162},{160,-142}})));
  TIL.OtherComponents.Thermal.HeatBoundary OutdoorTemp(use_temperatureInput=
        true)
    annotation (Placement(transformation(extent={{-190,186},{-182,198}})));
  Modelica.Blocks.Interfaces.RealInput OutdoorTempInput
    annotation (Placement(transformation(extent={{-272,168},{-232,208}})));
  Modelica.Blocks.Interfaces.BooleanInput SaunaOnOff
    annotation (Placement(transformation(extent={{-272,92},{-232,132}})));
  Modelica.Blocks.Interfaces.RealInput GroundTemperaturInput
    annotation (Placement(transformation(extent={{-244,-212},{-204,-172}})));
  TIL.OtherComponents.Thermal.HeatBoundary GroundTemperature(
      use_temperatureInput=true)
    annotation (Placement(transformation(extent={{-190,-198},{-182,-186}})));
equation
  connect(compositeWall.heatPort_B, Sauna.heatPort_walls) annotation (Line(
      points={{-160,70},{-139.4,70}},
      color={204,0,0},
      thickness=0.5));
  connect(Sauna.heatPort_walls, internalWall.heatPort_A_air) annotation (Line(
      points={{-139.4,70},{-90,70}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall.heatPort_B_air, BathroomPlaceholder.heatPort_walls)
    annotation (Line(
      points={{-70,70},{-39.4,70}},
      color={204,0,0},
      thickness=0.5));
  connect(Sauna.heatPort_walls, internalWall4.heatPort_A_air) annotation (Line(
      points={{-139.4,70},{-146,70},{-146,36},{-130,36},{-130,30}},
      color={204,0,0},
      thickness=0.5));
  connect(Sauna.heatPort_ceiling, SaunaRoof.heatPort_down) annotation (Line(
      points={{-139.4,79.4},{-139.4,160.4},{-130,160.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Sauna.heatPort_floor, SaunaFloor.heatPort_up) annotation (Line(
      points={{-139.4,60.6},{-139.4,62},{-150,62},{-150,-142.4},{-130,-142.4}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall4.heatPort_B_air, Kitchen.heatPort_walls) annotation (
      Line(
      points={{-130,10},{-130,-14},{-146,-14},{-146,-30},{-139.4,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(Kitchen.heatPort_ceiling, KitchenRoof.heatPort_down) annotation (Line(
      points={{-139.4,-20.6},{-154,-20.6},{-154,50},{-190,50},{-190,128.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Kitchen.heatPort_floor, KitchenFloor.heatPort_up) annotation (Line(
      points={{-139.4,-39.4},{-154,-39.4},{-154,-114},{-190,-114},{-190,-120.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Kitchen.heatPort_walls, compositeWall1.heatPort_B) annotation (Line(
      points={{-139.4,-30},{-160,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(Kitchen.heatPort_walls, internalWall3.heatPort_A_air) annotation (
      Line(
      points={{-139.4,-30},{-70,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall5.heatPort_B, BathroomPlaceholder.heatPort_walls)
    annotation (Line(
      points={{-30,96},{-30,86},{-46,86},{-46,70},{-39.4,70}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall5.heatPort_A_air, BathroomPlaceholder.heatPort_walls)
    annotation (Line(
      points={{-80,30},{-80,54},{-50,54},{-50,70},{-39.4,70}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall6.heatPort_A_air, BathroomPlaceholder.heatPort_walls)
    annotation (Line(
      points={{-18,30},{-18,54},{-50,54},{-50,70},{-39.4,70}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall5.heatPort_B_air, Kitchen.heatPort_walls) annotation (
      Line(
      points={{-80,10},{-80,-30},{-139.4,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall6.heatPort_B_air, Livingroom.heatPort_walls) annotation (
      Line(
      points={{-18,10},{-18,-30},{12.6,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall3.heatPort_B_air, Livingroom.heatPort_walls) annotation (
      Line(
      points={{-50,-30},{12.6,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(BathroomPlaceholder.heatPort_floor, BathroomFloor.heatPort_up)
    annotation (Line(
      points={{-39.4,60.6},{-39.4,-142.4},{-34,-142.4}},
      color={204,0,0},
      thickness=0.5));
  connect(BathroomPlaceholder.heatPort_ceiling, BathroomRoof.heatPort_down)
    annotation (Line(
      points={{-39.4,79.4},{-48,79.4},{-48,154},{-30,154},{-30,160.4}},
      color={204,0,0},
      thickness=0.5));
  connect(BathroomPlaceholder.heatPort_walls, internalWall1.heatPort_A_air)
    annotation (Line(
      points={{-39.4,70},{10,70}},
      color={204,0,0},
      thickness=0.5));
  connect(Livingroom.heatPort_walls, compositeWall2.heatPort_B) annotation (
      Line(
      points={{12.6,-30},{6,-30},{6,-50},{22,-50},{22,-56}},
      color={204,0,0},
      thickness=0.5));
  connect(Livingroom.heatPort_ceiling, KitchenRoof1.heatPort_down) annotation (
      Line(
      points={{12.6,-20.6},{12,-20.6},{12,54},{36,54},{36,126},{20,126},{20,
          132.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Livingroom.heatPort_floor, LivingroomFloor.heatPort_up) annotation (
      Line(
      points={{12.6,-39.4},{12,-39.4},{12,-48},{42,-48},{42,-116},{20,-116},{20,
          -122.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Livingroom.heatPort_walls, internalWall2.heatPort_A_air) annotation (
      Line(
      points={{12.6,-30},{74,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall1.heatPort_B_air, Bedroom.heatPort_walls) annotation (
      Line(
      points={{30,70},{60.6,70}},
      color={204,0,0},
      thickness=0.5));
  connect(Bedroom.heatPort_ceiling, BedroomRoof.heatPort_down) annotation (Line(
      points={{60.6,79.4},{60,79.4},{60,154},{70,154},{70,160.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Bedroom.heatPort_walls, internalWall7.heatPort_A_air) annotation (
      Line(
      points={{60.6,70},{46,70},{46,30}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall7.heatPort_B_air, Livingroom.heatPort_walls) annotation (
      Line(
      points={{46,10},{46,-30},{12.6,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall2.heatPort_B_air, Garage.heatPort_walls) annotation (Line(
      points={{94,-30},{140.6,-30}},
      color={204,0,0},
      thickness=0.5));
  connect(Bedroom.heatPort_floor, BedroomFloor.heatPort_up) annotation (Line(
      points={{60.6,60.6},{60,60.6},{60,36},{64,36},{64,-136},{72,-136},{72,
          -142.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Bedroom.heatPort_walls, compositeWall4.heatPort_B) annotation (Line(
      points={{60.6,70},{46,70},{46,52},{96,52},{96,70},{102,70}},
      color={204,0,0},
      thickness=0.5));
  connect(Garage.heatPort_walls, compositeWall3.heatPort_B) annotation (Line(
      points={{140.6,-30},{134,-30},{134,-46},{172,-46},{172,-32},{178,-32}},
      color={204,0,0},
      thickness=0.5));
  connect(GarageFloor.heatPort_up, Garage.heatPort_floor) annotation (Line(
      points={{150,-142.4},{150,-48},{140.6,-48},{140.6,-39.4}},
      color={204,0,0},
      thickness=0.5));
  connect(Garage.heatPort_ceiling, GarageRoof.heatPort_down) annotation (Line(
      points={{140.6,-20.6},{140,-20.6},{140,154},{150,154},{150,160.4}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall.heatPort_A, OutdoorTemp.heatPort) annotation (Line(
      points={{-180,70},{-186,70},{-186,122},{-174,122},{-174,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(KitchenRoof.heatPort_up, OutdoorTemp.heatPort) annotation (Line(
      points={{-190,147.6},{-190,182},{-174,182},{-174,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(SaunaRoof.heatPort_up, OutdoorTemp.heatPort) annotation (Line(
      points={{-130,179.6},{-158,179.6},{-158,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(BathroomRoof.heatPort_up, OutdoorTemp.heatPort) annotation (Line(
      points={{-30,179.6},{-30,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(BedroomRoof.heatPort_up, OutdoorTemp.heatPort) annotation (Line(
      points={{70,179.6},{70,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(GarageRoof.heatPort_up, OutdoorTemp.heatPort) annotation (Line(
      points={{150,179.6},{150,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(KitchenRoof1.heatPort_up, OutdoorTemp.heatPort) annotation (Line(
      points={{20,151.6},{20,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall5.heatPort_A, OutdoorTemp.heatPort) annotation (Line(
      points={{-30,116},{-30,152},{-14,152},{-14,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall4.heatPort_A, OutdoorTemp.heatPort) annotation (Line(
      points={{122,70},{128,70},{128,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall3.heatPort_A, OutdoorTemp.heatPort) annotation (Line(
      points={{198,-32},{204,-32},{204,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall1.heatPort_A, OutdoorTemp.heatPort) annotation (Line(
      points={{-180,-30},{-206,-30},{-206,192},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(compositeWall2.heatPort_A, OutdoorTemp.heatPort) annotation (Line(
      points={{22,-76},{202,-76},{202,190},{-186,190},{-186,192}},
      color={204,0,0},
      thickness=0.5));
  connect(OutdoorTempInput, OutdoorTemp.T_in) annotation (Line(points={{-252,
          188},{-208,188},{-208,196},{-190,196}}, color={0,0,127}));
  connect(SaunaOnOff, Sauna.SaunaSwitch) annotation (Line(points={{-252,112},{
          -119.6,112},{-119.6,79}}, color={255,0,255}));
  connect(GroundTemperaturInput, GroundTemperature.T_in) annotation (Line(
        points={{-224,-192},{-224,-166},{-196,-166},{-196,-188},{-190,-188}},
        color={0,0,127}));
  connect(KitchenFloor.heatPort_down, GroundTemperature.heatPort) annotation (
      Line(
      points={{-190,-139.6},{-186,-139.6},{-186,-192}},
      color={204,0,0},
      thickness=0.5));
  connect(SaunaFloor.heatPort_down, GroundTemperature.heatPort) annotation (
      Line(
      points={{-130,-161.6},{-130,-192},{-186,-192}},
      color={204,0,0},
      thickness=0.5));
  connect(BathroomFloor.heatPort_down, GroundTemperature.heatPort) annotation (
      Line(
      points={{-34,-161.6},{-34,-192},{-186,-192}},
      color={204,0,0},
      thickness=0.5));
  connect(BedroomFloor.heatPort_down, GroundTemperature.heatPort) annotation (
      Line(
      points={{72,-161.6},{72,-192},{-186,-192}},
      color={204,0,0},
      thickness=0.5));
  connect(LivingroomFloor.heatPort_down, GroundTemperature.heatPort)
    annotation (Line(
      points={{20,-141.6},{20,-192},{-186,-192}},
      color={204,0,0},
      thickness=0.5));
  connect(GarageFloor.heatPort_down, GroundTemperature.heatPort) annotation (
      Line(
      points={{150,-161.6},{150,-192},{-186,-192}},
      color={204,0,0},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,
            -200},{200,200}})), Diagram(coordinateSystem(preserveAspectRatio=
            false, extent={{-200,-200},{200,200}})));
end House;
