within SmartHouse.HeatingSource;
model LatentHeatStorage
  "Switchable RT31 storage with INTERNAL PCMForecastController block"

  //============================================================
  // 1) Medium, forecast path, geometry
  //============================================================
  outer TIL.SystemInformationManager sim;
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType = sim.liquidType1;
  parameter String forecastFileName = ""
    "Full file path to the scenario's pcm_charge_window.txt";

  parameter Modelica.Units.SI.Length blockHeight = 0.35;
  parameter Modelica.Units.SI.Length blockWidth = 0.40;
  parameter Modelica.Units.SI.Length tubeSectionLength = 0.50;
  parameter Integer nSerialTubes(min=1) = 10;
  parameter Integer nParallelTubes(min=1) = 8;
  parameter Modelica.Units.SI.Diameter tubeInnerDiameter = 0.016;
  parameter Modelica.Units.SI.Length tubeWallThickness = 0.002;
  parameter Modelica.Units.SI.Density pcmDensityAssumed = 800;

  final parameter Integer nTotalTubes = nSerialTubes*nParallelTubes;
  final parameter Modelica.Units.SI.Length tubeLength =
    nTotalTubes*tubeSectionLength;
  final parameter Modelica.Units.SI.Diameter tubeOuterDiameter =
    tubeInnerDiameter + 2*tubeWallThickness;
  final parameter Modelica.Units.SI.Volume waterVolume =
    Modelica.Constants.pi/4*tubeInnerDiameter^2*tubeLength;
  final parameter Modelica.Units.SI.Area heatTransferArea =
    Modelica.Constants.pi*tubeInnerDiameter*tubeLength;
  final parameter Modelica.Units.SI.Volume pcmVolume =
    (blockHeight*blockWidth - nTotalTubes*Modelica.Constants.pi/4*
      tubeOuterDiameter^2)*tubeSectionLength;
  final parameter Modelica.Units.SI.Mass pcmMassEstimated =
    pcmVolume*pcmDensityAssumed;

  // Preliminary pressure loss: PCMStorage itself uses ZeroPressureDrop.
  parameter Modelica.Units.SI.PressureDifference dpPCMNominal = 3000;
  parameter Modelica.Units.SI.MassFlowRate mPCMNominal = 0.10;

  //============================================================
  // 2) External hydraulic ports, unchanged house interface
  //============================================================
  TIL.Connectors.LiquidPort WaterSupplyIn(liquidType=liquidType)
    "From HP floor-heating supply"
    annotation(Placement(transformation(extent={{-210,90},{-190,110}}),
      iconTransformation(extent={{-110,50},{-90,70}})));
  TIL.Connectors.LiquidPort WaterSupplyOut(liquidType=liquidType)
    "To floor-heating supply"
    annotation(Placement(transformation(extent={{190,90},{210,110}}),
      iconTransformation(extent={{90,50},{110,70}})));
  TIL.Connectors.LiquidPort WaterReturnIn(liquidType=liquidType)
    "From floor-heating return"
    annotation(Placement(transformation(extent={{-210,-110},{-190,-90}}),
      iconTransformation(extent={{-110,-70},{-90,-50}})));
  TIL.Connectors.LiquidPort WaterReturnOut(liquidType=liquidType)
    "To HP return"
    annotation(Placement(transformation(extent={{190,-110},{210,-90}}),
      iconTransformation(extent={{90,-70},{110,-50}})));

  // The ONLY required control input from HouseEnviroment/heat source.
  Modelica.Blocks.Interfaces.BooleanInput heatingDemand
    "Actual space-heating demand"
    annotation(Placement(transformation(extent={{-210,-175},{-190,-155}}),
      iconTransformation(extent={{-110,-110},{-90,-90}})));

  // Optional external output for a future HP charge-enable extension.
  Modelica.Blocks.Interfaces.BooleanOutput chargeRequest
    "PCM charge request (not yet a compressor command)"
    annotation(Placement(transformation(extent={{190,-175},{210,-155}}),
      iconTransformation(extent={{90,-110},{110,-90}})));

  //============================================================
  // 3) INTERNAL CONTROLLER BLOCK: visible in Diagram
  //============================================================
  PCMForecastController pCMForecastController(
    forecastFileName=forecastFileName)
    "Separate reusable control BLOCK, instantiated INSIDE this model"
    annotation(Placement(transformation(extent={{-145,-8},{-85,42}})));

  //============================================================
  // 4) Physical PCM storage (same material and geometry as test)
  //============================================================
  TIL3_AddOn_PCMStorages.TubeInBlock.SLEMediumLiquid.PCMStorage
    pcmStorage_heated(
      liquidType=liquidType,
      redeclare model SLEMediumType = SmartHouse.HeatingSource.TILMedia_RT31,
      nCells=6,
      nCellsSLE=3,
    TInitialLiquid=298.15,
    TInitialWall=298.15,
    TInitialSLE=298.15,
      redeclare model HeatTransferModel =
        TIL3_AddOn_PCMStorages.TubeInBlock.TransportPhenomena.HeatTransfer.ConstantAlpha(
          constantAlpha=500),
      redeclare model WallHeatConductionModel =
        TIL3_AddOn_PCMStorages.TubeInBlock.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
      redeclare model PressureDropModel =
        TIL3_AddOn_PCMStorages.TubeInBlock.TransportPhenomena.PressureDrop.ZeroPressureDrop,
      hxGeometry(
        height=blockHeight,
        width=blockWidth,
        length=tubeSectionLength,
        nSerialTubes=nSerialTubes,
        nParallelTubes=nParallelTubes,
        nTubeSideParallelHydraulicFlows=nParallelTubes,
        crossSectionType=TIL.Internals.CrossSectionType.Circular,
        wallThickness=tubeWallThickness,
        innerDiameter=tubeInnerDiameter))
    annotation(Placement(transformation(extent={{100,-20},{145,20}})));

  //============================================================
  // 5) Two TIL three-way valves (DHW valve is elsewhere)
  //============================================================
  // IMPORTANT: verify in your TIL version whether 0 selects B and 1 selects C.
  TIL.LiquidComponents.Valves.LinearDirectionalControlValve supplySwitch(
    use_switchingPositionInput=true,
    m_flowStart=-0.3e-3)
    "A = HP supply, B = floor supply, C = charge branch"
    annotation(Placement(transformation(
      extent={{-12,-9},{12,9}}, rotation=180, origin={-108,100})));

  TIL.LiquidComponents.Valves.LinearDirectionalControlValve returnSwitch(
    use_switchingPositionInput=true,
    m_flowStart=-0.3e-3)
    "A = floor return, B = bypass, C = PCM discharge branch"
    annotation(Placement(transformation(
      extent={{-12,-9},{12,9}}, rotation=180, origin={-108,-100})));

  // THREE-WAY JUNCTIONS are essential: the two PCM inlet routes
  // join BEFORE PCM; both return paths join AFTER PCM.
  TIL.LiquidComponents.JunctionElements.VolumeJunction pcmInletJunction
    "Merges hot charging water OR cold floor return before PCM"
    annotation(Placement(transformation(
      extent={{-6,-6},{6,6}}, rotation=180, origin={5,0})));

  TIL.LiquidComponents.JunctionElements.VolumeJunction returnMergeJunction
    "Merges PCM outlet and floor return bypass"
    annotation(Placement(transformation(
      extent={{-6,-6},{6,6}}, rotation=180, origin={165,-100})));

  TIL.LiquidComponents.HydraulicResistors.LinearHydraulicResistor
    pcmHydraulicResistor(
      dp_nominal=dpPCMNominal,
      mdot_nominal=mPCMNominal)
    annotation(Placement(transformation(extent={{35,-5},{55,5}})));

  TIL.LiquidComponents.Sensors.Sensor_m_flow sensorPCMFlow
    "PCM water mass flow (observe its sign)"
    annotation(Placement(transformation(extent={{70,-7},{86,7}})));

  TIL.LiquidComponents.Sensors.Sensor_T sensorSupply(
    redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation(Placement(transformation(extent={{-180,127},{-170,137}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensorReturn(
    redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation(Placement(transformation(extent={{-180,-142},{-170,-132}})));

  //============================================================
  // 6) State variables for plotting
  //============================================================
  Real SOC(unit="1") "Liquid PCM mass fraction, 0 to 1";
  Modelica.Units.SI.Power PCMHeatFlow
    "Positive = charging PCM, negative = discharging PCM";
  Modelica.Units.SI.Energy energy(start=0, fixed=true)
    "Cumulative net heat transfer to PCM";

equation
  // ---------- Hydraulic SUPPLY ----------
  connect(WaterSupplyIn, supplySwitch.portA)
    annotation(Line(points={{-200,100},{-138,100},{-138,91},{-108,91}},
      color={0,170,238}, thickness=0.5));
  connect(supplySwitch.portB, WaterSupplyOut)
    annotation(Line(points={{-120,103},{-120,120},{175,120},{175,100},{200,100}},
      color={0,170,238}, thickness=0.5));
  connect(supplySwitch.portC, pcmInletJunction.portC)
    annotation(Line(points={{-96,103},{-65,103},{-65,0},{-1,0}},
      color={0,170,238}, thickness=0.5));

  // ---------- Hydraulic RETURN ----------
  connect(WaterReturnIn, returnSwitch.portA)
    annotation(Line(points={{-200,-100},{-138,-100},{-138,-109},{-108,-109}},
      color={0,170,238}, thickness=0.5));
  connect(returnSwitch.portB, returnMergeJunction.portC)
    annotation(Line(points={{-120,-97},{-120,-124},{110,-124},{110,-100},{159,-100}},
      color={0,170,238}, thickness=0.5));
  connect(returnSwitch.portC, pcmInletJunction.portA)
    annotation(Line(points={{-96,-97},{-25,-97},{-25,-6},{5,-6}},
      color={0,170,238}, thickness=0.5));

  // ---------- Common PCM path: one inlet, one outlet ----------
  connect(pcmInletJunction.portB, pcmHydraulicResistor.portA)
    annotation(Line(points={{11,0},{35,0}},
      color={0,170,238}, thickness=0.5));
  connect(pcmHydraulicResistor.portB, sensorPCMFlow.portA)
    annotation(Line(points={{55,0},{70,0}},
      color={0,170,238}, thickness=0.5));
  connect(sensorPCMFlow.portB, pcmStorage_heated.portA)
    annotation(Line(points={{86,0},{93,0},{93,13},{100,13}},
      color={0,170,238}, thickness=0.5));
  connect(pcmStorage_heated.portB, returnMergeJunction.portA)
    annotation(Line(points={{100,-12.5},{82,-12.5},{82,-106},{165,-106}},
      color={0,170,238}, thickness=0.5));
  connect(returnMergeJunction.portB, WaterReturnOut)
    annotation(Line(points={{171,-100},{200,-100}},
      color={0,170,238}, thickness=0.5));

  // ---------- Measurements ----------
  connect(sensorSupply.port, WaterSupplyIn)
    annotation(Line(points={{-175,127},{-200,127},{-200,100}},
      color={0,170,238}, thickness=0.5));
  connect(sensorReturn.port, WaterReturnIn)
    annotation(Line(points={{-175,-142},{-200,-142},{-200,-100}},
      color={0,170,238}, thickness=0.5));

  SOC = pcmStorage_heated.summary.mass_SLE_l/
    pcmStorage_heated.summary.mass_SLE;
  PCMHeatFlow = -pcmStorage_heated.summary.Q_flow_liq;
  der(energy) = PCMHeatFlow;

  // ---------- ALL CONTROLLER SIGNALS WIRED INTERNALLY ----------
  // Only heatingDemand enters from outside; forecast is read internally.
  connect(heatingDemand, pCMForecastController.heatingDemand)
    annotation(Line(points={{-200,-165},{-168,-165},{-168,0.75},{-145,0.75}},
      color={255,0,255}));
  pCMForecastController.SOC = SOC;
  connect(sensorSupply.sensorValue, pCMForecastController.TSupply)
    annotation(Line(points={{-175,134.5},{-157,134.5},{-157,37},{-145,37}},
      color={0,0,127}));
  connect(sensorReturn.sensorValue, pCMForecastController.TReturn)
    annotation(Line(points={{-175,-134.5},{-165,-134.5},{-165,12},{-145,12}},
      color={0,0,127}));
  connect(pCMForecastController.supplyValvePosition,
          supplySwitch.switchingPosition_in)
    annotation(Line(points={{-85,33.25},{-75,33.25},{-75,123},{-108,123},{-108,
          109}},
      color={0,0,127}));
  connect(pCMForecastController.returnValvePosition,
          returnSwitch.switchingPosition_in)
    annotation(Line(points={{-85,3.25},{-68,3.25},{-68,-80},{-108,-80},{-108,
          -91}},
      color={0,0,127}));
  connect(pCMForecastController.chargeRequest, chargeRequest)
    annotation(Line(points={{-85,38},{-55,38},{-55,-165},{200,-165}},
      color={255,0,255}));

  annotation(
    Diagram(coordinateSystem(preserveAspectRatio=false,
      extent={{-215,-185},{215,155}})),
    Icon(coordinateSystem(preserveAspectRatio=false,
      extent={{-100,-100},{100,100}}), graphics={
      Rectangle(extent={{-100,100},{100,-100}},
        lineColor={0,100,170}, fillColor={238,247,251},
        fillPattern=FillPattern.Solid),
      Text(extent={{-90,42},{90,14}}, textString="PCM RT31",
        textColor={0,75,130}),
      Text(extent={{-90,8},{90,-24}}, textString="Forecast + Switching",
        textColor={0,75,130}),
      Text(extent={{-90,-40},{90,-66}}, textString="Controller inside",
        textColor={0,75,130})}),
    Documentation(info="<html><p>The PCMForecastController is instantiated as an INNER SUBCOMPONENT of LatentHeatStorage. It reads the scenario forecast file, PCM liquid fraction and two measured temperatures, and commands two TIL three-way valves. No independent controller instance is needed in HeatPump_ThermalStorage.</p><p>The charge path goes from the 35 degC supply into the shared PCM inlet, then PCM outlet to the heat-source return. The discharge path goes from the floor return into the same PCM inlet, then to the heat-source return. In standby the floor return bypasses PCM. A pair of three-port VolumeJunction components ensures well-defined hydraulic merging. These are preliminary hydraulics, not Dymola-validated. Verify valve switching polarity, pump mass-flow distribution and PCM charging/discharging temperature and heat flow.</p></html>"));
end LatentHeatStorage;
