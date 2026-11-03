within SmartHouse;
package HeatingSource

  partial model PartialHeatSource
    "Base model defining a common interface for heat sources"



    // Fluid parameters
    parameter TILMedia.Liquid.Types.BaseLiquid liquidType = sim.liquidType1
      "Liquid type"
      annotation (
        Dialog(tab="SIM", group="SIM"),
        choices(
          choice=sim.liquidType1 "Liquid 1 as defined in SIM",
          choice=sim.liquidType2 "Liquid 2 as defined in SIM",
          choice=sim.liquidType3 "Liquid 3 as defined in SIM"));

    outer TIL.SystemInformationManager sim
      "System information manager";

    // Water connections
    TIL.Connectors.LiquidPort WaterInput(
      liquidType=liquidType)
      "Return water"
      annotation (Placement(
        transformation(extent={{-210,-10},{-190,10}}), iconTransformation(
            extent={{-210,-10},{-190,10}})));

    TIL.Connectors.LiquidPort WaterOutput(
      liquidType=liquidType)
      "Supply water"
      annotation (Placement(
        transformation(extent={{190,-10},{210,10}}), iconTransformation(extent=
              {{190,-10},{210,10}})));

    Modelica.Blocks.Interfaces.RealOutput P_el
      "Electrical power consumption"
      annotation (Placement(
        transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={-50,190})));
    Modelica.Blocks.Interfaces.RealOutput HeatFlow
      "Heat supplied to the heating system"
      annotation (Placement(
        transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={50,190})));
                             annotation (Placement(
        transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={0,-198}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={10,-110})),
      Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,-180},{200,
              180}})),
      Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-200,-180},{
              200,180}})));

    // Outputs

  end PartialHeatSource;

  model HeatPumpCycle "Simplified air-to-water heat pump model"
    extends PartialHeatSource;

    // ============================================================
    // USER PARAMETERS
    // ============================================================


    // --- Fan control ---
    parameter Real fanSpeedHeating = 12
      "Fan speed during normal heating"
      annotation(Dialog(tab="Fan", group="Control"));

    parameter Real fanSpeedOff = 0.1
      "Fan speed when heat pump is disabled"
      annotation(Dialog(tab="Fan", group="Control"));


  // ============================================================
  // EVAPORATOR GEOMETRY
  // ============================================================

  parameter Modelica.Units.SI.Length evaporatorFinnedTubeLength = 6
    "Length of finned tubes"
    annotation(Dialog(tab="Evaporator", group="Geometry"));

  parameter Integer evaporatorNSerialTubes = 3
    "Number of tube rows in air-flow direction"
    annotation(Dialog(tab="Evaporator", group="Geometry"));

  parameter Modelica.Units.SI.Length evaporatorSerialTubeDistance = 22e-3
    "Distance between serial tubes"
    annotation(Dialog(tab="Evaporator", group="Geometry"));

  parameter Integer evaporatorNParallelTubes = 24
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
                  annotation (Placement(transformation(extent={{60,-56},{72,-36}},
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
      redeclare TIL.Utilities.Units.Conversions.Units.degC unit,
      initialSensorValue=30)
      annotation (Placement(transformation(extent={{-52,64},{-44,72}})));
    TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterIn(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
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

)   annotation (
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
      annotation (Placement(transformation(extent={{82,-110},{128,-68}})));
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
        TIL.Utilities.Units.Conversions.Units.degC unit)
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
        redeclare TIL.Utilities.Units.Conversions.Units.degC unit)
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
    Modelica.Blocks.Interfaces.RealInput TSupplySet
      "Supply water temperature setpoint in degC"
                                        annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={110,-200}),  iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
        origin={80,-170})));
    Modelica.Blocks.Interfaces.BooleanInput EnableHeatSource
      "Enable heat source operation" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={0,-200}), iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={0,-160})));
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
        points={{71,-42},{86,-42},{86,2},{84,2},{84,4}},
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
      annotation (Line(points={{126.686,-78.85},{138,-78.85},{138,-78},{148,-78},
            {148,13.8},{137.6,13.8}},
                                 color={255,0,255}));
    connect(heatPumpController.controllerSwitch, expansionValveController.activeInput)
      annotation (Line(points={{126.686,-78.85},{138,-78.85},{138,-78},{148,-78},
            {148,20},{-142,20},{-142,9.8},{-137.6,9.8}},
                                                    color={255,0,255}));
    connect(heatPumpController.controllerSwitch, expansionValveSwitch.u2) annotation (Line(
          points={{126.686,-78.85},{144,-78.85},{144,-86},{164,-86},{164,20},{
            -142,20},{-142,-22},{-129.2,-22}},
                   color={255,0,255}));
    connect(heatPumpController.TemperatureSetpoint, compressorController.u_s)
      annotation (Line(points={{126.686,-92.5},{142,-92.5},{142,10},{137.6,10}},
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
          points={{126.686,-99.5},{152,-99.5},{152,-132},{2,-132},{2,-94},{-20,
            -94}}, color={0,0,127}));
    connect(heatPumpController.enableHeatPump, EnableHeatSource) annotation (Line(
          points={{82.6571,-89},{12,-89},{12,-174},{0,-174},{0,-200}},
                                                                     color={255,0,
            255}));
    connect(compressorController.y, compressorSwitch.u1) annotation (Line(points={{125.6,10},
            {122,10},{122,-32},{116.8,-32},{116.8,-25.2}}, color={0,0,127}));
    connect(heatPumpController.controllerSwitchCompressor, compressorSwitch.u2)
      annotation (Line(points={{126.686,-71.5},{134,-71.5},{134,-42},{112,-42},
            {112,-25.2}},
                     color={255,0,255}));
    connect(compressorDisable.y, compressorSwitch.u3) annotation (Line(points={{106,-30.4},
            {106,-25.2},{107.2,-25.2}},
                                     color={0,0,127}));
    connect(TSupplySet, heatPumpController.TSupplySet) annotation (Line(points={{110,
            -200},{110,-174},{90,-174},{90,-146},{90.2143,-146},{90.2143,
            -108.25}}, color={0,0,127}));
    connect(compressor.portB, pressureState_hp.portA) annotation (Line(
        points={{84,20},{84,42},{-20,42}},
        color={153,204,0},
        thickness=0.5));
    connect(compressorSwitch.y, rotatoryBoundary1.n_in)
      annotation (Line(points={{112,-11.4},{112,6},{102,6}}, color={0,0,127}));
    connect(evaporator.portB_vle, separator.portInlet) annotation (Line(
        points={{-26,-42},{18,-42},{18,-42},{61,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(statePoint4.sensorPort, separator.portInlet) annotation (Line(
        points={{-12,-38},{-12,-42},{61,-42}},
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

  model HeatPumpController
    "Controller for normal heat-pump operation without defrost or pump-down"

    // ============================================================
    // PARAMETERS
    // ============================================================

    parameter Real fanSpeedHeating = 12
      "Fan speed during normal heat-pump operation";

    parameter Real fanSpeedOff = 0
      "Fan speed when heat pump is disabled";


    // ============================================================
    // INPUTS
    // ============================================================

    Modelica.Blocks.Interfaces.BooleanInput enableHeatPump
      "True: heat pump enabled"
      annotation (
        Placement(
          transformation(extent={{-152,-12},{-132,8}}),
          iconTransformation(extent={{-146,-10},{-126,10}})));

    Modelica.Blocks.Interfaces.RealInput TSupplySet
      "Requested supply-water temperature in degC"
      annotation (
        Placement(
          transformation(
            extent={{-20,-20},{20,20}},
            rotation=0,
            origin={-144,-68}),
          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-90,-110})));


    // ============================================================
    // OUTPUTS
    // ============================================================

    Modelica.Blocks.Interfaces.BooleanOutput controllerSwitch
      "True when PI temperature control is enabled"
      annotation (
        Placement(
          transformation(extent={{136,32},{152,48}}),
          iconTransformation(extent={{124,50},{140,66}})));

    Modelica.Blocks.Interfaces.BooleanOutput controllerSwitchCompressor
      "True when compressor operation is enabled"
      annotation (
        Placement(
          transformation(extent={{136,72},{152,88}}),
          iconTransformation(extent={{124,92},{140,108}})));

    Modelica.Blocks.Interfaces.RealOutput TemperatureSetpoint
      "Supply-water temperature setpoint in degC"
      annotation (
        Placement(
          transformation(extent={{136,-58},{152,-42}}),
          iconTransformation(extent={{124,-28},{140,-12}})));

    Modelica.Blocks.Interfaces.RealOutput fanSpeed
      "Fan-speed command"
      annotation (
        Placement(
          transformation(extent={{136,-88},{152,-72}}),
          iconTransformation(extent={{124,-68},{140,-52}})));


  equation

    // ============================================================
    // TEMPERATURE SETPOINT
    // ============================================================

    TemperatureSetpoint = TSupplySet;


    // ============================================================
    // HEAT-PUMP ENABLE SIGNALS
    // ============================================================

    controllerSwitch = enableHeatPump;

    controllerSwitchCompressor = enableHeatPump;


    // ============================================================
    // FAN CONTROL
    // ============================================================

    fanSpeed =
      if enableHeatPump then fanSpeedHeating
      else fanSpeedOff;


  annotation (
    Icon(
      coordinateSystem(
        preserveAspectRatio=false,
        extent={{-140,-120},{140,120}})),

    Diagram(
      coordinateSystem(
        preserveAspectRatio=false,
        extent={{-140,-120},{140,120}})));

  end HeatPumpController;

  model TestHeatPump "Stand-alone test model for validation of heat-pump"
    TIL.LiquidComponents.Boundaries.Boundary boundary(m_flowFixed=-0.15, TFixed
        =303.15)
      annotation (Placement(transformation(extent={{-104,-10},{-96,10}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary1(boundaryType="p")
      annotation (Placement(transformation(extent={{96,-10},{104,10}})));
    Modelica.Blocks.Sources.RealExpression T_ambient(y=278.15)
      "Disable compressor when heat source is turned of" annotation (Placement(
          transformation(
          extent={{-16,-8},{16,8}},
          rotation=90,
          origin={-12,-72})));
    Modelica.Blocks.Sources.BooleanExpression Enable(y=true) annotation (
        Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={4,-72})));
    TIL.LiquidComponents.Sensors.Sensor_T sensor_T(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-84,40},{-76,48}})));
    TIL.LiquidComponents.Sensors.Sensor_T sensor_T1(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{62,34},{70,42}})));
   inner TIL.SystemInformationManager sim(
    redeclare TILMedia.VLEFluid.Types.TILMedia_Propane vleFluidType1,
    redeclare TILMedia.Gas.Types.TILMedia_DryAir gasType1,
    redeclare TILMedia.Liquid.Types.TILMedia_Water liquidType1);
    HeatPumpCycle heatPumpCycle1(
      fanSpeedHeating=15,
      evaporatorNSerialTubes=5,
      separatorVolume=5e-3)
      annotation (Placement(transformation(extent={{-20,-20},{20,16}})));
    Modelica.Blocks.Sources.RealExpression T_ambient1(y=35)
      "Disable compressor when heat source is turned of" annotation (Placement(
          transformation(
          extent={{-16,-8},{16,8}},
          rotation=90,
          origin={24,-72})));
  equation
    connect(sensor_T1.port, boundary1.port) annotation (Line(
        points={{66,34},{66,0},{100,0}},
        color={0,170,238},
        thickness=0.5));
    connect(boundary.port, heatPumpCycle1.WaterInput) annotation (Line(
        points={{-100,0},{-60,0},{-60,-2},{-20,-2}},
        color={0,170,238},
        thickness=0.5));
    connect(heatPumpCycle1.WaterOutput, boundary1.port) annotation (Line(
        points={{20,-2},{60,-2},{60,0},{100,0}},
        color={0,170,238},
        thickness=0.5));
    connect(Enable.y, heatPumpCycle1.EnableHeatSource) annotation (Line(points={{4,-61},
            {4,-24},{0,-24},{0,-18}},      color={255,0,255}));
    connect(T_ambient.y, heatPumpCycle1.T_ambient) annotation (Line(points={{-12,
            -54.4},{-12,-22},{-8,-22},{-8,-19}},
                                          color={0,0,127}));
    connect(T_ambient1.y, heatPumpCycle1.TSupplySet) annotation (Line(points={{24,
            -54.4},{24,-22},{8,-22},{8,-19}}, color={0,0,127}));
    connect(sensor_T.port, heatPumpCycle1.WaterInput) annotation (Line(
        points={{-80,40},{-80,-2},{-20,-2}},
        color={0,170,238},
        thickness=0.5));
      annotation (Placement(transformation(extent={{-62,-66},{-42,-46}})),
                Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false), graphics={Bitmap(extent=
                {{-92,80},{-92,82}}, fileName="")}));
  end TestHeatPump;

  model TestHotWaterStorage

    inner TIL.SystemInformationManager sim(
      redeclare TILMedia.VLEFluid.Types.TILMedia_Propane vleFluidType1,
      redeclare TILMedia.Gas.Types.TILMedia_DryAir gasType1,
      redeclare TILMedia.Liquid.Types.TILMedia_Water liquidType1);


    // ============================================================
    // MAIN SYSTEM
    // ============================================================

    HeatPump_ThermalStorage heatPump_ThermalStorage(
      useHeatPump=true,
      useElectricalBoiler=false)
      annotation (
        Placement(
          transformation(
            extent={{-20,-20},{20,20}},
            origin={0,0})));


    // ============================================================
    // CONTROL INPUTS
    // ============================================================

    Modelica.Blocks.Sources.RealExpression T_ambient(
      y=278.15)
      "Ambient temperature"
      annotation (
        Placement(
          transformation(
            extent={{-16,-8},{16,8}},
            rotation=90,
            origin={60,-70})));

    Modelica.Blocks.Sources.BooleanExpression Enable(
      y=false)
      "No space-heating demand during DHW charging test"
      annotation (
        Placement(
          transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-60,-70})));


    // ============================================================
    // SPACE-HEATING LOOP SENSORS
    // ============================================================

    TIL.LiquidComponents.Sensors.Sensor_T sensor_T(
      redeclare TIL.Utilities.Units.Conversions.Units.degC unit)
      "Return temperature"
      annotation (
        Placement(
          transformation(
            extent={{-8,-8},{8,8}},
            origin={-60,0})));

    TIL.LiquidComponents.Sensors.Sensor_T sensor_T1(
      redeclare TIL.Utilities.Units.Conversions.Units.degC unit)
      "Supply temperature"
      annotation (
        Placement(
          transformation(
            extent={{-8,-8},{8,8}},
            origin={60,0})));


    // ============================================================
    // DHW BOUNDARIES
    // ============================================================

    TIL.LiquidComponents.Boundaries.Boundary boundary(
      boundaryType="m_flow",
      m_flowFixed=0,
      TFixed=303.15)
      "Cold domestic water inlet"
      annotation (
        Placement(
          transformation(
            extent={{-6,-12},{6,12}},
            rotation=90,
            origin={0,-80})));

    TIL.LiquidComponents.Boundaries.Boundary boundary2(
      boundaryType="p")
      "Domestic hot water outlet"
      annotation (
        Placement(
          transformation(
            extent={{-6,-12},{6,12}},
            rotation=90,
            origin={0,80})));


  equation

    // ============================================================
    // CONTROL SIGNALS
    // ============================================================

    connect(
      Enable.y,
      heatPump_ThermalStorage.SpaceHeatingDemand)
      annotation (
        Line(
          points={{-60,-59},{-60,-34},{-16,-34},{-16,-18}},
          color={255,0,255}));

    connect(
      T_ambient.y,
      heatPump_ThermalStorage.T_ambient)
      annotation (
        Line(
          points={{60,-52.4},{60,-34},{18,-34},{18,-18}},
          color={0,0,127}));


    // ============================================================
    // ELECTRIC-BOILER BYPASS
    //
    // The boiler is disabled in this test.
    // Therefore both boiler ports are connected directly.
    // ============================================================

    connect(
      heatPump_ThermalStorage.ToElectricalBoiler,
      heatPump_ThermalStorage.FromElectricalBoiler)
      annotation (
        Line(
          points={{8,-20},{8,-34},{14,-34},{14,-20}},
          color={0,170,238},
          thickness=0.5));


    // ============================================================
    // DHW LOOP
    // ============================================================

    connect(
      boundary.port,
      heatPump_ThermalStorage.WaterInput1)
      annotation (
        Line(
          points={{0,-80},{0,-20}},
          color={0,170,238},
          thickness=0.5));

    connect(
      heatPump_ThermalStorage.WaterOutput1,
      boundary2.port)
      annotation (
        Line(
          points={{0,20},{0,80}},
          color={0,170,238},
          thickness=0.5));


    // ============================================================
    // SPACE-HEATING LOOP
    // ============================================================

    connect(
      heatPump_ThermalStorage.WaterInput,
      sensor_T.port)
      annotation (
        Line(
          points={{-20,0},{-40,0},{-40,-8},{-60,-8}},
          color={0,170,238},
          thickness=0.5));

    connect(
      heatPump_ThermalStorage.WaterOutput,
      sensor_T1.port)
      annotation (
        Line(
          points={{20,0},{40,0},{40,-8},{60,-8}},
          color={0,170,238},
          thickness=0.5));

    // Closed heating loop for this test
    connect(
      heatPump_ThermalStorage.WaterInput,
      heatPump_ThermalStorage.WaterOutput)
      annotation (
        Line(
          points={{-20,0},{-32,0},{-32,36},{32,36},{32,0},{20,0}},
          color={0,170,238},
          thickness=0.5));


  annotation (
    Icon(
      coordinateSystem(
        preserveAspectRatio=false)),
    Diagram(
      coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}})));

  end TestHotWaterStorage;

  model HeatPump_ThermalStorage
    "Heat pump + DHW storage with interface for optional electric boiler"

    outer TIL.SystemInformationManager sim;

    // ============================================================
    // MEDIA
    // ============================================================
    parameter TILMedia.Liquid.Types.BaseLiquid liquidType =
      sim.liquidType1
      "Liquid type";

    // ============================================================
    // SCENARIO SWITCHES
    // ============================================================
    parameter Boolean useHeatPump = true
      "Enable heat pump in this scenario"
      annotation(Dialog(tab="Operation", group="Scenario"));

    parameter Boolean useElectricalBoiler = true
      "Enable electric boiler in this scenario"
      annotation(Dialog(tab="Operation", group="Scenario"));

    parameter Modelica.Units.SI.Temperature boilerBivalentTemperature = 273.15
      "Below this ambient temperature the boiler may support the heat pump"
      annotation(Dialog(tab="Operation", group="Electric boiler"));

    parameter Modelica.Units.SI.TemperatureDifference boilerTemperatureDeadband = 2
      "Boiler support starts if HP outlet is this much below the requested supply temperature"
      annotation(Dialog(tab="Operation", group="Electric boiler"));

    parameter Modelica.Units.SI.VolumeFlowRate heatingCircuitVolumeFlow = 0.25e-3
      "Circulation flow when a heat source is requested"
      annotation(Dialog(tab="Operation", group="Hydraulics"));


    // ============================================================
    // MAIN COMPONENTS
    // ============================================================
    HeatPumpCycle heatPumpCycle1(
      fanSpeedHeating=15,
      evaporatorFinnedTubeLength=8,
      evaporatorNSerialTubes=5,
      evaporatorNParallelTubes=30,
      separatorInitialFillingLevel=0.2)
      annotation (
        Placement(
          transformation(extent={{-34,-28},{28,28}})));

    ThermalstorageController thermalstorageController
      annotation (
        Placement(
          transformation(extent={{-28,-58},{-8,-38}})));

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
      presetVariableType="V_flow",
      m_flowFixed=0.03,
      use_volumeFlowRateInput=true)
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
    TIL.LiquidComponents.Sensors.Sensor_T sensor_T_afterHeatPump(
      redeclare TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (
        Placement(
          transformation(extent={{34,4},{42,12}})));


    // ============================================================
    // EXTERNAL THERMAL/HYDRAULIC INTERFACES
    // ============================================================
    Modelica.Blocks.Interfaces.RealInput T_ambient
      "Ambient temperature in K"
      annotation (
        Placement(
          transformation(
            extent={{-20,-20},{20,20}},
            rotation=90,
            origin={-50,-100}),
          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={90,-90})));

    Modelica.Blocks.Interfaces.BooleanInput SpaceHeatingDemand
      "Automatic heating demand from house/room controller"
      annotation (
        Placement(
          transformation(
            extent={{-20,-20},{20,20}},
            rotation=90,
            origin={-10,-100}),
          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-80,-90})));

    TIL.Connectors.LiquidPort WaterInput(
      liquidType=liquidType)
      "Space-heating return water"
      annotation (
        Placement(
          transformation(extent={{-110,-10},{-90,10}}),
          iconTransformation(extent={{-110,-10},{-90,10}})));

    TIL.Connectors.LiquidPort WaterOutput(
      liquidType=liquidType)
      "Space-heating supply water"
      annotation (
        Placement(
          transformation(extent={{-110,50},{-90,70}}),
          iconTransformation(extent={{90,-10},{110,10}})));

    TIL.Connectors.LiquidPort WaterOutput1(
      liquidType=liquidType)
      "Domestic hot water outlet"
      annotation (
        Placement(
          transformation(extent={{90,60},{110,80}}),
          iconTransformation(extent={{-10,90},{10,110}})));

    TIL.Connectors.LiquidPort WaterInput1(
      liquidType=liquidType)
      "Cold domestic water inlet"
      annotation (
        Placement(
          transformation(extent={{90,36},{110,56}}),
          iconTransformation(extent={{-10,-110},{10,-90}})));


    // ============================================================
    // ELECTRIC-BOILER HYDRAULIC INTERFACE
    //
    // Hydraulic order:
    //
    // HeatPump
    //    ↓
    // ToElectricalBoiler
    //    ↓
    // Electric Boiler
    //    ↓
    // FromElectricalBoiler
    //    ↓
    // Pump
    //    ↓
    // Three-way valve
    // ============================================================
    TIL.Connectors.LiquidPort ToElectricalBoiler(
      liquidType=liquidType)
      "Water leaving heat pump and entering electric boiler"
      annotation (
        Placement(
          transformation(extent={{90,-10},{110,10}}),
          iconTransformation(extent={{30,-110},{50,-90}})));

    TIL.Connectors.LiquidPort FromElectricalBoiler(
      liquidType=liquidType)
      "Water returning from electric boiler"
      annotation (
        Placement(
          transformation(extent={{90,4},{110,24}}),
          iconTransformation(extent={{60,-110},{80,-90}})));


    // ============================================================
    // ELECTRIC-BOILER CONTROL INTERFACE
    // ============================================================
    Modelica.Blocks.Interfaces.BooleanOutput EnableElectricalBoiler
      "True when the electric boiler is allowed and required"
      annotation (
        Placement(
          transformation(extent={{96,-66},{116,-46}}),
          iconTransformation(extent={{90,-70},{110,-50}})));

    Modelica.Blocks.Interfaces.RealOutput TBoilerSet
      "Requested boiler outlet temperature in degC"
      annotation (
        Placement(
          transformation(extent={{96,-90},{116,-70}}),
          iconTransformation(extent={{90,-100},{110,-80}})));


    // ============================================================
    // INTERNAL CONTROL SIGNALS
    // ============================================================

    // Heat pump is active only if:
    // 1. heat pump is enabled for this scenario
    // 2. controller requests heat
    Modelica.Blocks.Sources.BooleanExpression heatPumpEnable(
      y=useHeatPump
        and thermalstorageController.EnableHeatSource)
      "Heat-pump enable after scenario switch"
      annotation (
        Placement(
          transformation(extent={{22,-62},{46,-50}})));


    // Boiler is active if:
    // 1. boiler is enabled for this scenario
    // 2. heat is required
    // 3. boiler-only mode OR HP needs support
    Modelica.Blocks.Sources.BooleanExpression boilerEnable(
      y=useElectricalBoiler
        and thermalstorageController.EnableHeatSource
        and (
          not useHeatPump
          or (
            T_ambient < boilerBivalentTemperature
            and sensor_T_afterHeatPump.sensorValue
              < thermalstorageController.TSupplySet
                - boilerTemperatureDeadband)))
      "Boiler-only mode, or support when HP has a temperature deficit"
      annotation (
        Placement(
          transformation(extent={{68,-28},{100,-16}})));


    // Circulation pump
    Modelica.Blocks.Sources.RealExpression pumpFlow(
      y=if thermalstorageController.EnableHeatSource
           and (useHeatPump or useElectricalBoiler)
        then heatingCircuitVolumeFlow
        else 0)
      "Circulation flow whenever at least one heat source is available"
      annotation (
        Placement(
          transformation(
            extent={{0,-10},{20,10}},
            origin={90,30},
            rotation=180)));


  equation

    // ============================================================
    // AMBIENT TEMPERATURE
    // ============================================================
    connect(
      T_ambient,
      heatPumpCycle1.T_ambient)
      annotation (
        Line(
          points={{-50,-100},{-50,-32},{-15.4,-32},{-15.4,-26.4444}},
          color={0,0,127}));


    // ============================================================
    // SPACE-HEATING DEMAND
    // ============================================================
    connect(
      SpaceHeatingDemand,
      thermalstorageController.SpaceHeatingDemand)
      annotation (
        Line(
          points={{-10,-100},{-10,-62},{-32,-62},{-32,-53},{-27,-53}},
          color={255,0,255}));


    // ============================================================
    // DHW STORAGE TEMPERATURE
    // ============================================================
    connect(
      hotWaterTank.temperatureSensorsOutput[5],
      thermalstorageController.T_DHW)
      annotation (
        Line(
          points={{
            69,62.9},
            {52,62.9},
            {52,-72},
            {-46,-72},
            {-46,-46},
            {-28,-46},
            {-28,-45},
            {-27,-45}},
          color={0,0,127}));


    // ============================================================
    // HEAT-PUMP CONTROL
    // ============================================================
    connect(
      heatPumpEnable.y,
      heatPumpCycle1.EnableHeatSource)
      annotation (
        Line(
          points={{47.2,-56},{50,-56},{50,-32},{-3,-32},{-3,-24.8889}},
          color={255,0,255}));

    connect(
      thermalstorageController.TSupplySet,
      heatPumpCycle1.TSupplySet)
      annotation (
        Line(
          points={{-8.8,-52},{9.4,-52},{9.4,-26.4444}},
          color={0,0,127}));


    // ============================================================
    // THREE-WAY VALVE CONTROL
    // ============================================================
    connect(
      thermalstorageController.threeWayValve,
      linearDirectionalControlValve.switchingPosition_in)
      annotation (
        Line(
          points={{-8.8,-48},{46,-48},{46,74},{28,74},{28,66.9}},
          color={0,0,127}));


    // ============================================================
    // ELECTRIC-BOILER CONTROL
    // ============================================================
    EnableElectricalBoiler =
      boilerEnable.y;

    TBoilerSet =
      thermalstorageController.TSupplySet;


    // ============================================================
    // HEAT-PUMP -> BOILER HYDRAULIC PATH
    // ============================================================
    connect(
      heatPumpCycle1.WaterOutput,
      ToElectricalBoiler)
      annotation (
        Line(
          points={{28,0},{100,0}},
          color={0,170,238},
          thickness=0.5));

    connect(
      sensor_T_afterHeatPump.port,
      heatPumpCycle1.WaterOutput)
      annotation (
        Line(
          points={{38,4},{34,4},{34,0},{28,0}},
          color={0,170,238},
          thickness=0.5));


    // ============================================================
    // BOILER -> PUMP
    // ============================================================
    connect(
      FromElectricalBoiler,
      pump.portA)
      annotation (
        Line(
          points={{100,14},{48,14},{48,22},{28,22}},
          color={0,170,238},
          thickness=0.5));


    // ============================================================
    // PUMP -> THREE-WAY VALVE
    // ============================================================
    connect(
      pump.portB,
      linearDirectionalControlValve.portA)
      annotation (
        Line(
          points={{28,38},{28,48}},
          color={0,170,238},
          thickness=0.5));

    connect(
      pumpFlow.y,
      pump.V_flow_in)
      annotation (
        Line(
          points={{69,30},{38,30}},
          color={0,0,127}));


    // ============================================================
    // FLOOR-HEATING BRANCH
    // ============================================================
    connect(
      WaterOutput,
      linearDirectionalControlValve.portB)
      annotation (
        Line(
          points={{-100,60},{16,60}},
          color={0,170,238},
          thickness=0.5));


    // ============================================================
    // DHW STORAGE CHARGING BRANCH
    // ============================================================
    connect(
      linearDirectionalControlValve.portC,
      hotWaterTank.liquidFluidPortA)
      annotation (
        Line(
          points={{40,60},{42,60},{42,40},{70,40}},
          color={0,170,238},
          thickness=0.5));


    // ============================================================
    // RETURN PATH
    // ============================================================
    connect(
      junction.portC,
      WaterInput)
      annotation (
        Line(
          points={{-90,0},{-100,0}},
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
      expansionTank.portB,
      heatPumpCycle1.WaterInput)
      annotation (
        Line(
          points={{-60,0},{-34,0}},
          color={0,170,238},
          thickness=0.5));

    connect(
      junction.portA,
      hotWaterTank.liquidFluidPortB)
      annotation (
        Line(
          points={{-86,-4},{-86,-76},{58,-76},{58,46},{70,46}},
          color={0,170,238},
          thickness=0.5));


    // ============================================================
    // DOMESTIC HOT WATER
    // ============================================================
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


    connect(ToElectricalBoiler, ToElectricalBoiler) annotation (Line(
        points={{100,0},{100,0}},
        color={0,170,238},
        thickness=0.5));
  annotation (
    Icon(
      coordinateSystem(
        preserveAspectRatio=false)),
    Diagram(
      coordinateSystem(
        preserveAspectRatio=false)));

  end HeatPump_ThermalStorage;

  model ThermalstorageController
    "Supervisory controller for space heating and DHW charging"

    extends Modelica.Blocks.Icons.Block;

    // ============================================================
    // TEMPERATURE SETPOINTS
    // ============================================================

    parameter Real THeating = 35
      "Supply temperature for floor heating in degC";

    parameter Real TDHW = 60
      "Supply temperature for DHW charging in degC";

    parameter Modelica.Units.SI.Temperature TDHWMin = 45 + 273.15
      "DHW temperature below which charging starts";

    parameter Modelica.Units.SI.Temperature TDHWMax = 58 + 273.15
      "DHW temperature above which charging stops";


    // ============================================================
    // INPUTS
    // ============================================================

    Modelica.Blocks.Interfaces.BooleanInput SpaceHeatingDemand
      "Automatic heating demand from house/room controller"
      annotation (
        Placement(
          transformation(extent={{-110,40},{-90,60}}),
          iconTransformation(extent={{-100,-60},{-80,-40}})));

    Modelica.Blocks.Interfaces.RealInput T_DHW
      "DHW storage temperature in K"
      annotation (
        Placement(
          transformation(
            extent={{-20,-20},{20,20}},
            rotation=0,
            origin={-100,-30}),
          iconTransformation(
            extent={{-10,-10},{10,10}},
            origin={-90,30})));


    // ============================================================
    // OUTPUTS
    // ============================================================

    Modelica.Blocks.Interfaces.RealOutput TSupplySet
      "Requested heating-system supply temperature in degC"
      annotation (
        Placement(
          transformation(extent={{92,22},{108,38}}),
          iconTransformation(extent={{84,-48},{100,-32}})));

    Modelica.Blocks.Interfaces.RealOutput threeWayValve
      "Control signal for three-way valve"
      annotation (
        Placement(
          transformation(extent={{92,-8},{108,8}}),
          iconTransformation(extent={{84,-8},{100,8}})));

    Modelica.Blocks.Interfaces.BooleanOutput EnableHeatSource
      "True whenever the heating system has to produce heat"
      annotation (
        Placement(
          transformation(extent={{92,-38},{108,-22}}),
          iconTransformation(extent={{84,32},{100,48}})));

    Modelica.Blocks.Interfaces.BooleanOutput DHWPriority
      "True while DHW storage has priority"
      annotation (
        Placement(
          transformation(extent={{92,-68},{108,-52}}),
          iconTransformation(extent={{84,62},{100,78}})));


    // ============================================================
    // INTERNAL LOGIC
    // ============================================================

    Boolean DHWmode
      "Internal DHW priority state";

    Modelica.Blocks.Logical.Hysteresis tankWarm(
      uLow=TDHWMin,
      uHigh=TDHWMax,
      pre_y_start=false)
      annotation (
        Placement(
          transformation(extent={{-12,-40},{8,-20}})));


  equation

    // DHW tank temperature hysteresis
    connect(T_DHW, tankWarm.u);

    // tankWarm = false -> tank requires charging
    DHWmode = not tankWarm.y;

    DHWPriority = DHWmode;


    // ------------------------------------------------------------
    // SUPPLY TEMPERATURE
    // ------------------------------------------------------------

    TSupplySet =
      if DHWmode then TDHW
      else THeating;


    // ------------------------------------------------------------
    // 3-WAY VALVE
    //
    // 1 -> DHW storage charging
    // 0 -> space heating
    // ------------------------------------------------------------

    threeWayValve =
      if DHWmode then 0.9999
      else 0.0001;


    // ------------------------------------------------------------
    // GENERAL HEAT DEMAND
    //
    // DHW always has priority.
    // Otherwise heat is produced only if the house requests heating.
    // ------------------------------------------------------------

    EnableHeatSource =
      DHWmode or SpaceHeatingDemand;


  annotation (
    Icon(
      coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}}),
      graphics={
        Text(
          extent={{-70,20},{70,-20}},
          textString="Storage\nController")}),
    Diagram(
      coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}})));

  end ThermalstorageController;

  model ElectricalBoiler "Simple on/off electric boiler"
    extends PartialHeatSource;

    // ============================================================
    // MEDIUM
    // ============================================================

    outer TIL.SystemInformationManager sim;

    replaceable parameter TILMedia.Liquid.Types.BaseLiquid liquidType =
        sim.liquidType1
      "Liquid used in the hydronic circuit"
      annotation (
        choicesAllMatching=true,
        Dialog(tab="Medium"));


    // ============================================================
    // BOILER PARAMETERS
    // ============================================================

    parameter Modelica.Units.SI.Power P_nominal = 9000
      "Nominal electrical power"
      annotation (
        Dialog(tab="Boiler", group="Performance"));

    parameter Real eta(min=0, max=1) = 0.98
      "Electrical-to-thermal efficiency"
      annotation (
        Dialog(tab="Boiler", group="Performance"));



    // ============================================================
    // HEATING POWER
    // ============================================================

    Modelica.Blocks.Sources.RealExpression boilerHeatFlow(y=if EnableHeatSource
           then -eta*P_nominal else 0)
      annotation (
        Placement(transformation(
          extent={{-30,-10},{30,10}},
          origin={-54,90})));


    // ============================================================
    // HYDRAULIC COMPONENT
    // ============================================================

    TIL.LiquidComponents.Tubes.Tube tube1(
      tubeGeometry(
        innerDiameter=0.020,
        wallThickness=0.0015,
        length=2.5),
    nCells=1,
    enableHeatPorts=true,

      redeclare model TubeSideHeatTransferModel =
          TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
          (constantAlpha=4000),

    redeclare model WallHeatConductionModel =
      TIL.LiquidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,

    redeclare model PressureDropModel =
      TIL.LiquidComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop

)   annotation (
      Placement(transformation(
        extent={{-8,-2},{8,2}})));


    // ============================================================
    // THERMAL BOUNDARY
    // ============================================================

    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary(
      boundaryType="Q_flow",
      use_heatFlowRateInput=true)
      annotation (
        Placement(transformation(
          extent={{-4,-6},{4,6}},
          rotation=270,
          origin={0,72})));


  equation

    // ------------------------------------------------------------
    // Hydraulic circuit
    // ------------------------------------------------------------

    connect(WaterInput, tube1.portA)
      annotation (
        Line(
          points={{-200,0},{-8,0}},
          color={0,170,238},
          thickness=0.5));

    connect(tube1.portB, WaterOutput)
      annotation (
        Line(
          points={{8,0},{200,0}},
          color={0,170,238},
          thickness=0.5));


    // ------------------------------------------------------------
    // Heating
    // ------------------------------------------------------------

    connect(boilerHeatFlow.y, heatBoundary.Q_flow_in)
      annotation (
        Line(
          points={{-21,90},{-2,90},{-2,76}},
          color={0,0,127}));

    connect(heatBoundary.heatPort, tube1.heatPort[1])
      annotation (
        Line(
          points={{0,72},{0,2}},
          color={204,0,0},
          thickness=0.5));


    // ------------------------------------------------------------
    // Outputs
    // ------------------------------------------------------------

    HeatFlow =
    if EnableHeatSource then
      eta*P_nominal
    else
      0;

    P_el =
    if EnableHeatSource then
      P_nominal
    else
      0;


  end ElectricalBoiler;

  model ElectricalBoiler_ThermalStorage
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
    ElectricalBoiler electricalBoiler
      annotation (Placement(transformation(extent={{-22,-18},{18,18}})));
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
      annotation (Line(points={{69,62.9},{52,62.9},{52,-72},{-46,-72},{-46,-46},
            {-28,-46},{-28,-45},{-27,-45}},
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
    connect(electricalBoiler.WaterOutput, pump.portA) annotation (Line(
        points={{18,0},{28,0},{28,22}},
        color={0,170,238},
        thickness=0.5));
    connect(electricalBoiler.WaterInput, expansionTank.portB) annotation (Line(
        points={{-22,0},{-60,0}},
        color={0,170,238},
        thickness=0.5));
    connect(electricalBoiler.EnableHeatSource, thermalstorageController.EnableHeatPump)
      annotation (Line(points={{-2,-16},{-2,-44},{-8.8,-44}}, color={255,0,255}));

                                                      annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=180,
          origin={78,20})),
                Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end ElectricalBoiler_ThermalStorage;

  model TestElectricalBoiler
    inner TIL.SystemInformationManager sim(
      redeclare replaceable TILMedia.Liquid.Types.TILMedia_Water liquidType1)
      annotation (Placement(transformation(extent={{80,80},{100,100}})));
    Modelica.Blocks.Sources.BooleanExpression Enable(y=false)
                                                             annotation (
        Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={-8,-58})));
    TIL.LiquidComponents.Sensors.Sensor_T sensor_T(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-84,60},{-76,68}})));
    TIL.LiquidComponents.Sensors.Sensor_T sensor_T1(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{62,54},{70,62}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary(
      boundaryType="m_flow",
      m_flowFixed=0,
      TFixed=303.15)
      annotation (Placement(transformation(extent={{-4,-10},{4,10}},
          rotation=90,
          origin={0,-90})));
    TIL.LiquidComponents.Boundaries.Boundary boundary2(boundaryType="p")
      annotation (Placement(transformation(extent={{-4,-10},{4,10}},
          rotation=90,
          origin={0,70})));
    ElectricalBoiler_ThermalStorage electricalBoiler_ThermalStorage
      annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  equation
    connect(Enable.y, electricalBoiler_ThermalStorage.HeatingDemand)
      annotation (Line(points={{-8,-47},{-8,-8}}, color={255,0,255}));
    connect(boundary.port, electricalBoiler_ThermalStorage.WaterInput1)
      annotation (Line(
        points={{0,-90},{0,-10}},
        color={0,170,238},
        thickness=0.5));
    connect(electricalBoiler_ThermalStorage.WaterOutput1, boundary2.port)
      annotation (Line(
        points={{0,10},{0,70}},
        color={0,170,238},
        thickness=0.5));
    connect(electricalBoiler_ThermalStorage.WaterInput, sensor_T.port)
      annotation (Line(
        points={{-10,0},{-80,0},{-80,60}},
        color={0,170,238},
        thickness=0.5));
    connect(electricalBoiler_ThermalStorage.WaterInput,
      electricalBoiler_ThermalStorage.WaterOutput) annotation (Line(
        points={{-10,0},{-14,0},{-14,14},{14,14},{14,0},{10.2,0}},
        color={0,170,238},
        thickness=0.5));
    connect(electricalBoiler_ThermalStorage.WaterOutput, sensor_T1.port)
      annotation (Line(
        points={{10.2,0},{14,0},{14,48},{66,48},{66,54}},
        color={0,170,238},
        thickness=0.5));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end TestElectricalBoiler;

  model HeatingController
    "Controlls the massflows for floorheating in each room"

      outer TIL.SystemInformationManager sim;

    replaceable parameter TILMedia.Liquid.Types.BaseLiquid liquidType =
        sim.liquidType1
      "Liquid used in the heating circuit"
      annotation(
        choicesAllMatching=true,
        Dialog(tab="Medium"));

    // ============================================================
    // ROOM TEMPERATURE SETPOINTS
    // ============================================================

    parameter Real T_set1 = 21
      "Room 1 temperature setpoint in degC"
      annotation(Dialog(tab="Room setpoints", group="Room temperatures"));

    parameter Real T_set2 = 21
      "Room 2 temperature setpoint in degC"
      annotation(Dialog(tab="Room setpoints", group="Room temperatures"));

    parameter Real T_set3 = 21
      "Room 3 temperature setpoint in degC"
      annotation(Dialog(tab="Room setpoints", group="Room temperatures"));

    parameter Real T_set4 = 21
      "Room 4 temperature setpoint in degC"
      annotation(Dialog(tab="Room setpoints", group="Room temperatures"));

    // ============================================================
    // PID PARAMETERS
    // ============================================================

    parameter Real k = 0.025
      "PID proportional gain"
      annotation(Dialog(tab="Controller", group="PID"));

    parameter Modelica.Units.SI.Time Ti = 900
      "PID integral time"
      annotation(Dialog(tab="Controller", group="PID"));

    parameter Modelica.Units.SI.Time Td = 30
      "PID derivative time"
      annotation(Dialog(tab="Controller", group="PID"));
  parameter Modelica.Units.SI.Area A_eff_max = 2e-5
    "Maximum effective flow area of room valve";



  // ============================================================
    // HYDRAULIC PORTS
    // ============================================================

    TIL.Connectors.LiquidPort WaterSupply
      "Heating water supply from thermal storage"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={20,100}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={20,100})));

    TIL.Connectors.LiquidPort WaterReturn
      "Heating water return to thermal storage"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={40,-100}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={40,-100})));

    TIL.Connectors.LiquidPort Room1Supply
      "Supply to floor heating room 1"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={100,80}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={100,80})));

    TIL.Connectors.LiquidPort Room1Return
      "Return from floor heating room 1"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={100,100}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={100,100})));


    TIL.Connectors.LiquidPort Room2Supply
      "Supply to floor heating room 2"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={100,40}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={100,40})));

    TIL.Connectors.LiquidPort Room2Return
      "Return from floor heating room 2"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={100,20}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={100,20})));


    TIL.Connectors.LiquidPort Room3Supply
      "Supply to floor heating room 3"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={100,-20}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={100,-20})));

    TIL.Connectors.LiquidPort Room3Return
      "Return from floor heating room 3"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={100,-40}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={100,-40})));


    TIL.Connectors.LiquidPort Room4Supply
      "Supply to floor heating room 4"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={100,-80}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={100,-80})));

    TIL.Connectors.LiquidPort Room4Return
      "Return from floor heating room 4"
      annotation(Placement(transformation(
        extent={{-10,-10},{10,10}},
        origin={100,-100}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          origin={100,-100})));

    // ============================================================
    // PID CONTROLLERS
    // ============================================================

    Modelica.Blocks.Continuous.LimPID pid1(
      controllerType=Modelica.Blocks.Types.SimpleController.PID,
      k=k,
      Ti=Ti,
      Td=Td,
      yMin=0,
      yMax=A_eff_max)
      annotation(Placement(transformation(
        extent={{-12,-12},{12,12}},
        origin={-40,80})));

    Modelica.Blocks.Continuous.LimPID pid2(
      controllerType=Modelica.Blocks.Types.SimpleController.PID,
      k=k,
      Ti=Ti,
      Td=Td,
      yMin=0,
      yMax=A_eff_max)
      annotation(Placement(transformation(
        extent={{-12,-12},{12,12}},
        origin={0,40})));

    Modelica.Blocks.Continuous.LimPID pid3(
      controllerType=Modelica.Blocks.Types.SimpleController.PID,
      k=k,
      Ti=Ti,
      Td=Td,
      yMin=0,
      yMax=A_eff_max)
      annotation(Placement(transformation(
        extent={{-12,-12},{12,12}},
        origin={-40,-20})));

    Modelica.Blocks.Continuous.LimPID pid4(
      controllerType=Modelica.Blocks.Types.SimpleController.PID,
      k=k,
      Ti=Ti,
      Td=Td,
      yMin=0,
      yMax=A_eff_max)
      annotation(Placement(transformation(
        extent={{-12,-12},{12,12}},
        origin={0,-60})));

  // ============================================================
    // CONSTANT SETPOINTS
    // ============================================================

    Modelica.Blocks.Sources.RealExpression setpoint1(y=T_set1)
      annotation(Placement(transformation(
        extent={{-12,-8},{12,8}},
        origin={-100,94})));

    Modelica.Blocks.Sources.RealExpression setpoint2(y=T_set2)
      annotation(Placement(transformation(
        extent={{-12,-8},{12,8}},
        origin={-100,10})));

    Modelica.Blocks.Sources.RealExpression setpoint3(y=T_set3)
      annotation(Placement(transformation(
        extent={{-12,-8},{12,8}},
        origin={-100,-8})));

    Modelica.Blocks.Sources.RealExpression setpoint4(y=T_set4)
      annotation(Placement(transformation(
        extent={{-12,-8},{12,8}},
        origin={-100,-90})));

    Modelica.Blocks.Interfaces.RealInput T_room1 "Current temperature room 1"
      annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-100,70}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-90,70})));
    Modelica.Blocks.Interfaces.RealInput T_room2 "Current temperature room 2"
      annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-100,30}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-90,30})));
    Modelica.Blocks.Interfaces.RealInput T_room3 "Current temperature room 3"
      annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-100,-30}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-90,-30})));
    Modelica.Blocks.Interfaces.RealInput T_room4 "Current temperature room 4"
      annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-100,-70}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-90,-60})));
    TIL.LiquidComponents.Sensors.Sensor_m_flow sensor_m_flow_Room1
      annotation (Placement(transformation(extent={{86,96},{94,104}})));
    TIL.LiquidComponents.Sensors.Sensor_m_flow sensor_m_flow_Room2
      annotation (Placement(transformation(extent={{86,36},{94,44}})));
    TIL.LiquidComponents.Sensors.Sensor_m_flow sensor_m_flow_Room3
      annotation (Placement(transformation(extent={{86,-24},{94,-16}})));
    TIL.LiquidComponents.Sensors.Sensor_m_flow sensor_m_flow_Room4
      annotation (Placement(transformation(extent={{86,-84},{94,-76}})));
    TIL.LiquidComponents.Valves.OrificeValve valveRoom1(
        use_effectiveFlowAreaInput=true)
      annotation (Placement(transformation(extent={{62,96},{78,104}})));
    TIL.LiquidComponents.Valves.OrificeValve valveRoom2(
        use_effectiveFlowAreaInput=true)
      annotation (Placement(transformation(extent={{62,36},{78,44}})));
    TIL.LiquidComponents.Valves.OrificeValve valveRoom3(
        use_effectiveFlowAreaInput=true)
      annotation (Placement(transformation(extent={{62,-24},{78,-16}})));
    TIL.LiquidComponents.Valves.OrificeValve valveRoom4(
        use_effectiveFlowAreaInput=true)
      annotation (Placement(transformation(extent={{62,-84},{78,-76}})));
  equation
    connect(Room2Return, WaterReturn) annotation (Line(
        points={{100,20},{40,20},{40,-100}},
        color={0,170,238},
        thickness=0.5));
    connect(Room1Supply, WaterReturn) annotation (Line(
        points={{100,80},{40,80},{40,-100}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_m_flow_Room1.portB, Room1Return) annotation (Line(
        points={{93,100},{100,100}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_m_flow_Room2.portB, Room2Supply) annotation (Line(
        points={{93,40},{100,40}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_m_flow_Room3.portB, Room3Supply) annotation (Line(
        points={{93,-20},{100,-20}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_m_flow_Room4.portB, Room4Supply) annotation (Line(
        points={{93,-80},{100,-80}},
        color={0,170,238},
        thickness=0.5));
    connect(Room3Return, WaterReturn) annotation (Line(
        points={{100,-40},{40,-40},{40,-100}},
        color={0,170,238},
        thickness=0.5));
    connect(Room4Return, WaterReturn) annotation (Line(
        points={{100,-100},{40,-100}},
        color={0,170,238},
        thickness=0.5));
    connect(WaterSupply, valveRoom1.portA) annotation (Line(
        points={{20,100},{62,100}},
        color={0,170,238},
        thickness=0.5));
    connect(WaterSupply, valveRoom2.portA) annotation (Line(
        points={{20,100},{20,40},{62,40}},
        color={0,170,238},
        thickness=0.5));
    connect(valveRoom4.portA, valveRoom2.portA) annotation (Line(
        points={{62,-80},{20,-80},{20,40},{62,40}},
        color={0,170,238},
        thickness=0.5));
    connect(valveRoom3.portA, valveRoom2.portA) annotation (Line(
        points={{62,-20},{20,-20},{20,40},{62,40}},
        color={0,170,238},
        thickness=0.5));
    connect(valveRoom1.portB, sensor_m_flow_Room1.portA) annotation (Line(
        points={{78,100},{87,100}},
        color={0,170,238},
        thickness=0.5));
    connect(valveRoom2.portB, sensor_m_flow_Room2.portA) annotation (Line(
        points={{78,40},{87,40}},
        color={0,170,238},
        thickness=0.5));
    connect(valveRoom3.portB, sensor_m_flow_Room3.portA) annotation (Line(
        points={{78,-20},{87,-20}},
        color={0,170,238},
        thickness=0.5));
    connect(valveRoom4.portB, sensor_m_flow_Room4.portA) annotation (Line(
        points={{78,-80},{87,-80}},
        color={0,170,238},
        thickness=0.5));
    connect(pid4.y, valveRoom4.effectiveFlowArea_in)
      annotation (Line(points={{13.2,-60},{70,-60},{70,-75}}, color={0,0,127}));
    connect(pid3.y, valveRoom3.effectiveFlowArea_in) annotation (Line(points={{-26.8,
            -20},{0,-20},{0,0},{70,0},{70,-15}}, color={0,0,127}));
    connect(pid2.y, valveRoom2.effectiveFlowArea_in) annotation (Line(points={{13.2,
            40},{30,40},{30,52},{70,52},{70,45}}, color={0,0,127}));
    connect(pid1.y, valveRoom1.effectiveFlowArea_in) annotation (Line(points={{-26.8,
            80},{0,80},{0,114},{70,114},{70,105}}, color={0,0,127}));
    connect(setpoint1.y, pid1.u_s) annotation (Line(points={{-86.8,94},{-62,94},{-62,
            80},{-54.4,80}}, color={0,0,127}));
    connect(T_room1, pid1.u_m) annotation (Line(points={{-100,70},{-58,70},{-58,56},
            {-40,56},{-40,65.6}}, color={0,0,127}));
    connect(T_room2, pid2.u_m) annotation (Line(points={{-100,30},{-18,30},{-18,16},
            {0,16},{0,25.6}}, color={0,0,127}));
    connect(setpoint2.y, pid2.u_s) annotation (Line(points={{-86.8,10},{-68,10},{-68,
            40},{-14.4,40}}, color={0,0,127}));
    connect(setpoint3.y, pid3.u_s) annotation (Line(points={{-86.8,-8},{-60,-8},{-60,
            -20},{-54.4,-20}}, color={0,0,127}));
    connect(T_room3, pid3.u_m) annotation (Line(points={{-100,-30},{-70,-30},{-70,
            -40},{-40,-40},{-40,-34.4}}, color={0,0,127}));
    connect(setpoint4.y, pid4.u_s) annotation (Line(points={{-86.8,-90},{-66,-90},
            {-66,-60},{-14.4,-60}}, color={0,0,127}));
    connect(T_room4, pid4.u_m) annotation (Line(points={{-100,-70},{-76,-70},{-76,
            -80},{0,-80},{0,-74.4}}, color={0,0,127}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end HeatingController;
end HeatingSource;
