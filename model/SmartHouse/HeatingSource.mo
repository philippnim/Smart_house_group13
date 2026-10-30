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
    Modelica.Blocks.Interfaces.BooleanInput EnableHeatSource
      "Enable heat source operation" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={0,-200}), iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={0,-160})));
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


    // --- Defrost controller ---
    parameter Boolean useDefrost = true
      "Enable automatic defrost"
      annotation(Dialog(tab="Defrost", group="General"));

    parameter Modelica.Units.SI.Time minTriggerOnTime = 60
      "Defrost trigger must remain active before defrost starts"
      annotation(Dialog(tab="Defrost", group="Timing"));

    parameter Modelica.Units.SI.Time minTriggerOffTime = 30
      "Defrost-off trigger must remain active before defrost stops"
      annotation(Dialog(tab="Defrost", group="Timing"));

    parameter Modelica.Units.SI.Time minOffTimeAfterDefrost = 2400
      "Minimum time between two defrost cycles"
      annotation(Dialog(tab="Defrost", group="Timing"));

    parameter Real defrostTriggerOnThreshold = -570
      "Threshold used by the evaporator defrost-on criterion"
      annotation(Dialog(tab="Defrost", group="Trigger"));

    parameter Real defrostStopTemperature = 5
      "Refrigerant temperature in degC above which defrost may stop"
      annotation(Dialog(tab="Defrost", group="Trigger"));

    parameter Real compressorSpeedDefrost = 60
      "Compressor speed command during defrost"
      annotation(Dialog(tab="Defrost", group="Operation"));

    parameter Real fanSpeedHeating = 12
      "Fan speed during normal heating"
      annotation(Dialog(tab="Fan", group="Control"));

    parameter Real fanSpeedDefrost = 1
      "Fan speed during defrost"
      annotation(Dialog(tab="Fan", group="Control"));

    parameter Modelica.Units.SI.Area defrostValveArea = 0.7e-6
      "Expansion-valve effective flow area during defrost"
      annotation(Dialog(tab="Defrost", group="Operation"));

  // ============================================================
  // EVAPORATOR GEOMETRY
  // ============================================================

  parameter Modelica.Units.SI.Length evaporatorFinnedTubeLength = 0.6
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

    parameter Real compressorSpeedMin = 20
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

    // --- Four-way valve ---
    parameter Modelica.Units.SI.Area fourWayValveEffectiveArea = 2e-5
      "Effective flow area of four-way valve"
      annotation(Dialog(tab="General", group="Four-way valve"));

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

    parameter Modelica.Units.SI.Volume separatorVolume = 1e-3
      "Separator volume"
      annotation(Dialog(tab="Advanced", group="Separator"));

    parameter Real separatorInitialFillingLevel(min=0, max=1) = 0.5
      "Initial separator filling level"
      annotation(Dialog(tab="Advanced", group="Separator"));

    parameter Modelica.Units.SI.SpecificEnthalpy separatorHStart = 430e3
      "Initial separator specific enthalpy"
      annotation(Dialog(tab="Advanced", group="Separator"));

    parameter Modelica.Units.SI.Length dischargeTubeLength = 1
      "Length of compressor discharge tube"
      annotation(Dialog(tab="Advanced", group="Discharge tube"));

    parameter Modelica.Units.SI.CoefficientOfHeatTransfer dischargeTubeAlpha = 500
      "Constant heat-transfer coefficient of discharge tube"
      annotation(Dialog(tab="Advanced", group="Discharge tube"));

    parameter Modelica.Units.SI.MassFlowRate dischargeTubeMFlowStart = 0.03
      "Initial refrigerant mass flow in discharge tube"
      annotation(Dialog(tab="Advanced", group="Discharge tube"));

    parameter Modelica.Units.SI.SpecificEnthalpy dischargeTubeHInitial = 500e3
      "Initial refrigerant specific enthalpy in discharge tube"
      annotation(Dialog(tab="Advanced", group="Discharge tube"));

    parameter Modelica.Units.SI.Pressure dischargeTubePStart = 10000000
      "Initial pressure in discharge tube"
      annotation(Dialog(tab="Advanced", group="Discharge tube"));

    parameter Modelica.Units.SI.SpecificEnthalpy condenserHInitial = 280e3
      "Initial condenser refrigerant specific enthalpy"
      annotation(Dialog(tab="Advanced", group="Condenser initialization"));

    parameter Modelica.Units.SI.SpecificEnthalpy condenserHInitialCell1 = 550e3
      "Initial condenser specific enthalpy in first cell"
      annotation(Dialog(tab="Advanced", group="Condenser initialization"));

    parameter Modelica.Units.SI.SpecificEnthalpy condenserHInitialCellN = 350e3
      "Initial condenser specific enthalpy in last cell"
      annotation(Dialog(tab="Advanced", group="Condenser initialization"));


    inner TIL.SystemInformationManager sim1(
      redeclare replaceable TILMedia.VLEFluid.Types.TILMedia_Propane
        vleFluidType1,
      redeclare replaceable TILMedia.Gas.Types.VDI4670_MoistAir gasType1,
      redeclare replaceable TILMedia.Liquid.Types.TILMedia_Water liquidType1)
      annotation (Placement(transformation(extent={{100,118},{120,138}}, rotation=0)));
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
      pressureStateID=3,
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
            extent={{78,-2},{94,14}}, rotation=0)));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint4(stateViewerIndex=3)
      annotation (Placement(transformation(
          extent={{-4,-4},{4,4}},
          rotation=0,
          origin={-12,-34})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint6(stateViewerIndex=5)
      annotation (Placement(transformation(
          extent={{-4,-4},{4,4}},
          rotation=0,
          origin={54,-34})));
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
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint0(stateViewerIndex=7)
      annotation (Placement(transformation(extent={{82,46},{90,54}}, rotation=0)));
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
      TIL.HeatExchangers.Plate.TransportPhenomena.PressureDrop.VDIPlatePressureDrop,

   redeclare model HeatTransferModel_a =
    TIL.HeatExchangers.Plate.TransportPhenomena.HeatTransfer.ConstantAlpha(
      constantAlpha=condenserAlphaVLE),

  redeclare model HeatTransferModel_b =
    TIL.HeatExchangers.Plate.TransportPhenomena.HeatTransfer.ConstantAlpha(
      constantAlpha=condenserAlphaLiquid),

    redeclare model PressureDropModel_b =
      TIL.HeatExchangers.Plate.TransportPhenomena.PressureDrop.VDIPlatePressureDrop,

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
    TIL.HeatExchangers.FinAndTube.MoistAirVLEFluid.CrossFlowHX evaporator(
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
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSidePressureDrop.ZeroPressureDrop,
      flagActivateDynWaterBalance=true,
      redeclare model FrostingModel =
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSideFrosting.ConstantPorosityFrostIce
          (defrostTimeConstant=2))
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
    use_y_notActive=true,
    activationTime=compressorActivationTime)
      annotation (Placement(transformation(extent={{138,16},{126,4}})));
    TIL.OtherComponents.Mechanical.RotatoryBoundary rotatoryBoundary1(
        use_nInput=true, nFixed=compressorSpeedInitial)
      annotation (Placement(transformation(extent={{102,-4},{94,16}})));
    TIL.VLEFluidComponents.Sensors.Sensor_T      sensor_T_degC(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-70,-38},{-62,-30}})));
    Modelica.Blocks.Sources.RealExpression speedDefrost(y=compressorSpeedDefrost)
      annotation (Placement(transformation(extent={{-13,-8},{13,8}},
          rotation=90,
          origin={135,-22})));
    Modelica.Blocks.Sources.RealExpression valveAreaRestart(y=expansionValveAreaRestart)
      annotation (Placement(transformation(extent={{-180,-14},{-148,2}})));
    Modelica.Blocks.Sources.RealExpression COP(
      y=if P_el > 1e-3 then HeatFlow/P_el else 0)                                          annotation (Placement(transformation(extent={{62,120},
              {78,136}})));
    Modelica.Blocks.Sources.BooleanExpression defrostTriggerOn(y=-evaporator.Q_flow
          /max(1e-20, sensor_T_degC_ambientAirIn.sensorValue - sensor_T_degC.sensorValue)
           > defrostTriggerOnThreshold)
      annotation (Placement(transformation(extent={{34,-84},{60,-70}})));
    Modelica.Blocks.Sources.BooleanExpression defrostTriggerOff(y=sensor_T_degC.sensorValue
           > defrostStopTemperature)
      annotation (Placement(transformation(extent={{34,-108},{60,-92}})));
    Modelica.Blocks.Logical.Switch switch1 annotation (Placement(transformation(extent={{-128,
              -28},{-116,-16}})));
    Modelica.Blocks.Sources.RealExpression valveAreaDefrost(y=defrostValveArea)
      annotation (Placement(transformation(extent={{-180,-34},{-148,-18}})));
    TIL.VLEFluidComponents.Valves.FourWayValve
                                           fourWayValve(effectiveFlowArea=fourWayValveEffectiveArea)
      annotation (Placement(transformation(
          extent={{-8,-8},{8,8}},
          rotation=270,
          origin={14,38})));
    HeatPumpController heatPumpController(
      useDefrost=useDefrost,
      minTriggerOnTime=minTriggerOnTime,
      minTriggerOffTime=minTriggerOffTime,
      minOffTimeAfterDefrost=minOffTimeAfterDefrost,
      fanSpeedHeating=fanSpeedHeating,
      fanSpeedDefrost=fanSpeedDefrost)
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
      streamVariablesInputTypeConcentration="phi",
      use_temperatureInput=true,
      phiFixed=ambientRelativeHumidity,
      boundaryType="p",
      pFixed=ambientPressure) "Outside moist air used in the evaporator" annotation (
        Placement(transformation(
          extent={{-4,-10},{4,10}},
          rotation=90,
          origin={-40,2})));
    TIL.GasComponents.Sensors.Sensor_T      sensor_T_degC_ambientAirIn(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-16,-16},{-8,-8}})));
    TIL.GasComponents.Sensors.Sensor_phi sensor_phi_ambientAirIn
      annotation (Placement(transformation(extent={{-30,-16},{-22,-8}})));
    TIL.GasComponents.Sensors.StatePoint statePoint annotation (Placement(transformation(extent={{-64,-16},
              {-56,-8}})));
    TIL.GasComponents.Boundaries.Boundary gasSink(
      pFixed=ambientPressure,
      V_flowFixed=sinkFixedVolumeFlow,
      phiFixed=sinkBackflowRelativeHumidity,
      boundaryType="p",
      TFixed=sinkBackflowTemperature,
      streamVariablesInputTypeConcentration="phi") annotation (Placement(
          transformation(extent={{4,10},{-4,-10}},     rotation=90,
          origin={-40,-132})));
    TIL.GasComponents.Sensors.Sensor_T      sensor_T_degC_ambientAirOut(
        redeclare TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-28,-118},{-20,-110}})));
    TIL.GasComponents.Sensors.Sensor_V_flow sensor_V_flow_ambientAir
      annotation (Placement(transformation(extent={{4,-4},{-4,4}},
          rotation=90,
          origin={-40,-116})));
    TIL.GasComponents.Sensors.Sensor_phi sensor_phi_ambientAirOut
      annotation (Placement(transformation(extent={{-14,-118},{-6,-110}})));
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
    Modelica.Blocks.Logical.Switch switch2 annotation (Placement(transformation(extent={{6,-6},{
              -6,6}},
          rotation=270,
          origin={112,-18})));
    Modelica.Blocks.Sources.RealExpression CompressorDisable(y=0)
      "Disable compressor when heat source is turned of"
      annotation (Placement(transformation(extent={{-16,-8},{16,8}},
          rotation=90,
          origin={106,-48})));
    TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_lp1(
        pressureStateID=3, pInitial=pInitialLow)  annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},     rotation=0,
          origin={38,-42})));
    Modelica.Blocks.Interfaces.RealInput TSupplySet
      "Supply water temperature setpoint in degC"
                                        annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={110,-200}),  iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={80,-170})));
  equation

    // ============================================================
    // HEAT-PUMP OUTPUTS
    // ============================================================

    P_el = compressor.shaftPower + fan2ndOrder.P_shaft;
    HeatFlow = -condenser.Q_flow;

    connect(statePoint1.sensorPort,pressureState_hp. portA) annotation (Line(
        points={{-6,46},{-6,42},{-20,42}},
        color={153,204,0},
        thickness=0.5));
    connect(statePoint0.sensorPort,compressor. portB) annotation (Line(
        points={{86,46},{86,14}},
        color={153,204,0},
        thickness=0.5));
    connect(separator.portGas,compressor. portA)
      annotation (Line(
        points={{71,-42},{86,-42},{86,-2}},
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
        points={{78,-38},{78,-42},{86,-42},{86,-2}},
        color={153,204,0},
        thickness=0.5));
    connect(rotatoryBoundary1.rotatoryFlange,compressor. rotatoryFlange)
      annotation (Line(
        points={{98,6},{94,6}},
        color={135,135,135},
        thickness=0.5));
    connect(compressorController.u_m, sensor_T_degC_waterOut.sensorValue)
      annotation (Line(points={{132,15.8},{132,80},{-48,80},{-48,70}}, color={0,0,
            127}));
    connect(speedDefrost.y, compressorController.y_notActive) annotation (Line(
          points={{135,-7.7},{135,-4},{132,-4},{132,4.2}},            color={0,0,127}));
    connect(valveAreaRestart.y, expansionValveController.y_notActive) annotation
      (Line(points={{-146.4,-6},{-132,-6},{-132,0.2}}, color={0,0,127}));
    connect(sensor_subcooling.sensorValue, expansionValveController.u_m)
      annotation (Line(points={{-118,32},{-132,32},{-132,11.8}}, color={0,0,127}));
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
    connect(statePoint6.sensorPort,separator. portInlet)
      annotation (Line(
        points={{54,-38},{54,-42},{61,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(switch1.y,expansionValve. effectiveFlowArea_in)
      annotation (Line(points={{-115.4,-22},{-114,-22},{-114,6},{-111,6}}, color={0,0,127}));
    connect(switch1.u1, expansionValveController.y) annotation (Line(points={{-129.2,
            -17.2},{-132,-17.2},{-132,-10},{-120,-10},{-120,6},{-125.6,6}}, color
          ={0,0,127}));
    connect(switch1.u3,valveAreaDefrost. y)
      annotation (Line(points={{-129.2,-26.8},{-129.2,-26},{-146.4,-26}}, color={0,0,127}));
    connect(pressureState_hp.portA,fourWayValve. portB)
      annotation (Line(
        points={{-20,42},{6,42}},
        color={153,204,0},
        thickness=0.5));
    connect(sensor_T_degC.port,pressureState_lp. portA)
      annotation (Line(
        points={{-66,-38},{-66,-42},{-76,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(evaporator.portA_vle,pressureState_lp. portA)
      annotation (Line(
        points={{-54,-42},{-76,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(evaporator.portB_vle,fourWayValve. portC)
      annotation (Line(
        points={{-26,-42},{0,-42},{0,34},{6,34}},
        color={153,204,0},
        thickness=0.5));
    connect(statePoint4.sensorPort,fourWayValve. portC) annotation (Line(
        points={{-12,-38},{-12,-42},{0,-42},{0,34},{6,34}},
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
    connect(defrostTriggerOff.y, heatPumpController.defrostTriggerOff)
      annotation (Line(points={{61.3,-100},{72,-100},{72,-99.5},{82.6571,-99.5}},
          color={255,0,255}));
    connect(defrostTriggerOn.y, heatPumpController.defrostTriggerOn) annotation (
        Line(points={{61.3,-77},{71.9785,-77},{71.9785,-78.5},{82.6571,-78.5}},
          color={255,0,255}));
    connect(fourWayValve.crossedConnection_in, heatPumpController.fourWayValve)
      annotation (Line(points={{14,29},{14,-122},{134,-122},{134,-85.5},{126.686,-85.5}},
          color={255,0,255}));
    connect(heatPumpController.controllerSwitch, compressorController.activeInput)
      annotation (Line(points={{126.686,-78.5},{138,-78.5},{138,-78},{148,-78},{148,
            13.8},{137.6,13.8}}, color={255,0,255}));
    connect(heatPumpController.controllerSwitch, expansionValveController.activeInput)
      annotation (Line(points={{126.686,-78.5},{138,-78.5},{138,-78},{148,-78},{148,
            20},{-142,20},{-142,9.8},{-137.6,9.8}}, color={255,0,255}));
    connect(heatPumpController.controllerSwitch, switch1.u2) annotation (Line(
          points={{126.686,-78.5},{148,-78.5},{148,20},{-142,20},{-142,-22},{-129.2,
            -22}}, color={255,0,255}));
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
    connect(sensor_phi_ambientAirIn.port, gasSource.port) annotation (Line(
        points={{-26,-16},{-40,-16},{-40,2}},
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
    connect(sensor_phi_ambientAirOut.port,gasSink. port) annotation (Line(
        points={{-10,-118},{-10,-124},{-40,-124},{-40,-132}},
        color={255,153,0},
        thickness=0.5));
    connect(statePoint5.port,gasSink. port) annotation (Line(
        points={{-60,-118},{-60,-124},{-40,-124},{-40,-132}},
        color={255,153,0},
        thickness=0.5));
    connect(fan2ndOrder.portB,sensor_V_flow_ambientAir. portA)
      annotation (Line(
        points={{-40,-102},{-40,-113}},
        color={255,153,0},
        thickness=0.5));
    connect(fan2ndOrder.rotatoryFlange,rotatoryBoundary. rotatoryFlange)
      annotation (Line(
        points={{-32,-94},{-24,-94}},
        color={135,135,135},
        thickness=0.5));
    connect(fan2ndOrder.portA, evaporator.portB_gas) annotation (Line(
        points={{-40,-86},{-40,-56}},
        color={255,153,0},
        thickness=0.5));
    connect(T_ambient, gasSource.T_in) annotation (Line(points={{-120,-200},{-120,
            -32},{-110,-32},{-110,-24},{-60,-24},{-60,-20},{-38,-20},{-38,-8},{-34,
            -8},{-34,-2}},                              color={0,0,127}));
    connect(heatPumpController.fanSpeed, rotatoryBoundary.n_in) annotation (Line(
          points={{126.686,-99.5},{152,-99.5},{152,-132},{2,-132},{2,-94},{-20,-94}},
                   color={0,0,127}));
    connect(heatPumpController.enableHeatPump, EnableHeatSource) annotation (Line(
          points={{82.6571,-89},{74,-89},{74,-174},{0,-174},{0,-200}},
                                                                     color={255,0,
            255}));
    connect(compressorController.y, switch2.u1) annotation (Line(points={{125.6,10},
            {122,10},{122,-32},{116.8,-32},{116.8,-25.2}}, color={0,0,127}));
    connect(rotatoryBoundary1.n_in, switch2.y)
      annotation (Line(points={{102,6},{112,6},{112,-11.4}},
                                                          color={0,0,127}));
    connect(heatPumpController.controllerSwitchCompressor, switch2.u2)
      annotation (Line(points={{126.686,-71.5},{134,-71.5},{134,-42},{112,-42},{112,
            -25.2}}, color={255,0,255}));
    connect(CompressorDisable.y, switch2.u3) annotation (Line(points={{106,-30.4},
            {106,-25.2},{107.2,-25.2}},
                                     color={0,0,127}));
    connect(fourWayValve.portD, pressureState_lp1.portB) annotation (Line(
        points={{22,34},{28,34},{28,-42},{32,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(pressureState_lp1.portA, separator.portInlet) annotation (Line(
        points={{44,-42},{61,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(fourWayValve.portA, compressor.portB) annotation (Line(
        points={{22,42},{54,42},{54,40},{86,40},{86,14}},
        color={153,204,0},
        thickness=0.5));
    connect(TSupplySet, heatPumpController.TSupplySet) annotation (Line(points=
            {{110,-200},{110,-174},{90,-174},{90,-146},{90.2143,-146},{90.2143,
            -108.25}}, color={0,0,127}));
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
          fileName=
            "modelica://SmartHouse/Images/HeatPumpCycle.png")}));

  end HeatPumpCycle;

  model HeatPumpController
    "Supervisory controller for heat-pump operation and defrost"

    // ============================================================
    // PARAMETERS
    // ============================================================

    parameter Boolean useDefrost = true
      "Enable automatic defrost operation"
      annotation (
        Dialog(
          tab="Defrost",
          group="General"));

    parameter Modelica.Units.SI.Time minTriggerOnTime = 60
      "Defrost trigger must be active this long before defrost starts"
      annotation (
        Dialog(
          tab="Defrost",
          group="Trigger"));

    parameter Modelica.Units.SI.Time minTriggerOffTime = 30
      "Defrost-off trigger must be active this long before defrost stops"
      annotation (
        Dialog(
          tab="Defrost",
          group="Trigger"));

    parameter Modelica.Units.SI.Time minOffTimeAfterDefrost = 1200
      "Minimum time between two defrost cycles"
      annotation (
        Dialog(
          tab="Defrost",
          group="Trigger"));

    parameter Real fanSpeedHeating = 12
    "FanSpeed for normal usage"
      annotation (
        Dialog(
          tab="Defrost",
        group="Trigger"));

     parameter Real fanSpeedDefrost = 1
     "FanSpeed for defrost usage"
      annotation (
        Dialog(
          tab="Defrost",
        group="Trigger"));


    // ============================================================
    // INPUTS
    // ============================================================

    Modelica.Blocks.Interfaces.BooleanInput defrostTriggerOn
      "Start defrost cycle"
      annotation (
        Placement(
          transformation(extent={{-152,30},{-132,50}}),
          iconTransformation(extent={{-146,50},{-126,70}})));

    Modelica.Blocks.Interfaces.BooleanInput defrostTriggerOff
      "Stop defrost cycle"
      annotation (
        Placement(
          transformation(extent={{-152,-50},{-132,-30}}),
          iconTransformation(extent={{-146,-70},{-126,-50}})));


    // ============================================================
    // OUTPUTS
    // ============================================================

    Modelica.Blocks.Interfaces.BooleanOutput controllerSwitch
      "True: normal PI control, False: defrost operation"
      annotation (
        Placement(
          transformation(extent={{136,32},{152,48}}),
          iconTransformation(extent={{124,52},{140,68}})));

    Modelica.Blocks.Interfaces.BooleanOutput fourWayValve
      "False: heating mode, True: reversed flow for defrost"
      annotation (
        Placement(
          transformation(extent={{136,-8},{152,8}}),
          iconTransformation(extent={{124,12},{140,28}})));

    Modelica.Blocks.Interfaces.RealOutput TemperatureSetpoint
      "Supply water temperature setpoint in degC"
      annotation (
        Placement(
          transformation(extent={{136,-58},{152,-42}}),
          iconTransformation(extent={{124,-28},{140,-12}})));

    Modelica.Blocks.Interfaces.RealOutput fanSpeed
      "Sets a lower FanSpeed when Defrost is activated" annotation (Placement(
          transformation(extent={{136,-88},{152,-72}}), iconTransformation(extent
            ={{124,-68},{140,-52}})));

  protected

    // ============================================================
    // INTERNAL STATES / COMPONENTS
    // ============================================================

    discrete Boolean defrostActive(
      start=false,
      fixed=true)
      "True while defrost is active";

    Modelica.Blocks.Logical.Timer timerDefrostOn
      "Measures how long defrostTriggerOn is true";

    Modelica.Blocks.Logical.Timer timerDefrostOff
      "Measures how long defrostTriggerOff is true";

    discrete Modelica.Units.SI.Time lastDefrostEnd(
      start=-minOffTimeAfterDefrost,
      fixed=true)
      "Time when previous defrost cycle ended";


  public
    Modelica.Blocks.Interfaces.BooleanInput enableHeatPump
      "\"True: heat pump enabled, False: heat pump off\";" annotation (Placement(
          transformation(extent={{-152,-12},{-132,8}}), iconTransformation(extent
            ={{-146,-10},{-126,10}})));
    Modelica.Blocks.Interfaces.BooleanOutput controllerSwitchCompressor
      "True: normal PI control, False: Compressor off" annotation (Placement(
          transformation(extent={{136,72},{152,88}}), iconTransformation(extent={{
              124,92},{140,108}})));
    Modelica.Blocks.Interfaces.RealInput TSupplySet
      "Supply water temperature setpoint in degC" annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-144,-68}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={-90,-110})));
  equation

    // ============================================================
    // TIMER CONNECTIONS
    // ============================================================

    connect(defrostTriggerOn, timerDefrostOn.u);
    connect(defrostTriggerOff, timerDefrostOff.u);


    // ============================================================
    // TEMPERATURE SETPOINT
    // ============================================================

    TemperatureSetpoint = TSupplySet;


    // ============================================================
    // OPERATING MODE OUTPUTS
    // ============================================================

    controllerSwitch = not defrostActive;


    controllerSwitchCompressor = enableHeatPump;

    fourWayValve = enableHeatPump and defrostActive;

    fanSpeed =
    if not enableHeatPump then 0
    elseif defrostActive then fanSpeedDefrost
    else fanSpeedHeating;


    // ============================================================
    // DEFROST STATE LOGIC
    // ============================================================

    when {
    initial(),
        enableHeatPump
        and useDefrost
        and not pre(defrostActive)
        and timerDefrostOn.y >= minTriggerOnTime
        and time - pre(lastDefrostEnd) >= minOffTimeAfterDefrost,
      pre(defrostActive)
      and timerDefrostOff.y >= minTriggerOffTime,
    not enableHeatPump and pre(defrostActive)}
       then

      if initial() then

        // Start simulation in normal heating mode
        defrostActive = false;
        lastDefrostEnd = -minOffTimeAfterDefrost;

      elseif pre(defrostActive) then

        // Stop defrost
        defrostActive = false;
        lastDefrostEnd = time;

      else

        // Start defrost
        defrostActive = true;
      lastDefrostEnd = pre(lastDefrostEnd);

    end if;

    end when;


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
    TIL.LiquidComponents.Boundaries.Boundary boundary(m_flowFixed=-0.24, TFixed
        =303.15)
      annotation (Placement(transformation(extent={{-104,-10},{-96,10}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary1(boundaryType="p")
      annotation (Placement(transformation(extent={{96,-10},{104,10}})));
    HeatPumpCycle heatPumpCycle(TSupplySet=60, useDefrost=true)
      annotation (Placement(transformation(extent={{-32,-28},{30,28}})));
    Modelica.Blocks.Sources.RealExpression T_ambient(y=293.15)
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
    redeclare TILMedia.Gas.Types.VDI4670_MoistAir gasType1,
    redeclare TILMedia.Liquid.Types.TILMedia_Water liquidType1);
  equation
    connect(boundary.port, heatPumpCycle.WaterInput) annotation (Line(
        points={{-100,0},{-32,0}},
        color={0,170,238},
        thickness=0.5));
    connect(heatPumpCycle.WaterOutput, boundary1.port) annotation (Line(
        points={{30,0},{100,0}},
        color={0,170,238},
        thickness=0.5));
    connect(T_ambient.y, heatPumpCycle.T_ambient) annotation (Line(points={{-12,
            -54.4},{-12,-40.422},{-13.4,-40.422},{-13.4,-26.4444}},
                                                             color={0,0,127}));
    connect(Enable.y, heatPumpCycle.EnableHeatSource) annotation (Line(points={{4,-61},
            {4,-32},{0,-32},{0,-24.8889},{-1,-24.8889}},     color={255,0,255}));
    connect(sensor_T.port, heatPumpCycle.WaterInput) annotation (Line(
        points={{-80,40},{-80,0},{-32,0}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_T1.port, boundary1.port) annotation (Line(
        points={{66,34},{66,0},{100,0}},
        color={0,170,238},
        thickness=0.5));
      annotation (Placement(transformation(extent={{-62,-66},{-42,-46}})),
                Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end TestHeatPump;

  model TestHotWaterStorage
    inner TIL.SystemInformationManager sim(
    redeclare TILMedia.VLEFluid.Types.TILMedia_Propane vleFluidType1,
    redeclare TILMedia.Gas.Types.VDI4670_MoistAir gasType1,
    redeclare TILMedia.Liquid.Types.TILMedia_Water liquidType1);
    Modelica.Blocks.Sources.RealExpression T_ambient(y=263.15)
      "Disable compressor when heat source is turned of" annotation (Placement(
          transformation(
          extent={{-16,-8},{16,8}},
          rotation=90,
          origin={12,-64})));
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
    TIL.LiquidComponents.Boundaries.Boundary boundary(m_flowFixed=0, TFixed=
          303.15)
      annotation (Placement(transformation(extent={{-4,-10},{4,10}},
          rotation=90,
          origin={0,-90})));
    HeatPump_ThermalStorage heatPump_ThermalStorage
      annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary2(boundaryType="p")
      annotation (Placement(transformation(extent={{-4,-10},{4,10}},
          rotation=90,
          origin={0,70})));
  equation
    connect(heatPump_ThermalStorage.HeatingDemand, Enable.y)
      annotation (Line(points={{-8,-8},{-8,-47}}, color={255,0,255}));
    connect(heatPump_ThermalStorage.T_ambient, T_ambient.y) annotation (Line(
          points={{9,-9},{9,-42},{12,-42},{12,-46.4}}, color={0,0,127}));
    connect(boundary2.port, heatPump_ThermalStorage.WaterOutput1) annotation (
        Line(
        points={{0,70},{0,10}},
        color={0,170,238},
        thickness=0.5));
    connect(boundary.port, heatPump_ThermalStorage.WaterInput1) annotation (
        Line(
        points={{0,-90},{0,-10}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_T.port, heatPump_ThermalStorage.WaterInput) annotation (Line(
        points={{-80,60},{-62,60},{-62,0},{-10,0}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_T1.port, heatPump_ThermalStorage.WaterOutput) annotation (
        Line(
        points={{66,54},{52,54},{52,0},{10.2,0}},
        color={0,170,238},
        thickness=0.5));
    connect(heatPump_ThermalStorage.WaterInput, heatPump_ThermalStorage.WaterOutput)
      annotation (Line(
        points={{-10,0},{-14,0},{-14,-28},{10.2,-28},{10.2,0}},
        color={0,170,238},
        thickness=0.5));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end TestHotWaterStorage;

  model HeatPump_ThermalStorage
    outer TIL.SystemInformationManager sim;

  parameter TILMedia.Liquid.Types.BaseLiquid liquidType =
    sim.liquidType1
    "Liquid type";
    HeatPumpCycle heatPumpCycle1(useDefrost=true)
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
      ambientTemperature=283.15,
      redeclare model AmbientHeatTransferModel =
          TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.Ambient.ConstantOveralHeatTransferCoefficients
          (
          UA_tankTopLid=3,
          UA_tankCylinder=3,
          UA_tankBottomLid=3),
      redeclare model LiquidToTankWallHeatTransferModel =
          TIL3_AddOn_HeatStorage.ThermalStorages.Components.TransportPhenomena.TankHeatTransfer.Ambient.CylinderVerticalFreeConvection,
      useMantleHX=false,
      useInternalHX_a=true,
      nInternalHXCellsPerTankCell_a=4,
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
      TInitialTop=343.15,
      TInitialBottom=303.15,
      TInitialLiquidInternalHX_a=303.15,
      TInitialWallInternalHX_a=303.15,
      TInitialTankWall=328.15,
      TInitialInsulation=318.15) annotation (Placement(transformation(extent={{70,38},
              {90,78}})));
    TIL.LiquidComponents.Pumps.SimplePump pump(
      presetVariableType="V_flow",
      m_flowFixed=0.03,
      use_volumeFlowRateInput=false,
      V_flowFixed=0.25e-3)
                          annotation (Placement(transformation(
          origin={28,34},
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
  equation
    connect(T_ambient, heatPumpCycle1.T_ambient) annotation (Line(points={{-50,
            -100},{-50,-32},{-15.4,-32},{-15.4,-26.4444}}, color={0,0,127}));
    connect(pump.portB,linearDirectionalControlValve. portA)
      annotation (Line(
        points={{28,42},{28,48}},
        color={0,170,238},
        thickness=0.5));
    connect(HeatingDemand, thermalstorageController.EnableHeating) annotation (
        Line(points={{-10,-100},{-10,-62},{-32,-62},{-32,-53},{-27,-53}}, color
          ={255,0,255}));
    connect(hotWaterTank.temperatureSensorsOutput[5], thermalstorageController.T_DHW)
      annotation (Line(points={{69,62.9},{52,62.9},{52,-72},{-46,-72},{-46,-46},
            {-28,-46},{-28,-45},{-27,-45}},
                     color={0,0,127}));
    connect(thermalstorageController.EnableHeatPump, heatPumpCycle1.EnableHeatSource)
      annotation (Line(points={{-8.8,-44},{-2,-44},{-2,-24.8889},{-3,-24.8889}},
                                       color={255,0,255}));
    connect(heatPumpCycle1.WaterOutput, pump.portA) annotation (Line(
        points={{28,0},{28,26}},
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
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end HeatPump_ThermalStorage;

  model ThermalstorageController
    extends Modelica.Blocks.Icons.Block;

    parameter Real THeating = 35
      "Supply temperature for floor heating in degC";

    parameter Real TDHW = 60
      "Supply temperature for domestic hot water charging in degC";

    parameter Modelica.Units.SI.Temperature TDHWMin = 45 + 273.15
      "Lower DHW temperature limit in K";

    parameter Modelica.Units.SI.Temperature TDHWMax = 55 + 273.15
      "Upper DHW temperature limit in K";

    Boolean DHWmode
      "True when domestic hot water storage has priority";

    Modelica.Blocks.Interfaces.BooleanInput EnableHeating
      "Heating demand from the house"
      annotation (
        Placement(
          transformation(extent={{-110,40},{-90,60}}),
          iconTransformation(extent={{-100,-60},{-80,-40}})));

    Modelica.Blocks.Interfaces.RealInput T_DHW
      "Domestic hot water tank temperature in K"
      annotation (
        Placement(
          transformation(
            extent={{-20,-20},{20,20}},
            rotation=0,
            origin={-100,-30}),
          iconTransformation(
            extent={{-10,-10},{10,10}},
            rotation=0,
            origin={-90,30})));

    Modelica.Blocks.Interfaces.RealOutput TSupplySet
      "Heat pump supply temperature setpoint in degC"
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

    Modelica.Blocks.Interfaces.BooleanOutput EnableHeatPump
      "Enable signal for heat pump"
      annotation (
        Placement(
          transformation(extent={{92,-38},{108,-22}}),
          iconTransformation(extent={{84,32},{100,48}})));

    Modelica.Blocks.Logical.Hysteresis tankWarm(
      uLow=TDHWMin,
      uHigh=TDHWMax,
      pre_y_start=false)
      annotation (
        Placement(
          transformation(extent={{-12,-40},{8,-20}})));

  equation

    connect(T_DHW, tankWarm.u);

    DHWmode = not tankWarm.y;

    TSupplySet =
      if DHWmode then TDHW
      else THeating;

    threeWayValve =
      if DHWmode then 0.9999
      else 0.0001;

    EnableHeatPump =
      DHWmode or EnableHeating;

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
end HeatingSource;
