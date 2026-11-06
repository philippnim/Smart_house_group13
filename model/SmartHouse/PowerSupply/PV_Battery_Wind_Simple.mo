within SmartHouse.PowerSupply;
model PV_Battery_Wind_Simple
  "Einfaches PV-Modell: Einstrahlung aus CSV -> PV-Leistung -> DC-Bus mit Batterie und Last"

  import Modelica.Units.SI;

  // ---------- Parameter PV ----------
  parameter SI.Area A_PV = 20 "Modulfläche gesamt";
  parameter Real eta_PV = 0.20 "Modulwirkungsgrad";
  parameter Real eta_inv = 0.96 "Wirkungsgrad Laderegler/Wandler";

  parameter Real etaWind = 0.78 "eta of wind turbine";

  // ---------- Parameter Last ----------

  parameter Boolean enablePV = true "PV an/aus";
  parameter Boolean enableWind = true "Wind an/aus";
  parameter Boolean enableBattery = true "Batterie an/aus";

  // ---------- Einstrahlung aus CSV ----------
  // CSV: 1. Spalte Zeit [s], 2. Spalte Einstrahlung [W/m2]

  // ---------- PV: P = G * A * eta ----------
  Modelica.Blocks.Math.Gain pvPanel(k=if enablePV then A_PV*eta_PV else 0)
                                                   "PV-Modul: W/m2 -> W"
    annotation (Placement(transformation(extent={{-75,30},{-55,50}})));
  Modelica.Blocks.Math.Gain converter(k=eta_inv) "Wandlerverluste"
    annotation (Placement(transformation(extent={{-45,30},{-25,50}})));
  Modelica.Blocks.Math.Division powerToCurrentPV "I = P / U_Bus"
    annotation (Placement(transformation(extent={{-15,30},{5,50}})));

  // ---------- Elektrischer DC-Bus ----------
  Modelica.Electrical.Analog.Sources.SignalCurrent pvSource "PV-Strom ins Netz"
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=90, origin={20,0})));

  Modelica.Electrical.Batteries.BatteryStacks.CellStack battery(
    Ns=16, Np=1,
    cellData=Modelica.Electrical.Batteries.ParameterRecords.CellData(
      Qnom=100*3600, OCVmax=3.4, OCVmin=2.8, Ri=0.001),
    SOC(fixed=true, start=0.5))
    "Batteriespeicher (16s LFP, ~51 V, 100 Ah)"
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=270, origin={50,0})));

  Modelica.Electrical.Analog.Sensors.VoltageSensor busVoltage
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=270, origin={80,0})));

  Modelica.Electrical.Analog.Sources.SignalCurrent loadCurrent "Verbraucher"
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=270, origin={172,0})));

  Modelica.Blocks.Math.Division powerToCurrentLoad "I = P / U_Bus"
    annotation (Placement(transformation(extent={{196,30},{176,50}})));

  Modelica.Electrical.Analog.Basic.Ground ground
    annotation (Placement(transformation(extent={{55,-50},{75,-30}})));

  // ---------- Auswertung ----------
  SI.Power P_PV = converter.y "PV-Leistung am Bus";
  SI.Energy E_PV(start=0, fixed=true) "Erzeugte PV-Energie";

  Modelica.Electrical.Analog.Sources.SignalCurrent GridCurrent annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={116,0})));
  Modelica.Blocks.Sources.RealExpression Battery_SOC(y=battery.SOC)
    annotation (Placement(transformation(extent={{182,282},{162,302}})));
  Modelica.Blocks.Logical.Hysteresis full(uLow=0.88, uHigh=0.9) annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={156,242})));
  Modelica.Blocks.Logical.Hysteresis not_empty(uLow=0.10, uHigh=0.12)
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={14,258})));
  Modelica.Blocks.Logical.Not empty annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={14,228})));
  Modelica.Blocks.Logical.GreaterThreshold surplus(threshold=0) annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={110,220})));
  Modelica.Blocks.Logical.LessThreshold deficit(threshold=0) annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={60,220})));
  Modelica.Blocks.Logical.And exportCond annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={124,168})));
  Modelica.Blocks.Logical.And importCond annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={52,166})));
  Modelica.Blocks.Logical.Or useGrid annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={88,124})));
  Modelica.Blocks.Sources.Constant zero(k=0)
    annotation (Placement(transformation(extent={{-2,68},{18,88}})));
  Modelica.Blocks.Logical.Switch GridSwitch
    annotation (Placement(transformation(extent={{66,76},{86,96}})));
  Modelica.Blocks.Math.Division powerToCurrentGrid
    annotation (Placement(transformation(extent={{108,38},{128,58}})));
  Modelica.Blocks.Nonlinear.Limiter exportPower(uMax=1e9, uMin=0)
    annotation (Placement(transformation(extent={{152,122},{172,142}})));
  Modelica.Blocks.Math.Gain negate(k=-1)
    annotation (Placement(transformation(extent={{152,76},{172,96}})));
  Modelica.Blocks.Nonlinear.Limiter importPower(uMax=1e9, uMin=0)
    annotation (Placement(transformation(extent={{226,76},{246,96}})));
  Modelica.Blocks.Continuous.Integrator E_export(k=1/3.6e6)
    annotation (Placement(transformation(extent={{270,122},{290,142}})));
  Modelica.Blocks.Continuous.Integrator E_import(k=1/3.6e6)
    annotation (Placement(transformation(extent={{270,76},{290,96}})));
  HomeWindTurbine homeWindTurbine(enableWind=enableWind, etaWind=etaWind)
                                  annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={148,0})));
  Modelica.Blocks.Sources.BooleanExpression noBattery(y=not enableBattery)
    annotation (Placement(transformation(extent={{-56,98},{-36,118}})));
  Modelica.Blocks.Logical.Or useGridTotal
    annotation (Placement(transformation(extent={{28,108},{48,128}})));
  Modelica.Blocks.Math.Add3 P_net(
    k1=+1,
    k2=+1,
    k3=-1) annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=-90,
        origin={84,250})));
  Modelica.Blocks.Interfaces.RealInput powerLoad annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={280,46})));
  Modelica.Blocks.Interfaces.RealInput solarRadiation annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-140,40})));
  Modelica.Blocks.Interfaces.RealInput windSpeed annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={150,-80})));
equation
  der(E_PV) = P_PV;

  // Signalpfad PV
  connect(pvPanel.y, converter.u)
    annotation (Line(points={{-54,40},{-47,40}}, color={0,0,127}));
  connect(converter.y, powerToCurrentPV.u1)
    annotation (Line(points={{-24,40},{-20,40},{-20,46},{-17,46}}, color={0,0,127}));
  connect(busVoltage.v, powerToCurrentPV.u2)
    annotation (Line(points={{69,0},{68,0},{68,20},{-20,20},{-20,34},{-17,34}}, color={0,0,127}));
  connect(powerToCurrentPV.y, pvSource.i)
    annotation (Line(points={{6,40},{8,40},{8,0}}, color={0,0,127}));

  // Signalpfad Last
  connect(busVoltage.v, powerToCurrentLoad.u2)
    annotation (Line(points={{69,0},{68,0},{68,26},{208,26},{208,34},{198,34}}, color={0,0,127}));
  connect(powerToCurrentLoad.y, loadCurrent.i)
    annotation (Line(points={{175,40},{170,40},{170,16},{192,16},{192,0},{184,0}},
                                                         color={0,0,127}));

  // DC-Bus (+)
  connect(pvSource.n, battery.p)
    annotation (Line(points={{20,10},{20,20},{50,20},{50,10}}, color={0,0,255}));
  connect(battery.p, busVoltage.p)
    annotation (Line(points={{50,10},{50,20},{80,20},{80,10}}, color={0,0,255}));
  connect(busVoltage.p, loadCurrent.p)
    annotation (Line(points={{80,10},{80,20},{172,20},{172,10}}, color={0,0,255}));

  // DC-Bus (-)
  connect(pvSource.p, ground.p)
    annotation (Line(points={{20,-10},{20,-20},{65,-20},{65,-30}}, color={0,0,255}));
  connect(battery.n, ground.p)
    annotation (Line(points={{50,-10},{50,-20},{65,-20},{65,-30}}, color={0,0,255}));
  connect(busVoltage.n, ground.p)
    annotation (Line(points={{80,-10},{80,-20},{65,-20},{65,-30}}, color={0,0,255}));
  connect(loadCurrent.n, ground.p)
    annotation (Line(points={{172,-10},{172,-20},{65,-20},{65,-30}}, color={0,0,255}));

  connect(GridCurrent.p, busVoltage.p) annotation (Line(points={{116,10},{116,
          20},{80,20},{80,10}}, color={0,0,255}));
  connect(GridCurrent.n, ground.p) annotation (Line(points={{116,-10},{116,-20},
          {65,-20},{65,-30}}, color={0,0,255}));
  connect(Battery_SOC.y, full.u)
    annotation (Line(points={{161,292},{156,292},{156,254}}, color={0,0,127}));
  connect(Battery_SOC.y, not_empty.u)
    annotation (Line(points={{161,292},{14,292},{14,270}}, color={0,0,127}));
  connect(not_empty.y, empty.u)
    annotation (Line(points={{14,247},{14,240}}, color={255,0,255}));
  connect(surplus.y, exportCond.u2) annotation (Line(points={{110,209},{110,190},
          {116,190},{116,180}}, color={255,0,255}));
  connect(full.y, exportCond.u1) annotation (Line(points={{156,231},{156,190},{
          124,190},{124,180}}, color={255,0,255}));
  connect(deficit.y, importCond.u1) annotation (Line(points={{60,209},{60,186},
          {52,186},{52,178}}, color={255,0,255}));
  connect(empty.y, importCond.u2) annotation (Line(points={{14,217},{14,188},{
          44,188},{44,178}}, color={255,0,255}));
  connect(exportCond.y, useGrid.u1) annotation (Line(points={{124,157},{124,146},
          {88,146},{88,136}}, color={255,0,255}));
  connect(importCond.y, useGrid.u2) annotation (Line(points={{52,155},{52,146},
          {80,146},{80,136}}, color={255,0,255}));
  connect(zero.y, GridSwitch.u3)
    annotation (Line(points={{19,78},{64,78}}, color={0,0,127}));
  connect(GridSwitch.y, powerToCurrentGrid.u1) annotation (Line(points={{87,86},
          {96,86},{96,54},{106,54}}, color={0,0,127}));
  connect(busVoltage.v, powerToCurrentGrid.u2) annotation (Line(points={{69,0},
          {68,0},{68,26},{96,26},{96,42},{106,42}}, color={0,0,127}));
  connect(powerToCurrentGrid.y, GridCurrent.i) annotation (Line(points={{129,48},
          {134,48},{134,0},{128,0}}, color={0,0,127}));
  connect(GridSwitch.y, exportPower.u) annotation (Line(points={{87,86},{142,86},
          {142,132},{150,132}},                    color={0,0,127}));
  connect(GridSwitch.y, negate.u)
    annotation (Line(points={{87,86},{150,86}}, color={0,0,127}));
  connect(negate.y, importPower.u)
    annotation (Line(points={{173,86},{224,86}}, color={0,0,127}));
  connect(importPower.y, E_import.u)
    annotation (Line(points={{247,86},{268,86}}, color={0,0,127}));
  connect(exportPower.y, E_export.u)
    annotation (Line(points={{173,132},{268,132}}, color={0,0,127}));
  connect(homeWindTurbine.pin_p, loadCurrent.p) annotation (Line(points={{154,
          10},{154,20},{172,20},{172,10}}, color={0,0,255}));
  connect(homeWindTurbine.pin_n, ground.p) annotation (Line(points={{154,-10},{
          154,-20},{65,-20},{65,-30}}, color={0,0,255}));
  connect(useGrid.y, useGridTotal.u1) annotation (Line(points={{88,113},{88,104},
          {16,104},{16,118},{26,118}}, color={255,0,255}));
  connect(noBattery.y, useGridTotal.u2) annotation (Line(points={{-35,108},{14,108},
          {14,102},{26,102},{26,110}}, color={255,0,255}));
  connect(useGridTotal.y, GridSwitch.u2) annotation (Line(points={{49,118},{54,118},
          {54,86},{64,86}}, color={255,0,255}));
  connect(converter.y, P_net.u2) annotation (Line(points={{-24,40},{-24,286},
          {84,286},{84,262}}, color={0,0,127}));
  connect(P_net.y, surplus.u) annotation (Line(points={{84,239},{84,240},{110,
          240},{110,232}}, color={0,0,127}));
  connect(P_net.y, deficit.u) annotation (Line(points={{84,239},{84,240},{60,
          240},{60,232}}, color={0,0,127}));
  connect(P_net.y, GridSwitch.u1) annotation (Line(points={{84,239},{84,144},
          {56,144},{56,94},{64,94}}, color={0,0,127}));
  connect(homeWindTurbine.P_wind, P_net.u1) annotation (Line(points={{139.4,
          -5},{132,-5},{132,-16},{100,-16},{100,16},{136,16},{136,152},{140,
          152},{140,270},{76,270},{76,262}}, color={0,0,127}));
  connect(powerToCurrentLoad.u1, powerLoad)
    annotation (Line(points={{198,46},{280,46}}, color={0,0,127}));
  connect(P_net.u3, powerLoad) annotation (Line(points={{92,262},{92,268},{212,268},
          {212,46},{280,46}}, color={0,0,127}));
  connect(solarRadiation, pvPanel.u)
    annotation (Line(points={{-140,40},{-77,40}}, color={0,0,127}));
  connect(windSpeed, homeWindTurbine.windSpeed) annotation (Line(points={{150,-80},
          {150,-36},{198,-36},{198,18},{145,18},{145,12}}, color={0,0,127}));
  annotation (
    experiment(StartTime=0, StopTime=604800, Interval=600),
    Diagram(coordinateSystem(extent={{-120,-60},{260,280}})),
    Icon(coordinateSystem(extent={{-120,-60},{260,280}}),
         graphics={
      Rectangle(extent={{-80,60},{80,-60}}, lineColor={0,0,0}, fillColor={30,60,140},
        fillPattern=FillPattern.Solid),
      Line(points={{-80,20},{80,20}}, color={255,255,255}),
      Line(points={{-80,-20},{80,-20}}, color={255,255,255}),
      Line(points={{-27,60},{-27,-60}}, color={255,255,255}),
      Line(points={{27,60},{27,-60}}, color={255,255,255}),
      Text(extent={{-100,-70},{100,-100}}, textString="%name")}));
end PV_Battery_Wind_Simple;
