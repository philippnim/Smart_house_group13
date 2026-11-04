within SmartHouse.HeatingSource;
model ElectricalBoiler_ThermalStorage
  ""

  parameter Modelica.Units.SI.VolumeFlowRate V_flow_nominal = 0.25e-3
  "Nominal pump volume flow";

  parameter Modelica.Units.SI.VolumeFlowRate V_flow_min = 0.05e-3
  "Minimum circulation flow";

  parameter Modelica.Units.SI.MassFlowRate mdot_dhw_nominal = 0.25
  "Nominal mass flow rate of the DHW system";

  parameter Modelica.Units.SI.PressureDifference pDiff = 10000
    "Pressure Difference of the pump";

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

  outer TIL.SystemInformationManager sim;

parameter TILMedia.Liquid.Types.BaseLiquid liquidType =
  sim.liquidType1
    "Liquid type";


  Modelica.Blocks.Interfaces.BooleanInput HeatingDemand
    "Enable heat source operation" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-10,-100}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
    origin={-80,-80})));

  ThermalstorageController thermalstorageController(
    useHP=false,
    useBoiler=true,
    THeating=T_supplyFloorHeating,
    TDHW=T_supply_DHW,
    TDHWMin=T_min_DHW,
    TDHWMax=T_max_DHW,
    deltaT=deltaT,
    TdirectMax=T_maxFloorHeating)
    annotation (Placement(transformation(extent={{-28,-58},{-8,-38}})));

  TIL3_AddOn_HeatStorage.ThermalStorages.HotWaterTank
                               hotWaterTank(
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
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.Buoyancy.TemperatureDifference
        (tauMixing=1),
    redeclare model ThermalConductionModel =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.ThermalConduction.TemperatureDependingConductivity,
    ambientHeatTransfer=TIL3_AddOn_HeatStorage.ThermalStorages.Internals.AmbientHeatTransfer.OverallHeatTransferNoThermalCapacity,
    ambientTemperature=288.15,
    redeclare model AmbientHeatTransferModel =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.Ambient.ConstantOveralHeatTransferCoefficients
        (
        UA_tankTopLid=0.4,
        UA_tankCylinder=1.5,
        UA_tankBottomLid=0.4),
    redeclare model LiquidToTankWallHeatTransferModel =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.Ambient.CylinderVerticalFreeConvection,
    useMantleHX=false,
    useInternalHX_a=true,
    nInternalHXCellsPerTankCell_a=4,
    internalHXGeometry_a(meanDiameterHeatExchanger=0.34),
    redeclare model TubeSideHeatTransferModelInternalHX_a =
        TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
        (constantAlpha=4000),
    redeclare model PressureDropModelInternalHX_a =
        TIL.LiquidComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop,
    redeclare model WallHeatConductionModelInternalHX_a =
        TIL.LiquidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
    redeclare model WallMaterialInternalHX_a =
        TILMedia.Solid.Types.TILMedia_Steel,
    redeclare model TankToInternalHXHeatTransferModel_a =
        TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.InternalHXHeatTransfer.LiquidTankSide.ConstantAlpha
        (constantAlpha=2000),
    useInternalHX_b=false,
    redeclare model TubeSideHeatTransferModelInternalHX_b =
        TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha,
    initMethod="constantTemperature",
    TInitial=303.15,
    TInitialLiquidInternalHX_a=303.15,
    TInitialWallInternalHX_a=303.15,
    TInitialTankWall=303.15,
    TInitialInsulation=303.15)
annotation (Placement(transformation(extent={{70,38},{90,78}})));
  TIL.LiquidComponents.Pumps.SimplePump pump(
    presetVariableType="dp",
    dpFixed=pDiff)      annotation (Placement(transformation(
        origin={28,30},
        extent={{8,-8},{-8,8}},
        rotation=0)));
  TIL.LiquidComponents.Valves.LinearDirectionalControlValve linearDirectionalControlValve(
      use_switchingPositionInput=true, m_flowStart=-0.3e-3)
    annotation (Placement(transformation(
        extent={{-12.0001,-9},{11.9999,9}},
        rotation=180,
        origin={27.9999,57})));
  TIL.Connectors.LiquidPort WaterInput(liquidType=liquidType)
    "Return water"
    annotation (Placement(
      transformation(extent={{-110,-10},{-90,10}}),  iconTransformation(
          extent={{-110,-10},{-90,10}})));
  TIL.Connectors.LiquidPort WaterOutput(liquidType=liquidType)
    "Supply water"
    annotation (Placement(
      transformation(extent={{-110,50},{-90,70}}), iconTransformation(extent={{92,-10},
            {112,10}})));
  TIL.Connectors.LiquidPort WaterOutput1(liquidType=liquidType)
    "Domestic hot water outlet"
    annotation (Placement(
      transformation(extent={{90,60},{110,80}}),   iconTransformation(extent={{-10,90},
            {10,110}})));
  TIL.Connectors.LiquidPort WaterInput1(liquidType=liquidType)
    "Cold domestic water inlet"
    annotation (Placement(
      transformation(extent={{90,36},{110,56}}),     iconTransformation(
          extent={{-10,-110},{10,-90}})));
  TIL.LiquidComponents.JunctionElements.VolumeJunction junction annotation (
      Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=180,
        origin={-86,0})));
  TIL.LiquidComponents.HydraulicCapacitors.ExpansionTank expansionTank(
    volume=0.008,
    TInitial=303.15,
    pInitial=300000,
    fixedInitialPressure=true) annotation (Placement(transformation(extent={{-76,-4},
            {-60,12}})));
  ElectricalBoiler electricalBoiler
    annotation (Placement(transformation(extent={{-22,-18},{18,18}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T_direct_floorheating
    annotation (Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=180,
        origin={-50,36})));
  TIL.LiquidComponents.HydraulicResistors.LinearHydraulicResistor
    linearHydraulicResistor_dhw(dp_nominal=pDiff,
      mdot_nominal=mdot_dhw_nominal) annotation (Placement(transformation(
        extent={{-8,-2.99998},{8,2.99998}},
        rotation=90,
        origin={57,-14})));


equation
  connect(pump.portB,linearDirectionalControlValve. portA)
    annotation (Line(
      points={{28,38},{28,48}},
      color={0,170,238},
      thickness=0.5));
  connect(HeatingDemand, thermalstorageController.EnableHeating) annotation (
      Line(points={{-10,-100},{-10,-62},{-32,-62},{-32,-53},{-27,-53}}, color
        ={255,0,255}));
  connect(hotWaterTank.temperatureSensorsOutput[5], thermalstorageController.T_DHW)
    annotation (Line(points={{69,62.9},{52,62.9},{52,-72},{-46,-72},{-46,-46},{-28,
          -46},{-28,-48},{-27,-48}},
                   color={0,0,127}));
  connect(thermalstorageController.threeWayValve, linearDirectionalControlValve.switchingPosition_in)
    annotation (Line(points={{-8.8,-46},{46,-46},{46,74},{28,74},{28,66.9}},
                                                                       color={0,
          0,127}));
  connect(hotWaterTank.inletPorts[1], WaterInput1) annotation (Line(
      points={{90,46},{100,46}},
      color={0,170,238},
      thickness=0.5));
  connect(junction.portC, WaterInput) annotation (Line(
      points={{-90,0},{-100,0}},
      color={0,170,238},
      thickness=0.5));
  connect(WaterOutput, linearDirectionalControlValve.portB) annotation (Line(
      points={{-100,60},{16,60}},
      color={0,170,238},
      thickness=0.5));
  connect(junction.portB, expansionTank.portA) annotation (Line(
      points={{-82,0},{-76,0}},
      color={0,170,238},
      thickness=0.5));
  connect(hotWaterTank.outletPorts[1], WaterOutput1) annotation (Line(
      points={{90,70},{100,70}},
      color={0,170,238},
      thickness=0.5));
  connect(linearDirectionalControlValve.portC, hotWaterTank.liquidFluidPortA)
    annotation (Line(
      points={{40,60},{42,60},{42,40},{70,40}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler.WaterOutput, pump.portA) annotation (Line(
      points={{18,0},{28,0},{28,22}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler.WaterInput, expansionTank.portB) annotation (Line(
      points={{-22,0},{-60,0}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler.EnableHeatSource,thermalstorageController.EnableBoiler)
    annotation (Line(points={{-2,-16},{-2,-54},{-8.8,-54}}, color={255,0,255}));

  connect(sensor_T_direct_floorheating.port, linearDirectionalControlValve.portB)
    annotation (Line(
      points={{-50,40},{-50,60},{16,60}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T_direct_floorheating.sensorValue, thermalstorageController.T_direct)
    annotation (Line(points={{-50,34},{-50,-39},{-27,-39}}, color={0,0,127}));
  connect(junction.portA, linearHydraulicResistor_dhw.portA) annotation (Line(
      points={{-86,-4},{-86,-76},{58,-76},{57,-22}},
      color={0,170,238},
      thickness=0.5));
  connect(linearHydraulicResistor_dhw.portB, hotWaterTank.liquidFluidPortB)
    annotation (Line(
      points={{57,-6},{58,46},{70,46}},
      color={0,170,238},
      thickness=0.5));
  connect(thermalstorageController.TSupplySet, electricalBoiler.TSupplySet)
    annotation (Line(points={{-8.8,-42},{6,-42},{6,-17}}, color={0,0,127}));
                                                    annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={78,20})),
              Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ElectricalBoiler_ThermalStorage;
