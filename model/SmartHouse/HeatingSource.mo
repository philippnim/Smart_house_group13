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
        transformation(extent={{-270,-10},{-250,10}})));

    TIL.Connectors.LiquidPort WaterOutput(
      liquidType=liquidType)
      "Supply water"
      annotation (Placement(
        transformation(extent={{250,-12},{270,8}})));

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
          origin={0,-200})));
                             annotation (Placement(
        transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={0,-198}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={10,-110})),
      Icon(coordinateSystem(preserveAspectRatio=false, extent={{-260,-180},{260,
              180}})),
      Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-260,-180},{
              260,180}})));

    // Outputs

  end PartialHeatSource;

  model HeatPumpCycle "Simplified air-to-water heat pump model"
    extends PartialHeatSource;

    // ============================================================
    // USER PARAMETERS
    // ============================================================

    // --- General / heating ---
    parameter Real TSupplySet = 35
      "Supply water temperature setpoint in degC"
      annotation(Dialog(tab="General", group="Heating"));

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

    parameter Modelica.Units.SI.Time minOffTimeAfterDefrost = 1200
      "Minimum time between two defrost cycles"
      annotation(Dialog(tab="Defrost", group="Timing"));

    parameter Real defrostTriggerOnThreshold = -400
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

    // --- Evaporator ---
    parameter Integer evaporatorNSerialTubes(min=1) = 3
      "Number of serial tubes"
      annotation(Dialog(tab="Evaporator", group="Geometry"));

    parameter Integer evaporatorNParallelTubes(min=1) = 24
      "Number of parallel tubes"
      annotation(Dialog(tab="Evaporator", group="Geometry"));

    parameter Integer evaporatorNParallelHydraulicFlows(min=1) = 4
      "Number of tube-side parallel hydraulic flows"
      annotation(Dialog(tab="Evaporator", group="Geometry"));

    parameter Integer evaporatorNCells(min=1) = 10
      "Number of discretization cells"
      annotation(Dialog(tab="Evaporator", group="Geometry"));

    parameter Modelica.Units.SI.Time evaporatorDefrostTimeConstant = 2
      "Time constant of the frost/ice defrost model"
      annotation(Dialog(tab="Evaporator", group="Frosting"));

    // --- Condenser ---
    parameter Integer condenserNumberOfPlates(min=2) = 20
      "Number of plates in the condenser"
      annotation(Dialog(tab="Condenser", group="Geometry"));

    parameter Integer condenserNCells(min=1) = 15
      "Number of discretization cells"
      annotation(Dialog(tab="Condenser", group="Geometry"));

    // --- Compressor ---
    parameter Modelica.Units.SI.Volume compressorDisplacement = 30e-6
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

    parameter Real compressorControllerK = 4e-2
      "Compressor PI controller gain"
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

    parameter Modelica.Units.SI.Time expansionValveControllerTi = 1000
      "Expansion-valve PI integral time"
      annotation(Dialog(tab="Expansion valve", group="Controller"));

    parameter Modelica.Units.SI.Area expansionValveAreaMin = 0.05e-6
      "Minimum effective flow area"
      annotation(Dialog(tab="Expansion valve", group="Controller"));

    parameter Modelica.Units.SI.Area expansionValveAreaMax = 0.6e-6
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


    // --- Sensors / numerical smoothing ---
    parameter Modelica.Units.SI.Time waterOutletSensorTau = 0.5
      "Time constant of outlet-water temperature sensor"
      annotation(Dialog(tab="Advanced", group="Sensors"));

    parameter Real waterOutletSensorInitialTemperature = 30
      "Initial outlet-water sensor value in degC"
      annotation(Dialog(tab="Advanced", group="Sensors"));

    parameter Modelica.Units.SI.Time subcoolingSensorTau = 0.1
      "Time constant of subcooling sensor"
      annotation(Dialog(tab="Advanced", group="Sensors"));

    parameter Real fanFixedSpeedFallback = 10
      "Fixed fan speed used only if mechanical speed input is disabled"
      annotation(Dialog(tab="Fan", group="Advanced"));

    parameter Modelica.Units.SI.VolumeFlowRate sinkFixedVolumeFlow = -1
      "Fixed sink volume flow used only for boundary modes that require it"
      annotation(Dialog(tab="Ambient", group="Backflow"));

    // --- Advanced / initialization ---
    parameter Modelica.Units.SI.Pressure pInitialHigh = 800000
      "Initial high-side pressure"
      annotation(Dialog(tab="Advanced", group="Initialization"));

    parameter Modelica.Units.SI.Pressure pInitialLow = 800000
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
            extent={{-46,36},{-34,48}},
                                      rotation=0)));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint1(stateViewerIndex=0)
      annotation (Placement(transformation(extent={{-24,46},{-16,54}},
                                                                     rotation=0)));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint2(stateViewerIndex=1)
      annotation (Placement(transformation(extent={{-110,26},{-102,34}},
                                                                       rotation=0)));
    TIL.VLEFluidComponents.Valves.OrificeValve expansionValve(
      valveFlowVariableType=TIL.Internals.ValveFlowVariableType.EffectiveFlowArea,
      use_effectiveFlowAreaInput=true,
      effectiveFlowAreaFixed=expansionValveAreaFixed)
      annotation (Placement(transformation(
          origin={-120,6},
          extent={{-8,4},{8,-4}},
          rotation=270)));
    TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_lp(
        pressureStateID=2, pInitial=pInitialLow)  annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},     rotation=0,
          origin={-96,-42})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint3(stateViewerIndex=2)
      annotation (Placement(transformation(
          origin={-112,-32},
          extent={{-4,-4},{4,4}},
          rotation=0)));
    TIL.VLEFluidComponents.Separators.Separator separator(
      pressureStateID=3,
      V=separatorVolume,
      initialFillingLevel=separatorInitialFillingLevel,
      hStart=separatorHStart)
                  annotation (Placement(transformation(extent={{46,-56},{58,-36}},
            rotation=0)));
    TIL.VLEFluidComponents.Compressors.EffCompressor compressor(
      use_mechanicalPort=true,
      displacement=compressorDisplacement,
      nFixed=compressorSpeedInitial,
      volumetricEfficiency=compressorVolumetricEfficiency,
      isentropicEfficiency=compressorIsentropicEfficiency,
      effectiveIsentropicEfficiency=compressorEffectiveIsentropicEfficiency) annotation (Placement(transformation(
            extent={{64,-2},{80,14}}, rotation=0)));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint4(stateViewerIndex=3)
      annotation (Placement(transformation(
          extent={{-4,-4},{4,4}},
          rotation=0,
          origin={-26,-34})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint6(stateViewerIndex=5)
      annotation (Placement(transformation(
          extent={{-4,-4},{4,4}},
          rotation=0,
          origin={40,-34})));
    TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_lp1(
        pressureStateID=3, pInitial=pInitialLow) annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},       rotation=0,
          origin={26,-42})));
    TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterOut(
      useTimeConstant=true,
      tau=waterOutletSensorTau,
      useSteadyStateInitialization=false,
      redeclare TIL.Utilities.Units.Conversions.Units.degC unit,
      initialSensorValue=waterOutletSensorInitialTemperature)
      annotation (Placement(transformation(extent={{-66,64},{-58,72}})));
    TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterIn(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-102,64},{-94,72}})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint0(stateViewerIndex=7)
      annotation (Placement(transformation(extent={{68,46},{76,54}}, rotation=0)));
    TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_hp2(
        pressureStateID=4, pInitial=pInitialHigh) annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},       rotation=0,
          origin={26,42})));
    TIL.VLEFluidComponents.Tubes.Tube tube3(
      pressureStateID=4,
      redeclare TIL.VLEFluidComponents.Tubes.Geometry.Tube6x1 tubeGeometry(
          length=dischargeTubeLength),
      redeclare model TubeSideHeatTransferModel =
          TIL.VLEFluidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
          (constantAlpha=dischargeTubeAlpha),
      redeclare model WallHeatConductionModel =
          TIL.VLEFluidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
      redeclare model WallMaterial = TILMedia.Solid.Types.TILMedia_Copper,
      wallCellStateType="state north",
      m_flowStart=dischargeTubeMFlowStart,
      hInitialVLEFluid=dischargeTubeHInitial,
      pStart=dischargeTubePStart)
      annotation (Placement(transformation(
          extent={{-8,-2},{8,2}},
          rotation=180,
          origin={52,42})));
    TIL.HeatExchangers.Plate.VLEFluidLiquid.ParallelFlowHX condenser(
      redeclare TIL.HeatExchangers.Plate.Geometry.Example hxGeometry(
          numberOfPlates=condenserNumberOfPlates),
      nCells=condenserNCells,
      pressureStateID=1,
      redeclare model HeatTransferModel_a =
          TIL.HeatExchangers.Plate.TransportPhenomena.HeatTransfer.Longo2015,
      redeclare model PressureDropModel_a =
          TIL.HeatExchangers.Plate.TransportPhenomena.PressureDrop.VDIPlatePressureDrop,

      redeclare model HeatTransferModel_b =
          TIL.HeatExchangers.Plate.TransportPhenomena.HeatTransfer.VDIPlateAlpha,
      redeclare model PressureDropModel_b =
          TIL.HeatExchangers.Plate.TransportPhenomena.PressureDrop.VDIPlatePressureDrop,
      redeclare model WallMaterial = TILMedia.Solid.Types.TILMedia_Copper,
      redeclare model WallHeatConductionModel =
          TIL.HeatExchangers.Plate.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
      initVLEFluid_a="constantEnthalpy",
      hInitialVLEFluid_a=condenserHInitial,
      hInitialVLEFluid_a_Cell1=condenserHInitialCell1,
      hInitialVLEFluid_a_CellN=condenserHInitialCellN) annotation (Placement(transformation(extent={{-94,36},
              {-66,64}})));
    TIL.HeatExchangers.FinAndTube.MoistAirVLEFluid.CrossFlowHX evaporator(
      redeclare TIL.HeatExchangers.FinAndTube.Geometry.KKI001 hxGeometry(
        nSerialTubes=evaporatorNSerialTubes,
        nParallelTubes=evaporatorNParallelTubes,
        nTubeSideParallelHydraulicFlows=evaporatorNParallelHydraulicFlows),
      nCells=evaporatorNCells,
      pressureStateID=2,
      redeclare model TubeSideHeatTransferModel =
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.TubeSideHeatTransfer.ShahChenGnielinskiDittusBoelter,
      redeclare model TubeSidePressureDropModel =
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.TubeSidePressureDrop.Konakov,
      redeclare model WallMaterial = TILMedia.Solid.Types.TILMedia_Copper,
      redeclare model WallHeatConductionModel =
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
      redeclare model FinMaterial = TILMedia.Solid.Types.TILMedia_Aluminum,
      redeclare model FinEfficiencyModel =
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinEfficiency.Schmidt,
      redeclare model FinSideHeatTransferModel =
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSideHeatTransfer.Haaf,
      redeclare model FinSidePressureDropModel =
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSidePressureDrop.Haaf,
      flagActivateDynWaterBalance=true,
      redeclare model FrostingModel =
          TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSideFrosting.ConstantPorosityFrostIce
          (defrostTimeConstant=evaporatorDefrostTimeConstant))
                  annotation (Placement(transformation(extent={{-68,-56},{-40,-28}})));
    TIL.VLEFluidComponents.Sensors.Sensor_subcooling sensor_subcooling(
      useTimeConstant=true,
      tau=subcoolingSensorTau,
      useSteadyStateInitialization=false)
      annotation (Placement(transformation(
          extent={{-4,4},{4,-4}},
          rotation=180,
          origin={-132,30})));
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
      annotation (Placement(transformation(extent={{-152,12},{-140,0}})));
    Modelica.Blocks.Sources.RealExpression subcoolingSetpoint(y=subcoolingSetpointValue)
      annotation (Placement(transformation(extent={{-192,-2},{-162,14}})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint7(stateViewerIndex=6)
      annotation (Placement(transformation(
          extent={{-4,-4},{4,4}},
          rotation=0,
          origin={64,-34})));
    TIL.OtherComponents.Controllers.PIController compressorController(
      controllerType="PI",
      invertFeedback=false,
      k=compressorControllerK,
      yMax=compressorSpeedMax,
      yMin=compressorSpeedMin,
      yInitial=compressorSpeedInitial,
      use_activeInput=true,
      use_y_notActive=true,
      activationTime=compressorActivationTime)
      annotation (Placement(transformation(extent={{124,16},{112,4}})));
    TIL.OtherComponents.Mechanical.RotatoryBoundary rotatoryBoundary1(
        use_nInput=true, nFixed=compressorSpeedInitial)
      annotation (Placement(transformation(extent={{88,-4},{80,16}})));
    TIL.VLEFluidComponents.Sensors.Sensor_T      sensor_T_degC(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-84,-38},{-76,-30}})));
    Modelica.Blocks.Sources.RealExpression speedDefrost(y=compressorSpeedDefrost)
      annotation (Placement(transformation(extent={{-13,-8},{13,8}},
          rotation=90,
          origin={121,-22})));
    Modelica.Blocks.Sources.RealExpression valveAreaRestart(y=expansionValveAreaRestart)
      annotation (Placement(transformation(extent={{-194,-14},{-162,2}})));
    Modelica.Blocks.Sources.RealExpression COP(
      y=if P_el > 1e-3 then HeatFlow/P_el else 0)                                          annotation (Placement(transformation(extent={{62,120},
              {78,136}})));
    Modelica.Blocks.Sources.BooleanExpression defrostTriggerOn(y=-evaporator.Q_flow
          /max(1e-20, sensor_T_degC_ambientAirIn.sensorValue - sensor_T_degC.sensorValue)
           > defrostTriggerOnThreshold)
      annotation (Placement(transformation(extent={{20,-84},{46,-70}})));
    Modelica.Blocks.Sources.BooleanExpression defrostTriggerOff(y=sensor_T_degC.sensorValue
           > defrostStopTemperature)
      annotation (Placement(transformation(extent={{20,-108},{46,-92}})));
    Modelica.Blocks.Logical.Switch switch1 annotation (Placement(transformation(extent={{-142,
              -28},{-130,-16}})));
    Modelica.Blocks.Sources.RealExpression valveAreaDefrost(y=defrostValveArea)
      annotation (Placement(transformation(extent={{-194,-34},{-162,-18}})));
    TIL.VLEFluidComponents.Valves.FourWayValve
                                           fourWayValve(effectiveFlowArea=fourWayValveEffectiveArea)
      annotation (Placement(transformation(
          extent={{-8,-8},{8,8}},
          rotation=270,
          origin={0,38})));
    HeatPumpController heatPumpController(
      TSupplySet=TSupplySet,
      useDefrost=useDefrost,
      minTriggerOnTime=minTriggerOnTime,
      minTriggerOffTime=minTriggerOffTime,
      minOffTimeAfterDefrost=minOffTimeAfterDefrost,
      fanSpeedHeating=fanSpeedHeating,
      fanSpeedDefrost=fanSpeedDefrost)
      annotation (Placement(transformation(extent={{68,-110},{114,-68}})));
    Modelica.Blocks.Interfaces.RealInput T_ambient
      "Temperature of the ambient in K" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={-120,-200}), iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={-80,-190})));
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
          origin={-54,2})));
    TIL.GasComponents.Sensors.Sensor_T      sensor_T_degC_ambientAirIn(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-30,-16},{-22,-8}})));
    TIL.GasComponents.Sensors.Sensor_phi sensor_phi_ambientAirIn
      annotation (Placement(transformation(extent={{-44,-16},{-36,-8}})));
    TIL.GasComponents.Sensors.StatePoint statePoint annotation (Placement(transformation(extent={{-78,-16},
              {-70,-8}})));
    TIL.GasComponents.Boundaries.Boundary gasSink(
      pFixed=ambientPressure,
      V_flowFixed=sinkFixedVolumeFlow,
      phiFixed=sinkBackflowRelativeHumidity,
      boundaryType="p",
      TFixed=sinkBackflowTemperature,
      streamVariablesInputTypeConcentration="phi") annotation (Placement(
          transformation(extent={{4,10},{-4,-10}},     rotation=90,
          origin={-54,-132})));
    TIL.GasComponents.Sensors.Sensor_T      sensor_T_degC_ambientAirOut
      annotation (Placement(transformation(extent={{-42,-118},{-34,-110}})));
    TIL.GasComponents.Sensors.Sensor_V_flow sensor_V_flow_ambientAir
      annotation (Placement(transformation(extent={{4,-4},{-4,4}},
          rotation=90,
          origin={-54,-116})));
    TIL.GasComponents.Sensors.Sensor_phi sensor_phi_ambientAirOut
      annotation (Placement(transformation(extent={{-28,-118},{-20,-110}})));
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
      V_flow_Start=fanVolumeFlowStart)                          annotation (Placement(transformation(extent={{-46,-86},
              {-62,-102}})));
    TIL.OtherComponents.Mechanical.RotatoryBoundary rotatoryBoundary(use_nInput=true,
        nFixed=fanSpeedHeating)
      annotation (Placement(transformation(extent={{-34,-104},{-42,-84}})));
    TIL.GasComponents.Sensors.StatePoint statePoint5(index=1)
      annotation (Placement(transformation(extent={{-78,-118},{-70,-110}})));
    Modelica.Blocks.Logical.Switch switch2 annotation (Placement(transformation(extent={{6,-6},{
              -6,6}},
          rotation=270,
          origin={98,-18})));
    Modelica.Blocks.Sources.RealExpression CompressorDisable(y=0)
      "Disable compressor when heat source is turned of"
      annotation (Placement(transformation(extent={{-16,-8},{16,8}},
          rotation=90,
          origin={92,-48})));
  equation

    // ============================================================
    // HEAT-PUMP OUTPUTS
    // ============================================================

    P_el = compressor.shaftPower + fan2ndOrder.P_shaft;
    HeatFlow = -condenser.Q_flow;

    connect(statePoint1.sensorPort,pressureState_hp. portA) annotation (Line(
        points={{-20,46},{-20,42},{-34,42}},
        color={153,204,0},
        thickness=0.5));
    connect(pressureState_lp1.portA,separator. portInlet) annotation (Line(
        points={{32,-42},{47,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(statePoint0.sensorPort,compressor. portB) annotation (Line(
        points={{72,46},{72,14}},
        color={153,204,0},
        thickness=0.5));
    connect(compressor.portB,tube3. portA) annotation (Line(
        points={{72,14},{72,42},{60,42}},
        color={153,204,0},
        thickness=0.5));
    connect(tube3.portB,pressureState_hp2. portA) annotation (Line(
        points={{44,42},{32,42}},
        color={153,204,0},
        thickness=0.5));
    connect(separator.portGas,compressor. portA)
      annotation (Line(
        points={{57,-42},{72,-42},{72,-2}},
        color={153,204,0},
        thickness=0.5));
    connect(sensor_T_degC_waterIn.port,condenser. portA_b)
      annotation (Line(
        points={{-98,64},{-98,58},{-94,58}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_T_degC_waterOut.port,condenser. portB_b)
      annotation (Line(
        points={{-62,64},{-62,58},{-66,58}},
        color={0,170,238},
        thickness=0.5));
    connect(subcoolingSetpoint.y, expansionValveController.u_s)
      annotation (Line(points={{-160.5,6},{-151.6,6}}, color={0,0,127}));
    connect(statePoint7.sensorPort,compressor. portA)
      annotation (Line(
        points={{64,-38},{64,-42},{72,-42},{72,-2}},
        color={153,204,0},
        thickness=0.5));
    connect(rotatoryBoundary1.rotatoryFlange,compressor. rotatoryFlange)
      annotation (Line(
        points={{84,6},{80,6}},
        color={135,135,135},
        thickness=0.5));
    connect(compressorController.u_m, sensor_T_degC_waterOut.sensorValue)
      annotation (Line(points={{118,15.8},{118,80},{-62,80},{-62,70}}, color={0,0,
            127}));
    connect(speedDefrost.y, compressorController.y_notActive) annotation (Line(
          points={{121,-7.7},{121,-4},{118,-4},{118,4.2}},            color={0,0,127}));
    connect(valveAreaRestart.y, expansionValveController.y_notActive) annotation
      (Line(points={{-160.4,-6},{-146,-6},{-146,0.2}}, color={0,0,127}));
    connect(sensor_subcooling.sensorValue, expansionValveController.u_m)
      annotation (Line(points={{-132,32},{-146,32},{-146,11.8}}, color={0,0,127}));
    connect(statePoint2.sensorPort,expansionValve. portA)
      annotation (Line(
        points={{-106,26},{-106,24},{-120,24},{-120,14}},
        color={153,204,0},
        thickness=0.5));
    connect(sensor_subcooling.port,expansionValve. portA)
      annotation (Line(
        points={{-132,26},{-132,24},{-120,24},{-120,14}},
        color={153,204,0},
        thickness=0.5));
    connect(statePoint3.sensorPort,pressureState_lp. portB)
      annotation (Line(
        points={{-112,-36},{-112,-42},{-102,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(expansionValve.portB,pressureState_lp. portB)
      annotation (Line(
        points={{-120,-2},{-120,-42},{-102,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(statePoint6.sensorPort,separator. portInlet)
      annotation (Line(
        points={{40,-38},{40,-42},{47,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(switch1.y,expansionValve. effectiveFlowArea_in)
      annotation (Line(points={{-129.4,-22},{-128,-22},{-128,6},{-125,6}}, color={0,0,127}));
    connect(switch1.u1, expansionValveController.y) annotation (Line(points={{-143.2,
            -17.2},{-146,-17.2},{-146,-10},{-134,-10},{-134,6},{-139.6,6}}, color
          ={0,0,127}));
    connect(switch1.u3,valveAreaDefrost. y)
      annotation (Line(points={{-143.2,-26.8},{-143.2,-26},{-160.4,-26}}, color={0,0,127}));
    connect(pressureState_hp2.portB,fourWayValve. portA)
      annotation (Line(
        points={{20,42},{8,42}},
        color={153,204,0},
        thickness=0.5));
    connect(pressureState_hp.portA,fourWayValve. portB)
      annotation (Line(
        points={{-34,42},{-8,42}},
        color={153,204,0},
        thickness=0.5));
    connect(fourWayValve.portD,pressureState_lp1. portB)
      annotation (Line(
        points={{8,34},{14,34},{14,-42},{20,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(sensor_T_degC.port,pressureState_lp. portA)
      annotation (Line(
        points={{-80,-38},{-80,-42},{-90,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(evaporator.portA_vle,pressureState_lp. portA)
      annotation (Line(
        points={{-68,-42},{-90,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(evaporator.portB_vle,fourWayValve. portC)
      annotation (Line(
        points={{-40,-42},{-14,-42},{-14,34},{-8,34}},
        color={153,204,0},
        thickness=0.5));
    connect(statePoint4.sensorPort,fourWayValve. portC) annotation (Line(
        points={{-26,-38},{-26,-42},{-14,-42},{-14,34},{-8,34}},
        color={153,204,0},
        thickness=0.5));
    connect(condenser.portA_a,expansionValve. portA)
      annotation (Line(
        points={{-94,42},{-120,42},{-120,14}},
        color={153,204,0},
        thickness=0.5));
    connect(pressureState_hp.portB,condenser. portB_a)
      annotation (Line(
        points={{-46,42},{-66,42}},
        color={153,204,0},
        thickness=0.5));
    connect(WaterInput, condenser.portA_b) annotation (Line(
        points={{-260,0},{-242,0},{-242,58},{-94,58}},
        color={0,170,238},
        thickness=0.5));
    connect(condenser.portB_b, WaterOutput) annotation (Line(
        points={{-66,58},{244,58},{244,-2},{260,-2}},
        color={0,170,238},
        thickness=0.5));
    connect(defrostTriggerOff.y, heatPumpController.defrostTriggerOff)
      annotation (Line(points={{47.3,-100},{58,-100},{58,-99.5},{68.6571,-99.5}},
          color={255,0,255}));
    connect(defrostTriggerOn.y, heatPumpController.defrostTriggerOn) annotation (
        Line(points={{47.3,-77},{57.9785,-77},{57.9785,-78.5},{68.6571,-78.5}},
          color={255,0,255}));
    connect(fourWayValve.crossedConnection_in, heatPumpController.fourWayValve)
      annotation (Line(points={{0,29},{0,-122},{120,-122},{120,-85.5},{112.686,-85.5}},
          color={255,0,255}));
    connect(heatPumpController.controllerSwitch, compressorController.activeInput)
      annotation (Line(points={{112.686,-78.5},{124,-78.5},{124,-78},{134,-78},{134,
            13.8},{123.6,13.8}}, color={255,0,255}));
    connect(heatPumpController.controllerSwitch, expansionValveController.activeInput)
      annotation (Line(points={{112.686,-78.5},{124,-78.5},{124,-78},{134,-78},{134,
            20},{-156,20},{-156,9.8},{-151.6,9.8}}, color={255,0,255}));
    connect(heatPumpController.controllerSwitch, switch1.u2) annotation (Line(
          points={{112.686,-78.5},{134,-78.5},{134,20},{-156,20},{-156,-22},{-143.2,
            -22}}, color={255,0,255}));
    connect(heatPumpController.TemperatureSetpoint, compressorController.u_s)
      annotation (Line(points={{112.686,-92.5},{128,-92.5},{128,10},{123.6,10}},
          color={0,0,127}));
    connect(evaporator.portA_gas, gasSource.port) annotation (Line(
        points={{-54,-28},{-54,2}},
        color={255,153,0},
        thickness=0.5));
    connect(statePoint.port, gasSource.port) annotation (Line(
        points={{-74,-16},{-54,-16},{-54,2}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_phi_ambientAirIn.port, gasSource.port) annotation (Line(
        points={{-40,-16},{-54,-16},{-54,2}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_degC_ambientAirIn.port, gasSource.port) annotation (Line(
        points={{-26,-16},{-54,-16},{-54,2}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_V_flow_ambientAir.portB,gasSink. port)
      annotation (Line(
        points={{-54,-119},{-54,-132}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_degC_ambientAirOut.port,gasSink. port) annotation (Line(
        points={{-38,-118},{-38,-124},{-54,-124},{-54,-132}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_phi_ambientAirOut.port,gasSink. port) annotation (Line(
        points={{-24,-118},{-24,-124},{-54,-124},{-54,-132}},
        color={255,153,0},
        thickness=0.5));
    connect(statePoint5.port,gasSink. port) annotation (Line(
        points={{-74,-118},{-74,-124},{-54,-124},{-54,-132}},
        color={255,153,0},
        thickness=0.5));
    connect(fan2ndOrder.portB,sensor_V_flow_ambientAir. portA)
      annotation (Line(
        points={{-54,-102},{-54,-113}},
        color={255,153,0},
        thickness=0.5));
    connect(fan2ndOrder.rotatoryFlange,rotatoryBoundary. rotatoryFlange)
      annotation (Line(
        points={{-46,-94},{-38,-94}},
        color={135,135,135},
        thickness=0.5));
    connect(fan2ndOrder.portA, evaporator.portB_gas) annotation (Line(
        points={{-54,-86},{-54,-56}},
        color={255,153,0},
        thickness=0.5));
    connect(T_ambient, gasSource.T_in) annotation (Line(points={{-120,-200},{-120,
            -136},{-4,-136},{-4,10},{-48,10},{-48,-2}}, color={0,0,127}));
    connect(heatPumpController.fanSpeed, rotatoryBoundary.n_in) annotation (Line(
          points={{112.686,-99.5},{138,-99.5},{138,-132},{-12,-132},{-12,-94},{-34,
            -94}}, color={0,0,127}));
    connect(heatPumpController.enableHeatPump, EnableHeatSource) annotation (Line(
          points={{68.6571,-89},{6,-89},{6,-166},{0,-166},{0,-200}}, color={255,0,
            255}));
    connect(compressorController.y, switch2.u1) annotation (Line(points={{111.6,10},
            {108,10},{108,-32},{102.8,-32},{102.8,-25.2}}, color={0,0,127}));
    connect(rotatoryBoundary1.n_in, switch2.y)
      annotation (Line(points={{88,6},{98,6},{98,-11.4}}, color={0,0,127}));
    connect(heatPumpController.controllerSwitchCompressor, switch2.u2)
      annotation (Line(points={{112.686,-71.5},{120,-71.5},{120,-42},{98,-42},{98,
            -25.2}}, color={255,0,255}));
    connect(CompressorDisable.y, switch2.u3) annotation (Line(points={{92,-30.4},{
            92,-25.2},{93.2,-25.2}}, color={0,0,127}));
    annotation (Diagram(coordinateSystem(extent={{-260,-180},{260,180}})), Icon(
          coordinateSystem(extent={{-260,-180},{260,180}})));
  end HeatPumpCycle;

  model HeatPumpController
    "Supervisory controller for heat-pump operation and defrost"

    // ============================================================
    // PARAMETERS
    // ============================================================

    parameter Real TSupplySet = 35
      "Supply water temperature setpoint in degC"
      annotation (
        Dialog(
          tab="Heating",
          group="Temperature control"));

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
    HeatPumpCycle heatPumpCycle
      annotation (Placement(transformation(extent={{-26,-16},{26,16}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary
      annotation (Placement(transformation(extent={{-104,-10},{-96,10}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary1
      annotation (Placement(transformation(extent={{96,-10},{104,10}})));
  equation
    connect(boundary.port, heatPumpCycle.WaterInput) annotation (Line(
        points={{-100,0},{-26,0}},
        color={0,170,238},
        thickness=0.5));
    connect(heatPumpCycle.WaterOutput, boundary1.port) annotation (Line(
        points={{26,-0.177778},{63,-0.177778},{63,0},{100,0}},
        color={0,170,238},
        thickness=0.5));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end TestHeatPump;
end HeatingSource;
