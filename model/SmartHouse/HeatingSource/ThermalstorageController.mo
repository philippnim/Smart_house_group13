within SmartHouse.HeatingSource;
model ThermalstorageController
  extends Modelica.Blocks.Icons.Block;

  parameter Boolean useHP;

  parameter Boolean useBoiler;

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
  parameter Modelica.Units.SI.Time tauValve = 30
    "Time constant for three-way valve movement";



  Modelica.Blocks.Interfaces.BooleanInput EnableHeating
    "Heating demand from the house"
    annotation (
      Placement(
        transformation(extent={{-110,40},{-90,60}}),
        iconTransformation(extent={{-100,-60},{-80,-40}})));

  Modelica.Blocks.Interfaces.RealInput T_DHW(unit="K")
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

  Modelica.Blocks.Interfaces.RealOutput TSupplySet(unit="K")
    "Heat pump supply temperature setpoint in degC"
    annotation (Placement(transformation(extent={{92,22},{108,38}}),
        iconTransformation(extent={{84,52},{100,68}})));

  Modelica.Blocks.Interfaces.RealOutput threeWayValve
    "Control signal for three-way valve"
    annotation (Placement(transformation(extent={{92,-8},{108,8}}),
        iconTransformation(extent={{84,12},{100,28}})));

  Modelica.Blocks.Interfaces.BooleanOutput EnableBoiler
    "Enable signal for boiler"
    annotation (Placement(transformation(extent={{92,-38},{108,-22}}),
        iconTransformation(extent={{84,-68},{100,-52}})));

  Modelica.Blocks.Interfaces.BooleanOutput EnableHeatPump
    "Enable signal for heat pump"
    annotation (Placement(transformation(extent={{92,-68},{108,-52}}),
      iconTransformation(extent={{84,-28},{100,-12}})));

  Modelica.Blocks.Logical.Hysteresis tankWarm(
    uLow=TDHWMin,
    uHigh=TDHWMax,
    pre_y_start=false)
    annotation (
      Placement(
        transformation(extent={{-12,-40},{8,-20}})));

  Modelica.Blocks.Interfaces.RealInput T_direct(unit="K")
    "Domestic hot water tank temperature in K" annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-100,90}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-90,90})));

  // Temperature hysteresis for floor heating bypass
  Modelica.Blocks.Logical.Hysteresis directOverTemp(uLow=TdirectMax - deltaT,
      uHigh=TdirectMax)
    annotation (Placement(transformation(extent={{-10,70},{10,90}})));


  Modelica.Blocks.Continuous.FirstOrder valveFilter1(
  T=tauValve,
    initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{8,-10},{28,10}})));

Modelica.Blocks.Continuous.FirstOrder valveFilter2(
  T=tauValve,
    initType=Modelica.Blocks.Types.Init.SteadyState)
  annotation (Placement(transformation(extent={{52,-10},{72,10}})));



  // Variables
  Boolean DHWmode "True when domestic hot water storage has priority";
  Boolean enableHeater "True when heat generation is required";


equation

  // Hysteresis inputs
  connect(T_DHW, tankWarm.u);
  connect(T_direct, directOverTemp.u);

  // DHW priority control
  DHWmode = not tankWarm.y;

  // Supply temperature setpoint based on DHW or floor heating
  TSupplySet = if DHWmode then TDHW else THeating;

  // Three-way valve with gradual opening and closing
  valveFilter1.u = if DHWmode then 0.9999 else 0;

  connect(valveFilter2.u, valveFilter1.y)
    annotation (Line(points={{50,0},{29,0}}, color={0,0,127}));
  connect(valveFilter2.y, threeWayValve)
    annotation (Line(points={{73,0},{100,0}}, color={0,0,127}));

  // Heater control depending on active circuit
  enableHeater = if DHWmode
    then true
    else  EnableHeating and not directOverTemp.y;

  // Heater must be activated and system currently heating
  EnableBoiler = enableHeater and useBoiler;
  EnableHeatPump = enableHeater and useHP;





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
