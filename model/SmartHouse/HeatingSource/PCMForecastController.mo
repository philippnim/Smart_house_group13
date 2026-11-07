within SmartHouse.HeatingSource;
model PCMForecastController
  "Weather-based control of PCM charging, discharging and bypass"

  // ----------------------------------------------------------------------
  // Parameters
  // ----------------------------------------------------------------------
  parameter Real SOCmax(min=0, max=1) = 0.90
    "Charging is permitted only while SOC < SOCmax";
  parameter Real SOCmin(min=0, max=1) = 0.10
    "Discharging is permitted only while SOC > SOCmin";
  parameter Modelica.Units.SI.Temperature TPhaseChange = 304.15
    "Approximate melting temperature of RT31 (31 degC)";
  parameter Modelica.Units.SI.TemperatureDifference dTmin = 1
    "Required minimum temperature difference";
  parameter Real pcmValvePosition = 0.9999
    "Valve command for PCM branch; check actual valve port convention";
  parameter Real bypassValvePosition = 0
    "Valve command for bypass branch; check actual valve port convention";

  // ----------------------------------------------------------------------
  // Inputs
  // ----------------------------------------------------------------------
  Modelica.Blocks.Interfaces.BooleanInput chargeWindow
    "True during one of the six warmest hours of each day"
    annotation(Placement(transformation(extent={{-210,105},{-190,125}})));

  Modelica.Blocks.Interfaces.BooleanInput heatingDemand
    "Space-heating demand"
    annotation(Placement(transformation(extent={{-210,-35},{-190,-15}})));

  Modelica.Blocks.Interfaces.BooleanInput dhwMode
    "True when domestic hot water has priority"
    annotation(Placement(transformation(extent={{-210,-155},{-190,-135}})));

  Modelica.Blocks.Interfaces.RealInput SOC(unit="1")
    "PCM liquid mass fraction (0=solid, 1=liquid)"
    annotation(Placement(transformation(extent={{-210,45},{-190,65}})));

  Modelica.Blocks.Interfaces.RealInput TWaterIn(unit="K")
    "Water temperature entering the PCM/bypass valve"
    annotation(Placement(transformation(extent={{-210,-95},{-190,-75}})));

  // ----------------------------------------------------------------------
  // Outputs
  // ----------------------------------------------------------------------
  Modelica.Blocks.Interfaces.BooleanOutput charging
    "Charge request: PCM branch is used for charging"
    annotation(Placement(transformation(extent={{190,115},{210,135}})));

  Modelica.Blocks.Interfaces.BooleanOutput discharging
    "Discharge request: PCM branch is used for discharging"
    annotation(Placement(transformation(extent={{190,-75},{210,-55}})));

  Modelica.Blocks.Interfaces.IntegerOutput mode
    "0=standby/bypass, 1=charging, 2=discharging"
    annotation(Placement(transformation(extent={{190,25},{210,45}})));

  Modelica.Blocks.Interfaces.RealOutput valvePosition
    "Command for the three-way valve"
    annotation(Placement(transformation(extent={{190,-135},{210,-115}})));

  // ----------------------------------------------------------------------
  // logical blocks: temperature and SOC checks
  // ----------------------------------------------------------------------
  Modelica.Blocks.Logical.LessThreshold socBelowMax(threshold=SOCmax)
    "SOC below maximum charging limit"
    annotation(Placement(transformation(extent={{-155,55},{-135,75}})));

  Modelica.Blocks.Logical.GreaterThreshold socAboveMin(threshold=SOCmin)
    "SOC above minimum discharging limit"
    annotation(Placement(transformation(extent={{-155,-15},{-135,5}})));

  Modelica.Blocks.Logical.GreaterThreshold waterHotEnough(
    threshold=TPhaseChange + dTmin)
    "Water hot enough to melt PCM"
    annotation(Placement(transformation(extent={{-155,105},{-135,125}})));

  Modelica.Blocks.Logical.LessThreshold waterColdEnough(
    threshold=TPhaseChange - dTmin)
    "Water cold enough to solidify PCM"
    annotation(Placement(transformation(extent={{-155,-105},{-135,-85}})));

  Modelica.Blocks.Logical.Not notDHW
    "Block PCM while domestic hot water is prioritized"
    annotation(Placement(transformation(extent={{-155,-155},{-135,-135}})));

  Modelica.Blocks.Logical.Not outsideChargeWindow
    "Discharging is only permitted outside the warmest hours"
    annotation(Placement(transformation(extent={{-155,15},{-135,35}})));

  // ----------------------------------------------------------------------
  // AND blocks: charging conditions
  // ----------------------------------------------------------------------
  Modelica.Blocks.Logical.And chargeWindowAndSOC
    "Charge window AND capacity available"
    annotation(Placement(transformation(extent={{-85,95},{-65,115}})));

  Modelica.Blocks.Logical.And hotAndDHWavailable
    "Hot water AND no DHW priority"
    annotation(Placement(transformation(extent={{-85,45},{-65,65}})));

  Modelica.Blocks.Logical.And chargingLogic
    "All charging conditions fulfilled"
    annotation(Placement(transformation(extent={{5,105},{25,125}})));

  // ----------------------------------------------------------------------
  // AND blocks: discharging conditions
  // ----------------------------------------------------------------------
  Modelica.Blocks.Logical.And demandOutsideWindow
    "Space-heating demand AND outside charge window"
    annotation(Placement(transformation(extent={{-85,-15},{-65,5}})));

  Modelica.Blocks.Logical.And storedHeatAndColdWater
    "Stored latent heat AND cold enough water"
    annotation(Placement(transformation(extent={{-85,-85},{-65,-65}})));

  Modelica.Blocks.Logical.And dischargeConditions
    "Heating request AND usable storage"
    annotation(Placement(transformation(extent={{5,-45},{25,-25}})));

  Modelica.Blocks.Logical.And dischargingLogic
    "All discharging conditions fulfilled"
    annotation(Placement(transformation(extent={{70,-75},{90,-55}})));

  // ----------------------------------------------------------------------
  // blocks for the resulting mode and valve command
  // ----------------------------------------------------------------------
  Modelica.Blocks.Sources.IntegerExpression operatingMode(
    y=if chargingLogic.y then 1 else if dischargingLogic.y then 2 else 0)
    "0=STANDBY, 1=CHARGE, 2=DISCHARGE"
    annotation(Placement(transformation(extent={{105,25},{125,45}})));

  Modelica.Blocks.Sources.RealExpression valveCommand(
    y=if chargingLogic.y or dischargingLogic.y
      then pcmValvePosition else bypassValvePosition)
    "Direct flow through PCM during charge/discharge; otherwise bypass"
    annotation(Placement(transformation(extent={{105,-135},{125,-115}})));

equation
  // Compare measured SOC and inlet water temperature against thresholds
  connect(SOC, socBelowMax.u) annotation(Line(points={{-200,55},{-177,55},{-177,65},{-155,65}}, color={0,0,127}));
  connect(SOC, socAboveMin.u) annotation(Line(points={{-200,55},{-177,55},{-177,-5},{-155,-5}}, color={0,0,127}));
  connect(TWaterIn, waterHotEnough.u) annotation(Line(points={{-200,-85},{-177,-85},{-177,115},{-155,115}}, color={0,0,127}));
  connect(TWaterIn, waterColdEnough.u) annotation(Line(points={{-200,-85},{-177,-85},{-177,-95},{-155,-95}}, color={0,0,127}));
  connect(dhwMode, notDHW.u) annotation(Line(points={{-200,-145},{-155,-145}}, color={255,0,255}));
  connect(chargeWindow, outsideChargeWindow.u) annotation(Line(points={{-200,115},{-177,115},{-177,25},{-155,25}}, color={255,0,255}));

  // Charge = warmest hour AND SOC below 90% AND hot water AND NOT DHW
  connect(chargeWindow, chargeWindowAndSOC.u1) annotation(Line(points={{-200,115},
          {-142,115},{-142,105},{-87,105}},                                                                         color={255,0,255}));
  connect(socBelowMax.y, chargeWindowAndSOC.u2) annotation(Line(points={{-135,65},{-110,65},{-110,99},{-85,99}}, color={255,0,255}));
  connect(waterHotEnough.y, hotAndDHWavailable.u1) annotation(Line(points={{-135,
          115},{-110,115},{-110,55},{-87,55}},                                                                        color={255,0,255}));
  connect(notDHW.y, hotAndDHWavailable.u2) annotation(Line(points={{-135,-145},{-110,-145},{-110,49},{-85,49}}, color={255,0,255}));
  connect(chargeWindowAndSOC.y, chargingLogic.u1) annotation(Line(points={{-65,105},
          {-30,105},{-30,115},{3,115}},                                                                           color={255,0,255}));
  connect(hotAndDHWavailable.y, chargingLogic.u2) annotation(Line(points={{-65,55},{-30,55},{-30,109},{5,109}}, color={255,0,255}));
  connect(chargingLogic.y, charging) annotation(Line(points={{25,115},{112,115},{112,125},{200,125}}, color={255,0,255}));

  // Discharge = outside warmest hours AND demand AND SOC above 10%
  //             AND cold inlet water AND NOT DHW
  connect(outsideChargeWindow.y, demandOutsideWindow.u1) annotation(Line(points={{-135,25},
          {-110,25},{-110,-5},{-87,-5}},                                                                                color={255,0,255}));
  connect(heatingDemand, demandOutsideWindow.u2) annotation(Line(points={{-200,-25},{-142,-25},{-142,-11},{-85,-11}}, color={255,0,255}));
  connect(socAboveMin.y, storedHeatAndColdWater.u1) annotation(Line(points={{-135,-5},
          {-110,-5},{-110,-75},{-87,-75}},                                                                             color={255,0,255}));
  connect(waterColdEnough.y, storedHeatAndColdWater.u2) annotation(Line(points={{-135,-95},{-110,-95},{-110,-81},{-85,-81}}, color={255,0,255}));
  connect(demandOutsideWindow.y, dischargeConditions.u1) annotation(Line(points={{-65,-5},
          {-30,-5},{-30,-35},{3,-35}},                                                                                 color={255,0,255}));
  connect(storedHeatAndColdWater.y, dischargeConditions.u2) annotation(Line(points={{-65,-75},{-30,-75},{-30,-41},{5,-41}}, color={255,0,255}));
  connect(dischargeConditions.y, dischargingLogic.u1) annotation(Line(points={{26,-35},
          {45,-35},{45,-65},{68,-65}},                                                                              color={255,0,255}));
  connect(notDHW.y, dischargingLogic.u2) annotation(Line(points={{-135,-145},{-32,-145},{-32,-71},{70,-71}}, color={255,0,255}));
  connect(dischargingLogic.y, discharging) annotation(Line(points={{90,-65},{200,-65}}, color={255,0,255}));

  // Visible output blocks for operation mode and valve setting
  connect(operatingMode.y, mode) annotation(Line(points={{125,35},{200,35}}, color={255,127,0}));
  connect(valveCommand.y, valvePosition) annotation(Line(points={{125,-125},{200,-125}}, color={0,0,127}));

  annotation(
    Diagram(coordinateSystem(preserveAspectRatio=false,
      extent={{-200,-170},{200,170}})),
    Icon(coordinateSystem(preserveAspectRatio=false,
      extent={{-100,-100},{100,100}}),
      graphics={
        Rectangle(extent={{-100,100},{100,-100}},
          lineColor={0,100,170}, fillColor={238,247,251},
          fillPattern=FillPattern.Solid),
        Text(extent={{-90,45},{90,15}}, textString="PCM Forecast",
          textColor={0,75,130}),
        Text(extent={{-90,10},{90,-20}}, textString="Controller",
          textColor={0,75,130}),
        Text(extent={{-90,-40},{90,-65}}, textString="CHARGE / DISCHARGE",
          textColor={0,75,130})}),
    Documentation(info="<html><p>Charging is only permitted during the six warmest forecast hours of each day (chargeWindow from an external weather-profile table). Discharging is possible outside those hours, provided space-heating demand and adequate temperature and SOC conditions.</p><p>The controller selects whether flow passes through the PCM or bypass. It does not itself create the hydraulic circuit required for true charging/discharging, nor does it actively switch off the heat pump.</p><p>Check the actual port-switching convention of the selected TIL three-way valve; adjust pcmValvePosition / bypassValvePosition if necessary. SOC is the PCM liquid fraction, not the entire sensible/latent energy state.</p></html>"));

end PCMForecastController;
