within SmartHouse;
model HouseEnviroment
  HouseVentilation houseVentilation(gasType=sim.gasType1, liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{-22,-20},{22,20}})));
  Modelica.Blocks.Sources.TimeTable OccupancyBathroom(table=[0,0; 23400,0; 23401,
        2; 25200,2; 25201,0; 109800,0; 109801,2; 111600,2; 111601,0; 196200,0; 196201,
        1; 198000,1; 198001,0; 199800,0; 199801,1; 201600,1; 201601,0; 282600,0;
        282601,1; 284400,1; 284401,0; 286200,0; 286201,1; 288000,1; 288001,0; 372600,
        0; 372601,2; 374400,2; 374401,0; 466200,0; 466201,2; 468000,2; 468001,0;
        552600,0; 552601,2; 554400,2; 554401,0; 604800,0])
                                    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,52})));
  Modelica.Blocks.Sources.TimeTable OccupancyBedroom(table=[0,2; 21600,2; 21601,
        0; 25200,0; 25201,1; 59400,1; 59401,0; 75600,0; 75601,1; 79200,1; 79201,
        2; 108000,2; 108801,0; 111600,0; 111601,1; 145800,1; 145801,0; 163800,0;
        163801,2; 194400,2; 194401,1; 232000,1; 232001,0; 252000,0; 252001,2; 280800,
        2; 280801,1; 318600,1; 318601,0; 334800,0; 334801,1; 338400,1; 338401,2;
        370800,2; 370801,1; 405000,1; 405001,0; 421200,0; 421201,2; 464400,2; 464401,
        0; 478800,0; 478801,1; 486000,1; 486001,0; 511200,0; 511201,2; 550800,2;
        550801,0; 592200,0; 592201,2; 604800,2])
                                    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,20})));
  Modelica.Blocks.Sources.TimeTable OccupancyKitchen(table=[0,0; 21600,0; 21601,
        2; 23400,2; 23401,0; 43200,0; 43201,1; 45000,1; 45001,0; 57600,0; 57601,
        2; 59400,2; 59401,0; 72000,0; 72001,1; 73800,1; 73801,0; 75600,0; 75601,
        1; 77400,1; 77401,0; 108000,0; 108001,2; 109800,2; 109801,0; 129600,0; 129601,
        1; 131400,1; 131401,0; 145800,0; 145801,2; 147600,2; 147601,0; 160200,0;
        160201,2; 162000,2; 162001,0; 194400,0; 194401,1; 196200,1; 196201,0; 198000,
        0; 198001,1; 199800,1; 199801,0; 217800,0; 217801,1; 219600,1; 219601,0;
        234000,0; 234001,2; 235800,2; 235801,0; 246600,0; 246601,2; 248400,2; 248401,
        0; 280800,0; 280801,1; 282600,1; 282601,0; 284400,0; 284401,1; 286200,1;
        286201,0; 302400,0; 302401,1; 304200,1; 304201,0; 320400,0; 320401,2; 322200,
        2; 322201,0; 331200,0; 331201,1; 333000,1; 333001,0; 334800,0; 334801,1;
        336600,1; 336601,0; 370800,0; 370801,2; 372600,2; 372601,0; 392400,0; 392401,
        2; 394200,2; 394201,0; 405000,0; 405001,2; 406800,2; 406801,0; 417600,0;
        417601,2; 419400,2; 419401,0; 464400,0; 464401,2; 466200,2; 466201,0; 477000,
        0; 477001,2; 478800,2; 478801,0; 491400,0; 491401,2; 493200,2; 493201,0;
        507600,0; 507601,2; 509400,2; 509401,0; 550800,0; 550801,2; 552600,2; 552601,
        0; 563400,0; 563401,2; 565200,2; 565201,0; 579600,0; 579601,2; 581400,2;
        581401,0; 590400,0; 590401,2; 592200,2; 592201,0; 604800,0])
                                    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,-12})));
  Modelica.Blocks.Sources.TimeTable OccupancyLivingRoom(table=[0,0; 59400,0; 59401,
        2; 72000,2; 72001,1; 75600,1; 75601,0; 147600,0; 147601,1; 160200,1; 160201,
        0; 235800,0; 235801,2; 239400,2; 239401,0; 322200,0; 322201,2; 325800,2;
        325801,0; 406800,0; 406801,2; 410400,2; 410401,0; 493200,0; 493201,2; 496800,
        2; 496801,0; 581400,0; 581401,2; 586800,2; 586801,0; 604800,0])
                                       annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,-44})));
  Modelica.Blocks.Sources.TimeTable OccupancyGarage(table=[0,0; 554400,0; 554401,
        1; 563400,1; 563401,0; 604800,0])
                                    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,-76})));
  Modelica.Blocks.Sources.TimeTable OccupancySauna(table=[0,0; 248400,0; 248401,
        2; 252000,2; 252001,0; 586800,0; 586801,2; 590400,2; 590401,0; 604800,0])
                              annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-88,84})));
  Modelica.Blocks.Sources.TimeTable PelBathroom(table=[0,0; 23400,0; 23401,1600;
        25200,1600; 25201,0; 109800,0; 109801,1600; 111600,1600; 111601,0; 196200,
        0; 196201,1600; 198000,1600; 198001,0; 199800,0; 199801,1600; 201600,1600;
        201601,0; 282600,0; 282601,1600; 284400,1600; 284401,0; 286200,0; 286201,
        1600; 288000,1600; 288001,0; 372600,0; 372601,1600; 374400,1600; 374401,
        0; 466200,0; 466201,1600; 468000,1600; 468001,0; 496800,0; 496801,2000;
        498600,2000; 498601,2500; 500400,2500; 500401,0; 552600,0; 552601,1600;
        554400,1600; 554401,0; 604800,0])
    annotation (Placement(transformation(extent={{-60,42},{-40,62}})));
  Modelica.Blocks.Sources.TimeTable PelBedroom(table=[0,0; 25200,0; 25201,150; 59400,
        150; 59401,0; 111600,0; 111601,150; 145800,150; 145801,0; 198000,0; 198001,
        150; 232200,150; 232201,0; 284400,0; 284401,150; 318600,150; 318601,0; 370800,
        0; 370801,150; 405000,150; 405001,0; 478800,0; 478801,150; 486000,150; 486001,
        0; 604800,0])
    annotation (Placement(transformation(extent={{-60,10},{-40,30}})));
  Modelica.Blocks.Sources.TimeTable PelKitchen(table=[0,200; 21600,200; 21601,3700;
        23400,3700; 23401,200; 43200,200; 43201,5200; 45000,5200; 45001,200; 57600,
        200; 57601,2700; 59400,2700; 59401,200; 72000,200; 72001,1200; 73800,1200;
        73801,200; 75600,200; 75601,1200; 77400,1200; 77401,200; 108000,200; 108001,
        3700; 109800,3700; 109801,200; 129600,200; 129601,5200; 131400,5200; 131401,
        200; 145800,200; 145801,4200; 147600,4200; 147601,200; 160200,200; 160201,
        1200; 162000,1200; 162001,200; 194400,200; 194401,1200; 196200,1200; 196201,
        200; 198000,200; 198001,2700; 199800,2700; 199801,200; 217800,200; 217801,
        5200; 219600,5200; 219601,200; 234000,200; 234001,4200; 235800,4200; 235801,
        200; 246600,200; 246601,1200; 248400,1200; 248401,200; 280800,200; 280801,
        1200; 282600,1200; 282601,200; 284400,200; 284401,2700; 286200,2700; 286201,
        200; 302400,200; 302401,5200; 304200,5200; 304201,200; 320400,200; 320401,
        4200; 322200,4200; 322201,200; 331200,200; 331201,1200; 333000,1200; 333001,
        200; 334800,200; 334801,1200; 336600,1200; 336601,200; 370800,200; 370801,
        3700; 372600,3700; 372601,200; 392400,200; 392401,5200; 394200,5200; 394201,
        200; 405000,200; 405001,2700; 406800,2700; 406801,200; 417600,200; 417601,
        1200; 419400,1200; 419401,200; 464400,200; 464401,3700; 466200,3700; 466201,
        200; 477000,200; 477001,5200; 478800,5200; 478801,200; 491400,200; 491401,
        2700; 493200,2700; 493201,200; 507600,200; 507601,1200; 509400,1200; 509401,
        200; 550800,200; 550801,3700; 552600,3700; 552601,200; 563400,200; 563401,
        5200; 565200,5200; 565201,200; 579600,200; 579601,2700; 581400,2700; 581401,
        200; 590400,200; 590401,1200; 592200,1200; 592201,200; 604800,200])
    annotation (Placement(transformation(extent={{-60,-22},{-40,-2}})));
  Modelica.Blocks.Sources.TimeTable PelLivingroom(table=[0,30; 59400,30; 59401,150;
        75600,150; 75601,30; 147600,30; 147601,300; 160200,300; 160201,30; 235800,
        30; 235801,150; 239400,150; 239401,30; 322200,30; 322201,150; 325800,150;
        325801,30; 406800,30; 406801,150; 410400,150; 410401,30; 493200,30; 493201,
        150; 496800,150; 496801,30; 581400,30; 581401,300; 586800,300; 586801,30;
        604800,30])
    annotation (Placement(transformation(extent={{-60,-54},{-40,-34}})));
  Modelica.Blocks.Sources.TimeTable PelGarage(table=[0,0; 554400,0; 554401,1000;
        563400,1000; 563401,0; 604800,0])
    annotation (Placement(transformation(extent={{-60,-86},{-40,-66}})));
  Modelica.Blocks.Sources.RealExpression TOutdoor(y=271.15)
    annotation (Placement(transformation(extent={{-8,74},{12,94}})));
  Modelica.Blocks.Sources.RealExpression TGround(y=278.15)
    annotation (Placement(transformation(extent={{-10,-84},{10,-64}})));
  inner TIL.SystemInformationManager sim(redeclare
      TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
      TILMedia.Liquid.Types.TILMedia_Water liquidType1)
    annotation (Placement(transformation(extent={{66,80},{86,100}})));
  ventilation.VentilationUnit ventilationUnit(
    dp_nominal_door(displayUnit="Pa") = 10,
    mdot_nominal_door=0.01,
    dp_nominal_inf(displayUnit="Pa") = 100,
    mdot_nominal_inf=0.001)
    annotation (Placement(transformation(extent={{54,-20},{74,0}})));
  HeatingSource.HeatingController heatingController(
    liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{34,14},{54,34}})));
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
        origin={90,36})));
  Modelica.Blocks.Sources.TimeTable SaunaSwitch(table=[0,0; 248400,0; 248401,1;
        252000,1; 252001,0; 586800,0; 586801,1; 590400,1; 590401,0; 604800,0])
    annotation (Placement(transformation(extent={{-60,74},{-40,94}})));
  Modelica.Blocks.Logical.GreaterEqualThreshold saunaSwitchBool(threshold=1)
    annotation (Placement(transformation(extent={{-32,78},{-20,90}})));
  HeatingSource.HeatPump_ThermalStorage heatPump_ThermalStorage(useHP=false,
      useBoiler=true)
    annotation (Placement(transformation(extent={{34,48},{54,68}})));
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
  connect(TOutdoor.y, houseVentilation.houseInputs.TOutdoor);
  connect(TGround.y, houseVentilation.houseInputs.TGround);
  connect(saunaSwitchBool.u, SaunaSwitch.y)
    annotation (Line(points={{-33.2,84},{-39,84}}, color={0,0,127}));
  connect(saunaSwitchBool.y, houseVentilation.houseInputs.saunaOn);

  // All four heating circuits share the same two liquid boundaries.

  // Ventilation unit
  connect(houseVentilation.ventilationPorts, ventilationUnit.ventilationPorts)
    annotation (Line(points={{0,-10},{54,-10}}, color={255,153,0}));
  connect(TOutdoor.y, ventilationUnit.TOutdoor)
    annotation (Line(points={{13,84},{46,84},{46,78},{78,78},{78,-22},{68,-22}},
                                                        color={0,0,127}));
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

  connect(booleanExpression.y, heatPump_ThermalStorage.SpaceHeatingDemand)
    annotation (Line(points={{17,32},{30,32},{30,40},{41,40},{41,49}}, color={
          255,0,255}));
  connect(boundary.port, heatPump_ThermalStorage.WaterInput1) annotation (Line(
      points={{90,36},{74,36},{74,55},{54,55}},
      color={0,170,238},
      thickness=0.5));
  connect(boundary2.port, heatPump_ThermalStorage.WaterOutput1) annotation (
      Line(
      points={{90,62},{90,54},{76,54},{76,61},{54,61}},
      color={0,170,238},
      thickness=0.5));
  connect(heatingController.WaterReturn, heatPump_ThermalStorage.WaterInput)
    annotation (Line(
      points={{48,14},{48,10},{26,10},{26,55},{34,55}},
      color={0,170,238},
      thickness=0.5));
  connect(heatingController.WaterSupply, heatPump_ThermalStorage.WaterOutput)
    annotation (Line(
      points={{47.8,34},{47.8,44},{24,44},{24,61},{34,61}},
      color={0,170,238},
      thickness=0.5));
  connect(TOutdoor.y, heatPump_ThermalStorage.T_ambient) annotation (Line(
        points={{13,84},{46,84},{46,78},{78,78},{78,46},{47,46},{47,49}}, color
        ={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),
    experiment(StopTime=604800, __Dymola_Algorithm="Dassl"));
end HouseEnviroment;
