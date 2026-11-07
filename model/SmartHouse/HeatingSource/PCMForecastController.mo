within SmartHouse.HeatingSource;
model PCMForecastController
  "Forecast scheduling and switching commands for an RT31 PCM store"

  // ONLY control logic lives here. No fluid ports or PCM medium.
  // 0: STANDBY | 1: CHARGE | 2: DISCHARGE
  // The six warmest hours per day are precomputed by Python.

  parameter String forecastFileName = ""
    "Absolute path to the scenario's pcm_charge_window.txt";

  parameter Real SOCChargeResume(min=0, max=1) = 0.85;
  parameter Real SOCChargeStop(min=0, max=1) = 0.90;
  parameter Real SOCDischargeStop(min=0, max=1) = 0.10;
  parameter Real SOCDischargeResume(min=0, max=1) = 0.15;
  parameter Modelica.Units.SI.Temperature TPhaseChange = 304.15
    "RT31: phase-change temperature near 31 degC";
  parameter Modelica.Units.SI.TemperatureDifference dTmin = 1;
  parameter Modelica.Units.SI.Temperature TChargeMax = 313.15
    "Conservative charging water limit: 40 degC";

  parameter Real chargeDivertPosition(min=0, max=0.9999) = 0.15
    "Preliminary position of the supply three-way valve in CHARGE";
  parameter Real dischargePosition(min=0, max=0.9999) = 0.9999
    "Return three-way valve fully towards PCM in DISCHARGE";

  // === INPUTS: data from LatentHeatStorage ===
  Modelica.Blocks.Interfaces.BooleanInput heatingDemand
    "Space-heating request from the existing house control"
    annotation(Placement(transformation(extent={{-210,-75},{-190,-55}}),
      iconTransformation(extent={{-110,-75},{-90,-55}})));
  Modelica.Blocks.Interfaces.RealInput SOC(unit="1")
    "PCM liquid-mass fraction: 0 = solid, 1 = liquid"
    annotation(Placement(transformation(extent={{-210,45},{-190,65}}),
      iconTransformation(extent={{-110,35},{-90,55}})));
  Modelica.Blocks.Interfaces.RealInput TSupply(unit="K")
    "Actual heating supply before the PCM charge branch"
    annotation(Placement(transformation(extent={{-210,105},{-190,125}}),
      iconTransformation(extent={{-110,70},{-90,90}})));
  Modelica.Blocks.Interfaces.RealInput TReturn(unit="K")
    "Actual space-heating return temperature"
    annotation(Placement(transformation(extent={{-210,-145},{-190,-125}}),
      iconTransformation(extent={{-110,-40},{-90,-20}})));

  // === OUTPUTS: valve switching POSITION (not prescribed flow fractions) ===
  Modelica.Blocks.Interfaces.RealOutput supplyValvePosition
    "0 -> B (floor); 0.15 -> partial diversion to C (PCM charge)"
    annotation(Placement(transformation(extent={{190,75},{210,95}}),
      iconTransformation(extent={{90,55},{110,75}})));
  Modelica.Blocks.Interfaces.RealOutput returnValvePosition
    "0 -> B (return bypass); 0.9999 -> C (PCM discharge)"
    annotation(Placement(transformation(extent={{190,-135},{210,-115}}),
      iconTransformation(extent={{90,-65},{110,-45}})));
  Modelica.Blocks.Interfaces.IntegerOutput mode
    "0=STANDBY, 1=CHARGE, 2=DISCHARGE"
    annotation(Placement(transformation(extent={{190,15},{210,35}}),
      iconTransformation(extent={{90,15},{110,35}})));
  Modelica.Blocks.Interfaces.BooleanOutput chargeRequest
    "Forecast asks to prepare/store heat; NOT necessarily actual PCM heat flow"
    annotation(Placement(transformation(extent={{190,140},{210,160}}),
      iconTransformation(extent={{90,80},{110,100}})));
  Modelica.Blocks.Interfaces.BooleanOutput charging
    "Supply valve opens charge branch only if supply temperature is suitable"
    annotation(Placement(transformation(extent={{190,110},{210,130}})));
  Modelica.Blocks.Interfaces.BooleanOutput discharging
    "Return valve routes heating return through PCM"
    annotation(Placement(transformation(extent={{190,-75},{210,-55}})));
  Modelica.Blocks.Interfaces.BooleanOutput chargeWindowActive
    "Direct forecast signal, useful for plotting"
    annotation(Placement(transformation(extent={{190,170},{210,190}})));

  // === Forecast table: 0 or 1; 3600 s per step ===
  Modelica.Blocks.Sources.CombiTimeTable forecast(
    tableOnFile=true,
    tableName="data",
    fileName=forecastFileName,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ConstantSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint)
    annotation(Placement(transformation(extent={{-170,170},{-150,190}})));
  Modelica.Blocks.Logical.GreaterThreshold warmestHour(threshold=0.5)
    annotation(Placement(transformation(extent={{-120,170},{-100,190}})));
  Modelica.Blocks.Logical.Not outsideWindow
    annotation(Placement(transformation(extent={{-75,-20},{-55,0}})));

  // === SOC hysteresis prevents chatter at 10% and 90% ===
  Modelica.Blocks.Logical.Hysteresis pcmFull(
    uLow=SOCChargeResume,
    uHigh=SOCChargeStop,
    pre_y_start=false)
    annotation(Placement(transformation(extent={{-160,50},{-140,70}})));
  Modelica.Blocks.Logical.Not notFull
    annotation(Placement(transformation(extent={{-115,50},{-95,70}})));
  Modelica.Blocks.Logical.Hysteresis pcmAvailable(
    uLow=SOCDischargeStop,
    uHigh=SOCDischargeResume,
    pre_y_start=false)
    annotation(Placement(transformation(extent={{-160,-110},{-140,-90}})));

  // === Physical eligibility ===
  Modelica.Blocks.Logical.GreaterThreshold supplyHotEnough(
    threshold=TPhaseChange + dTmin)
    annotation(Placement(transformation(extent={{-160,110},{-140,130}})));
  Modelica.Blocks.Logical.LessThreshold supplyNotTooHot(
    threshold=TChargeMax)
    annotation(Placement(transformation(extent={{-115,100},{-95,120}})));
  Modelica.Blocks.Logical.LessThreshold returnColdEnough(
    threshold=TPhaseChange - dTmin)
    annotation(Placement(transformation(extent={{-160,-145},{-140,-125}})));

  // === Visible Boolean logic ===
  Modelica.Blocks.Logical.And windowAndCapacity
    annotation(Placement(transformation(extent={{-55,135},{-35,155}})));
  Modelica.Blocks.Logical.And chargeTemperatureOK
    annotation(Placement(transformation(extent={{-55,90},{-35,110}})));
  Modelica.Blocks.Logical.And chargeDecision
    annotation(Placement(transformation(extent={{10,120},{30,140}})));
  Modelica.Blocks.Logical.And outsideAndDemand
    annotation(Placement(transformation(extent={{-55,-65},{-35,-45}})));
  Modelica.Blocks.Logical.And availableAndCold
    annotation(Placement(transformation(extent={{-55,-120},{-35,-100}})));
  Modelica.Blocks.Logical.And dischargeDecision
    annotation(Placement(transformation(extent={{10,-100},{30,-80}})));

  // === Visible final command blocks ===
  Modelica.Blocks.Sources.RealExpression supplyCommand(
    y=if chargeDecision.y then chargeDivertPosition else 0)
    annotation(Placement(transformation(extent={{110,75},{130,95}})));
  Modelica.Blocks.Sources.RealExpression returnCommand(
    y=if dischargeDecision.y then dischargePosition else 0)
    annotation(Placement(transformation(extent={{110,-135},{130,-115}})));
  Modelica.Blocks.Sources.IntegerExpression operatingMode(
    y=if chargeDecision.y then 1 else if dischargeDecision.y then 2 else 0)
    annotation(Placement(transformation(extent={{110,15},{130,35}})));

equation
  // Forecast: each daily set of six warmest hours is already precomputed.
  connect(forecast.y[1], warmestHour.u) annotation(Line(points={{-150,180},{-120,180}}, color={0,0,127}));
  connect(warmestHour.y, chargeWindowActive) annotation(Line(points={{-100,180},{200,180}}, color={255,0,255}));
  connect(warmestHour.y, outsideWindow.u) annotation(Line(points={{-100,180},{-75,-10}}, color={255,0,255}));

  // Hysteresis / temperature thresholds.
  connect(SOC, pcmFull.u) annotation(Line(points={{-200,55},{-160,60}}, color={0,0,127}));
  connect(pcmFull.y, notFull.u) annotation(Line(points={{-140,60},{-115,60}}, color={255,0,255}));
  connect(SOC, pcmAvailable.u) annotation(Line(points={{-200,55},{-160,-100}}, color={0,0,127}));
  connect(TSupply, supplyHotEnough.u) annotation(Line(points={{-200,115},{-160,120}}, color={0,0,127}));
  connect(TSupply, supplyNotTooHot.u) annotation(Line(points={{-200,115},{-115,110}}, color={0,0,127}));
  connect(TReturn, returnColdEnough.u) annotation(Line(points={{-200,-135},{-160,-135}}, color={0,0,127}));

  // Charge = warmest hour + free capacity + water between 32 and 40 degC.
  connect(warmestHour.y, windowAndCapacity.u1) annotation(Line(points={{-100,
          180},{-57,145}},                                                                    color={255,0,255}));
  connect(notFull.y, windowAndCapacity.u2) annotation(Line(points={{-95,60},{-55,139}}, color={255,0,255}));
  connect(windowAndCapacity.y, chargeRequest) annotation(Line(points={{-35,145},{200,150}}, color={255,0,255}));
  connect(supplyHotEnough.y, chargeTemperatureOK.u1) annotation(Line(points={{-140,
          120},{-57,100}},                                                                          color={255,0,255}));
  connect(supplyNotTooHot.y, chargeTemperatureOK.u2) annotation(Line(points={{-95,110},{-55,94}}, color={255,0,255}));
  connect(windowAndCapacity.y, chargeDecision.u1) annotation(Line(points={{-35,145},
          {8,130}},                                                                            color={255,0,255}));
  connect(chargeTemperatureOK.y, chargeDecision.u2) annotation(Line(points={{-35,100},{10,124}}, color={255,0,255}));
  connect(chargeDecision.y, charging) annotation(Line(points={{30,130},{200,120}}, color={255,0,255}));

  // Discharge = outside warmest hours + space-heating demand +
  //             at least 10-15% liquid PCM + cool return water.
  connect(outsideWindow.y, outsideAndDemand.u1) annotation(Line(points={{-55,-10},
          {-55,-32},{-55,-55},{-57,-55}},                                                     color={255,0,255}));
  connect(heatingDemand, outsideAndDemand.u2) annotation(Line(points={{-200,-65},{-55,-61}}, color={255,0,255}));
  connect(pcmAvailable.y, availableAndCold.u1) annotation(Line(points={{-140,
          -100},{-57,-110}},                                                                    color={255,0,255}));
  connect(returnColdEnough.y, availableAndCold.u2) annotation(Line(points={{-140,-135},{-55,-116}}, color={255,0,255}));
  connect(outsideAndDemand.y, dischargeDecision.u1) annotation(Line(points={{-35,-55},
          {8,-90}},                                                                              color={255,0,255}));
  connect(availableAndCold.y, dischargeDecision.u2) annotation(Line(points={{-35,-110},{10,-96}}, color={255,0,255}));
  connect(dischargeDecision.y, discharging) annotation(Line(points={{30,-90},{200,-65}}, color={255,0,255}));

  connect(supplyCommand.y, supplyValvePosition) annotation(Line(points={{130,85},{200,85}}, color={0,0,127}));
  connect(returnCommand.y, returnValvePosition) annotation(Line(points={{130,-125},{200,-125}}, color={0,0,127}));
  connect(operatingMode.y, mode) annotation(Line(points={{130,25},{200,25}}, color={255,127,0}));

  annotation(
    Diagram(coordinateSystem(preserveAspectRatio=false,
      extent={{-210,-165},{210,200}}),
      graphics={
        Text(extent={{-70,200},{85,188}},
          textString="FORECAST: 6 WARMEST HOURS PER DAY", textColor={0,85,145}),
        Text(extent={{-70,76},{70,67}},
          textString="CHARGING: SOC + 32...40 degC", textColor={0,85,145}),
        Text(extent={{-70,-150},{95,-160}},
          textString="DISCHARGING: DEMAND + SOC + COOL RETURN", textColor={0,85,145})}),
    Icon(coordinateSystem(preserveAspectRatio=false,
      extent={{-100,-100},{100,100}}),graphics={
        Rectangle(extent={{-100,100},{100,-100}},
          lineColor={0,100,170}, fillColor={238,247,251},
          fillPattern=FillPattern.Solid),
        Text(extent={{-90,44},{90,12}},textString="PCM Forecast",textColor={0,75,130}),
        Text(extent={{-90,4},{90,-26}},textString="Controller",textColor={0,75,130}),
        Text(extent={{-90,-37},{90,-72}},textString="CHARGE / DISCHARGE",textColor={0,75,130})}),
    Documentation(info="<html><p>Pure signal-based controller. It uses precomputed forecast flags, state of charge and supply/return temperatures. The real PCM and the two valves belong to LatentHeatStorage. Supply valve position 0 selects B (floor) and an intermediate position diverts part of the flow to C (charge). Return valve position 0 selects B (bypass); 0.9999 selects C (discharge). Verify the switching direction in your TIL implementation.</p><p>chargeRequest is provided for future heat-pump enabling. Do not use it alone to run a heat pump against closed heating valves: guarantee a hydraulic circulation path first. The actual energy flow and PCM temperature must be checked in the simulation. No DHW controller is duplicated here.</p></html>"));
end PCMForecastController;
