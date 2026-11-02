within SmartHouse.HeatingSource;
model HeatPump_ThermalStorage
  outer TIL.SystemInformationManager sim;

parameter TILMedia.Liquid.Types.BaseLiquid liquidType =
  sim.liquidType1
  "Liquid type";
  HeatPumpCycle heatPumpCycle1(useDefrost=true,
    minTriggerOffTime=5,                        compressorSpeedDefrost=40,
    expansionValveAreaMin=0.3e-6)
    annotation (Placement(transformation(extent={{-34,-28},{28,28}})));
  Modelica.Blocks.Interfaces.RealInput T_ambient
    "Temperature of the ambient in K" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-50,-100}),  iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={90,-90})));
  Modelica.Blocks.Interfaces.BooleanInput HeatingDemand
    "Enable heat source operation" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-10,-100}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-80,-80})));
  ThermalstorageController thermalstorageController
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
    presetVariableType="V_flow",
    m_flowFixed=0.03,
    use_volumeFlowRateInput=true)
                        annotation (Placement(transformation(
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
  Modelica.Blocks.Sources.RealExpression pumpFlow(
  y=if thermalstorageController.EnableHeatPump
    then 0.25e-3
    else 0)
    "Pump flow: 0.25 l/s when heat source is active"
    annotation (Placement(transformation(
    extent={{0,-10},{20,10}},
    origin={90,30},
        rotation=180)));
equation
  connect(T_ambient, heatPumpCycle1.T_ambient) annotation (Line(points={{-50,
          -100},{-50,-32},{-15.4,-32},{-15.4,-26.4444}}, color={0,0,127}));
  connect(pump.portB,linearDirectionalControlValve. portA)
    annotation (Line(
      points={{28,38},{28,48}},
      color={0,170,238},
      thickness=0.5));
  connect(HeatingDemand, thermalstorageController.EnableHeating) annotation (
      Line(points={{-10,-100},{-10,-62},{-32,-62},{-32,-53},{-27,-53}}, color
        ={255,0,255}));
  connect(hotWaterTank.temperatureSensorsOutput[5], thermalstorageController.T_DHW)
    annotation (Line(points={{69,62.9},{52,62.9},{52,-72},{-46,-72},{-46,-46},{
          -28,-46},{-28,-48},{-27,-48}},
                   color={0,0,127}));
  connect(thermalstorageController.EnableHeatPump, heatPumpCycle1.EnableHeatSource)
    annotation (Line(points={{-8.8,-44},{-2,-44},{-2,-24.8889},{-3,-24.8889}},
                                     color={255,0,255}));
  connect(heatPumpCycle1.WaterOutput, pump.portA) annotation (Line(
      points={{28,0},{28,22}},
      color={0,170,238},
      thickness=0.5));
  connect(thermalstorageController.TSupplySet, heatPumpCycle1.TSupplySet)
    annotation (Line(points={{-8.8,-52},{9.4,-52},{9.4,-26.4444}},
        color={0,0,127}));
  connect(thermalstorageController.threeWayValve, linearDirectionalControlValve.switchingPosition_in)
    annotation (Line(points={{-8.8,-48},{46,-48},{46,74},{28,74},{28,66.9}},
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
  connect(expansionTank.portB, heatPumpCycle1.WaterInput) annotation (Line(
      points={{-60,0},{-34,0}},
      color={0,170,238},
      thickness=0.5));
  connect(hotWaterTank.outletPorts[1], WaterOutput1) annotation (Line(
      points={{90,70},{100,70}},
      color={0,170,238},
      thickness=0.5));
  connect(junction.portA, hotWaterTank.liquidFluidPortB) annotation (Line(
      points={{-86,-4},{-86,-76},{58,-76},{58,46},{70,46}},
      color={0,170,238},
      thickness=0.5));
  connect(linearDirectionalControlValve.portC, hotWaterTank.liquidFluidPortA)
    annotation (Line(
      points={{40,60},{42,60},{42,40},{70,40}},
      color={0,170,238},
      thickness=0.5));
  connect(pumpFlow.y, pump.V_flow_in) annotation (Line(points={{69,30},{38,30}},
                                color={0,0,127}));
                                                    annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={78,20})),
              Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end HeatPump_ThermalStorage;
