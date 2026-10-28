within SmartHouse;
model HouseEnviroment
  House house(gasType=sim.gasType1, liquidType=sim.liquidType1)
              annotation (Placement(transformation(extent={{-22,-20},{22,20}})));
  Modelica.Blocks.Sources.BooleanExpression SaunaOn
    annotation (Placement(transformation(extent={{-62,74},{-42,94}})));
  Modelica.Blocks.Sources.TimeTable OccupancyBathroom(table=[0,0; 7200,0; 7201,2;
        14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,52})));
  Modelica.Blocks.Sources.TimeTable OccupancyBedroom(table=[0,0; 7200,0; 7201,2;
        14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,20})));
  Modelica.Blocks.Sources.TimeTable OccupancyKitchen(table=[0,0; 7200,0; 7201,2;
        14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,-12})));
  Modelica.Blocks.Sources.TimeTable OccupancyLivingRoom(table=[0,0; 7200,0; 7201,
        2; 14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,-44})));
  Modelica.Blocks.Sources.TimeTable OccupancyGarage(table=[0,0; 7200,0; 7201,2;
        14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,-76})));
  Modelica.Blocks.Sources.TimeTable OccupancySauna(table=[0,0; 7200,0; 7201,2; 14400,
        2; 14401,0; 86400,0]) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,84})));
  Modelica.Blocks.Sources.TimeTable PelBathroom(table=[0.0,0; 28799,0; 28800,50;
        61200,300; 86400,50])
    annotation (Placement(transformation(extent={{-60,42},{-40,62}})));
  Modelica.Blocks.Sources.TimeTable PelBedroom(table=[0.0,0; 28799,0; 28800,50;
        61200,300; 86400,50])
    annotation (Placement(transformation(extent={{-60,10},{-40,30}})));
  Modelica.Blocks.Sources.TimeTable PelKitchen(table=[0.0,0; 28799,0; 28800,50;
        61200,300; 86400,50])
    annotation (Placement(transformation(extent={{-60,-22},{-40,-2}})));
  Modelica.Blocks.Sources.TimeTable PelLivingroom(table=[0.0,0; 28799,0; 28800,50;
        61200,300; 86400,50])
    annotation (Placement(transformation(extent={{-60,-54},{-40,-34}})));
  Modelica.Blocks.Sources.TimeTable PelGarage(table=[0.0,0; 28799,0; 28800,50; 61200,
        300; 86400,50])
    annotation (Placement(transformation(extent={{-60,-86},{-40,-66}})));
  Modelica.Blocks.Sources.RealExpression TOutdoor(y=-2)
    annotation (Placement(transformation(extent={{-8,74},{12,94}})));
  Modelica.Blocks.Sources.RealExpression TGround(y=5)
    annotation (Placement(transformation(extent={{-10,-84},{10,-64}})));
  TIL.LiquidComponents.Boundaries.BoundaryOverdetermined bathroomHeatIn(
    liquidType=sim.liquidType1,
    pFixed=200000,
    m_flowFixed=-0.05,
    TFixed=308.15)
    annotation (Placement(transformation(extent={{98,92},{106,112}})));
  TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined bathroomHeatOut(
      liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{98,62},{106,82}})));
  inner TIL.SystemInformationManager sim(redeclare
      TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
      TILMedia.Liquid.Types.TILMedia_Water liquidType1)
    annotation (Placement(transformation(extent={{66,80},{86,100}})));
  TIL.LiquidComponents.Boundaries.BoundaryOverdetermined bedroomHeatIn(
    liquidType=sim.liquidType1,
    pFixed=200000,
    m_flowFixed=-0.05,
    TFixed=308.15)
    annotation (Placement(transformation(extent={{98,32},{106,52}})));
  TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined bedroomHeatOut(
      liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{98,2},{106,22}})));
  TIL.LiquidComponents.Boundaries.BoundaryOverdetermined kitchenHeatIn(
    liquidType=sim.liquidType1,
    pFixed=200000,
    m_flowFixed=-0.05,
    TFixed=308.15)
    annotation (Placement(transformation(extent={{98,-18},{106,2}})));
  TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined kitchenHeatOut(
      liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{98,-48},{106,-28}})));
  TIL.LiquidComponents.Boundaries.BoundaryOverdetermined livingroomHeatIn(
    liquidType=sim.liquidType1,
    pFixed=200000,
    m_flowFixed=-0.05,
    TFixed=308.15)
    annotation (Placement(transformation(extent={{98,-78},{106,-58}})));
  TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined livingroomHeatOut(
      liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{98,-108},{106,-88}})));
equation
  // Occupancy: sauna, bathroom, bedroom, kitchen, living room, garage.
  connect(OccupancySauna.y,      house.houseInputs.occupancy[1]);
  connect(OccupancyBathroom.y,   house.houseInputs.occupancy[2]);
  connect(OccupancyBedroom.y,    house.houseInputs.occupancy[3]);
  connect(OccupancyKitchen.y,    house.houseInputs.occupancy[4]);
  connect(OccupancyLivingRoom.y, house.houseInputs.occupancy[5]);
  connect(OccupancyGarage.y,     house.houseInputs.occupancy[6]);

  // Electrical loads: bathroom, bedroom, kitchen, living room, garage.
  connect(PelBathroom.y,   house.houseInputs.P_el[1]);
  connect(PelBedroom.y,    house.houseInputs.P_el[2]);
  connect(PelKitchen.y,    house.houseInputs.P_el[3]);
  connect(PelLivingroom.y, house.houseInputs.P_el[4]);
  connect(PelGarage.y,     house.houseInputs.P_el[5]);

  // Sauna control and environmental temperatures.
  connect(SaunaOn.y,  house.houseInputs.saunaOn);
  connect(TOutdoor.y, house.houseInputs.TOutdoor);
  connect(TGround.y,  house.houseInputs.TGround);

  // All four heating circuits share the same two liquid boundaries.

  connect(bathroomHeatIn.port, house.houseHeatingInput.supplyP[1]);
  connect(bedroomHeatIn.port, house.houseHeatingInput.supplyP[2]);
  connect(kitchenHeatIn.port, house.houseHeatingInput.supplyP[3]);
  connect(livingroomHeatIn.port, house.houseHeatingInput.supplyP[4]);
  connect(house.houseHeatingInput.returnP[1], bathroomHeatOut.port);
  connect(house.houseHeatingInput.returnP[2], bedroomHeatOut.port);
  connect(house.houseHeatingInput.returnP[3], kitchenHeatOut.port);
  connect(house.houseHeatingInput.returnP[4], livingroomHeatOut.port);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end HouseEnviroment;
