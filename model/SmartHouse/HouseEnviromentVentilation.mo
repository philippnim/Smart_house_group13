within SmartHouse;
model HouseEnviromentVentilation
  HouseVentilation houseVentilation(gasType=sim.gasType1, liquidType=sim.liquidType1)
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
  Modelica.Blocks.Sources.RealExpression TOutdoor(y=271.15)
    annotation (Placement(transformation(extent={{-8,74},{12,94}})));
  Modelica.Blocks.Sources.RealExpression TGround(y=278.15)
    annotation (Placement(transformation(extent={{-10,-84},{10,-64}})));
  inner TIL.SystemInformationManager sim(redeclare
      TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
      TILMedia.Liquid.Types.TILMedia_Water liquidType1)
    annotation (Placement(transformation(extent={{66,80},{86,100}})));
  Modelica.Blocks.Sources.BooleanStep SaunaOnStep(startTime=14400)
    annotation (Placement(transformation(extent={{-16,46},{4,66}})));
  ventilation.VentilationUnit ventilationUnit
    annotation (Placement(transformation(extent={{54,-20},{74,0}})));
  HeatingSource.ElectricalBoiler_ThermalStorage electricalBoiler_ThermalStorage
    annotation (Placement(transformation(extent={{30,50},{50,70}})));
  HeatingSource.HeatingController heatingController(
    liquidType=sim.liquidType1,
    T_set1=21,
    T_set2=21,
    T_set3=21,
    T_set4=21)
    annotation (Placement(transformation(extent={{32,14},{52,34}})));
  Modelica.Blocks.Sources.BooleanExpression booleanExpression(y=true)
    annotation (Placement(transformation(extent={{-4,22},{16,42}})));
  TIL.LiquidComponents.Boundaries.Boundary boundary2(boundaryType="p")
    annotation (Placement(transformation(extent={{-4,-10},{4,10}},
        rotation=90,
        origin={90,62})));
  TIL.LiquidComponents.Boundaries.Boundary boundary(
    boundaryType="m_flow",
    m_flowFixed=0,
    TFixed=303.15)
    annotation (Placement(transformation(extent={{-4,-10},{4,10}},
        rotation=90,
        origin={82,36})));
equation
  // Occupancy: sauna, bathroom, bedroom, kitchen, living room, garage.
  connect(OccupancySauna.y, houseVentilation.houseInputs.occupancy[1]);
  connect(OccupancyBathroom.y, houseVentilation.houseInputs.occupancy[2]);
  connect(OccupancyBedroom.y, houseVentilation.houseInputs.occupancy[3]);
  connect(OccupancyKitchen.y, houseVentilation.houseInputs.occupancy[4]);
  connect(OccupancyLivingRoom.y, houseVentilation.houseInputs.occupancy[5]);
  connect(OccupancyGarage.y, houseVentilation.houseInputs.occupancy[6]);

  // Electrical loads: bathroom, bedroom, kitchen, living room, garage.
  connect(PelBathroom.y, houseVentilation.houseInputs.P_el[1]);
  connect(PelBedroom.y, houseVentilation.houseInputs.P_el[2]);
  connect(PelKitchen.y, houseVentilation.houseInputs.P_el[3]);
  connect(PelLivingroom.y, houseVentilation.houseInputs.P_el[4]);
  connect(PelGarage.y, houseVentilation.houseInputs.P_el[5]);

  // Sauna control and environmental temperatures.
  connect(SaunaOnStep.y, houseVentilation.houseInputs.saunaOn);
  connect(TOutdoor.y, houseVentilation.houseInputs.TOutdoor);
  connect(TGround.y, houseVentilation.houseInputs.TGround);

  // All four heating circuits share the same two liquid boundaries.

  // Ventilation unit
  connect(houseVentilation.ventilationPorts, ventilationUnit.ventilationPorts)
    annotation (Line(points={{0,-10},{54,-10}}, color={255,153,0}));
  connect(TOutdoor.y, ventilationUnit.TOutdoor)
    annotation (Line(points={{13,84},{68,84},{68,-22}}, color={0,0,127}));
  connect(OccupancyBathroom.y, ventilationUnit.occupancy[1]) annotation (Line(
        points={{-77,52},{-66,52},{-66,-60},{60,-60},{60,-22.75}}, color={0,0,
          127}));
  connect(OccupancyBedroom.y, ventilationUnit.occupancy[2]) annotation (Line(
        points={{-77,20},{-66,20},{-66,-60},{60,-60},{60,-22.25}}, color={0,0,
          127}));
  connect(OccupancyKitchen.y, ventilationUnit.occupancy[3]) annotation (Line(
        points={{-77,-12},{-66,-12},{-66,-60},{60,-60},{60,-21.75}}, color={0,
          0,127}));
  connect(OccupancyLivingRoom.y, ventilationUnit.occupancy[4]) annotation (
      Line(points={{-77,-44},{-66,-44},{-66,-60},{60,-60},{60,-21.25}}, color
      ={0,0,127}));

  // Connect
  connect(houseVentilation.houseHeatingInput, heatingController.houseHeatingOutput);


  connect(booleanExpression.y, electricalBoiler_ThermalStorage.HeatingDemand)
    annotation (Line(points={{17,32},{24,32},{24,52},{32,52}}, color={255,0,255}));
  connect(heatingController.WaterReturn, electricalBoiler_ThermalStorage.WaterInput)
    annotation (Line(
      points={{46,14},{46,10},{56,10},{56,74},{26,74},{26,60},{30,60}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler_ThermalStorage.WaterOutput, heatingController.WaterSupply)
    annotation (Line(
      points={{50.2,60},{54,60},{54,38},{44,38},{44,34}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler_ThermalStorage.WaterOutput1, boundary2.port)
    annotation (Line(
      points={{40,70},{40,106},{90,106},{90,62}},
      color={0,170,238},
      thickness=0.5));
  connect(boundary.port, electricalBoiler_ThermalStorage.WaterInput1)
    annotation (Line(
      points={{82,36},{82,44},{40,44},{40,50}},
      color={0,170,238},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end HouseEnviromentVentilation;
