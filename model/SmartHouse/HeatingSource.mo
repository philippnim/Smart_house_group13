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

    // Controller input
    Modelica.Blocks.Interfaces.RealInput ControllerInput
      "Normalized heat source control signal"
      annotation (Placement(
        transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={0,-198}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={10,-110})));

    // Outputs
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

    annotation (
      Icon(coordinateSystem(preserveAspectRatio=false, extent={{-260,-180},{260,
              180}})),
      Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-260,-180},{
              260,180}})));

  end PartialHeatSource;

  model HeatPumpCycle "Simplified air-to-water heat pump model"
    extends PartialHeatSource;
    inner TIL.SystemInformationManager sim1(
      redeclare replaceable TILMedia.VLEFluid.Types.TILMedia_Propane
        vleFluidType1,
      redeclare replaceable TILMedia.Gas.Types.VDI4670_MoistAir gasType1,
      redeclare replaceable TILMedia.Liquid.Types.TILMedia_Water liquidType1)
      annotation (Placement(transformation(extent={{100,118},{120,138}}, rotation=0)));
    TIL.LiquidComponents.Pumps.SimplePump pump(
      presetVariableType="V_flow",
      m_flowFixed=0.03,
      use_volumeFlowRateInput=false,
      V_flowFixed=0.25e-3)
                          annotation (Placement(transformation(
          origin={-26,70},
          extent={{8,-8},{-8,8}},
          rotation=0)));
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
    TIL.GasComponents.Boundaries.Boundary gasSource(
      phiFixed=84,
      TFixed=275.15,
      boundaryType="p",
      V_flowFixed=-1,
      streamVariablesInputTypeConcentration="phi") annotation (Placement(
          transformation(extent={{4,10},{-4,-10}},   rotation=90,
          origin={-52,8})));
    TIL.GasComponents.Boundaries.Boundary gasSink(
      V_flowFixed=-1,
      phiFixed=90,
      boundaryType="p",
      TFixed=273.15 + 2,
      streamVariablesInputTypeConcentration="phi") annotation (Placement(
          transformation(extent={{4,10},{-4,-10}},     rotation=90,
          origin={-52,-120})));
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
    TIL.GasComponents.Sensors.Sensor_T      sensor_T_degC_ambientAirOut
      annotation (Placement(transformation(extent={{-40,-106},{-32,-98}})));
    TIL.GasComponents.Sensors.Sensor_V_flow sensor_V_flow_ambientAir
      annotation (Placement(transformation(extent={{4,-4},{-4,4}},
          rotation=90,
          origin={-52,-104})));
    TIL.GasComponents.Sensors.Sensor_T      sensor_T_degC_ambientAirIn(
        redeclare TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-26,-12},{-18,-4}})));
    TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterOut(
      useTimeConstant=true,
      tau=0.5,
      useSteadyStateInitialization=false,
      redeclare TIL.Utilities.Units.Conversions.Units.degC unit,
      initialSensorValue=30)
      annotation (Placement(transformation(extent={{-66,64},{-58,72}})));
    TIL.LiquidComponents.Sensors.Sensor_T      sensor_T_degC_waterIn
      annotation (Placement(transformation(extent={{-102,64},{-94,72}})));
    TIL.GasComponents.Sensors.Sensor_phi sensor_phi_ambientAirIn
      annotation (Placement(transformation(extent={{-40,-12},{-32,-4}})));
    TIL.GasComponents.Sensors.Sensor_phi sensor_phi_ambientAirOut
      annotation (Placement(transformation(extent={{-26,-106},{-18,-98}})));
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
    TIL.GasComponents.Fans.Fan2ndOrder fan2ndOrder(
      use_mechanicalPort=true,
      steadyStateMomentum=true,
      nFixed=10,
      n_nominal=13,
      dp_nominal=10,
      V_flow_nominal=0.639,
      V_flow0=0.70,
      deltaV_flow=0.02,
      dpInitial(displayUnit="Pa") = 10,
      V_flow_Start=0.639)                          annotation (Placement(transformation(extent={{-44,-74},
              {-60,-90}})));
    TIL.LiquidComponents.Sensors.Sensor_p sensor_p_waterOut
      annotation (Placement(transformation(extent={{-48,64},{-40,72}})));
    TIL.LiquidComponents.Sensors.Sensor_V_flow sensor_V_waterIn
      annotation (Placement(transformation(
          extent={{-4,-4},{4,4}},
          rotation=0,
          origin={-116,58})));
    TIL.OtherComponents.Controllers.PIController controller(
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
      activationTime=50) annotation (Placement(transformation(extent={{-152,12},
              {-140,0}})));
    Modelica.Blocks.Sources.RealExpression subcoolingSetpoint(y=5)
      annotation (Placement(transformation(extent={{-192,-2},{-162,14}})));
    TIL.OtherComponents.Mechanical.RotatoryBoundary rotatoryBoundary(use_nInput
        =true, nFixed=12)
      annotation (Placement(transformation(extent={{-32,-92},{-40,-72}})));
    TIL.GasComponents.Sensors.StatePoint statePoint annotation (Placement(transformation(extent={{-74,-12},
              {-66,-4}})));
    TIL.GasComponents.Sensors.StatePoint statePoint5(index=1)
      annotation (Placement(transformation(extent={{-76,-106},{-68,-98}})));
    TIL.VLEFluidComponents.Sensors.StatePoint statePoint7(stateViewerIndex=6)
      annotation (Placement(transformation(
          extent={{-4,-4},{4,4}},
          rotation=0,
          origin={64,-34})));
    TIL.OtherComponents.Controllers.PIController controller1(
      controllerType="PI",
      invertFeedback=false,
      k=4e-2,
      yMax=100,
      yMin=20,
      yInitial=60,
      use_activeInput=true,
      use_y_notActive=true,
      activationTime=50) annotation (Placement(transformation(extent={{106,12},
              {94,0}})));
    TIL.OtherComponents.Mechanical.RotatoryBoundary rotatoryBoundary1(
        use_nInput=true, nFixed=50)
      annotation (Placement(transformation(extent={{88,-4},{80,16}})));
    TIL.VLEFluidComponents.Sensors.Sensor_T      sensor_T_degC(redeclare
        TIL.Utilities.Units.Conversions.Units.degC unit)
      annotation (Placement(transformation(extent={{-84,-38},{-76,-30}})));
    TIL.GasComponents.HydraulicInductors.HydraulicInductor hydraulicInductor(
      momentumFactor=0.04,
      m_flowInitial=0.639,
      fixedInitialMassFlow=true)
      annotation (Placement(transformation(
          extent={{-6,-6},{6,6}},
          rotation=270,
          origin={-52,-6})));
    Modelica.Blocks.Sources.RealExpression speedDefrost(y=60)
      annotation (Placement(transformation(extent={{82,-24},{108,-8}})));
    Modelica.Blocks.Sources.RealExpression valveAreaRestart(y=0.4e-6)
      annotation (Placement(transformation(extent={{-194,-14},{-162,2}})));
    TIL.LiquidComponents.JunctionElements.VolumeJunction junction(TInitial=
          303.15)
      annotation (Placement(transformation(
          extent={{4,4},{-4,-4}},
          rotation=90,
          origin={-156,90})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary(boundaryType="Q_flow",
        Q_flowFixed=500)
      annotation (Placement(transformation(
          extent={{-4,-6},{4,6}},
          rotation=180,
          origin={-120,98})));
    Modelica.Blocks.Sources.RealExpression domesticHotWaterTemp(y=
          heatCapacityDomesticHotWater.T)
      annotation (Placement(transformation(extent={{4,-112},{46,-96}})));
    TIL.LiquidComponents.HydraulicCapacitors.ExpansionTank expansionTank(
      volume=0.008,
      TInitial=303.15,
      pInitial=300000,
      fixedInitialPressure=true) annotation (Placement(transformation(extent={{-150,54},
              {-134,70}})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary1(
      boundaryType="Q_flow",
      TFixed=293.15,
      Q_flowFixed=2000)
      annotation (Placement(transformation(
          extent={{-4,-6},{4,6}},
          rotation=180,
          origin={-120,124})));
    TIL.OtherComponents.Thermal.HeatResistor heatResistor(thermalResistance=
          0.002)
      annotation (Placement(transformation(
          extent={{-8,-2},{8,2}},
          rotation=180,
          origin={-92,124})));
    TIL.LiquidComponents.Tubes.Tube floorHeating(
      tubeGeometry(
        innerDiameter=0.016,
        wallThickness=0.002,
        length=60,
        nParallelTubes=8,
        crossSectionType=TIL.Internals.CrossSectionType.Circular),
      nCells=1,
      redeclare model TubeSideHeatTransferModel =
          TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
          (constantAlpha=1000),
      redeclare model WallHeatConductionModel =
          TIL.LiquidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
      redeclare model PressureDropModel =
          TIL.LiquidComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop,
      enableHeatPorts=true,
      TInitialLiquid=303.15,
      TInitialWall=303.15,
      m_flowStart=0.3e-3)
                        annotation (Placement(transformation(extent={{-72,114},
              {-88,118}})));
    TIL.OtherComponents.Thermal.HeatCapacitor heatCapacityFloor(
        heatCapacityFixed=18e6, TInitial=298.15)
      annotation (Placement(transformation(
          extent={{-6,-6},{6,6}},
          rotation=180,
          origin={-106,130})));
    TIL.LiquidComponents.Tubes.Tube pipeCoil(
      tubeGeometry(
        innerDiameter=0.016,
        wallThickness=0.001,
        length=8,
        nParallelTubes=1,
        crossSectionType=TIL.Internals.CrossSectionType.Circular),
      nCells=1,
      redeclare model TubeSideHeatTransferModel =
          TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
          (constantAlpha=1000),
      redeclare model WallHeatConductionModel =
          TIL.LiquidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
      redeclare model PressureDropModel =
          TIL.LiquidComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop,
      enableHeatPorts=true,
      m_flowStart=0.3e-3)
                        annotation (Placement(transformation(extent={{-72,88},{
              -88,92}})));
    TIL.OtherComponents.Thermal.HeatCapacitor heatCapacityDomesticHotWater(
        heatCapacityFixed=420e3, TInitial=324.15)
      annotation (Placement(transformation(
          extent={{-6,-6},{6,6}},
          rotation=180,
          origin={-106,104})));
    Modelica.Blocks.Sources.RealExpression COP(y=-condenser.Q_flow/(compressor.shaftPower
           + pump.P_hyd/pump.eta + fan2ndOrder.P_shaft))                    annotation (Placement(transformation(extent={{62,120},
              {78,136}})));
    TIL.Examples.ReversibleResidentialHeatPumpCycle_Propane.HeatPumpController
                       heatPumpController(defrostStop="Based on Trigger")
                                          annotation (Placement(transformation(extent={{62,-108},
              {100,-76}})));
    Modelica.Blocks.Sources.BooleanExpression defrostTriggerOn(y=-evaporator.Q_flow
          /max(1e-20, sensor_T_degC_ambientAirIn.sensorValue - sensor_T_degC.sensorValue)
           > -400 and not heatPumpController.switched)
      annotation (Placement(transformation(extent={{20,-88},{46,-74}})));
    Modelica.Blocks.Sources.BooleanExpression defrostTriggerOff(y=sensor_T_degC.sensorValue
           > 5)
      annotation (Placement(transformation(extent={{20,-100},{46,-84}})));
    TIL.GasComponents.Volumes.Volume volume(
      volume=20e-3,
      TInitial=275.15,
      inputTypeConcentration="phi",
      phiInitial=84,
      nPorts=2)
      annotation (Placement(transformation(extent={{-78,-66},{-70,-50}})));
    TIL.LiquidComponents.HydraulicInductors.HydraulicInductor hydraulicInductor1(
        m_flowInitial=0.3e-3, fixedInitialMassFlow=true)
      annotation (Placement(transformation(
          extent={{-6,-6},{6,6}},
          rotation=0,
          origin={-4,90})));
    TIL.LiquidComponents.Valves.LinearDirectionalControlValve linearDirectionalControlValve(
        use_switchingPositionInput=true, m_flowStart=-0.3e-3)
      annotation (Placement(transformation(
          extent={{8,-6},{-8,6}},
          rotation=180,
          origin={-26,88})));
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
    connect(sensor_T_degC_waterOut.port,sensor_p_waterOut. port)
      annotation (Line(
        points={{-62,64},{-62,58},{-44,58},{-44,64}},
        color={0,170,238},
        thickness=0.5));
    connect(subcoolingSetpoint.y,controller. u_s) annotation (Line(points={{-160.5,
            6},{-151.6,6}},                                                                            color={0,0,127}));
    connect(sensor_V_flow_ambientAir.portB,gasSink. port)
      annotation (Line(
        points={{-52,-107},{-52,-120}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_degC_ambientAirOut.port,gasSink. port) annotation (Line(
        points={{-36,-106},{-36,-112},{-52,-112},{-52,-120}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_phi_ambientAirOut.port,gasSink. port) annotation (Line(
        points={{-22,-106},{-22,-112},{-52,-112},{-52,-120}},
        color={255,153,0},
        thickness=0.5));
    connect(statePoint5.port,gasSink. port) annotation (Line(
        points={{-72,-106},{-72,-112},{-52,-112},{-52,-120}},
        color={255,153,0},
        thickness=0.5));
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
    connect(controller1.u_m,sensor_T_degC_waterOut. sensorValue)
      annotation (Line(points={{100,11.8},{100,80},{-62,80},{-62,70}},                  color={0,0,127}));
    connect(fan2ndOrder.portB,sensor_V_flow_ambientAir. portA)
      annotation (Line(
        points={{-52,-90},{-52,-101}},
        color={255,153,0},
        thickness=0.5));
    connect(controller1.y,rotatoryBoundary1. n_in)
      annotation (Line(points={{93.6,6},{88,6}},                                          color={0,0,127}));
    connect(speedDefrost.y,controller1. y_notActive)
      annotation (Line(points={{109.3,-16},{114,-16},{114,-4},{100,-4},{100,0.2}},
                                                                   color={0,0,127}));
    connect(valveAreaRestart.y,controller. y_notActive)
      annotation (Line(points={{-160.4,-6},{-146,-6},{-146,0.2}},     color={0,0,127}));
    connect(sensor_T_degC_waterIn.port,sensor_V_waterIn. portB)
      annotation (Line(
        points={{-98,64},{-98,58},{-113,58}},
        color={0,170,238},
        thickness=0.5));
    connect(sensor_subcooling.sensorValue,controller. u_m)
      annotation (Line(points={{-132,32},{-146,32},{-146,11.8}},   color={0,0,127}));
    connect(heatBoundary.heatPort,heatCapacityDomesticHotWater. heatPort)
      annotation (Line(
        points={{-120,98},{-106,98}},
        color={204,0,0},
        thickness=0.5));
    connect(heatCapacityFloor.heatPort,heatResistor. heatPortB)
      annotation (Line(
        points={{-106,124},{-100,124}},
        color={204,0,0},
        thickness=0.5));
    connect(floorHeating.heatPort[1],heatResistor. heatPortA)
      annotation (Line(
        points={{-80,118},{-80,124},{-84,124}},
        color={204,0,0},
        thickness=0.5));
    connect(heatCapacityFloor.heatPort,heatBoundary1. heatPort)
      annotation (Line(
        points={{-106,124},{-120,124}},
        color={204,0,0},
        thickness=0.5));
    connect(pump.portA,sensor_p_waterOut. port)
      annotation (Line(
        points={{-26,62},{-26,58},{-44,58},{-44,64}},
        color={0,170,238},
        thickness=0.5));
    connect(defrostTriggerOn.y,heatPumpController. defrostTriggerOn)
      annotation (Line(points={{47.3,-81},{47.3,-81.3333},{62.5429,-81.3333}},
                                                                    color={255,0,255}));
    connect(defrostTriggerOff.y,heatPumpController. defrostTriggerOff)
      annotation (Line(points={{47.3,-92},{62.5429,-92}},
                                                     color={255,0,255}));
    connect(domesticHotWaterTemp.y,heatPumpController. domesticHotWaterTemp)
      annotation (Line(points={{48.1,-104},{48.1,-102.667},{62.5429,-102.667}},color={0,0,127}));
    connect(rotatoryBoundary.n_in,heatPumpController. fanSpeed)
      annotation (Line(points={{-32,-82},{-10,-82},{-10,-118},{134,-118},{134,
            -105.333},{100.271,-105.333}},                                                           color={0,0,127}));
    connect(heatPumpController.TemperatureSetpoint,controller1. u_s)
      annotation (Line(points={{100.271,-92},{124,-92},{124,6},{105.6,6}},     color={0,0,127}));
    connect(gasSource.port,hydraulicInductor. portA)
      annotation (Line(
        points={{-52,8},{-52,0}},
        color={255,153,0},
        thickness=0.5));
    connect(fan2ndOrder.portA,volume. portArray[1]) annotation (Line(
        points={{-52,-74},{-52,-70},{-74,-70},{-74,-66.05}},
        color={255,153,0},
        thickness=0.5));
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
    connect(junction.portA,pipeCoil. portB)
      annotation (Line(
        points={{-152,90},{-88,90}},
        color={0,170,238},
        thickness=0.5));
    connect(floorHeating.portA,hydraulicInductor1. portB)
      annotation (Line(
        points={{-72,116},{10,116},{10,90},{2,90}},
        color={0,170,238},
        thickness=0.5));
    connect(junction.portC,expansionTank. portA)
      annotation (Line(
        points={{-156,86},{-156,58},{-150,58}},
        color={0,170,238},
        thickness=0.5));
    connect(expansionTank.portB,sensor_V_waterIn. portA)
      annotation (Line(
        points={{-134,58},{-119,58}},
        color={0,170,238},
        thickness=0.5));
    connect(junction.portB,floorHeating. portB)
      annotation (Line(
        points={{-156,94},{-156,116},{-88,116}},
        color={0,170,238},
        thickness=0.5));
    connect(pump.portB,linearDirectionalControlValve. portA)
      annotation (Line(
        points={{-26,78},{-26,82}},
        color={0,170,238},
        thickness=0.5));
    connect(linearDirectionalControlValve.portB,hydraulicInductor1. portA)
      annotation (Line(
        points={{-18,90},{-10,90}},
        color={0,170,238},
        thickness=0.5));
    connect(pipeCoil.portA,linearDirectionalControlValve. portC)
      annotation (Line(
        points={{-72,90},{-34,90}},
        color={0,170,238},
        thickness=0.5));
    connect(linearDirectionalControlValve.switchingPosition_in,
      heatPumpController.                                                          threeWayValve)
      annotation (Line(points={{-26,94.6},{-26,100},{136,100},{136,-98.6667},{
            100.271,-98.6667}},                                                       color={0,0,127}));
    connect(heatPumpController.controllerSwitch,controller1. activeInput)
      annotation (Line(points={{100.271,-78.6667},{120,-78.6667},{120,9.8},{
            105.6,9.8}},                                                                   color={255,0,255}));
    connect(controller.activeInput,controller1. activeInput) annotation (Line(points={{-151.6,
            9.8},{-154,9.8},{-154,22},{120,22},{120,9.8},{105.6,9.8}},
                                               color={255,0,255}));
    connect(heatCapacityDomesticHotWater.heatPort,pipeCoil. heatPort[1])
      annotation (Line(
        points={{-106,98},{-80,98},{-80,92}},
        color={204,0,0},
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
    connect(fan2ndOrder.rotatoryFlange,rotatoryBoundary. rotatoryFlange)
      annotation (Line(
        points={{-44,-82},{-36,-82}},
        color={135,135,135},
        thickness=0.5));
    connect(switch1.y,expansionValve. effectiveFlowArea_in)
      annotation (Line(points={{-129.4,-22},{-128,-22},{-128,6},{-125,6}}, color={0,0,127}));
    connect(switch1.u1,controller. y)
      annotation (Line(points={{-143.2,-17.2},{-146,-17.2},{-146,-10},{-134,-10},
            {-134,6},{-139.6,6}},                                                                    color={0,0,127}));
    connect(switch1.u3,valveAreaDefrost. y)
      annotation (Line(points={{-143.2,-26.8},{-143.2,-26},{-160.4,-26}}, color={0,0,127}));
    connect(switch1.u2,controller1. activeInput)
      annotation (Line(points={{-143.2,-22},{-154,-22},{-154,22},{120,22},{120,
            9.8},{105.6,9.8}},                                                                      color={255,0,255}));
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
    connect(heatPumpController.fourWayValve,fourWayValve. crossedConnection_in)
      annotation (Line(points={{100.271,-85.3333},{114,-85.3333},{114,-62},{0,
            -62},{0,29}},                                                                     color={255,0,255}));
    connect(statePoint.port,hydraulicInductor. portB)
      annotation (Line(
        points={{-70,-12},{-70,-16},{-52,-16},{-52,-12}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_phi_ambientAirIn.port,hydraulicInductor. portB)
      annotation (Line(
        points={{-36,-12},{-36,-16},{-52,-16},{-52,-12}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_degC_ambientAirIn.port,hydraulicInductor. portB)
      annotation (Line(
        points={{-22,-12},{-22,-16},{-52,-16},{-52,-12}},
        color={255,153,0},
        thickness=0.5));
    connect(evaporator.portA_gas,hydraulicInductor. portB)
      annotation (Line(
        points={{-52,-28},{-52,-12}},
        color={255,153,0},
        thickness=0.5));
    connect(evaporator.portB_gas,volume. portArray[2]) annotation (Line(
        points={{-52,-56},{-52,-70},{-74,-70},{-74,-65.55}},
        color={255,153,0},
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
    annotation (Diagram(coordinateSystem(extent={{-260,-180},{260,180}})), Icon(
          coordinateSystem(extent={{-260,-180},{260,180}})));
  end HeatPumpCycle;

  model HeatPumpController "PI controller for heat-pump operation"
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end HeatPumpController;

  model TestHeatPump "Stand-alone test model for validation of heat-pump"
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end TestHeatPump;
end HeatingSource;
