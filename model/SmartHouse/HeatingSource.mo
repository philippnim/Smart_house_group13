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

    Modelica.Blocks.Interfaces.RealInput T_supply_set
    "Supply water temperature setpoint in degC"
    annotation (Placement(
      transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={0,-198}),
      iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={10,-110})));
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
          origin={-60,-200})));
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
    inner TIL.SystemInformationManager sim1(
      redeclare replaceable TILMedia.VLEFluid.Types.TILMedia_Propane
        vleFluidType1,
      redeclare replaceable TILMedia.Gas.Types.VDI4670_MoistAir gasType1,
      redeclare replaceable TILMedia.Liquid.Types.TILMedia_Water liquidType1)
      annotation (Placement(transformation(extent={{100,118},{120,138}}, rotation=0)));
    TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_hp(
        pressureStateID=1, pInitial=800000)  annotation (Placement(transformation(
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
      effectiveFlowAreaFixed=0.3e-6)
      annotation (Placement(transformation(
          origin={-120,6},
          extent={{-8,4},{8,-4}},
          rotation=270)));
    TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_lp(
        pressureStateID=2, pInitial=800000)  annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},     rotation=0,
          origin={-96,-42})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint3(stateViewerIndex=2)
      annotation (Placement(transformation(
          origin={-112,-32},
          extent={{-4,-4},{4,4}},
          rotation=0)));
    TIL.VLEFluidComponents.Separators.Separator separator(
      pressureStateID=3,
      V=1e-3,
      initialFillingLevel=0.5,
      hStart=430e3)
                  annotation (Placement(transformation(extent={{46,-56},{58,-36}},
            rotation=0)));
    TIL.VLEFluidComponents.Compressors.EffCompressor compressor(
      use_mechanicalPort=true,
      displacement=30e-6,
      nFixed=50,
      volumetricEfficiency=0.8,
      isentropicEfficiency=0.8,
      effectiveIsentropicEfficiency=0.8) annotation (Placement(transformation(
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
        pressureStateID=3, pInitial=800000) annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},       rotation=0,
          origin={26,-42})));
    TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterOut(
      useTimeConstant=true,
      tau=0.5,
      useSteadyStateInitialization=false,
      redeclare TIL.Utilities.Units.Conversions.Units.degC unit,
      initialSensorValue=30)
      annotation (Placement(transformation(extent={{-66,64},{-58,72}})));
    TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterIn(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-102,64},{-94,72}})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint0(stateViewerIndex=7)
      annotation (Placement(transformation(extent={{68,46},{76,54}}, rotation=0)));
    TIL.VLEFluidComponents.PressureStateElements.PressureState pressureState_hp2(
        pressureStateID=4, pInitial=800000) annotation (Placement(transformation(
            extent={{-6,-6},{6,6}},       rotation=0,
          origin={26,42})));
    TIL.VLEFluidComponents.Tubes.Tube tube3(
      pressureStateID=4,
      redeclare TIL.VLEFluidComponents.Tubes.Geometry.Tube6x1 tubeGeometry(
          length=1),
      redeclare model TubeSideHeatTransferModel =
          TIL.VLEFluidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
          (constantAlpha=500),
      redeclare model WallHeatConductionModel =
          TIL.VLEFluidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
      redeclare model WallMaterial = TILMedia.Solid.Types.TILMedia_Copper,
      wallCellStateType="state north",
      m_flowStart=0.03,
      hInitialVLEFluid=500e3,
      pStart=10000000)
      annotation (Placement(transformation(
          extent={{-8,-2},{8,2}},
          rotation=180,
          origin={52,42})));
    TIL.HeatExchangers.Plate.VLEFluidLiquid.ParallelFlowHX condenser(
      redeclare TIL.HeatExchangers.Plate.Geometry.Example hxGeometry(
          numberOfPlates=20),
      nCells=15,
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
      hInitialVLEFluid_a=280e3,
      hInitialVLEFluid_a_Cell1=550e3,
      hInitialVLEFluid_a_CellN=350e3) annotation (Placement(transformation(extent={{-94,36},
              {-66,64}})));
    TIL.HeatExchangers.FinAndTube.MoistAirVLEFluid.CrossFlowHX evaporator(
      redeclare TIL.HeatExchangers.FinAndTube.Geometry.KKI001 hxGeometry(
        nSerialTubes=3,
        nParallelTubes=24,
        nTubeSideParallelHydraulicFlows=4),
      nCells=10,
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
          (defrostTimeConstant=2))
                  annotation (Placement(transformation(extent={{-66,-56},{-38,
              -28}})));
    TIL.VLEFluidComponents.Sensors.Sensor_subcooling sensor_subcooling(
      useTimeConstant=true,
      tau=0.1,
      useSteadyStateInitialization=false)
      annotation (Placement(transformation(
          extent={{-4,4},{4,-4}},
          rotation=180,
          origin={-132,30})));
    TIL.OtherComponents.Controllers.PIController expansionValveController(
      controllerType="PI",
      invertFeedback=true,
      integralParameterType="Ti",
      k=0.5e-7,
      Ti=1000,
      yMax=0.6e-6,
      yMin=0.05e-6,
      initType="initialOutput",
      yInitial=0.3e-6,
      use_activeInput=true,
      use_y_notActive=true,
      activationTime=50)
      annotation (Placement(transformation(extent={{-152,12},{-140,0}})));
    Modelica.Blocks.Sources.RealExpression subcoolingSetpoint(y=5)
      annotation (Placement(transformation(extent={{-192,-2},{-162,14}})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint7(stateViewerIndex=6)
      annotation (Placement(transformation(
          extent={{-4,-4},{4,4}},
          rotation=0,
          origin={64,-34})));
    TIL.OtherComponents.Controllers.PIController compressorController(
      controllerType="PI",
      invertFeedback=false,
      k=4e-2,
      yMax=100,
      yMin=20,
      yInitial=60,
      use_activeInput=true,
      use_y_notActive=true,
      activationTime=50)
      annotation (Placement(transformation(extent={{106,12},{94,0}})));
    TIL.OtherComponents.Mechanical.RotatoryBoundary rotatoryBoundary1(
        use_nInput=true, nFixed=50)
      annotation (Placement(transformation(extent={{88,-4},{80,16}})));
    TIL.VLEFluidComponents.Sensors.Sensor_T      sensor_T_degC(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-84,-38},{-76,-30}})));
    Modelica.Blocks.Sources.RealExpression speedDefrost(y=60)
      annotation (Placement(transformation(extent={{82,-24},{108,-8}})));
    Modelica.Blocks.Sources.RealExpression valveAreaRestart(y=0.4e-6)
      annotation (Placement(transformation(extent={{-194,-14},{-162,2}})));
    Modelica.Blocks.Sources.RealExpression COP(y=-condenser.Q_flow/(compressor.shaftPower
           + fan2ndOrder.P_shaft))                                          annotation (Placement(transformation(extent={{62,120},
              {78,136}})));
    Modelica.Blocks.Sources.BooleanExpression defrostTriggerOn(y=-evaporator.Q_flow
          /max(1e-20, sensor_T_degC_ambientAirIn.sensorValue - sensor_T_degC.sensorValue)
           > -400)
      annotation (Placement(transformation(extent={{20,-86},{46,-72}})));
    Modelica.Blocks.Sources.BooleanExpression defrostTriggerOff(y=sensor_T_degC.sensorValue
           > 5)
      annotation (Placement(transformation(extent={{20,-104},{46,-88}})));
    Modelica.Blocks.Logical.Switch switch1 annotation (Placement(transformation(extent={{-142,
              -28},{-130,-16}})));
    Modelica.Blocks.Sources.RealExpression valveAreaDefrost(y=0.7e-6)
      annotation (Placement(transformation(extent={{-194,-34},{-162,-18}})));
    TIL.VLEFluidComponents.Valves.FourWayValve
                                           fourWayValve(effectiveFlowArea=2e-5)
      annotation (Placement(transformation(
          extent={{-8,-8},{8,8}},
          rotation=270,
          origin={0,38})));
    HeatPumpController heatPumpController(TSupplySet=35, useDefrost=true)
      annotation (Placement(transformation(extent={{68,-110},{114,-68}})));
  equation
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
      annotation (Line(points={{100,11.8},{100,80},{-62,80},{-62,70}}, color={0,0,
            127}));
    connect(compressorController.y, rotatoryBoundary1.n_in)
      annotation (Line(points={{93.6,6},{88,6}}, color={0,0,127}));
    connect(speedDefrost.y, compressorController.y_notActive) annotation (Line(
          points={{109.3,-16},{114,-16},{114,-4},{100,-4},{100,0.2}}, color={0,0,127}));
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
        points={{-66,-42},{-90,-42}},
        color={153,204,0},
        thickness=0.5));
    connect(evaporator.portB_vle,fourWayValve. portC)
      annotation (Line(
        points={{-38,-42},{-14,-42},{-14,34},{-8,34}},
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
      annotation (Line(points={{47.3,-96},{68.6571,-96}}, color={255,0,255}));
    connect(defrostTriggerOn.y, heatPumpController.defrostTriggerOn)
      annotation (Line(points={{47.3,-79},{57.9785,-79},{57.9785,-78.5},{
            68.6571,-78.5}}, color={255,0,255}));
    connect(fourWayValve.crossedConnection_in, heatPumpController.fourWayValve)
      annotation (Line(points={{0,29},{0,-122},{120,-122},{120,-89},{114,-89}},
          color={255,0,255}));
    connect(heatPumpController.controllerSwitch, compressorController.activeInput)
      annotation (Line(points={{114,-80.25},{120,-80.25},{120,9.8},{105.6,9.8}},
          color={255,0,255}));
    connect(heatPumpController.controllerSwitch, expansionValveController.activeInput)
      annotation (Line(points={{114,-80.25},{120,-80.25},{120,20},{-156,20},{
            -156,9.8},{-151.6,9.8}}, color={255,0,255}));
    connect(heatPumpController.controllerSwitch, switch1.u2) annotation (Line(
          points={{114,-80.25},{118,-80.25},{118,-80},{120,-80},{120,20},{-156,
            20},{-156,-22},{-143.2,-22}}, color={255,0,255}));
    connect(heatPumpController.TemperatureSetpoint, compressorController.u_s)
      annotation (Line(points={{114,-97.75},{128,-97.75},{128,6},{105.6,6}},
          color={0,0,127}));
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
          iconTransformation(extent={{-146,-50},{-126,-30}})));


    // ============================================================
    // OUTPUTS
    // ============================================================

    Modelica.Blocks.Interfaces.BooleanOutput controllerSwitch
      "True: normal PI control, False: defrost operation"
      annotation (
        Placement(
          transformation(extent={{136,42},{152,58}}),
          iconTransformation(extent={{132,42},{148,58}})));

    Modelica.Blocks.Interfaces.BooleanOutput fourWayValve
      "False: heating mode, True: reversed flow for defrost"
      annotation (
        Placement(
          transformation(extent={{136,-8},{152,8}}),
          iconTransformation(extent={{132,-8},{148,8}})));

    Modelica.Blocks.Interfaces.RealOutput TemperatureSetpoint
      "Supply water temperature setpoint in degC"
      annotation (
        Placement(
          transformation(extent={{136,-58},{152,-42}}),
          iconTransformation(extent={{132,-58},{148,-42}})));


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

    fourWayValve = defrostActive;


    // ============================================================
    // DEFROST STATE LOGIC
    // ============================================================

    when {
      initial(),
      useDefrost
        and not pre(defrostActive)
        and timerDefrostOn.y >= minTriggerOnTime
        and time - pre(lastDefrostEnd) >= minOffTimeAfterDefrost,
      pre(defrostActive)
        and timerDefrostOff.y >= minTriggerOffTime}
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
      annotation (Placement(transformation(extent={{-46,-38},{6,-6}})));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end TestHeatPump;
end HeatingSource;
