within SmartHouse.HeatingSource;
model HeatPumpController
  "Supervisory controller for heat-pump operation and defrost"

  // ============================================================
  // PARAMETERS
  // ============================================================

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

  parameter Real fanSpeedHeating = 12
  "FanSpeed for normal usage"
    annotation (
      Dialog(
        tab="Defrost",
      group="Trigger"));

   parameter Real fanSpeedDefrost = 1
   "FanSpeed for defrost usage"
    annotation (
      Dialog(
        tab="Defrost",
        group="Trigger"));

   parameter Real fanSpeedOff = 0
     "Minimum fan speed when heat pump is disabled";

   parameter Modelica.Units.SI.Time pumpDownDuration = 0
  "Compressor run-on time after shutdown";

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
        iconTransformation(extent={{-146,-70},{-126,-50}})));

  // ============================================================
  // OUTPUTS
  // ============================================================

  Modelica.Blocks.Interfaces.BooleanOutput controllerSwitch
    "True: normal PI control, False: defrost operation"
    annotation (
      Placement(
        transformation(extent={{136,32},{152,48}}),
        iconTransformation(extent={{124,50},{140,66}})));

  Modelica.Blocks.Interfaces.BooleanOutput fourWayValve
    "False: heating mode, True: reversed flow for defrost"
    annotation (
      Placement(
        transformation(extent={{136,-8},{152,8}}),
        iconTransformation(extent={{124,12},{140,28}})));

  Modelica.Blocks.Interfaces.RealOutput TemperatureSetpoint
    "Supply water temperature setpoint in degC"
    annotation (
      Placement(
        transformation(extent={{136,-58},{152,-42}}),
        iconTransformation(extent={{124,-28},{140,-12}})));

  Modelica.Blocks.Interfaces.RealOutput fanSpeed
    "Sets a lower FanSpeed when Defrost is activated" annotation (Placement(
        transformation(extent={{136,-88},{152,-72}}), iconTransformation(extent
        ={{124,-68},{140,-52}})));

  Modelica.Blocks.Interfaces.BooleanOutput pumpDownActive
  "True during compressor pump-down after shutdown";

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

  discrete Modelica.Units.SI.Time pumpDownStart(
    start=-1000,
    fixed=true);

public
  Modelica.Blocks.Interfaces.BooleanInput enableHeatPump
    "\"True: heat pump enabled, False: heat pump off\";" annotation (Placement(
        transformation(extent={{-152,-12},{-132,8}}), iconTransformation(extent
          ={{-146,-10},{-126,10}})));
  Modelica.Blocks.Interfaces.BooleanOutput controllerSwitchCompressor
    "True: normal PI control, False: Compressor off" annotation (Placement(
        transformation(extent={{136,72},{152,88}}), iconTransformation(extent={{
            124,92},{140,108}})));
  Modelica.Blocks.Interfaces.RealInput TSupplySet
    "Supply water temperature setpoint in degC" annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-144,-68}), iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-90,-110})));
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

  controllerSwitch =
  enableHeatPump and not defrostActive;

  controllerSwitchCompressor = enableHeatPump;

  fourWayValve = enableHeatPump and defrostActive;

  fanSpeed =
  if not enableHeatPump then fanSpeedOff
  elseif defrostActive then fanSpeedDefrost
    else fanSpeedHeating;

  pumpDownActive =
  not enableHeatPump
  and time < pumpDownStart + pumpDownDuration;

  // ============================================================
  // DEFROST STATE LOGIC
  // ============================================================

  when {
  initial(),
      enableHeatPump
      and useDefrost
      and not pre(defrostActive)
      and timerDefrostOn.y >= minTriggerOnTime
      and time - pre(lastDefrostEnd) >= minOffTimeAfterDefrost,
    pre(defrostActive)
    and timerDefrostOff.y >= minTriggerOffTime,
  not enableHeatPump and pre(defrostActive)}
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

algorithm
  when not enableHeatPump and pre(enableHeatPump) then
    pumpDownStart := time;
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
