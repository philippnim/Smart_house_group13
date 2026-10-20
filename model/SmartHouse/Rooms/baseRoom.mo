within SmartHouse.Rooms;
partial model BaseRoom "tbd"
  import SI = Modelica.Units.SI;

  // Geometry parameters (need to be given)
  parameter SI.Area A_floor "zone area" annotation(Dialog(group="Geometry"));
  parameter SI.Height h "height of the zone" annotation(Dialog(group="Geometry"));

  // Defining the Air in the room
  parameter SI.Volume Volume = A_floor * h "Volume of the zone, usually calculated from the Area and the height of the zone" annotation(Dialog(group="Geometry"));
  parameter Real phiInitial = 50 "Initial phi of the air in the zone" annotation(Dialog(group="Air Properties"));
  parameter Real mixingRatioInitial[:] = {0.8, 0.2} "Initial array for mixing ratio of mass fraction" annotation(Dialog(group="Air Properties"));
  parameter SI.Pressure initialPressure = 1.013e5 "Initial Pressure of the air" annotation(Dialog(group="Air Properties"));
  parameter SI.Temperature initialTemperature = 298.15 "Initial Temperature of the air in the room" annotation(Dialog(group="Air Properties"));

  // If existing Thermal masses within the room can be added
  parameter Boolean enableInternalMass = false "Enable internal thermal mass"
    annotation(Dialog(group="Thermal Mass"));
  parameter SI.ThermalConductance G_airMass = 1000
    annotation(Dialog(enable=enableInternalMass, group="Thermal Mass"));
  parameter SI.HeatCapacity C_mass = 0
    annotation(Dialog(enable=enableInternalMass, group="Thermal Mass"));

  // Gas that is utilized
  parameter TILMedia.Gas.Types.BaseGas gasType=sim.gasType1 "Gas type" annotation (Dialog(tab="SIM", group="SIM"),
    choices(
      choice=sim.gasType1 "Gas 1 as defined in SIM",
      choice=sim.gasType2 "Gas 2 as defined in SIM",
      choice=sim.gasType3 "Gas 3 as defined in SIM"));

  // If gas exchange is available or not
  parameter Boolean useVentilation = true "Enable gas ports";
  parameter Boolean tempSensor = true "adds a temperature sensor";

  // Replaceable unit for the temperature sensor
  replaceable TIL.Utilities.Units.Conversions.Units.K unitTemp constrainedby
    TIL.Utilities.Units.Conversions.Properties.Temperature annotation (
    choicesAllMatching=true, Dialog(group="Sensors"));

  // Internal gains parameters
  parameter SI.HeatFlowRate heatPerPerson = 100 "Sensible heat emission per person"
    annotation(Dialog(group="Internal Gains"));
  parameter Real fractionElectricToHeat = 1.0 "Fraction of electrical load converted to heat"
    annotation(Dialog(group="Internal Gains"));


  TIL.GasComponents.Volumes.Volume room_volume(
    gasType=gasType,
    volume=Volume,
    enableHeatPort=true,
    inputTypeConcentration="phi",
    phiInitial=phiInitial,
    mixingRatioInitial=mixingRatioInitial,
    pInitial=initialPressure,
    TInitial=initialTemperature,
    nPorts=3) annotation (Placement(transformation(
        extent={{-7,-14},{7,14}},
        rotation=90,
      origin={29,0})));

  TIL.Connectors.HeatPort heatPort_walls
    annotation (Placement(transformation(extent={{-108,-14},{-80,14}}),
        iconTransformation(extent={{-108,-14},{-80,14}})));
  TIL.Connectors.HeatPort heatPort_ceiling
    annotation (Placement(transformation(extent={{-108,80},{-80,108}}),
        iconTransformation(extent={{-108,80},{-80,108}})));
  TIL.Connectors.HeatPort heatPort_floor
    annotation (Placement(transformation(extent={{-108,-108},{-80,-80}}),
        iconTransformation(extent={{-108,-108},{-80,-80}})));
  TIL.Connectors.GasPort gasPortA if useVentilation
    annotation (Placement(transformation(extent={{86,50},{106,70}})));
  TIL.Connectors.GasPort gasPortB if useVentilation
    annotation (Placement(transformation(extent={{86,-70},{106,-50}})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor airToMass(G=
    G_airMass) if enableInternalMass
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-38,30})));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor heatCapacitor_room_internal(C=C_mass) if enableInternalMass
    annotation (Placement(transformation(extent={{-48,56},{-28,76}})));

  outer TIL.SystemInformationManager sim
    annotation (Placement(transformation(extent={{86,86},{100,100}})));

  Modelica.Blocks.Interfaces.RealOutput Temperature_sensor annotation (
      Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=270,
        origin={30,110}),iconTransformation(
        extent={{10,-10},{-10,10}},
        rotation=270,
        origin={30,110})));
  TIL.GasComponents.Sensors.Sensor_T sensor_T(unit=unitTemp) if tempSensor
    annotation (Placement(transformation(extent={{14,66},{26,78}})));
  Modelica.Blocks.Interfaces.RealInput P_el
    "Electrical Power consumed within the room" annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={20,-120}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={10,-110})));
  Modelica.Blocks.Interfaces.RealInput occupancy annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={70,-100}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={70,-110})));
  TIL.OtherComponents.Thermal.HeatBoundary internal_gains(boundaryType="Q_flow",
      use_heatFlowRateInput=true) annotation (Placement(transformation(
        extent={{-4,-6},{4,6}},
        rotation=90,
        origin={0,-50})));
equation

  // Connection to the three heat ports (always there)
  connect(room_volume.heatPort, heatPort_walls) annotation (Line(
      points={{18.5,0},{-94,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_ceiling, room_volume.heatPort) annotation (Line(
      points={{-94,94},{-94,18},{-52,18},{-52,0},{18.5,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_floor, room_volume.heatPort) annotation (Line(
      points={{-94,-94},{-94,-16},{-52,-16},{-52,0},{18.5,0}},
      color={204,0,0},
    thickness=0.5));

  // Connection if gas ports for ventilation are used
  if useVentilation then
    connect(room_volume.portArray[1], gasPortB) annotation (Line(
        points={{43.2333,0},{48,0},{48,-60},{96,-60}},
        color={255,153,0},
        thickness=0.5));
    connect(gasPortA, room_volume.portArray[2]) annotation (Line(
        points={{96,60},{48,60},{48,0},{42.65,0}},
        color={255,153,0},
      thickness=0.5));
  end if;

  // Connections if an internal mass is available
  if enableInternalMass then
    connect(heatCapacitor_room_internal.port, airToMass.port_b)
      annotation (Line(points={{-38,56},{-38,40}}, color={191,0,0}));
    connect(airToMass.port_a, room_volume.heatPort)
      annotation (Line(points={{-38,20},{-38,0},{18.5,0}}, color={191,0,0}));
  end if;

  // Connections if a temperature sensor output is needed
  if tempSensor then
    connect(sensor_T.port, room_volume.portArray[3]) annotation (Line(
        points={{20,66},{20,12},{48,12},{48,0},{42.0667,0}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T.sensorValue, Temperature_sensor) annotation (Line(points={{20,75},
            {20,82},{20,110},{30,110}},
                                    color={0,0,127}));
  end if;

  // Internal gains
  connect(internal_gains.heatPort, room_volume.heatPort) annotation (Line(
      points={{0,-50},{0,0},{18.5,0}},
      color={204,0,0},
      thickness=0.5));
  internal_gains.Q_flow_in = -((occupancy * heatPerPerson) + (P_el * fractionElectricToHeat));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
    coordinateSystem(preserveAspectRatio=false)));


end BaseRoom;
