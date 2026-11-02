within SmartHouse.HeatingSource;
model TestHeatPump "Stand-alone test model for validation of heat-pump"
  TIL.LiquidComponents.Boundaries.Boundary boundary(m_flowFixed=-0.24, TFixed
      =303.15)
    annotation (Placement(transformation(extent={{-104,-10},{-96,10}})));
  TIL.LiquidComponents.Boundaries.Boundary boundary1(boundaryType="p")
    annotation (Placement(transformation(extent={{96,-10},{104,10}})));
  HeatPumpCycle heatPumpCycle(useDefrost=true)
    annotation (Placement(transformation(extent={{-32,-28},{30,28}})));
  Modelica.Blocks.Sources.RealExpression T_ambient(y=293.15)
    "Disable compressor when heat source is turned of" annotation (Placement(
        transformation(
        extent={{-16,-8},{16,8}},
        rotation=90,
        origin={-12,-72})));
  Modelica.Blocks.Sources.BooleanExpression Enable(y=true) annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={4,-72})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T(redeclare
      TIL.Utilities.Units.Conversions.Units.degC unit)
    annotation (Placement(transformation(extent={{-84,40},{-76,48}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensor_T1(redeclare
      TIL.Utilities.Units.Conversions.Units.degC unit)
    annotation (Placement(transformation(extent={{62,34},{70,42}})));
 inner TIL.SystemInformationManager sim(
  redeclare TILMedia.VLEFluid.Types.TILMedia_Propane vleFluidType1,
  redeclare TILMedia.Gas.Types.VDI4670_MoistAir gasType1,
  redeclare TILMedia.Liquid.Types.TILMedia_Water liquidType1);
equation
  connect(boundary.port, heatPumpCycle.WaterInput) annotation (Line(
      points={{-100,0},{-32,0}},
      color={0,170,238},
      thickness=0.5));
  connect(heatPumpCycle.WaterOutput, boundary1.port) annotation (Line(
      points={{30,0},{100,0}},
      color={0,170,238},
      thickness=0.5));
  connect(T_ambient.y, heatPumpCycle.T_ambient) annotation (Line(points={{-12,
          -54.4},{-12,-40.422},{-13.4,-40.422},{-13.4,-26.4444}},
                                                           color={0,0,127}));
  connect(Enable.y, heatPumpCycle.EnableHeatSource) annotation (Line(points={{4,-61},
          {4,-32},{0,-32},{0,-24.8889},{-1,-24.8889}},     color={255,0,255}));
  connect(sensor_T.port, heatPumpCycle.WaterInput) annotation (Line(
      points={{-80,40},{-80,0},{-32,0}},
      color={0,170,238},
      thickness=0.5));
  connect(sensor_T1.port, boundary1.port) annotation (Line(
      points={{66,34},{66,0},{100,0}},
      color={0,170,238},
      thickness=0.5));
    annotation (Placement(transformation(extent={{-62,-66},{-42,-46}})),
              Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end TestHeatPump;
