within SmartHouse.HeatingSource;
model TestElectricalBoiler
  inner TIL.SystemInformationManager sim(
    redeclare replaceable TILMedia.Liquid.Types.TILMedia_Water liquidType1)
    annotation (Placement(transformation(extent={{80,80},{100,100}})));
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
    boundaryType="m_flow",
    m_flowFixed=0,
    TFixed=303.15)
    annotation (Placement(transformation(extent={{-4,-10},{4,10}},
        rotation=90,
        origin={0,-90})));
  TIL.LiquidComponents.Boundaries.Boundary boundary2(boundaryType="p")
    annotation (Placement(transformation(extent={{-4,-10},{4,10}},
        rotation=90,
        origin={0,70})));
  ElectricalBoiler_ThermalStorage electricalBoiler_ThermalStorage
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
equation
  connect(Enable.y, electricalBoiler_ThermalStorage.HeatingDemand)
    annotation (Line(points={{-8,-47},{-8,-8}}, color={255,0,255}));
  connect(boundary.port, electricalBoiler_ThermalStorage.WaterInput1)
    annotation (Line(
      points={{0,-90},{0,-10}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler_ThermalStorage.WaterOutput1, boundary2.port)
    annotation (Line(
      points={{0,10},{0,70}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler_ThermalStorage.WaterInput, sensor_T.port)
    annotation (Line(
      points={{-10,0},{-80,0},{-80,60}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler_ThermalStorage.WaterInput,
    electricalBoiler_ThermalStorage.WaterOutput) annotation (Line(
      points={{-10,0},{-14,0},{-14,14},{14,14},{14,0},{10.2,0}},
      color={0,170,238},
      thickness=0.5));
  connect(electricalBoiler_ThermalStorage.WaterOutput, sensor_T1.port)
    annotation (Line(
      points={{10.2,0},{14,0},{14,48},{66,48},{66,54}},
      color={0,170,238},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end TestElectricalBoiler;
