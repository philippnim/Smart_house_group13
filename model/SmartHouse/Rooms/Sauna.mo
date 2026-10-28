within SmartHouse.Rooms;
model Sauna "its a sauna!"
    // Room geometry
  parameter Modelica.Units.SI.Area A_floor(min=0) = 6
    "Sauna floor area"
    annotation (Dialog(tab="General", group="Room geometry"));

  parameter Modelica.Units.SI.Height h(min=0) = 2.2
    "Internal room height"
    annotation (Dialog(tab="General", group="Room geometry"));


  // Thermal mass
  parameter Boolean enableInternalMass = true
    "Include internal thermal mass"
    annotation (Dialog(tab="Thermal", group="Internal thermal mass"));

  parameter Modelica.Units.SI.ThermalConductance G_airMass(min=0) = 100
    "Thermal conductance between room air and internal mass"
    annotation (Dialog(
      tab="Thermal",
      group="Internal thermal mass",
      enable=enableInternalMass));

  parameter Modelica.Units.SI.HeatCapacity C_mass(min=0) = 2e6
    "Heat capacity of the internal thermal mass"
    annotation (Dialog(
      tab="Thermal",
      group="Internal thermal mass",
      enable=enableInternalMass));


  // Internal heat gains
  parameter Modelica.Units.SI.Power heatPerPerson(min=0) = 100
    "Heat released per occupant"
    annotation (Dialog(tab="Thermal", group="Internal heat gains"));

  parameter Real fractionElectricToHeat(
    min=0,
    max=1,
    unit="1") = 1
    "Fraction of electrical power transferred to the room as heat"
    annotation (Dialog(tab="Thermal", group="Internal heat gains"));


  // Heating setpoint and power limits
  parameter Modelica.Units.SI.Temperature TSauna(
    min=0,
    displayUnit="degC") = 353.15
    "Sauna temperature setpoint; default is 80 degC"
    annotation (Dialog(tab="Heating", group="Temperature setpoint"));

  parameter Modelica.Units.SI.Power yMax(min=0) = 9000
    "Maximum electrical heating power"
    annotation (Dialog(tab="Heating", group="Heater power"));


  // PI controller
  parameter Real k(unit="W/K", min=0) = 1000
    "Proportional gain: heating power per kelvin of temperature error"
    annotation (Dialog(tab="Control", group="PI tuning"));

  parameter Modelica.Units.SI.Time Ti(min=Modelica.Constants.small) = 300
    "Integral time"
    annotation (Dialog(tab="Control", group="PI tuning"));


  // Ventilation
  parameter Boolean useVentilation = false
    "Enable ventilation gas ports"
    annotation (Dialog(tab="Ventilation", group="Configuration"));


  // Gas that is utilized
  parameter TILMedia.Gas.Types.BaseGas gasType=sim.gasType1 "Gas type Sauna" annotation (Dialog(tab="SIM", group="SIM"),
    choices(
      choice=sim.gasType1 "Gas 1 as defined in SIM",
      choice=sim.gasType2 "Gas 2 as defined in SIM",
      choice=sim.gasType3 "Gas 3 as defined in SIM"));

  outer TIL.SystemInformationManager sim
    annotation (Placement(transformation(extent={{86,86},{100,100}})));

  UnheatedRoom unheatedRoom(
    A_floor=A_floor,
    h=h,
    enableInternalMass=true,
    G_airMass=G_airMass,
    C_mass=C_mass,
    gasType=gasType,
    heatPerPerson=heatPerPerson,
    fractionElectricToHeat=1)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  TIL.OtherComponents.Controllers.PIController controller(
    controllerType="PI",
    k=k,
    Ti=Ti,
    yMax=yMax,
    yMin=0,
    use_activeInput=true,
    use_y_notActive=true) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=180,
        origin={42,28})));
  TIL.Connectors.HeatPort heatPort_walls
    annotation (Placement(transformation(extent={{-114,-14},{-86,14}}),
        iconTransformation(extent={{-108,-14},{-80,14}})));
  TIL.Connectors.HeatPort heatPort_ceiling
    annotation (Placement(transformation(extent={{-114,80},{-86,108}}),
        iconTransformation(extent={{-108,80},{-80,108}})));
  TIL.Connectors.HeatPort heatPort_floor
    annotation (Placement(transformation(extent={{-114,-108},{-86,-80}}),
        iconTransformation(extent={{-108,-108},{-80,-80}})));
  TIL.Connectors.GasPort gasPortA(gasType=gasType)
                                  if useVentilation
    annotation (Placement(transformation(extent={{90,50},{110,70}})));
  TIL.Connectors.GasPort gasPortB(gasType=gasType)
                                  if useVentilation
    annotation (Placement(transformation(extent={{90,-70},{110,-50}})));
  Modelica.Blocks.Interfaces.RealInput occupancy annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={70,-106}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={70,-110})));
  Modelica.Blocks.Interfaces.BooleanInput SaunaSwitch annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={104,90})));
  Modelica.Blocks.Sources.RealExpression SaunaOffPower(y=0)
    annotation (Placement(transformation(extent={{38,-18},{58,2}})));
  Modelica.Blocks.Sources.RealExpression SaunaTemp(y=TSauna) annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={90,28})));
equation
  connect(unheatedRoom.Temperature_sensor, controller.u_m) annotation (Line(
        points={{3,11},{3,40},{42,40},{42,33.8}}, color={0,0,127}));
  connect(heatPort_walls, unheatedRoom.heatPort_walls) annotation (Line(
      points={{-100,0},{-9.4,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_ceiling, unheatedRoom.heatPort_ceiling) annotation (Line(
      points={{-100,94},{-80,94},{-80,10},{-60,10},{-60,9.4},{-9.4,9.4}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_floor, unheatedRoom.heatPort_floor) annotation (Line(
      points={{-100,-94},{-80,-94},{-80,-8},{-9.4,-8},{-9.4,-9.4}},
      color={204,0,0},
      thickness=0.5));
  connect(gasPortB, unheatedRoom.gasPortB) annotation (Line(
      points={{100,-60},{16,-60},{16,-6},{9.6,-6}},
      color={255,153,0},
      thickness=0.5));
  connect(gasPortA, unheatedRoom.gasPortA) annotation (Line(
      points={{100,60},{72,60},{72,6},{9.6,6}},
      color={255,153,0},
      thickness=0.5));
  connect(occupancy, unheatedRoom.occupancy) annotation (Line(points={{70,-106},
          {70,-62},{7,-62},{7,-11}}, color={0,0,127}));
  connect(controller.y, unheatedRoom.P_el) annotation (Line(points={{35.6,28},{-46,
          28},{-46,-10},{-32,-10},{-32,-12},{1,-12},{1,-11}}, color={0,0,127}));
  connect(SaunaOffPower.y, controller.y_notActive) annotation (Line(points={{59,
          -8},{64,-8},{64,16},{42,16},{42,22.2}}, color={0,0,127}));
  connect(SaunaTemp.y, controller.u_s)
    annotation (Line(points={{79,28},{47.6,28}}, color={0,0,127}));
  connect(SaunaSwitch, controller.activeInput) annotation (Line(points={{104,90},
          {54,90},{54,31.8},{47.6,31.8}}, color={255,0,255}));
  annotation (Icon(graphics={Bitmap(
          extent={{-100,-100},{100,100}},
    fileName="modelica://SmartHouse/Images/sauna.png"),
    Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Sauna;
