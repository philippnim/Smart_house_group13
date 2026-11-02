within SmartHouse.HeatingSource;
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

  Modelica.Blocks.Sources.RealExpression boilerHeatFlow_off(y=0) annotation (
      Placement(transformation(extent={{17,-12},{-17,12}}, origin={149,-26})));

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

) annotation (
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

  Modelica.Blocks.Math.Gain sign_inversion(k=-1) annotation (Placement(
      transformation(
      extent={{-10,-10},{10,10}},
      rotation=270,
      origin={-2,94})));

  // ============================================================
  // PI-CONTROLLER
  // ============================================================

  parameter Modelica.Units.SI.ThermalConductance kBoiler = 900
  "Boiler PI proportional gain in W/K"
  annotation(Dialog(tab="Controller", group="PI"));

  parameter Modelica.Units.SI.Time TiBoiler = 300
  "Boiler PI integral time"
    annotation(Dialog(tab="Controller", group="PI"));

  TIL.OtherComponents.Controllers.PIController controller_boilerPower(
    controllerType="PI",
    k=kBoiler,
    Ti=TiBoiler,
    yMax=P_nominal,
    yMin=0,
    use_activeInput=true,
    use_y_notActive=true) annotation (Placement(transformation(
        extent={{-6,6},{6,-6}},
        rotation=90,
      origin={86,-26})));
  // ============================================================
  // Temperature sensor after boiler
  // ============================================================
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T annotation (Placement(
      transformation(
      extent={{-9,-9},{9,9}},
      rotation=180,
    origin={51,-47})));

  // Efficiency of the system and negative for heat boundary
  Modelica.Blocks.Math.Gain efficiency(k=eta) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={66,74})));

equation

  // ============================================================
  // Hydraulic circuit
  // ============================================================

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

  // ============================================================
  // Heating
  // ============================================================

  connect(heatBoundary.heatPort, tube1.heatPort[1])
    annotation (
      Line(
        points={{0,72},{0,2}},
        color={204,0,0},
        thickness=0.5));

  connect(efficiency.y, sign_inversion.u) annotation (Line(points={{66,85},{66,108},
          {-2,108},{-2,106}}, color={0,0,127}));
  connect(heatBoundary.Q_flow_in, sign_inversion.y)
    annotation (Line(points={{-2,76},{-2,83}}, color={0,0,127}));

  // ============================================================
  // Control
  // ============================================================

  connect(sensor_T.port, WaterOutput) annotation (Line(
      points={{51,-38},{51,0},{200,0}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T.sensorValue, controller_boilerPower.u_m) annotation (Line(
        points={{51,-51.5},{51,-62},{74,-62},{74,-26},{80.2,-26}}, color={0,0,127}));
  connect(TSupplySet, controller_boilerPower.u_s) annotation (Line(points={{132,
          -200},{132,-98},{86,-98},{86,-31.6}}, color={0,0,127}));
  connect(controller_boilerPower.y, efficiency.u) annotation (Line(points={{86,-19.6},
          {86,52},{66,52},{66,62}}, color={0,0,127}));
  connect(EnableHeatSource, controller_boilerPower.activeInput) annotation (
      Line(points={{0,-200},{0,-168},{82,-168},{82,-134},{82.2,-134},{82.2,-31.6}},
        color={255,0,255}));
  connect(boilerHeatFlow_off.y, controller_boilerPower.y_notActive)
    annotation (Line(points={{130.3,-26},{91.8,-26}}, color={0,0,127}));

  // ============================================================
  // Outputs
  // ============================================================

  connect(controller_boilerPower.y, P_el) annotation (Line(points={{86,-19.6},{86,
          160},{-50,160},{-50,190}}, color={0,0,127}));
  connect(efficiency.y, HeatFlow) annotation (Line(points={{66,85},{66,108},{50,
          108},{50,190}}, color={0,0,127}));

end ElectricalBoiler;
