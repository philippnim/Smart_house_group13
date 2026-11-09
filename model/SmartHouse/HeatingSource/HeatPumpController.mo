within SmartHouse.HeatingSource;
model HeatPumpController
  "Controller for normal heat-pump operation without defrost or pump-down"

  // ============================================================
  // PARAMETERS
  // ============================================================

  parameter Modelica.Units.SI.VolumeFlowRate
  fanVolumeFlowHeating = 2.0;

  parameter Modelica.Units.SI.VolumeFlowRate
  fanVolumeFlowOff = 0.001;


  // ============================================================
  // INPUTS
  // ============================================================

  Modelica.Blocks.Interfaces.BooleanInput enableHeatPump
    "True: heat pump enabled"
    annotation (
      Placement(
        transformation(extent={{-152,-12},{-132,8}}),
        iconTransformation(extent={{-146,-10},{-126,10}})));

  Modelica.Blocks.Interfaces.RealInput TSupplySet
    "Requested supply-water temperature in K"
    annotation (
      Placement(
        transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-144,-68}),
        iconTransformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={-90,-110})));


  // ============================================================
  // OUTPUTS
  // ============================================================

  Modelica.Blocks.Interfaces.BooleanOutput controllerSwitch
    "True when PI temperature control is enabled"
    annotation (
      Placement(
        transformation(extent={{136,32},{152,48}}),
        iconTransformation(extent={{124,50},{140,66}})));

  Modelica.Blocks.Interfaces.BooleanOutput controllerSwitchCompressor
    "True when compressor operation is enabled"
    annotation (
      Placement(
        transformation(extent={{136,72},{152,88}}),
        iconTransformation(extent={{124,92},{140,108}})));

  Modelica.Blocks.Interfaces.RealOutput TemperatureSetpoint
    "Supply-water temperature setpoint in K"
    annotation (
      Placement(
        transformation(extent={{136,-58},{152,-42}}),
        iconTransformation(extent={{124,-28},{140,-12}})));

  Modelica.Blocks.Interfaces.RealOutput fanVolumeFlow(
  unit="m3/s")
    annotation (
      Placement(
        transformation(extent={{136,-88},{152,-72}}),
        iconTransformation(extent={{124,-68},{140,-52}})));


equation

  // ============================================================
  // TEMPERATURE SETPOINT
  // ============================================================

  TemperatureSetpoint = TSupplySet;


  // ============================================================
  // HEAT-PUMP ENABLE SIGNALS
  // ============================================================

  controllerSwitch = enableHeatPump;

  controllerSwitchCompressor = enableHeatPump;


  // ============================================================
  // FAN CONTROL
  // ============================================================

  fanVolumeFlow =
  if enableHeatPump then fanVolumeFlowHeating
  else fanVolumeFlowOff;


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
