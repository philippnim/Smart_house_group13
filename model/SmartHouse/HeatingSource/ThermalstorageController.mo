within SmartHouse.HeatingSource;
model ThermalstorageController
  extends Modelica.Blocks.Icons.Block;

  parameter Modelica.Units.SI.Temperature THeating = 35 + 273.15
    "Supply temperature for floor heating in K";

  parameter Modelica.Units.SI.Temperature TDHW = 60 + 273.15
    "Supply temperature for domestic hot water charging in K";

  parameter Modelica.Units.SI.Temperature TDHWMin = 45 + 273.15
    "Lower DHW temperature limit in K";

  parameter Modelica.Units.SI.Temperature TDHWMax = 58 + 273.15
    "Upper DHW temperature limit in K";

  parameter Modelica.Units.SI.TemperatureDifference  deltaT = 1
    "Delta T for Hysterese control of boiler limit";

  parameter Modelica.Units.SI.Temperature TdirectMax = 40 + 273.15
    "Upper temperature limit in K for the bypass for floor heating for safety off switch";

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
          origin={-90,0})));

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

  Modelica.Blocks.Interfaces.BooleanOutput EnableHeater
    "Enable signal for heater"
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

  Modelica.Blocks.Interfaces.RealInput T_direct
    "Domestic hot water tank temperature in K" annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-100,90}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-90,90})));

  // Temperature hysteresis for DHW tank

  // Temperature hysteresis for direct heating bypass
  Modelica.Blocks.Logical.Hysteresis directOverTemp(uLow=TdirectMax - deltaT,
      uHigh=TdirectMax)
    annotation (Placement(transformation(extent={{-10,70},{10,90}})));

equation

  connect(T_DHW, tankWarm.u);

  // DHW priority control
  DHWmode = not tankWarm.y;

  // Supply temperature setpoint
  TSupplySet =
    if DHWmode then TDHW
    else THeating;

  // Three-way valve
  threeWayValve =
    if DHWmode then 0.9999
    else 0;

  // Heater control depending on active circuit
  EnableHeater =
    if DHWmode then
      true
    else
      EnableHeating and not directOverTemp.y;

  connect(T_direct, directOverTemp.u) annotation (Line(points={{-100,90},{-20,90},
          {-20,80},{-12,80}}, color={0,0,127}));
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
