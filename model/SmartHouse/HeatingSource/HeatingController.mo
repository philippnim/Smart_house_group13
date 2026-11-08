within SmartHouse.HeatingSource;
model HeatingController
  "Controlls the massflows for floorheating in each room"

    outer TIL.SystemInformationManager sim;

  parameter TILMedia.Liquid.Types.BaseLiquid liquidType=sim.liquidType1 "Liquid type" annotation (Dialog(tab="SIM",
        group="SIM"), choices(
      choice=sim.liquidType1 "Liquid 1 as defined in SIM",
      choice=sim.liquidType2 "Liquid 2 as defined in SIM",
      choice=sim.liquidType3 "Liquid 3 as defined in SIM"));
  parameter Real T_set1 = 21 + 273.15
    "Room 1 temperature setpoint in K"
    annotation(Dialog(tab="Room setpoints", group="Room temperatures"));
  parameter Real T_set2 = 21 + 273.15
    "Room 2 temperature setpoint in K"
    annotation(Dialog(tab="Room setpoints", group="Room temperatures"));
  parameter Real T_set3 = 21 + 273.15
    "Room 3 temperature setpoint in K"
    annotation(Dialog(tab="Room setpoints", group="Room temperatures"));
  parameter Real T_set4 = 21 + 273.15
    "Room 4 temperature setpoint in K"
    annotation(Dialog(tab="Room setpoints", group="Room temperatures"));
  parameter Real k = 5e-6
    "PID proportional gain"
    annotation(Dialog(tab="Controller", group="PID"));
  parameter Modelica.Units.SI.Time Ti = 3600
    "PID integral time"
    annotation(Dialog(tab="Controller", group="PID"));
  parameter Modelica.Units.SI.Area A_eff_max = 2e-5
    "Maximum effective flow area of room valve";
  parameter Modelica.Units.SI.Area A_eff_min = 1e-8
    "Minimum effective flow area of room valve";

  TIL.Connectors.LiquidPort WaterSupply(liquidType=liquidType)
    "Heating water supply from thermal storage"
    annotation(Placement(transformation(
      extent={{-10,-10},{10,10}},
      origin={38,100}),
      iconTransformation(
        extent={{-10,-10},{10,10}},
        origin={38,100})));
  TIL.Connectors.LiquidPort WaterReturn(liquidType=liquidType)
    "Heating water return to thermal storage"
    annotation(Placement(transformation(
      extent={{-10,-10},{10,10}},
      origin={40,-100}),
      iconTransformation(
        extent={{-10,-10},{10,10}},
        origin={40,-100})));

  // PI-Controllers
  Modelica.Blocks.Continuous.LimPID pid1(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=k,
    Ti=Ti,
    yMin=A_eff_min,
    yMax=A_eff_max)
    annotation(Placement(transformation(
      extent={{-10,-10},{10,10}},
      origin={-30,90})));
  Modelica.Blocks.Continuous.LimPID pid2(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=k,
    Ti=Ti,
    yMin=A_eff_min,
    yMax=A_eff_max)
    annotation(Placement(transformation(
      extent={{-10,-10},{10,10}},
      origin={-30,50})));
  Modelica.Blocks.Continuous.LimPID pid3(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=k,
    Ti=Ti,
    yMin=A_eff_min,
    yMax=A_eff_max)
    annotation(Placement(transformation(
      extent={{-10,-10},{10,10}},
      origin={-30,10})));
  Modelica.Blocks.Continuous.LimPID pid4(
    controllerType=Modelica.Blocks.Types.SimpleController.PI,
    k=k,
    Ti=Ti,
    yMin=A_eff_min,
    yMax=A_eff_max)
    annotation(Placement(transformation(
      extent={{-10,-10},{10,10}},
      origin={-30,-30})));
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
  TIL.LiquidComponents.Sensors.Sensor_m_flow sensor_m_flow_Room1
    annotation (Placement(transformation(extent={{86,96},{94,104}})));
  TIL.LiquidComponents.Sensors.Sensor_m_flow sensor_m_flow_Room2
    annotation (Placement(transformation(extent={{86,56},{94,64}})));
  TIL.LiquidComponents.Sensors.Sensor_m_flow sensor_m_flow_Room3
    annotation (Placement(transformation(extent={{86,16},{94,24}})));
  TIL.LiquidComponents.Sensors.Sensor_m_flow sensor_m_flow_Room4
    annotation (Placement(transformation(extent={{86,-24},{94,-16}})));
  TIL.LiquidComponents.Valves.OrificeValve valveRoom1(
    liquidType=liquidType,
      use_effectiveFlowAreaInput=true)
    annotation (Placement(transformation(extent={{62,96},{78,104}})));
  TIL.LiquidComponents.Valves.OrificeValve valveRoom2(
    liquidType=liquidType,
      use_effectiveFlowAreaInput=true)
    annotation (Placement(transformation(extent={{62,56},{78,64}})));
  TIL.LiquidComponents.Valves.OrificeValve valveRoom3(
    liquidType=liquidType,
      use_effectiveFlowAreaInput=true)
    annotation (Placement(transformation(extent={{62,16},{78,24}})));
  TIL.LiquidComponents.Valves.OrificeValve valveRoom4(
    liquidType=liquidType,
      use_effectiveFlowAreaInput=true)
    annotation (Placement(transformation(extent={{62,-24},{78,-16}})));
  Connectors.HouseHeatingOutput houseHeatingOutput(liquidType=liquidType)
    annotation (Placement(transformation(extent={{80,-100},{100,-80}})));
  TIL.LiquidComponents.Sensors.Sensor_h sensor_h_return
    annotation (Placement(transformation(extent={{40,-72},{48,-64}})));
  TIL.LiquidComponents.Sensors.Sensor_h sensor_h_in
    annotation (Placement(transformation(extent={{12,86},{28,102}})));
equation
  connect(WaterSupply, valveRoom1.portA) annotation (Line(
      points={{38,100},{62,100}},
      color={0,170,238},
      thickness=0.5));
  connect(WaterSupply, valveRoom2.portA) annotation (Line(
      points={{38,100},{38,60},{62,60}},
      color={0,170,238},
      thickness=0.5));
  connect(valveRoom1.portB, sensor_m_flow_Room1.portA) annotation (Line(
      points={{78,100},{87,100}},
      color={0,170,238},
      thickness=0.5));
  connect(valveRoom2.portB, sensor_m_flow_Room2.portA) annotation (Line(
      points={{78,60},{87,60}},
      color={0,170,238},
      thickness=0.5));
  connect(valveRoom3.portB, sensor_m_flow_Room3.portA) annotation (Line(
      points={{78,20},{87,20}},
      color={0,170,238},
      thickness=0.5));
  connect(valveRoom4.portB, sensor_m_flow_Room4.portA) annotation (Line(
      points={{78,-20},{87,-20}},
      color={0,170,238},
      thickness=0.5));
  connect(pid4.y, valveRoom4.effectiveFlowArea_in)
    annotation (Line(points={{-19,-30},{0,-30},{0,0},{70,0},{70,-15}},
                                                            color={0,0,127}));
  connect(pid3.y, valveRoom3.effectiveFlowArea_in) annotation (Line(points={{-19,10},
          {0,10},{0,40},{70,40},{70,25}},      color={0,0,127}));
  connect(pid2.y, valveRoom2.effectiveFlowArea_in) annotation (Line(points={{-19,50},
          {0,50},{0,80},{70,80},{70,65}},       color={0,0,127}));
  connect(pid1.y, valveRoom1.effectiveFlowArea_in) annotation (Line(points={{-19,90},
          {0,90},{0,120},{70,120},{70,105}},     color={0,0,127}));
  connect(setpoint1.y, pid1.u_s) annotation (Line(points={{-86.8,94},{-42,94},{-42,
          90}},            color={0,0,127}));
  connect(setpoint2.y, pid2.u_s) annotation (Line(points={{-86.8,10},{-56,10},{-56,
          50},{-42,50}},   color={0,0,127}));
  connect(setpoint3.y, pid3.u_s) annotation (Line(points={{-86.8,-8},{-54,-8},{-54,
          10},{-42,10}},     color={0,0,127}));
  connect(setpoint4.y, pid4.u_s) annotation (Line(points={{-86.8,-90},{-68,-90},
          {-68,-30},{-42,-30}},
                            color={0,0,127}));
  connect(sensor_m_flow_Room1.portB, houseHeatingOutput.supplyP[1]);
  connect(sensor_m_flow_Room2.portB, houseHeatingOutput.supplyP[2]);
  connect(sensor_m_flow_Room3.portB, houseHeatingOutput.supplyP[3]);
  connect(sensor_m_flow_Room4.portB, houseHeatingOutput.supplyP[4]);
  connect(houseHeatingOutput.returnP[1], WaterReturn);
  connect(houseHeatingOutput.returnP[2], WaterReturn);
  connect(houseHeatingOutput.returnP[3], WaterReturn);
  connect(houseHeatingOutput.returnP[4], WaterReturn);
  connect(houseHeatingOutput.roomTemp[1], pid1.u_m);
  connect(houseHeatingOutput.roomTemp[2], pid2.u_m);
  connect(houseHeatingOutput.roomTemp[3], pid3.u_m);
  connect(houseHeatingOutput.roomTemp[4], pid4.u_m);
  connect(valveRoom3.portA, WaterSupply) annotation (Line(
      points={{62,20},{38,20},{38,100}},
      color={0,170,238},
      thickness=0.5));
  connect(valveRoom4.portA, WaterSupply) annotation (Line(
      points={{62,-20},{38,-20},{38,100}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_h_return.port, WaterReturn) annotation (Line(
      points={{44,-72},{44,-86},{40,-86},{40,-100}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_h_in.port, WaterSupply) annotation (Line(
      points={{20,86},{20,78},{38,78},{38,100}},
      color={0,170,238},
      thickness=0.5));
    annotation(
      choicesAllMatching=true,
      Dialog(tab="Medium"),
              Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));

  // ============================================================
  // ROOM TEMPERATURE SETPOINTS
  // ============================================================

  // ============================================================
  // PID PARAMETERS
  // ============================================================

// ============================================================
  // HYDRAULIC PORTS
  // ============================================================

  // ============================================================
  // PID CONTROLLERS
  // ============================================================

// ============================================================
  // CONSTANT SETPOINTS
  // ============================================================

  // ==========================================
  // HOUSE CONNECTOR - SUPPLY
  // ==========================================

  // ==========================================
  // HOUSE CONNECTOR - RETURN
  // ==========================================

  // ==========================================
  // HOUSE CONNECTOR - ROOM TEMPERATURES
  // ==========================================

end HeatingController;
