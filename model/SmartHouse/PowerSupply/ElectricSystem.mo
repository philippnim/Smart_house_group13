within SmartHouse.PowerSupply;
model ElectricSystem
  ""
  import SI = Modelica.Units.SI;


  // ---------- Parameter PV ----------
  parameter SI.Area A_PV = 20 "Modulfläche gesamt";
  parameter Real eta_PV = 0.20 "Modulwirkungsgrad";
  parameter Real eta_inv = 0.96 "Wirkungsgrad Laderegler/Wandler";

  parameter Real etaWind = 0.78 "eta of wind turbine";


  // ---------- Parameter Last ----------

  parameter Boolean enablePV = true "PV an/aus";
  parameter Boolean enableWind = true "Wind an/aus";
  parameter Boolean enableBattery = true "Batterie an/aus";






  PV_Battery_Wind_Simple pV_Battery_Simple(
    A_PV=A_PV,
    eta_PV=eta_PV,
    eta_inv=eta_inv,
    etaWind=etaWind,
    enablePV=enablePV,
    enableWind=enableWind,
    enableBattery=enableBattery)
    annotation (Placement(transformation(extent={{-20,-14},{18,20}})));
  Modelica.Blocks.Interfaces.RealInput powerLoad annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={50,120})));
  Modelica.Blocks.Interfaces.RealInput solarRadInput annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-50,-100})));
  Modelica.Blocks.Interfaces.RealInput windSpeedInput annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={50,-100})));
equation
  connect(pV_Battery_Simple.powerLoad, powerLoad)
    annotation (Line(points={{20,-3.4},{50,-3.4},{50,120}},
                                                          color={0,0,127}));
  connect(solarRadInput, pV_Battery_Simple.solarRadiation)
    annotation (Line(points={{-50,-100},{-50,-4},{-22,-4}}, color={0,0,127}));
  connect(windSpeedInput, pV_Battery_Simple.windSpeed) annotation (Line(points=
          {{50,-100},{50,-26},{7,-26},{7,-16}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ElectricSystem;
