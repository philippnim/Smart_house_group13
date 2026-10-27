within SmartHouse.Rooms;
model ShowerSimpleModel
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType=sim.liquidType1 "Liquid type" annotation (Dialog(tab="SIM",
        group="SIM"), choices(
      choice=sim.liquidType1 "Liquid 1 as defined in SIM",
      choice=sim.liquidType2 "Liquid 2 as defined in SIM",
    choice=sim.liquidType3 "Liquid 3 as defined in SIM"));
// Gas that is utilized
  parameter TILMedia.Gas.Types.BaseGas gasType=sim.gasType1 "Gas type" annotation (Dialog(tab="SIM", group="SIM"),
    choices(
      choice=sim.gasType1 "Gas 1 as defined in SIM",
      choice=sim.gasType2 "Gas 2 as defined in SIM",
      choice=sim.gasType3 "Gas 3 as defined in SIM"));

  parameter Modelica.Units.SI.AbsolutePressure p_ColdWater(
    displayUnit="bar")
    "Cold-water supply absolute pressure"
    annotation(Dialog(tab="Operation", group="Cold-water supply"));

  parameter Modelica.Units.SI.Temperature T_coldWater(
    displayUnit="degC")
    "Cold-water supply temperature"
    annotation(Dialog(tab="Operation", group="Cold-water supply"));

  parameter Modelica.Units.SI.Temperature T_shower(
    displayUnit="degC")
    "Mixed-water temperature setpoint upstream of the heat exchanger"
    annotation(Dialog(tab="Operation", group="Shower setpoints"));

  parameter Modelica.Units.SI.VolumeFlowRate Vdot_shower(
    displayUnit="l/min")
    "Shower water volume flow rate setpoint"
    annotation(Dialog(tab="Operation", group="Shower setpoints"));

  parameter Real k_Temp
    "Temperature controller proportional gain"
    annotation(Dialog(tab="Control", group="Temperature controller"));

  parameter Modelica.Units.SI.Time Ti_Temp(
    min=Modelica.Constants.small)
    "Temperature controller integral time"
    annotation(Dialog(tab="Control", group="Temperature controller"));

  parameter Real k_Vdot
    "Volume flow controller proportional gain"
    annotation(Dialog(tab="Control", group="Volume flow controller"));

  parameter Modelica.Units.SI.Time Ti_Vdot(
    min=Modelica.Constants.small)
    "Volume flow controller integral time"
    annotation(Dialog(tab="Control", group="Volume flow controller"));
  TIL.HeatExchangers.FinAndTube.GasLiquid.ParallelFlowHX parallelFlowHX(
    redeclare TIL.HeatExchangers.FinAndTube.Geometry.KKI001 hxGeometry(
      finnedTubeLength=1.5,
      nSerialTubes=10,
      serialTubeDistance=0.01,
      nParallelTubes=10,
      parallelTubeDistance=0.01,
      tubeWallThickness=0.001,
      nTubeSideParallelHydraulicFlows=10),
    nCells=5,
    redeclare model TubeSideHeatTransferModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.TubeSideHeatTransfer.ConstantAlpha
        (constantAlpha=5000),
    redeclare model TubeSidePressureDropModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.TubeSidePressureDrop.ZeroPressureDrop,
    redeclare model WallMaterial = TILMedia.Solid.Types.TILMedia_Copper,
    redeclare model WallHeatConductionModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.WallHeatTransfer.ConstantR
        (constantR=0),
    redeclare model FinMaterial = TILMedia.Solid.Types.TILMedia_Copper,
    redeclare model FinEfficiencyModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinEfficiency.ConstFinEfficiency,
    redeclare model FinSideHeatTransferModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSideHeatTransfer.ConstantAlpha
        (constantAlpha=5000),
    redeclare model FinSidePressureDropModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSidePressureDrop.ZeroPressureDrop)
    annotation (Placement(transformation(
        extent={{-14,-14},{14,14}},
        rotation=270,
        origin={0,-2})));
  TIL.GasComponents.Fans.SimpleFan simpleFan(presetVariableType="V_flow",
      V_flowFixed=0.6)
    annotation (Placement(transformation(extent={{-8,-8},{8,8}},
        rotation=180,
        origin={-8,34})));
  TIL.Connectors.LiquidPort BWWVorlauf(liquidType=liquidType)
    annotation (Placement(transformation(extent={{92,50},{112,70}})));
  TIL.Connectors.LiquidPort BWWRuecklauf(liquidType=liquidType)
    annotation (Placement(transformation(extent={{90,-90},{110,-70}})));
  TIL.Connectors.GasPort ShowerAirIn(gasType=gasType)
    annotation (Placement(transformation(extent={{-110,70},{-90,90}})));
  TIL.Connectors.GasPort ShowerAirOut(gasType=gasType)
    annotation (Placement(transformation(extent={{-110,-90},{-90,-70}})));
  TIL.LiquidComponents.Valves.DirectionalControlValve directionalControlValve(
      use_switchingPositionInput=true) annotation (Placement(transformation(
        extent={{8,-6},{-8,6}},
        rotation=180,
        origin={46,58})));
  TIL.LiquidComponents.Valves.OrificeValve valve(use_effectiveFlowAreaInput=true)
    annotation (Placement(transformation(
        extent={{-8,-4},{8,4}},
        rotation=270,
        origin={46,28})));
  TIL.LiquidComponents.Boundaries.Boundary boundary(
    boundaryType="p",
    pFixed=p_ColdWater,
    TFixed=T_coldWater)
    annotation (Placement(transformation(extent={{-4,52},{4,72}})));
  TIL.LiquidComponents.Sensors.Sensor_V_flow sensor_V_flow
    annotation (Placement(transformation(extent={{24,16},{16,24}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T annotation (Placement(
        transformation(
        extent={{-4,-4},{4,4}},
        rotation=270,
        origin={58,48})));
  TIL.OtherComponents.Controllers.PIController controllerT(
    controllerType="PI",
    invertFeedback=true,
    k=k_Temp,
    Ti=Ti_Temp,
    yMax=1,
    yMin=0,
    yInitial=0.5) annotation (Placement(transformation(
        extent={{-6,6},{6,-6}},
        rotation=270,
        origin={46,80})));
  Modelica.Blocks.Sources.RealExpression realExpression(y=T_shower)
    annotation (Placement(transformation(extent={{10,90},{30,110}})));
  TIL.OtherComponents.Controllers.PIController controllerVdot(
    controllerType="PI",
    invertFeedback=false,
    k=k_Vdot,
    Ti=Ti_Vdot,
    yMax=1e-3,
    yMin=0) annotation (Placement(transformation(
        extent={{6,-6},{-6,6}},
        rotation=0,
        origin={70,28})));
  Modelica.Blocks.Sources.RealExpression realExpression1(y=Vdot_shower)
    annotation (Placement(transformation(extent={{114,18},{94,38}})));
equation
  connect(BWWRuecklauf, BWWRuecklauf) annotation (Line(
      points={{100,-80},{100,-80}},
      color={0,170,238},
      thickness=0.5));
  connect(simpleFan.portB, parallelFlowHX.portA_gas) annotation (Line(
      points={{-8,26},{-8,12}},
      color={255,153,0},
      thickness=0.5));
  connect(ShowerAirIn, simpleFan.portA) annotation (Line(
      points={{-100,80},{-8,80},{-8,42}},
      color={255,153,0},
      thickness=0.5));
  connect(ShowerAirOut, parallelFlowHX.portB_gas) annotation (Line(
      points={{-100,-80},{-8,-80},{-8,-16}},
      color={255,153,0},
      thickness=0.5));
  connect(BWWVorlauf, directionalControlValve.portB) annotation (Line(
      points={{102,60},{54,60}},
      color={0,170,238},
      thickness=0.5));
  connect(parallelFlowHX.portB_liq, BWWRuecklauf) annotation (Line(
      points={{8,-16},{8,-80},{100,-80}},
      color={0,170,238},
      thickness=0.5));
  connect(boundary.port, directionalControlValve.portC) annotation (Line(
      points={{0,62},{34,62},{34,60},{38,60}},
      color={0,170,238},
      thickness=0.5));
  connect(directionalControlValve.portA, valve.portA) annotation (Line(
      points={{46,52},{46,36}},
      color={0,170,238},
      thickness=0.5));
  connect(valve.portB, sensor_V_flow.portA) annotation (Line(
      points={{46,20},{23,20}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_V_flow.portB, parallelFlowHX.portA_liq) annotation (Line(
      points={{17,20},{8,20},{8,12}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T.port, valve.portA) annotation (Line(
      points={{54,48},{46,48},{46,36}},
      color={0,170,238},
      thickness=0.5));
  connect(controllerT.y, directionalControlValve.switchingPosition_in)
    annotation (Line(points={{46,73.6},{46,64.6}}, color={0,0,127}));
  connect(sensor_T.sensorValue, controllerT.u_m) annotation (Line(points={{60,
          48},{66,48},{66,80},{51.8,80}}, color={0,0,127}));
  connect(realExpression.y, controllerT.u_s)
    annotation (Line(points={{31,100},{46,100},{46,85.6}}, color={0,0,127}));
  connect(controllerVdot.y, valve.effectiveFlowArea_in)
    annotation (Line(points={{63.6,28},{51,28}}, color={0,0,127}));
  connect(sensor_V_flow.sensorValue, controllerVdot.u_m) annotation (Line(
        points={{20,23},{20,28},{32,28},{32,14},{70,14},{70,22.2}}, color={0,0,
          127}));
  connect(realExpression1.y, controllerVdot.u_s)
    annotation (Line(points={{93,28},{75.6,28}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ShowerSimpleModel;
