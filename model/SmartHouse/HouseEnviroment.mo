within SmartHouse;
model HouseEnviroment


  // Room order:
  // 1 Sauna
  // 2 Bathroom
  // 3 Bedroom
  // 4 Kitchen
  // 5 Living room
  // 6 Garage

  // Path from here:
  // package path: Smart_house_group13\model\SmartHouse
  // scenario path: Smart_house_group13\data\scenarios

  parameter String scenario = "summer"
    "Define the scenario use the inputs defined by the python script name of the folder";

  parameter Boolean useHP "Enable heat pump in this scenario"
    annotation(Dialog(group="Operation"),Evaluate=true);
  parameter Boolean useBoiler "Enable electric boiler in this scenario"
    annotation(Dialog(group="Operation"),Evaluate=true);
  parameter Boolean enablePV "PV an/aus"
    annotation(Dialog(group="Operation"),Evaluate=true);
  parameter Boolean enableWind "Wind an/aus"
    annotation(Dialog(group="Operation"),Evaluate=true);
  parameter Boolean enableBattery "Batterie an/aus"
    annotation(Dialog(group="Operation"),Evaluate=true);



  final parameter String scenarioDirectory = Modelica.Utilities.Files.fullPathName(Modelica.Utilities.Files.loadResource("modelica://SmartHouse/") + "/../../data/scenarios/" + scenario + "/") + "/";

  // Filenames

  // Occupancy
  parameter String filenameOccSauna = "Sauna_occupancy.txt"  annotation(Dialog(tab="Occupancy Filenames", group="Occupancy Filenames"));
  parameter String filenameOccBathroom = "Bathroom_occupancy.txt" annotation(Dialog(tab="Occupancy Filenames", group="Occupancy Filenames"));
  parameter String filenameOccBedroom = "Bedroom_occupancy.txt" annotation(Dialog(tab="Occupancy Filenames", group="Occupancy Filenames"));
  parameter String filenameOccKitchen = "Kitchen_occupancy.txt" annotation(Dialog(tab="Occupancy Filenames", group="Occupancy Filenames"));
  parameter String filenameOccLivingRoom = "Living_room_occupancy.txt" annotation(Dialog(tab="Occupancy Filenames", group="Occupancy Filenames"));
  parameter String filenameOccGarage = "Garage_occupancy.txt" annotation(Dialog(tab="Occupancy Filenames", group="Occupancy Filenames"));

  // Power
  parameter String filenamePowerBathroom = "Bathroom_power.txt" annotation(Dialog(tab="Power Filenames", group="Power Filenames"));
  parameter String filenamePowerBedroom = "Bedroom_power.txt" annotation(Dialog(tab="Power Filenames", group="Power Filenames"));
  parameter String filenamePowerKitchen = "Kitchen_power.txt" annotation(Dialog(tab="Power Filenames", group="Power Filenames"));
  parameter String filenamePowerLivingRoom = "Living_room_power.txt" annotation(Dialog(tab="Power Filenames", group="Power Filenames"));
  parameter String filenamePowerGarage = "Garage_power.txt" annotation(Dialog(tab="Power Filenames", group="Power Filenames"));

  // Instead of power for the sauna the switch
  parameter String filenameSwitchSauna = "Sauna_switch.txt" "Contains not the demand but the on and off times"
    annotation(Dialog(tab="Power Filenames", group="Power Filenames"));

  // Shower file parameter
  parameter String filenameShower = "Shower_switch.txt"
    annotation(Dialog(tab="Power Filenames", group="Power Filenames"));

  // Weather data
  parameter String filenameTemp = "temperature_weather.txt" annotation(Dialog(tab="Weather Filenames", group="Weather Filenames"));
  parameter String filenameSolar = "solar_weather.txt" annotation(Dialog(tab="Weather Filenames", group="Weather Filenames"));
  parameter String filenameWind = "wind_weather.txt" annotation(Dialog(tab="Weather Filenames", group="Weather Filenames"));


  // Solar radiation from the four directions
  parameter String filenameRadNorth = "rad_north_weather.txt" annotation(Dialog(tab="Radiation Filenames", group="Radiation Filenames"));
  parameter String filenameRadEast = "rad_east_weather.txt" annotation(Dialog(tab="Radiation Filenames", group="Radiation Filenames"));
  parameter String filenameRadSouth = "rad_south_weather.txt" annotation(Dialog(tab="Radiation Filenames", group="Radiation Filenames"));
  parameter String filenameRadWest = "rad_west_weather.txt" annotation(Dialog(tab="Radiation Filenames", group="Radiation Filenames"));





  // House
  HouseVentilation houseVentilation(gasType=sim.gasType1, liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{-22,-20},{22,20}})));

  // Data Sources
  Modelica.Blocks.Sources.CombiTimeTable OccupancyBathroom(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenameOccBathroom, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=0, origin={-90,60})));
  Modelica.Blocks.Sources.CombiTimeTable OccupancyBedroom(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenameOccBedroom, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=0, origin={-90,30})));
  Modelica.Blocks.Sources.CombiTimeTable OccupancyKitchen(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenameOccKitchen, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=0, origin={-90,0})));
  Modelica.Blocks.Sources.CombiTimeTable OccupancyLivingRoom(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenameOccLivingRoom, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=0, origin={-90,-30})));
  Modelica.Blocks.Sources.CombiTimeTable OccupancyGarage(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenameOccGarage, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=0, origin={-90,-60})));
  Modelica.Blocks.Sources.CombiTimeTable OccupancySauna(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenameOccSauna, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=0, origin={-90,90})));
  Modelica.Blocks.Sources.CombiTimeTable PelBathroom(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenamePowerBathroom, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-60,50},{-40,70}})));
  Modelica.Blocks.Sources.CombiTimeTable PelBedroom(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenamePowerBedroom, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-60,20},{-40,40}})));
  Modelica.Blocks.Sources.CombiTimeTable PelKitchen(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenamePowerKitchen, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-60,-10},{-40,10}})));
  Modelica.Blocks.Sources.CombiTimeTable PelLivingroom(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenamePowerLivingRoom, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-60,-40},{-40,-20}})));
  Modelica.Blocks.Sources.CombiTimeTable PelGarage(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenamePowerGarage, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-60,-70},{-40,-50}})));
  Modelica.Blocks.Sources.CombiTimeTable TOutdoor(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenameTemp, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-8,74},{12,94}})));
  Modelica.Blocks.Sources.CombiTimeTable SaunaSwitch(tableOnFile=true, tableName="data", fileName=scenarioDirectory + filenameSwitchSauna, columns={2}, smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments, extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-60,80},{-40,100}})));
  Modelica.Blocks.Sources.CombiTimeTable ShowerOnOff(
    tableOnFile=true,
    tableName="data",
    fileName=scenarioDirectory + filenameShower,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-24,52})));





  Modelica.Blocks.Sources.CombiTimeTable radNorth(
    tableOnFile=true,
    tableName="data",
    fileName=scenarioDirectory + filenameRadNorth,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-90,-90})));
  Modelica.Blocks.Sources.CombiTimeTable radEast(
    tableOnFile=true,
    tableName="data",
    fileName=scenarioDirectory + filenameRadEast,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-60,-90})));
  Modelica.Blocks.Sources.CombiTimeTable radSouth(
    tableOnFile=true,
    tableName="data",
    fileName=scenarioDirectory + filenameRadSouth,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-30,-90})));
  Modelica.Blocks.Sources.CombiTimeTable radWest(
    tableOnFile=true,
    tableName="data",
    fileName=scenarioDirectory + filenameRadWest,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={0,-90})));
  Modelica.Blocks.Sources.CombiTimeTable solarData(
    tableOnFile=true,
    tableName="data",
    fileName=scenarioDirectory + filenameSolar,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=90,
        origin={50,-90})));
  Modelica.Blocks.Sources.CombiTimeTable WindSpeed(
    tableOnFile=true,
    tableName="data",
    fileName=scenarioDirectory + filenameWind,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.LinearSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=90,
      origin={90,-90})));



  // Other
  Modelica.Blocks.Sources.RealExpression TGround(y=278.15)
    annotation (Placement(transformation(extent={{-34,62},{-14,82}})));
  inner TIL.SystemInformationManager sim(redeclare
      TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
      TILMedia.Liquid.Types.TILMedia_Water liquidType1)
    annotation (Placement(transformation(extent={{100,100},{120,120}})));
  ventilation.VentilationUnit ventilationUnit(
    useAirNetwork=true,
    dp_nominal_door(displayUnit="Pa") = 10,
    mdot_nominal_door=0,
    dp_nominal_inf(displayUnit="Pa") = 100,
    mdot_nominal_inf=0)
    annotation (Placement(transformation(extent={{54,-20},{74,0}})));
  HeatingSource.HeatingController heatingController(
    liquidType=sim.liquidType1)
    annotation (Placement(transformation(extent={{34,14},{54,34}})));
  Modelica.Blocks.Sources.BooleanExpression booleanExpression(y=true)
    annotation (Placement(transformation(extent={{-4,22},{16,42}})));
  Modelica.Blocks.Logical.GreaterEqualThreshold saunaSwitchBool(threshold=1)
    annotation (Placement(transformation(extent={{-32,84},{-20,96}})));
  HeatingSource.HeatPump_ThermalStorage heatPump_ThermalStorage(useHP=useHP,
      useBoiler=useBoiler)
    annotation (Placement(transformation(extent={{34,48},{54,68}})));
  PowerSupply.ElectricSystem electricSystem(
    enablePV=enablePV,
    enableWind=enableWind,
    enableBattery=enableBattery)
    annotation (Placement(transformation(extent={{22,-70},{42,-50}})));

  Modelica.Blocks.Interaction.Show.RealValue currentHeatload
    annotation (Placement(transformation(extent={{-7,-6},{7,6}},
        rotation=90,
        origin={22,113})));
  Modelica.Blocks.Math.Add3 powerSum annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=270,
        origin={37,-35})));
  Modelica.Blocks.Interaction.Show.RealValue aggGeneratedHeat
    "aggregates the heat generated by the thermal system"
    annotation (Placement(transformation(extent={{-7,-6},{7,6}},
        rotation=90,
        origin={42,113})));
  Modelica.Blocks.Continuous.Integrator integratorHeatLoad annotation (
      Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=90,
        origin={41,91})));


  TIL.LiquidComponents.Boundaries.Boundary cold_water_in(
    boundaryType="p",
    pFixed=200000,
    m_flowFixed=2,
    use_temperatureInput=false,
    TFixed=283.15)
    annotation (Placement(transformation(extent={{82,44},{90,66}})));

equation
  // Occupancy: sauna, bathroom, bedroom, kitchen, living room, garage.
  connect(OccupancySauna.y[1], houseVentilation.houseInputs.occupancy[1]);
  connect(OccupancyBathroom.y[1], houseVentilation.houseInputs.occupancy[2]);
  connect(OccupancyBedroom.y[1], houseVentilation.houseInputs.occupancy[3]);
  connect(OccupancyKitchen.y[1], houseVentilation.houseInputs.occupancy[4]);
  connect(OccupancyLivingRoom.y[1], houseVentilation.houseInputs.occupancy[5]);
  connect(OccupancyGarage.y[1], houseVentilation.houseInputs.occupancy[6]);

  // Electrical loads: bathroom, bedroom, kitchen, living room, garage.
  connect(PelBathroom.y[1], houseVentilation.houseInputs.P_el[1]);
  connect(PelBedroom.y[1], houseVentilation.houseInputs.P_el[2]);
  connect(PelKitchen.y[1], houseVentilation.houseInputs.P_el[3]);
  connect(PelLivingroom.y[1], houseVentilation.houseInputs.P_el[4]);
  connect(PelGarage.y[1], houseVentilation.houseInputs.P_el[5]);

  // Sauna control and environmental temperatures.
  connect(TOutdoor.y[1], houseVentilation.houseInputs.TOutdoor);
  connect(TGround.y, houseVentilation.houseInputs.TGround);
  connect(saunaSwitchBool.u, SaunaSwitch.y[1])
    annotation (Line(points={{-33.2,90},{-39,90}}, color={0,0,127}));
  connect(saunaSwitchBool.y, houseVentilation.houseInputs.saunaOn);

  // All four heating circuits share the same two liquid boundaries.

  // Ventilation unit
  connect(houseVentilation.ventilationPorts, ventilationUnit.ventilationPorts)
    annotation (Line(points={{0,-10},{54,-10}}, color={255,153,0}));
  connect(TOutdoor.y[1], ventilationUnit.TOutdoor)
    annotation (Line(points={{13,84},{46,84},{46,78},{78,78},{78,-22},{68,-22}},
                                                        color={0,0,127}));
  connect(OccupancyBathroom.y[1], ventilationUnit.occupancy[1]) annotation (Line(
        points={{-79,60},{-66,60},{-66,-46},{60,-46},{60,-22.75}}, color={0,0,
          127}));
  connect(OccupancyBedroom.y[1], ventilationUnit.occupancy[2]) annotation (Line(
        points={{-79,30},{-66,30},{-66,-46},{60,-46},{60,-22.25}}, color={0,0,
          127}));
  connect(OccupancyKitchen.y[1], ventilationUnit.occupancy[3]) annotation (Line(
        points={{-79,0},{-66,0},{-66,-46},{60,-46},{60,-21.75}},     color={0,
          0,127}));
  connect(OccupancyLivingRoom.y[1], ventilationUnit.occupancy[4]) annotation (
      Line(points={{-79,-30},{-66,-30},{-66,-46},{60,-46},{60,-21.25}}, color
      ={0,0,127}));

  // Connect
  connect(houseVentilation.houseHeatingInput, heatingController.houseHeatingOutput);

  connect(booleanExpression.y, heatPump_ThermalStorage.SpaceHeatingDemand)
    annotation (Line(points={{17,32},{30,32},{30,40},{41,40},{41,49}}, color={
          255,0,255}));
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
  connect(TOutdoor.y[1], heatPump_ThermalStorage.T_ambient) annotation (Line(
        points={{13,84},{46,84},{46,78},{78,78},{78,46},{47,46},{47,49}}, color
        ={0,0,127}));
  connect(ShowerOnOff.y[1], houseVentilation.houseInputs.showerOn);

  connect(heatPump_ThermalStorage.WaterOutput1, houseVentilation.BWWIn)
    annotation (Line(
      points={{54,61},{58,61},{58,42},{28,42},{28,24},{22.2,24},{22.2,12.4}},
      color={0,170,238},
      thickness=0.5));
  connect(radNorth.y[1], houseVentilation.radInput[1]) annotation (Line(points={
          {-79,-90},{-74,-90},{-74,-74},{0,-74},{0,-21.75}}, color={0,0,127}));
  connect(radSouth.y[1], houseVentilation.radInput[3]) annotation (Line(points={
          {-19,-90},{-12,-90},{-12,-74},{0,-74},{0,-20.75}}, color={0,0,127}));
  connect(radWest.y[1], houseVentilation.radInput[4]) annotation (Line(points={{
          11,-90},{14,-90},{14,-74},{0,-74},{0,-20.25}}, color={0,0,127}));
  connect(radEast.y[1], houseVentilation.radInput[2]) annotation (Line(points={{
          -49,-90},{-44,-90},{-44,-74},{0,-74},{0,-21.25}}, color={0,0,127}));
  connect(solarData.y[1], electricSystem.solarRadInput) annotation (Line(points={{50,-79},
          {50,-76},{27,-76},{27,-70}},          color={0,0,127}));
  connect(WindSpeed.y[1], electricSystem.windSpeedInput) annotation (Line(
        points={{90,-79},{90,-70},{37,-70}},          color={0,0,127}));
  connect(currentHeatload.numberPort, heatPump_ThermalStorage.HeatFlow)
    annotation (Line(points={{22,104.95},{22,76},{47,76},{47,69}},       color={
          0,0,127}));
  connect(heatPump_ThermalStorage.P_el, powerSum.u1) annotation (Line(points={{41,69},
          {41,74},{72,74},{72,4},{41,4},{41,-29}},     color={0,0,127}));
  connect(powerSum.y, electricSystem.powerLoad)
    annotation (Line(points={{37,-40.5},{37,-48}}, color={0,0,127}));
  connect(integratorHeatLoad.u, heatPump_ThermalStorage.HeatFlow) annotation (
      Line(points={{41,85},{41,76},{47,76},{47,69}}, color={0,0,127}));
  connect(integratorHeatLoad.y, aggGeneratedHeat.numberPort)
    annotation (Line(points={{41,96.5},{42,98},{42,104.95}}, color={0,0,127}));
  connect(cold_water_in.port, heatPump_ThermalStorage.WaterInput1) annotation (
      Line(
      points={{86,55},{54,55}},
      color={0,170,238},
      thickness=0.5));
  connect(houseVentilation.aggPel_Demand, powerSum.u3) annotation (Line(points=
          {{18.4,21.4},{32,21.4},{32,-26},{33,-26},{33,-29}}, color={0,0,127}));
  connect(ventilationUnit.Pel_total, powerSum.u2)
    annotation (Line(points={{53.4,-16},{37,-16},{37,-29}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-120,
            -120},{120,120}})),                                  Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-120,-120},{120,
            120}})),
    experiment(
      StopTime=1209600,
      Interval=300,
      __Dymola_Algorithm="Dassl"));
end HouseEnviroment;
