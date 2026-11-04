within SmartHouse.HeatingSource;
model HeatPump_ThermalStorage
  "Heat pump + DHW storage with interface for optional electric boiler"

  // ============================================================  //
  // Hydraulic order:
  //
  //         HeatPump
  //            ↓
  //      Electric Boiler
  //            ↓
  //          Pump
  //            ↓
  //      Three-way valve
  //    ↓                  ↓
  // DHW Tank    |    Floor heating
  // ============================================================

  // ============================================================
  // MEDIA
  // ============================================================
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType = sim.liquidType1
    "Liquid type" annotation (Dialog(tab="SIM", group="SIM"),
    choices(
      choice=sim.liquidType1 "Liquid 1 as defined in SIM",
      choice=sim.liquidType2 "Liquid 2 as defined in SIM",
      choice=sim.liquidType3 "Liquid 3 as defined in SIM"));

  outer TIL.SystemInformationManager sim;

  parameter Modelica.Units.SI.PressureDifference pDiff = 10000
    "Pressure Difference of the pump";
  parameter Modelica.Units.SI.MassFlowRate mdot_dhw_nominal = 0.25
    "Nominal mass flow rate of the DHW system";

  // ============================================================
  // SCENARIO SWITCHES and Power and effciencies
  // ============================================================
  parameter Boolean useHP = true "Enable heat pump in this scenario"
    annotation(Dialog(tab="Operation", group="Scenario"));
  parameter Boolean useBoiler = true "Enable electric boiler in this scenario"
    annotation(Dialog(tab="Operation", group="Scenario"));

  parameter Modelica.Units.SI.Power P_nominal_Boiler = 9000 "Nominal electrical boiler power"
    annotation(Dialog(tab="Operation", group="Electric boiler", enable=useBoiler));
  parameter Real etaBoiler(min=0, max=1) = 0.98 "Electrical boiler efficiency"
    annotation(Dialog(tab="Operation", group="Electric boiler", enable=useBoiler));

  // ============================================================
  // Temperature Setpoints
  // ============================================================

  parameter Modelica.Units.SI.Temperature T_supplyFloorHeating = 35 + 273.15
    "Supply temperature for floor heating"
    annotation(Dialog(group="Temperatures"));
  parameter Modelica.Units.SI.Temperature T_supply_DHW = 60 + 273.15
    "Supply temperature for domestic hot water charging (Boiler output target)"
    annotation(Dialog(group="Temperatures"));
  parameter Modelica.Units.SI.Temperature T_min_DHW = 50 + 273.15
    "Temperature of the tank where the boiler starts heating up the tank again"
    annotation(Dialog(group="Temperatures"));
  parameter Modelica.Units.SI.Temperature T_max_DHW = 58 + 273.15
    "Temperature of the tank where the boiler stops heating up the tank"
    annotation(Dialog(group="Temperatures"));
  parameter Modelica.Units.SI.Temperature T_maxFloorHeating = 40 + 273.15
    "Failsafe temperature at which point the boiler is shut down"
    annotation(Dialog(group="Temperatures"));
  parameter Modelica.Units.SI.TemperatureDifference deltaT = 1
    "delta when the boiler is activated again after failsafe"
    annotation(Dialog(group="Temperatures"));


  // ============================================================
  // MAIN COMPONENTS
  // ============================================================
  HeatPumpCycle heatPumpCycle1(
    liquidType = liquidType,
    fanSpeedHeating=15,
    fanSpeedOff=0.001,
    evaporatorFinnedTubeLength=8,
    evaporatorNSerialTubes=5,
    evaporatorNParallelTubes=30,
    separatorInitialFillingLevel=0.2) if useHP
    annotation (
      Placement(
        transformation(extent={{-52,-20},{-6,22}})));

  ThermalstorageController thermalstorageController(useHP=useHP,
    useBoiler=useBoiler,
    THeating=T_supplyFloorHeating,
    TDHW=T_supply_DHW,
    TDHWMin=T_min_DHW,
    TDHWMax=T_max_DHW,
    deltaT=deltaT,
    TdirectMax=T_maxFloorHeating)
    annotation (
      Placement(
        transformation(extent={{-34,-58},{-14,-38}})));

  TIL3_AddOn_HeatStorage.ThermalStorages.HotWaterTank hotWaterTank(
    geometry(
      innerVolume=0.19,
      innerDiameter=0.4,
      innerTotalHeight=1.5,
      wallThickness=0.003,
      heightTemperatureSensors={
        0.15,
        0.45,
        0.75,
        1.05,
        1.35},
      heightInletPorts={0.1},
      heightOutletPorts={1.4}),
    useTemperaturSensorsOutput=true,
    redeclare model BuoyancyModel =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.Buoyancy.TemperatureDifference(
          tauMixing=1),
    redeclare model ThermalConductionModel =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.ThermalConduction.TemperatureDependingConductivity,
    ambientHeatTransfer=
        TIL3_AddOn_HeatStorage.ThermalStorages.Internals.AmbientHeatTransfer.OverallHeatTransferNoThermalCapacity,
    ambientTemperature=288.15,
    redeclare model AmbientHeatTransferModel =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.Ambient.ConstantOveralHeatTransferCoefficients(
          UA_tankTopLid=0.4,
          UA_tankCylinder=1.5,
          UA_tankBottomLid=0.4),
    redeclare model LiquidToTankWallHeatTransferModel =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.Ambient.CylinderVerticalFreeConvection,
    useMantleHX=false,
    useInternalHX_a=true,
    nInternalHXCellsPerTankCell_a=4,
    internalHXGeometry_a(
      meanDiameterHeatExchanger=0.34),
    redeclare model TubeSideHeatTransferModelInternalHX_a =
        TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha(
          constantAlpha=4000),
    redeclare model PressureDropModelInternalHX_a =
        TIL.LiquidComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop,
    redeclare model WallHeatConductionModelInternalHX_a =
        TIL.LiquidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
    redeclare model WallMaterialInternalHX_a =
        TILMedia.Solid.Types.TILMedia_Steel,
    redeclare model TankToInternalHXHeatTransferModel_a =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.InternalHXHeatTransfer.LiquidTankSide.ConstantAlpha(
          constantAlpha=2000),
    useInternalHX_b=false,
    redeclare model TubeSideHeatTransferModelInternalHX_b =
        TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha,
    initMethod="constantTemperature",
    TInitial=303.15,
    TInitialLiquidInternalHX_a=303.15,
    TInitialWallInternalHX_a=303.15,
    TInitialTankWall=303.15,
    TInitialInsulation=303.15)
    annotation (
      Placement(
        transformation(extent={{70,38},{90,78}})));

  TIL.LiquidComponents.Pumps.SimplePump pump(
    presetVariableType="dp",
    dpFixed=pDiff)
    annotation (
      Placement(
        transformation(
          origin={28,30},
          extent={{8,-8},{-8,8}},
          rotation=0)));

  TIL.LiquidComponents.Valves.LinearDirectionalControlValve
    linearDirectionalControlValve(
      use_switchingPositionInput=true,
      m_flowStart=-0.3e-3)
    annotation (
      Placement(
        transformation(
          extent={{-12.0001,-9},{11.9999,9}},
          rotation=180,
          origin={27.9999,57})));

  TIL.LiquidComponents.JunctionElements.VolumeJunction junction
    annotation (
      Placement(
        transformation(
          extent={{-4,-4},{4,4}},
          rotation=180,
          origin={-86,0})));

  TIL.LiquidComponents.HydraulicCapacitors.ExpansionTank expansionTank(
    volume=0.008,
    TInitial=303.15,
    pInitial=300000,
    fixedInitialPressure=true)
    annotation (
      Placement(
        transformation(extent={{-76,-4},{-60,12}})));

  // Measures the heat-pump outlet before the optional electric boiler


  // ============================================================
  // EXTERNAL THERMAL/HYDRAULIC INTERFACES
  // ============================================================

  Modelica.Blocks.Interfaces.RealInput T_ambient
    "Ambient temperature in K"
    annotation (
      Placement(
        transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-100,-24}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={30,-90})));

  Modelica.Blocks.Interfaces.BooleanInput SpaceHeatingDemand
    "Automatic heating demand from house/room controller"
    annotation (
      Placement(
        transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-100,-52}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={-30,-90})));

  TIL.Connectors.LiquidPort WaterInput(
    liquidType=liquidType)
    "Space-heating return water"
    annotation (
      Placement(
        transformation(extent={{-110,-40},{-90,-20}}),
        iconTransformation(extent={{-110,-40},{-90,-20}})));

  TIL.Connectors.LiquidPort WaterOutput(
    liquidType=liquidType)
    "Space-heating supply water"
    annotation (
      Placement(
        transformation(extent={{-110,50},{-90,70}}),
        iconTransformation(extent={{-110,20},{-90,40}})));

  TIL.Connectors.LiquidPort WaterOutput1(
    liquidType=liquidType)
    "Domestic hot water outlet"
    annotation (
      Placement(
        transformation(extent={{90,60},{110,80}}),
        iconTransformation(extent={{90,20},{110,40}})));

  TIL.Connectors.LiquidPort WaterInput1(
    liquidType=liquidType)
    "Cold domestic water inlet"
    annotation (
      Placement(
        transformation(extent={{90,36},{110,56}}),
        iconTransformation(extent={{90,-40},{110,-20}})));





  TIL.LiquidComponents.Sensors.Sensor_T sensor_T_floorHeating(redeclare
      TIL.Utilities.Units.Conversions.Units.K unit) annotation (Placement(
        transformation(
        extent={{-4,-4},{4,4}},
        rotation=180,
        origin={-58,36})));
  ElectricalBoiler electricalBoiler(
    liquidType = liquidType, P_nominal=P_nominal_Boiler, eta=etaBoiler) if useBoiler
    annotation (Placement(transformation(extent={{-2,-12},{26,14}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T_afterHeatpump(redeclare
      TIL.Utilities.Units.Conversions.Units.K unit) if useHP annotation (Placement(
        transformation(
        extent={{-4,-4},{4,4}},
        rotation=0,
        origin={-6,24})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T_afterBoiler(redeclare
      TIL.Utilities.Units.Conversions.Units.K unit) if useBoiler annotation (Placement(
        transformation(
        extent={{-4,-4},{4,4}},
        rotation=0,
        origin={42,18})));
  TIL.LiquidComponents.HydraulicResistors.LinearHydraulicResistor
    linearHydraulicResistor_dhw(dp_nominal=pDiff, mdot_nominal=mdot_dhw_nominal)
                                     annotation (Placement(transformation(
        extent={{-8,-2.99998},{8,2.99998}},
        rotation=0,
        origin={1,-74})));
  Modelica.Blocks.Interfaces.RealOutput P_el
    "Electrical power consumption"
    annotation (Placement(
      transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-50,110}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-30,110})));
  Modelica.Blocks.Interfaces.RealOutput HeatFlow
    "Heat supplied to the heating system"
    annotation (Placement(
      transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-10,110}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={30,110})));
  Modelica.Blocks.Math.Add addPower annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-50,84})));
  Modelica.Blocks.Math.Add addHeatFlow annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-10,84})));
  Modelica.Blocks.Sources.Constant zeroInactiveSource(k=0) "Zero heat and electricity for removed heat sources";

equation


  connect(
    hotWaterTank.temperatureSensorsOutput[5],
    thermalstorageController.T_DHW)
    annotation (
      Line(
        points={{69,62.9},{64,62.9},{64,-66},{-76,-66},{-76,-48},{-33,-48}},
        color={0,0,127}));


  connect(
    thermalstorageController.threeWayValve,
    linearDirectionalControlValve.switchingPosition_in)
    annotation (
      Line(
        points={{-14.8,-46},{60,-46},{60,68},{28,68},{28,66.9}},
        color={0,0,127}));

  connect(
    pump.portB,
    linearDirectionalControlValve.portA)
    annotation (
      Line(
        points={{28,38},{28,48}},
        color={0,170,238},
        thickness=0.5));

  connect(
    WaterOutput,
    linearDirectionalControlValve.portB)
    annotation (
      Line(
        points={{-100,60},{16,60}},
        color={0,170,238},
        thickness=0.5));

  connect(
    linearDirectionalControlValve.portC,
    hotWaterTank.liquidFluidPortA)
    annotation (
      Line(
        points={{40,60},{42,60},{42,40},{70,40}},
        color={0,170,238},
        thickness=0.5));

  connect(
    junction.portC,
    WaterInput)
    annotation (
      Line(
        points={{-90,0},{-96,0},{-96,-30},{-100,-30}},
        color={0,170,238},
        thickness=0.5));

  connect(
    junction.portB,
    expansionTank.portA)
    annotation (
      Line(
        points={{-82,0},{-76,0}},
        color={0,170,238},
        thickness=0.5));



  connect(
    hotWaterTank.inletPorts[1],
    WaterInput1)
    annotation (
      Line(
        points={{90,46},{100,46}},
        color={0,170,238},
        thickness=0.5));

  connect(
    hotWaterTank.outletPorts[1],
    WaterOutput1)
    annotation (
      Line(
        points={{90,70},{100,70}},
        color={0,170,238},
        thickness=0.5));


  connect(sensor_T_floorHeating.port, linearDirectionalControlValve.portB)
    annotation (Line(
      points={{-58,40},{-58,60},{16,60}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T_floorHeating.sensorValue, thermalstorageController.T_direct)
    annotation (Line(points={{-58,34},{-58,-39},{-33,-39}}, color={0,0,127}));
  connect(SpaceHeatingDemand, thermalstorageController.EnableHeating)
    annotation (Line(points={{-100,-52},{-38,-53},{-33,-53}}, color={255,0,255}));
  connect(junction.portA, linearHydraulicResistor_dhw.portA) annotation (Line(
      points={{-86,-4},{-86,-74},{-7,-74}},
      color={0,170,238},
      thickness=0.5));
  connect(linearHydraulicResistor_dhw.portB, hotWaterTank.liquidFluidPortB)
    annotation (Line(
      points={{9,-74},{68,-74},{68,46},{70,46}},
      color={0,170,238},
      thickness=0.5));
  connect(addPower.y, P_el)
    annotation (Line(points={{-50,95},{-50,110}}, color={0,0,127}));
  connect(addHeatFlow.y, HeatFlow)
    annotation (Line(points={{-10,95},{-10,110}}, color={0,0,127}));

  // =====================================================================
  // Conditional heat sources: absent if their use parameter is false.
  // =====================================================================
  if useHP then
    connect(T_ambient, heatPumpCycle1.T_ambient);
    connect(thermalstorageController.TSupplySet, heatPumpCycle1.TSupplySet);
    connect(thermalstorageController.EnableHeatPump, heatPumpCycle1.EnableHeatSource);
    connect(expansionTank.portB, heatPumpCycle1.WaterInput);
    connect(sensor_T_afterHeatpump.port, heatPumpCycle1.WaterOutput);
    connect(heatPumpCycle1.P_el, addPower.u1);
    connect(heatPumpCycle1.HeatFlow, addHeatFlow.u1);
  else
    connect(zeroInactiveSource.y, addPower.u1);
    connect(zeroInactiveSource.y, addHeatFlow.u1);
  end if;

  if useBoiler then
    connect(thermalstorageController.TSupplySet, electricalBoiler.TSupplySet);
    connect(thermalstorageController.EnableBoiler, electricalBoiler.EnableHeatSource);
    connect(sensor_T_afterBoiler.port, pump.portA);
    connect(electricalBoiler.P_el, addPower.u2);
    connect(electricalBoiler.HeatFlow, addHeatFlow.u2);
  else
    connect(zeroInactiveSource.y, addPower.u2);
    connect(zeroInactiveSource.y, addHeatFlow.u2);
  end if;

  // Four exclusive hydraulic paths: no open ports, no duplicate routes.
  if useHP and useBoiler then
    connect(heatPumpCycle1.WaterOutput, electricalBoiler.WaterInput);
    connect(electricalBoiler.WaterOutput, pump.portA);
  elseif useHP then
    connect(heatPumpCycle1.WaterOutput, pump.portA);
  elseif useBoiler then
    connect(expansionTank.portB, electricalBoiler.WaterInput);
    connect(electricalBoiler.WaterOutput, pump.portA);
  else
    connect(expansionTank.portB, pump.portA);
  end if;

annotation (
  Icon(
    coordinateSystem(
      preserveAspectRatio=false)),
  Diagram(
    coordinateSystem(
      preserveAspectRatio=false)));

end HeatPump_ThermalStorage;
