within SmartHouse.HeatingSource;
model HeatPumpCycle "Simplified air-to-water heat pump model"
  extends PartialHeatSource;

  // ============================================================
  // USER PARAMETERS
  // ============================================================


  // --- Fan control ---
  parameter Real fanSpeedHeating = 15
    "Fan speed during normal heating"
    annotation(Dialog(tab="Fan", group="Control"));

  parameter Real fanSpeedOff = 0.1
    "Fan speed when heat pump is disabled"
    annotation(Dialog(tab="Fan", group="Control"));


// ============================================================
// EVAPORATOR GEOMETRY
// ============================================================

parameter Modelica.Units.SI.Length evaporatorFinnedTubeLength = 8
  "Length of finned tubes"
  annotation(Dialog(tab="Evaporator", group="Geometry"));

parameter Integer evaporatorNSerialTubes = 5
  "Number of tube rows in air-flow direction"
  annotation(Dialog(tab="Evaporator", group="Geometry"));

parameter Modelica.Units.SI.Length evaporatorSerialTubeDistance = 22e-3
  "Distance between serial tubes"
  annotation(Dialog(tab="Evaporator", group="Geometry"));

parameter Integer evaporatorNParallelTubes = 30
  "Number of parallel tubes"
  annotation(Dialog(tab="Evaporator", group="Geometry"));

parameter Modelica.Units.SI.Length evaporatorParallelTubeDistance = 25.4e-3
  "Distance between parallel tubes"
  annotation(Dialog(tab="Evaporator", group="Geometry"));

parameter Modelica.Units.SI.Length evaporatorFinThickness = 0.2e-3
  "Fin thickness"
  annotation(Dialog(tab="Evaporator", group="Geometry"));

parameter Modelica.Units.SI.Length evaporatorFinPitch = 2.2e-3
  "Distance between fins"
  annotation(Dialog(tab="Evaporator", group="Geometry"));

parameter Modelica.Units.SI.Length evaporatorTubeInnerDiameter = 7e-3
  "Inner tube diameter"
  annotation(Dialog(tab="Evaporator", group="Tube geometry"));

parameter Modelica.Units.SI.Length evaporatorTubeWallThickness = 1.5e-3
  "Tube wall thickness"
  annotation(Dialog(tab="Evaporator", group="Tube geometry"));

parameter Integer evaporatorNParallelHydraulicFlows = 4
  "Number of parallel refrigerant flow paths"
  annotation(Dialog(tab="Evaporator", group="Tube geometry"));

parameter Integer evaporatorNCells = 10
  "Number of discretization cells"
  annotation(Dialog(tab="Evaporator", group="Numerics"));

parameter Modelica.Units.SI.CoefficientOfHeatTransfer evaporatorAlphaVLE = 3500
  "Heat transfer coefficient on refrigerant side"
  annotation(
    Dialog(
      tab="Evaporator",
      group="Heat transfer"));

// ============================================================
// CONDENSER GEOMETRY
// ============================================================

parameter Modelica.Units.SI.CoefficientOfHeatTransfer condenserAlphaVLE = 3500
  "Heat transfer coefficient on refrigerant side"
  annotation(Dialog(tab="Condenser", group="Heat transfer"));

parameter Modelica.Units.SI.CoefficientOfHeatTransfer condenserAlphaLiquid = 2000
  "Heat transfer coefficient on water side"
  annotation(Dialog(tab="Condenser", group="Heat transfer"));

parameter Integer condenserNumberOfPlates(min=2) = 20
  "Total number of plates"
  annotation(Dialog(tab="Condenser", group="Geometry"));

parameter Boolean condenserOuterChannelA = true
  "Fluid path a is the outer channel"
  annotation(Dialog(tab="Condenser", group="Geometry"));

parameter Modelica.Units.SI.Length condenserLength = 0.3
  "Plate length"
  annotation(Dialog(tab="Condenser", group="Geometry"));

parameter Modelica.Units.SI.Length condenserWidth = 0.1
  "Plate width"
  annotation(Dialog(tab="Condenser", group="Geometry"));

parameter Real condenserPhi = 35
  "Chevron pattern angle in deg"
  annotation(Dialog(tab="Condenser", group="Geometry"));

parameter Modelica.Units.SI.Length condenserWallThickness = 0.75e-3
  "Plate wall thickness"
  annotation(Dialog(tab="Condenser", group="Geometry"));

parameter Modelica.Units.SI.Length condenserPatternAmplitude = 2e-3
  "Chevron pattern amplitude"
  annotation(Dialog(tab="Condenser", group="Geometry"));

parameter Modelica.Units.SI.Length condenserPatternWaveLength = 12.6e-3
  "Chevron pattern wavelength"
  annotation(Dialog(tab="Condenser", group="Geometry"));

parameter Integer condenserNCells(min=1) = 15
  "Number of discretization cells"
  annotation(Dialog(tab="Condenser", group="Numerics"));

  // --- Compressor ---
  parameter Modelica.Units.SI.Volume compressorDisplacement = 60e-6
    "Compressor displacement"
    annotation(Dialog(tab="Compressor", group="Design"));

  parameter Real compressorVolumetricEfficiency(min=0, max=1) = 0.8
    "Volumetric efficiency"
    annotation(Dialog(tab="Compressor", group="Design"));

  parameter Real compressorIsentropicEfficiency(min=0, max=1) = 0.8
    "Isentropic efficiency"
    annotation(Dialog(tab="Compressor", group="Design"));

  parameter Real compressorEffectiveIsentropicEfficiency(min=0, max=1) = 0.8
    "Effective isentropic efficiency"
    annotation(Dialog(tab="Compressor", group="Design"));

  parameter Real compressorControllerK = 1
    "Compressor PI controller gain"
    annotation(Dialog(tab="Compressor", group="Controller"));
  parameter Modelica.Units.SI.Time compressorControllerTi = 20
  "Compressor PI controller integral time"
  annotation(Dialog(tab="Compressor", group="Controller"));

  parameter Real compressorSpeedMin = 5
    "Minimum compressor speed command"
    annotation(Dialog(tab="Compressor", group="Controller"));

  parameter Real compressorSpeedMax = 100
    "Maximum compressor speed command"
    annotation(Dialog(tab="Compressor", group="Controller"));

  parameter Real compressorSpeedInitial = 60
    "Initial compressor speed command"
    annotation(Dialog(tab="Compressor", group="Controller"));

  parameter Modelica.Units.SI.Time compressorActivationTime = 50
    "Controller activation time"
    annotation(Dialog(tab="Compressor", group="Controller"));

  // --- Expansion valve ---
  parameter Modelica.Units.SI.TemperatureDifference subcoolingSetpointValue = 5
    "Subcooling setpoint"
    annotation(Dialog(tab="Expansion valve", group="Controller"));

  parameter Real expansionValveControllerK = 0.5e-7
    "Expansion-valve PI controller gain"
    annotation(Dialog(tab="Expansion valve", group="Controller"));

  parameter Modelica.Units.SI.Time expansionValveControllerTi = 100
    "Expansion-valve PI integral time"
    annotation(Dialog(tab="Expansion valve", group="Controller"));

  parameter Modelica.Units.SI.Area expansionValveAreaMin = 0.05e-6
    "Minimum effective flow area"
    annotation(Dialog(tab="Expansion valve", group="Controller"));

  parameter Modelica.Units.SI.Area expansionValveAreaMax = 6e-6
    "Maximum effective flow area"
    annotation(Dialog(tab="Expansion valve", group="Controller"));

  parameter Modelica.Units.SI.Area expansionValveAreaInitial = 0.3e-6
    "Initial effective flow area"
    annotation(Dialog(tab="Expansion valve", group="Controller"));

  parameter Modelica.Units.SI.Area expansionValveAreaRestart = 0.4e-6
    "Valve area used by the inactive PI controller"
    annotation(Dialog(tab="Expansion valve", group="Controller"));

  parameter Modelica.Units.SI.Time expansionValveActivationTime = 50
    "Controller activation time"
    annotation(Dialog(tab="Expansion valve", group="Controller"));

  parameter Modelica.Units.SI.Area expansionValveAreaFixed = 0.3e-6
    "Fixed valve area parameter of the TIL valve (normally overridden by input)"
    annotation(Dialog(tab="Expansion valve", group="Advanced"));

  // --- Fan / outside air ---
  parameter Real fanNominalSpeed = 13
    "Nominal fan speed"
    annotation(Dialog(tab="Fan", group="Design"));

  parameter Modelica.Units.SI.Pressure fanNominalPressureRise = 10
    "Nominal fan pressure rise"
    annotation(Dialog(tab="Fan", group="Design"));

  parameter Modelica.Units.SI.VolumeFlowRate fanNominalVolumeFlow = 0.639
    "Nominal fan volume flow"
    annotation(Dialog(tab="Fan", group="Design"));

  parameter Modelica.Units.SI.VolumeFlowRate fanZeroPressureVolumeFlow = 0.70
    "Fan volume flow at zero pressure rise"
    annotation(Dialog(tab="Fan", group="Design"));

  parameter Modelica.Units.SI.VolumeFlowRate fanDeltaVolumeFlow = 0.02
    "Regularization volume flow of fan model"
    annotation(Dialog(tab="Fan", group="Advanced"));

  parameter Modelica.Units.SI.Pressure fanDpInitial = 10
    "Initial fan pressure rise"
    annotation(Dialog(tab="Fan", group="Advanced"));

  parameter Modelica.Units.SI.VolumeFlowRate fanVolumeFlowStart = 0.639
    "Initial fan volume flow"
    annotation(Dialog(tab="Fan", group="Advanced"));

  parameter Modelica.Units.SI.Pressure ambientPressure = 101300
    "Outdoor air pressure"
    annotation(Dialog(tab="Ambient", group="Boundary"));

  parameter Real ambientRelativeHumidity = 80
    "Outdoor relative humidity in percent"
    annotation(Dialog(tab="Ambient", group="Boundary"));

  parameter Real sinkBackflowRelativeHumidity = 90
    "Relative humidity used if reverse flow occurs at gas sink"
    annotation(Dialog(tab="Ambient", group="Backflow"));

  parameter Modelica.Units.SI.Temperature sinkBackflowTemperature = 275.15
    "Temperature used if reverse flow occurs at gas sink"
    annotation(Dialog(tab="Ambient", group="Backflow"));




  parameter Real fanFixedSpeedFallback = 10
    "Fixed fan speed used only if mechanical speed input is disabled"
    annotation(Dialog(tab="Fan", group="Advanced"));

  parameter Modelica.Units.SI.VolumeFlowRate sinkFixedVolumeFlow = -1
    "Fixed sink volume flow used only for boundary modes that require it"
    annotation(Dialog(tab="Ambient", group="Backflow"));

  // --- Advanced / initialization ---
  parameter Modelica.Units.SI.Pressure pInitialHigh = 1300000
    "Initial high-side pressure"
    annotation(Dialog(tab="Advanced", group="Initialization"));

  parameter Modelica.Units.SI.Pressure pInitialLow = 300000
    "Initial low-side pressure"
    annotation(Dialog(tab="Advanced", group="Initialization"));

  parameter Modelica.Units.SI.Volume separatorVolume = 2e-3
    "Separator volume"
    annotation(Dialog(tab="Advanced", group="Separator"));

  parameter Real separatorInitialFillingLevel(min=0, max=1) = 0.5
    "Initial separator filling level"
    annotation(Dialog(tab="Advanced", group="Separator"));

  parameter Modelica.Units.SI.SpecificEnthalpy separatorHStart = 430e3
    "Initial separator specific enthalpy"
    annotation(Dialog(tab="Advanced", group="Separator"));

  parameter Modelica.Units.SI.SpecificEnthalpy condenserHInitial = 280e3
    "Initial condenser refrigerant specific enthalpy"
    annotation(Dialog(tab="Advanced", group="Condenser initialization"));

  parameter Modelica.Units.SI.SpecificEnthalpy condenserHInitialCell1 = 550e3
    "Initial condenser specific enthalpy in first cell"
    annotation(Dialog(tab="Advanced", group="Condenser initialization"));

  parameter Modelica.Units.SI.SpecificEnthalpy condenserHInitialCellN = 350e3
    "Initial condenser specific enthalpy in last cell"
    annotation(Dialog(tab="Advanced", group="Condenser initialization"));

  // ============================================================
  // COMPONENTS
  // ============================================================
  // No local SystemInformationManager is declared here.
  // The parent model must provide the common inner TIL.SystemInformationManager.

  TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_hp(
      pressureStateID=1, pInitial=pInitialHigh)  annotation (Placement(transformation(
          extent={{-32,36},{-20,48}},
                                    rotation=0)));
  TIL.VLEFluidComponents.Sensors.StatePoint statePoint1(stateViewerIndex=0)
    annotation (Placement(transformation(extent={{-10,46},{-2,54}},rotation=0)));
  TIL.VLEFluidComponents.Sensors.StatePoint statePoint2(stateViewerIndex=1)
    annotation (Placement(transformation(extent={{-96,26},{-88,34}}, rotation=0)));
  TIL.VLEFluidComponents.Valves.OrificeValve expansionValve(
    valveFlowVariableType=TIL.Internals.ValveFlowVariableType.EffectiveFlowArea,
    use_effectiveFlowAreaInput=true,
    effectiveFlowAreaFixed=expansionValveAreaFixed)
    annotation (Placement(transformation(
        origin={-106,6},
        extent={{-8,4},{8,-4}},
        rotation=270)));
  TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_lp(
      pressureStateID=2, pInitial=pInitialLow)  annotation (Placement(transformation(
          extent={{-6,-6},{6,6}},     rotation=0,
        origin={-82,-42})));
  TIL.VLEFluidComponents.Sensors.StatePoint statePoint3(stateViewerIndex=2)
    annotation (Placement(transformation(
        origin={-98,-32},
        extent={{-4,-4},{4,4}},
        rotation=0)));
  TIL.VLEFluidComponents.Separators.Separator separator(
    pressureStateID=2,
    V=separatorVolume,
    initialFillingLevel=separatorInitialFillingLevel,
    hStart=separatorHStart)
                annotation (Placement(transformation(extent={{62,-58},{74,-38}},
          rotation=0)));
  TIL.VLEFluidComponents.Compressors.EffCompressor compressor(
    use_mechanicalPort=true,
    displacement=compressorDisplacement,
    nFixed=compressorSpeedInitial,
    volumetricEfficiency=compressorVolumetricEfficiency,
    isentropicEfficiency=compressorIsentropicEfficiency,
    effectiveIsentropicEfficiency=compressorEffectiveIsentropicEfficiency) annotation (Placement(transformation(
          extent={{76,4},{92,20}},  rotation=0)));
  TIL.VLEFluidComponents.Sensors.StatePoint statePoint4(stateViewerIndex=3)
    annotation (Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=0,
        origin={-12,-34})));
  TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterOut(
    useTimeConstant=true,
    tau=0.5,
    useSteadyStateInitialization=false,
    redeclare TIL.Utilities.Units.Conversions.Units.K unit,
    initialSensorValue=30)
    annotation (Placement(transformation(extent={{-52,64},{-44,72}})));
  TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterIn(redeclare
      TIL.Utilities.Units.Conversions.Units.K unit)
    annotation (Placement(transformation(extent={{-88,64},{-80,72}})));
 TIL.HeatExchangers.Plate.VLEFluidLiquid.ParallelFlowHX condenser(

  redeclare TIL.HeatExchangers.Plate.Geometry.Example hxGeometry(
    numberOfPlates=condenserNumberOfPlates,
    outerChannel_a=condenserOuterChannelA,
    length=condenserLength,
    width=condenserWidth,
    phi=condenserPhi,
    wallThickness=condenserWallThickness,
    patternAmplitude=condenserPatternAmplitude,
    patternWaveLength=condenserPatternWaveLength),

  nCells=condenserNCells,
  pressureStateID=1,

    redeclare model PressureDropModel_a =
        TIL.HeatExchangers.Plate.TransportPhenomena.PressureDrop.ZeroPressureDrop,

 redeclare model HeatTransferModel_a =
  TIL.HeatExchangers.Plate.TransportPhenomena.HeatTransfer.ConstantAlpha(
    constantAlpha=condenserAlphaVLE),

redeclare model HeatTransferModel_b =
  TIL.HeatExchangers.Plate.TransportPhenomena.HeatTransfer.ConstantAlpha(
    constantAlpha=condenserAlphaLiquid),

    redeclare model PressureDropModel_b =
        TIL.HeatExchangers.Plate.TransportPhenomena.PressureDrop.ZeroPressureDrop,

  redeclare model WallMaterial =
    TILMedia.Solid.Types.TILMedia_Copper,

  redeclare model WallHeatConductionModel =
    TIL.HeatExchangers.Plate.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,

  initVLEFluid_a="constantEnthalpy",
  hInitialVLEFluid_a=condenserHInitial,
  hInitialVLEFluid_a_Cell1=condenserHInitialCell1,
  hInitialVLEFluid_a_CellN=condenserHInitialCellN

) annotation (
    Placement(
      transformation(extent={{-80,36},{-52,64}})));
  TIL.HeatExchangers.FinAndTube.GasVLEFluid.CrossFlowHX evaporator(
    redeclare TIL.HeatExchangers.FinAndTube.Geometry.KKI001 hxGeometry(
    finnedTubeLength=evaporatorFinnedTubeLength,
    nSerialTubes=evaporatorNSerialTubes,
    serialTubeDistance=evaporatorSerialTubeDistance,
    nParallelTubes=evaporatorNParallelTubes,
    parallelTubeDistance=evaporatorParallelTubeDistance,
    finThickness=evaporatorFinThickness,
    finPitch=evaporatorFinPitch,
    tubeInnerDiameter=evaporatorTubeInnerDiameter,
    tubeWallThickness=evaporatorTubeWallThickness,
    nTubeSideParallelHydraulicFlows=evaporatorNParallelHydraulicFlows),
    TInitialWall=278.15,

  nCells=evaporatorNCells,
    pressureStateID=2,
    redeclare model TubeSideHeatTransferModel =
  TIL.HeatExchangers.FinAndTube.TransportPhenomena.TubeSideHeatTransfer.ConstantAlpha(
    constantAlpha=evaporatorAlphaVLE),
    redeclare model TubeSidePressureDropModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.TubeSidePressureDrop.ZeroPressureDrop,
    redeclare model WallMaterial = TILMedia.Solid.Types.TILMedia_Copper,
    redeclare model WallHeatConductionModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
    redeclare model FinMaterial = TILMedia.Solid.Types.TILMedia_Aluminum,
    redeclare model FinEfficiencyModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinEfficiency.Schmidt,
    redeclare model FinSideHeatTransferModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSideHeatTransfer.Haaf,
    redeclare model FinSidePressureDropModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSidePressureDrop.ZeroPressureDrop)
                annotation (Placement(transformation(extent={{-54,-56},{-26,-28}})));
  TIL.VLEFluidComponents.Sensors.Sensor_subcooling sensor_subcooling(
    useTimeConstant=true,
    tau=0.1,
    useSteadyStateInitialization=false)
    annotation (Placement(transformation(
        extent={{-4,4},{4,-4}},
        rotation=180,
        origin={-118,30})));
  TIL.OtherComponents.Controllers.PIController expansionValveController(
    controllerType="PI",
    invertFeedback=true,
    integralParameterType="Ti",
    k=expansionValveControllerK,
    Ti=expansionValveControllerTi,
    yMax=expansionValveAreaMax,
    yMin=expansionValveAreaMin,
    initType="initialOutput",
    yInitial=expansionValveAreaInitial,
    use_activeInput=true,
    use_y_notActive=true,
    activationTime=expansionValveActivationTime)
    annotation (Placement(transformation(extent={{-138,12},{-126,0}})));
  Modelica.Blocks.Sources.RealExpression subcoolingSetpoint(y=subcoolingSetpointValue)
    annotation (Placement(transformation(extent={{-178,-2},{-148,14}})));
  TIL.VLEFluidComponents.Sensors.StatePoint statePoint7(stateViewerIndex=6)
    annotation (Placement(transformation(
        extent={{-4,-4},{4,4}},
        rotation=0,
        origin={78,-34})));
  TIL.OtherComponents.Controllers.PIController compressorController(
    controllerType="PI",
    invertFeedback=false,
    integralParameterType="Ti",
    k=compressorControllerK,
    Ti=compressorControllerTi,
    yMax=compressorSpeedMax,
    yMin=compressorSpeedMin,
    yInitial=compressorSpeedInitial,
    use_activeInput=true,
    use_y_notActive=false,
    activationTime=compressorActivationTime)
    annotation (Placement(transformation(extent={{138,16},{126,4}})));
  TIL.OtherComponents.Mechanical.RotatoryBoundary rotatoryBoundary1(
      use_nInput=true, nFixed=compressorSpeedInitial)
    annotation (Placement(transformation(extent={{102,-4},{94,16}})));
  TIL.VLEFluidComponents.Sensors.Sensor_T      sensor_T_degC(redeclare
      TIL.Utilities.Units.Conversions.Units.degC unit)
    annotation (Placement(transformation(extent={{-70,-38},{-62,-30}})));
  Modelica.Blocks.Sources.RealExpression valveAreaRestart(y=expansionValveAreaRestart)
    annotation (Placement(transformation(extent={{-180,-14},{-148,2}})));
  Modelica.Blocks.Sources.RealExpression COP(
    y=if P_el > 1e-3 then HeatFlow/P_el else 0)
    annotation (
      Placement(
        transformation(extent={{62,120},{78,136}})));
  Modelica.Blocks.Logical.Switch expansionValveSwitch annotation (Placement(transformation(extent={{-128,
            -28},{-116,-16}})));
  Modelica.Blocks.Sources.RealExpression valveDisable(y=0)
    "Close expansion valve when heat pump is disabled"
    annotation (
      Placement(
        transformation(
          extent={{-16,-8},{16,8}},
          origin={-160,-26})));

  HeatPumpController heatPumpController(
    fanSpeedHeating=fanSpeedHeating,
    fanSpeedOff=fanSpeedOff)
    annotation (Placement(transformation(extent={{80,-110},{126,-68}})));
  Modelica.Blocks.Interfaces.RealInput T_ambient
    "Temperature of the ambient in K" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-120,-200}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-80,-170})));
  TIL.GasComponents.Boundaries.Boundary gasSource(
  streamVariablesInputType="T",
  streamVariablesInputTypeConcentration="xi",
  use_temperatureInput=true,
  boundaryType="p",
  pFixed=ambientPressure)
  "Outside dry air used in the evaporator"
  annotation (
    Placement(
      transformation(
        extent={{-4,-10},{4,10}},
        rotation=90,
        origin={-40,2})));
  TIL.GasComponents.Sensors.Sensor_T      sensor_T_degC_ambientAirIn(redeclare
      TIL.Utilities.Units.Conversions.Units.K unit)
    annotation (Placement(transformation(extent={{-16,-16},{-8,-8}})));
  TIL.GasComponents.Sensors.StatePoint statePoint annotation (Placement(transformation(extent={{-64,-16},
            {-56,-8}})));
  TIL.GasComponents.Boundaries.Boundary gasSink(
  pFixed=ambientPressure,
  V_flowFixed=sinkFixedVolumeFlow,
  boundaryType="p",
  TFixed=sinkBackflowTemperature,
  streamVariablesInputTypeConcentration="xi")
  annotation (
    Placement(
      transformation(
        extent={{4,10},{-4,-10}},
        rotation=90,
        origin={-40,-132})));
  TIL.GasComponents.Sensors.Sensor_T      sensor_T_degC_ambientAirOut(
      redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation (Placement(transformation(extent={{-28,-118},{-20,-110}})));
  TIL.GasComponents.Sensors.Sensor_V_flow sensor_V_flow_ambientAir
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={-40,-116})));
  TIL.GasComponents.Fans.Fan2ndOrder fan2ndOrder(
    use_mechanicalPort=true,
    steadyStateMomentum=true,
    nFixed=fanFixedSpeedFallback,
    n_nominal=fanNominalSpeed,
    dp_nominal=fanNominalPressureRise,
    V_flow_nominal=fanNominalVolumeFlow,
    V_flow0=fanZeroPressureVolumeFlow,
    deltaV_flow=fanDeltaVolumeFlow,
    dpInitial(displayUnit="Pa") = fanDpInitial,
    V_flow_Start=fanVolumeFlowStart)                          annotation (Placement(transformation(extent={{-32,-86},
            {-48,-102}})));
  TIL.OtherComponents.Mechanical.RotatoryBoundary rotatoryBoundary(use_nInput=true,
      nFixed=fanSpeedHeating)
    annotation (Placement(transformation(extent={{-20,-104},{-28,-84}})));
  TIL.GasComponents.Sensors.StatePoint statePoint5(index=1)
    annotation (Placement(transformation(extent={{-64,-118},{-56,-110}})));
  Modelica.Blocks.Logical.Switch compressorSwitch annotation (Placement(transformation(extent={{6,-6},{
            -6,6}},
        rotation=270,
        origin={112,-18})));
  Modelica.Blocks.Sources.RealExpression compressorDisable(y=0)
    "Set compressor speed to zero when heat pump is disabled"
    annotation (Placement(transformation(extent={{-16,-8},{16,8}},
        rotation=90,
        origin={106,-48})));
  TIL.VLEFluidComponents.Sensors.Sensor_superheating sensor_superheating
    annotation (Placement(transformation(extent={{4,-26},{12,-18}})));
equation
  P_el = compressor.shaftPower + fan2ndOrder.P_shaft;
  HeatFlow = -condenser.Q_flow;
  connect(statePoint1.sensorPort,pressureState_hp. portA) annotation (Line(
      points={{-6,46},{-6,42},{-20,42}},
      color={153,204,0},
      thickness=0.5));
  connect(separator.portGas,compressor. portA)
    annotation (Line(
      points={{73,-44},{86,-44},{86,2},{84,2},{84,4}},
      color={153,204,0},
      thickness=0.5));
  connect(sensor_T_degC_waterIn.port,condenser. portA_b)
    annotation (Line(
      points={{-84,64},{-84,58},{-80,58}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T_degC_waterOut.port,condenser. portB_b)
    annotation (Line(
      points={{-48,64},{-48,58},{-52,58}},
      color={0,170,238},
      thickness=0.5));
  connect(subcoolingSetpoint.y, expansionValveController.u_s)
    annotation (Line(points={{-146.5,6},{-137.6,6}}, color={0,0,127}));
  connect(statePoint7.sensorPort,compressor. portA)
    annotation (Line(
      points={{78,-38},{78,-42},{86,-42},{86,2},{84,2},{84,4}},
      color={153,204,0},
      thickness=0.5));
  connect(rotatoryBoundary1.rotatoryFlange,compressor. rotatoryFlange)
    annotation (Line(
      points={{98,6},{98,30},{92,30},{92,12}},
      color={135,135,135},
      thickness=0.5));
  connect(compressorController.u_m, sensor_T_degC_waterOut.sensorValue)
    annotation (Line(points={{132,15.8},{132,80},{-48,80},{-48,70}}, color={0,0,
          127}));
  connect(valveAreaRestart.y, expansionValveController.y_notActive) annotation
    (Line(points={{-146.4,-6},{-132,-6},{-132,0.2}}, color={0,0,127}));
  connect(statePoint2.sensorPort,expansionValve. portA)
    annotation (Line(
      points={{-92,26},{-92,24},{-106,24},{-106,14}},
      color={153,204,0},
      thickness=0.5));
  connect(sensor_subcooling.port,expansionValve. portA)
    annotation (Line(
      points={{-118,26},{-118,24},{-106,24},{-106,14}},
      color={153,204,0},
      thickness=0.5));
  connect(statePoint3.sensorPort,pressureState_lp. portB)
    annotation (Line(
      points={{-98,-36},{-98,-42},{-88,-42}},
      color={153,204,0},
      thickness=0.5));
  connect(expansionValve.portB,pressureState_lp. portB)
    annotation (Line(
      points={{-106,-2},{-106,-42},{-88,-42}},
      color={153,204,0},
      thickness=0.5));
  connect(expansionValveSwitch.y,expansionValve. effectiveFlowArea_in)
    annotation (Line(points={{-115.4,-22},{-114,-22},{-114,6},{-111,6}}, color={0,0,127}));
  connect(expansionValveSwitch.u1, expansionValveController.y) annotation (Line(points={{-129.2,
          -17.2},{-132,-17.2},{-132,-10},{-120,-10},{-120,6},{-125.6,6}}, color
        ={0,0,127}));
  connect(valveDisable.y, expansionValveSwitch.u3)
    annotation (Line(points={{-142.4,-26},{-142.4,-26.8},{-129.2,-26.8}},
                                                                        color={0,0,127}));
  connect(sensor_T_degC.port,pressureState_lp. portA)
    annotation (Line(
      points={{-66,-38},{-66,-42},{-76,-42}},
      color={153,204,0},
      thickness=0.5));
  connect(evaporator.portA_vle,pressureState_lp. portA)
    annotation (Line(
      points={{-54,-42},{-66,-42},{-66,-42},{-76,-42}},
      color={153,204,0},
      thickness=0.5));
  connect(condenser.portA_a,expansionValve. portA)
    annotation (Line(
      points={{-80,42},{-106,42},{-106,14}},
      color={153,204,0},
      thickness=0.5));
  connect(pressureState_hp.portB,condenser. portB_a)
    annotation (Line(
      points={{-32,42},{-52,42}},
      color={153,204,0},
      thickness=0.5));
  connect(WaterInput, condenser.portA_b) annotation (Line(
      points={{-200,0},{-200,58},{-80,58}},
      color={0,170,238},
      thickness=0.5));
  connect(condenser.portB_b, WaterOutput) annotation (Line(
      points={{-52,58},{200,58},{200,0}},
      color={0,170,238},
      thickness=0.5));
  connect(heatPumpController.controllerSwitch, compressorController.activeInput)
    annotation (Line(points={{124.686,-78.85},{154,-78.85},{154,13.8},{137.6,
          13.8}},              color={255,0,255}));
  connect(heatPumpController.controllerSwitch, expansionValveController.activeInput)
    annotation (Line(points={{124.686,-78.85},{154,-78.85},{154,24},{-142,24},{
          -142,9.8},{-137.6,9.8}},                color={255,0,255}));
  connect(heatPumpController.controllerSwitch, expansionValveSwitch.u2) annotation (Line(
        points={{124.686,-78.85},{154,-78.85},{154,24},{-142,24},{-142,-22},{
          -129.2,-22}},
                 color={255,0,255}));
  connect(heatPumpController.TemperatureSetpoint, compressorController.u_s)
    annotation (Line(points={{124.686,-92.5},{142,-92.5},{142,10},{137.6,10}},
        color={0,0,127}));
  connect(evaporator.portA_gas, gasSource.port) annotation (Line(
      points={{-40,-28},{-40,2}},
      color={255,153,0},
      thickness=0.5));
  connect(statePoint.port, gasSource.port) annotation (Line(
      points={{-60,-16},{-40,-16},{-40,2}},
      color={255,153,0},
      thickness=0.5));
  connect(sensor_T_degC_ambientAirIn.port, gasSource.port) annotation (Line(
      points={{-12,-16},{-40,-16},{-40,2}},
      color={255,153,0},
      thickness=0.5));
  connect(sensor_V_flow_ambientAir.portB,gasSink. port)
    annotation (Line(
      points={{-40,-119},{-40,-132}},
      color={255,153,0},
      thickness=0.5));
  connect(sensor_T_degC_ambientAirOut.port,gasSink. port) annotation (Line(
      points={{-24,-118},{-24,-124},{-40,-124},{-40,-132}},
      color={255,153,0},
      thickness=0.5));
  connect(statePoint5.port,gasSink. port) annotation (Line(
      points={{-60,-118},{-60,-124},{-40,-124},{-40,-132}},
      color={255,153,0},
      thickness=0.5));

  connect(fan2ndOrder.rotatoryFlange,rotatoryBoundary. rotatoryFlange)
    annotation (Line(
      points={{-32,-94},{-24,-94}},
      color={135,135,135},
      thickness=0.5));
  connect(fan2ndOrder.portA, evaporator.portB_gas) annotation (Line(
      points={{-40,-86},{-40,-68},{-40,-56},{-40,-56}},
      color={255,153,0},
      thickness=0.5));
  connect(T_ambient, gasSource.T_in) annotation (Line(points={{-120,-200},{-120,
          -32},{-110,-32},{-110,-24},{-60,-24},{-60,-20},{-38,-20},{-38,-8},{-34,
          -8},{-34,-2}},                              color={0,0,127}));
  connect(heatPumpController.fanSpeed, rotatoryBoundary.n_in) annotation (Line(
        points={{124.686,-99.5},{152,-99.5},{152,-132},{2,-132},{2,-94},{-20,
          -94}}, color={0,0,127}));
  connect(compressorController.y, compressorSwitch.u1) annotation (Line(points={{125.6,10},
          {122,10},{122,-32},{116.8,-32},{116.8,-25.2}}, color={0,0,127}));
  connect(heatPumpController.controllerSwitchCompressor, compressorSwitch.u2)
    annotation (Line(points={{124.686,-71.5},{134,-71.5},{134,-42},{112,-42},{
          112,-25.2}},
                   color={255,0,255}));
  connect(compressorDisable.y, compressorSwitch.u3) annotation (Line(points={{106,-30.4},
          {106,-25.2},{107.2,-25.2}},
                                   color={0,0,127}));
  connect(compressor.portB, pressureState_hp.portA) annotation (Line(
      points={{84,20},{84,42},{-20,42}},
      color={153,204,0},
      thickness=0.5));
  connect(compressorSwitch.y, rotatoryBoundary1.n_in)
    annotation (Line(points={{112,-11.4},{112,6},{102,6}}, color={0,0,127}));
  connect(evaporator.portB_vle, separator.portInlet) annotation (Line(
      points={{-26,-42},{18,-42},{18,-44},{63,-44}},
      color={153,204,0},
      thickness=0.5));
  connect(statePoint4.sensorPort, separator.portInlet) annotation (Line(
      points={{-12,-38},{-12,-44},{63,-44}},
      color={153,204,0},
      thickness=0.5));
  connect(fan2ndOrder.portB, sensor_V_flow_ambientAir.portA) annotation (Line(
      points={{-40,-102},{-40,-113}},
      color={255,153,0},
      thickness=0.5));
  connect(sensor_superheating.port, statePoint4.sensorPort) annotation (Line(
      points={{8,-26},{8,-42},{-12,-42},{-12,-38}},
      color={153,204,0},
      thickness=0.5));
  connect(sensor_subcooling.sensorValue, expansionValveController.u_m)
    annotation (Line(points={{-118,32},{-118,38},{-128,38},{-128,16},{-132,16},
          {-132,11.8}}, color={0,0,127}));
  connect(heatPumpController.TSupplySet, TSupplySet) annotation (Line(points={{
          88.2143,-108.25},{88.2143,-174},{132,-174},{132,-200}}, color={0,0,
          127}));
  connect(EnableHeatSource, heatPumpController.enableHeatPump) annotation (Line(
        points={{0,-200},{0,-89},{80.6571,-89}}, color={255,0,255}));
  annotation (
  Diagram(
    coordinateSystem(
      extent={{-200,-180},{200,180}})),

  Icon(
    coordinateSystem(
      preserveAspectRatio=true,
      extent={{-200,-180},{200,180}}),

    graphics={
      Bitmap(
        extent={{-292,-218},{292,224}},
        fileName="modelica://SmartHouse/Images/HeatPumpCycle.png")}));


end HeatPumpCycle;
