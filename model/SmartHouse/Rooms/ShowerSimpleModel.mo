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
  outer TIL.SystemInformationManager sim;
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
  Modelica.Blocks.Interfaces.BooleanInput showerEnabled;

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
    annotation (Placement(transformation(extent={{92,70},{112,90}})));
  TIL.Connectors.LiquidPort BWWRuecklauf(liquidType=liquidType)
    annotation (Placement(transformation(extent={{90,-90},{110,-70}})));
  TIL.Connectors.GasPort ShowerAirIn(gasType=gasType)
    annotation (Placement(transformation(extent={{-110,70},{-90,90}})));
  TIL.Connectors.GasPort ShowerAirOut(gasType=gasType)
    annotation (Placement(transformation(extent={{-110,-90},{-90,-70}})));
  TIL.LiquidComponents.Valves.DirectionalControlValve directionalControlValve(
      use_switchingPositionInput=true, switchingPositionFixed=0.5)
                                       annotation (Placement(transformation(
        extent={{8,-6},{-8,6}},
        rotation=180,
        origin={46,78})));
  TIL.LiquidComponents.Valves.OrificeValve valve(use_effectiveFlowAreaInput=true)
    annotation (Placement(transformation(
        extent={{-8,-4},{8,4}},
        rotation=270,
        origin={46,28})));
  TIL.LiquidComponents.Boundaries.Boundary boundary(
    boundaryType="p",
    pFixed=p_ColdWater,
    TFixed=T_coldWater)
    annotation (Placement(transformation(extent={{-4,72},{4,92}})));
  TIL.LiquidComponents.Sensors.Sensor_V_flow sensor_V_flow
    annotation (Placement(transformation(extent={{24,16},{16,24}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T annotation (Placement(
        transformation(
        extent={{-4,-4},{4,4}},
        rotation=270,
        origin={58,68})));
  TIL.OtherComponents.Controllers.PIController controllerT(
    controllerType="PI",
    invertFeedback=true,
    k=k_Temp,
    Ti=Ti_Temp,
    yMax=1,
    yMin=0,
    yInitial=0.5,
    use_activeInput=true,
    use_y_notActive=true)
                  annotation (Placement(transformation(
        extent={{-6,6},{6,-6}},
        rotation=270,
        origin={46,100})));
  Modelica.Blocks.Sources.RealExpression realExpression(y=T_shower)
    annotation (Placement(transformation(extent={{10,110},{30,130}})));
  TIL.OtherComponents.Controllers.PIController controllerVdot(
    controllerType="PI",
    invertFeedback=false,
    k=k_Vdot,
    Ti=Ti_Vdot,
    yMax=1e-3,
    yMin=1e-9,
    yInitial=1e-9,
    use_activeInput=true,
    use_y_notActive=true)
            annotation (Placement(transformation(
        extent={{6,-6},{-6,6}},
        rotation=0,
        origin={70,28})));
  Modelica.Blocks.Sources.RealExpression realExpression1(
  y=if showerEnabled then Vdot_shower else 0)
  annotation (Placement(transformation(extent={{114,18},{94,38}})));
  TIL.LiquidComponents.HydraulicInductors.HydraulicInductor hydraulicInductor(
      momentumFactor=0.01) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=270,
        origin={46,60})));
  TIL.LiquidComponents.Tubes.Tube tube(
    tubeGeometry(
      innerDiameter=0.1,
      wallThickness=0.01,
      length=1,
      nParallelTubes=1),
    nCells=1,
    redeclare model TubeSideHeatTransferModel =
        TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
        (constantAlpha=0),
    redeclare model PressureDropModel =
        TIL.LiquidComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop)
    annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=270,
        origin={64,46})));
  TIL.LiquidComponents.Pumps.SimplePump simplePump(presetVariableType="dp",
      dpFixed=20000)
    annotation (Placement(transformation(extent={{-8,-8},{8,8}},
        rotation=270,
        origin={16,82})));
  TIL.LiquidComponents.Pumps.SimplePump simplePump1(presetVariableType="dp",
      dpFixed=20000)
    annotation (Placement(transformation(extent={{-8,-8},{8,8}},
        rotation=90,
        origin={76,80})));
equation
  // Stop both controllers regulating while the shower is off.
   connect(showerEnabled, controllerT.activeInput);
   connect(showerEnabled, controllerVdot.activeInput);

// Hold a neutral mixing position and a small flow-valve area.
  controllerT.y_notActive = 0.5;
  controllerVdot.y_notActive = 1e-9;
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
  connect(parallelFlowHX.portB_liq, BWWRuecklauf) annotation (Line(
      points={{8,-16},{8,-80},{100,-80}},
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
  connect(controllerT.y, directionalControlValve.switchingPosition_in)
    annotation (Line(points={{46,93.6},{46,84.6}}, color={0,0,127}));
  connect(sensor_T.sensorValue, controllerT.u_m) annotation (Line(points={{60,68},
          {66,68},{66,100},{51.8,100}},
                                      color={0,0,127}));
  connect(realExpression.y, controllerT.u_s)
    annotation (Line(points={{31,120},{46,120},{46,105.6}},color={0,0,127}));
  connect(controllerVdot.y, valve.effectiveFlowArea_in)
    annotation (Line(points={{63.6,28},{51,28}}, color={0,0,127}));
  connect(sensor_V_flow.sensorValue, controllerVdot.u_m) annotation (Line(
        points={{20,23},{20,28},{32,28},{32,14},{70,14},{70,22.2}}, color={0,0,127}));
  connect(realExpression1.y, controllerVdot.u_s)
    annotation (Line(points={{93,28},{75.6,28}}, color={0,0,127}));
  connect(directionalControlValve.portA, hydraulicInductor.portA) annotation (
      Line(
      points={{46,72},{46,66}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T.port, hydraulicInductor.portA) annotation (Line(
      points={{54,68},{46,68},{46,66}},
      color={0,170,238},
      thickness=0.5));
  connect(hydraulicInductor.portB, tube.portA) annotation (Line(
      points={{46,54},{46,50},{56,50},{56,58},{64,58},{64,54}},
      color={0,170,238},
      thickness=0.5));
  connect(valve.portA, tube.portB) annotation (Line(
      points={{46,36},{46,40},{58,40},{58,38},{64,38}},
      color={0,170,238},
      thickness=0.5));
  connect(boundary.port, simplePump.portA) annotation (Line(
      points={{0,82},{8,82}},
      color={0,170,238},
      thickness=0.5));
  connect(simplePump.portB, directionalControlValve.portC) annotation (Line(
      points={{24,82},{34,82},{34,80},{38,80}},
      color={0,170,238},
      thickness=0.5));
  connect(BWWVorlauf, simplePump1.portA) annotation (Line(
      points={{102,80},{84,80}},
      color={0,170,238},
      thickness=0.5));
  connect(simplePump1.portB, directionalControlValve.portB) annotation (Line(
      points={{68,80},{54,80}},
      color={0,170,238},
      thickness=0.5));
  annotation (Icon(graphics={Bitmap(
          extent={{-100,-100},{100,100}},
    fileName="modelica://SmartHouse/Images/shower.png"),
    Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ShowerSimpleModel;
