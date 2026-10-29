within SmartHouse.Boundaries.Walls;
model Window
  "Basic window without thermal mass. Translates a radiation input to a heat flow.
The heat flow should preferably be connected to the rooms surface. Not the air! "
  extends PartialWall;
  import SI = Modelica.Units.SI;


  // Parameter
  parameter Real g_value "Solar energy transmittance" annotation(Dialog(group="Window properties"));
  parameter SI.Length thicknessWindow "Glass thickness" annotation(Dialog(group="Window properties"));
  parameter SI.ThermalConductivity lambdaWindow "Glass thermal conductivity" annotation(Dialog(group="Window properties"));

  // Components
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_glass(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambdaWindow,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thicknessWindow,
    crossSection=area)
    annotation (Placement(transformation(extent={{-8,-2},{8,2}})));

  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_solarGains(boundaryType
      ="Q_flow", use_heatFlowRateInput=true) annotation (Placement(
        transformation(
        extent={{-4,-6},{4,6}},
        rotation=90,
        origin={-40,-40})));

  Modelica.Blocks.Interfaces.RealInput RadiationInput annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-40,-120}),
                          iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
          origin={-40,-120})));

  Modelica.Blocks.Math.Gain solarGain(k=-area*g_value)
                                                      annotation (Placement(
        transformation(
        extent={{-6,-6},{6,6}},
        rotation=90,
      origin={-40,-74})));

  TIL.Connectors.HeatPort solarGains
    annotation (Placement(transformation(extent={{30,-110},{50,-90}})));

equation
  connect(heatPort_A_surface, heatResistor_glass.heatPortA) annotation (Line(
      points={{-60,0},{-8,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_glass.heatPortB, heatPort_B_surface) annotation (Line(
      points={{8,0},{60,0}},
      color={204,0,0},
    thickness=0.5));

  connect(solarGain.y, heatBoundary_solarGains.Q_flow_in) annotation (Line(
        points={{-40,-67.4},{-40,-56},{-38,-56},{-38,-44}}, color={0,0,127}));
  connect(solarGain.u, RadiationInput)
    annotation (Line(points={{-40,-81.2},{-40,-120}},
                                                  color={0,0,127}));
  connect(heatBoundary_solarGains.heatPort, solarGains) annotation (Line(
      points={{-40,-40},{-40,-32},{40,-32},{40,-100}},
      color={204,0,0},
      thickness=0.5));
  annotation (Icon(graphics={Bitmap(
          extent={{-56,-50},{58,50}},
          fileName="modelica://SmartHouse/Images/window.png")}));

end Window;
