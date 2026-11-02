within SmartHouse.HeatingSource;
model TestHotWaterStorage
  inner TIL.SystemInformationManager sim(
  redeclare TILMedia.VLEFluid.Types.TILMedia_Propane vleFluidType1,
  redeclare TILMedia.Gas.Types.VDI4670_MoistAir gasType1,
  redeclare TILMedia.Liquid.Types.TILMedia_Water liquidType1);
  Modelica.Blocks.Sources.RealExpression T_ambient(y=263.15)
    "Disable compressor when heat source is turned of" annotation (Placement(
        transformation(
        extent={{-16,-8},{16,8}},
        rotation=90,
        origin={12,-64})));
  Modelica.Blocks.Sources.BooleanExpression Enable(y=false)
                                                           annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-8,-58})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T(redeclare
      TIL.Utilities.Units.Conversions.Units.degC unit)
    annotation (Placement(transformation(extent={{-84,60},{-76,68}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T1(redeclare
      TIL.Utilities.Units.Conversions.Units.degC unit)
    annotation (Placement(transformation(extent={{62,54},{70,62}})));
  TIL.LiquidComponents.Boundaries.Boundary boundary(
    boundaryType="m_flow",                          m_flowFixed=0,
    TFixed=303.15)
    annotation (Placement(transformation(extent={{-4,-10},{4,10}},
        rotation=90,
        origin={0,-90})));
  HeatPump_ThermalStorage heatPump_ThermalStorage
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  TIL.LiquidComponents.Boundaries.Boundary boundary2(boundaryType="p")
    annotation (Placement(transformation(extent={{-4,-10},{4,10}},
        rotation=90,
        origin={0,70})));
equation
  connect(heatPump_ThermalStorage.HeatingDemand, Enable.y)
    annotation (Line(points={{-8,-8},{-8,-47}}, color={255,0,255}));
  connect(heatPump_ThermalStorage.T_ambient, T_ambient.y) annotation (Line(
        points={{9,-9},{9,-42},{12,-42},{12,-46.4}}, color={0,0,127}));
  connect(boundary2.port, heatPump_ThermalStorage.WaterOutput1) annotation (
      Line(
      points={{0,70},{0,10}},
      color={0,170,238},
      thickness=0.5));
  connect(boundary.port, heatPump_ThermalStorage.WaterInput1) annotation (
      Line(
      points={{0,-90},{0,-10}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T.port, heatPump_ThermalStorage.WaterInput) annotation (Line(
      points={{-80,60},{-62,60},{-62,0},{-10,0}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T1.port, heatPump_ThermalStorage.WaterOutput) annotation (
      Line(
      points={{66,54},{52,54},{52,0},{10.2,0}},
      color={0,170,238},
      thickness=0.5));
  connect(heatPump_ThermalStorage.WaterInput, heatPump_ThermalStorage.WaterOutput)
    annotation (Line(
      points={{-10,0},{-14,0},{-14,-28},{10.2,-28},{10.2,0}},
      color={0,170,238},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end TestHotWaterStorage;
