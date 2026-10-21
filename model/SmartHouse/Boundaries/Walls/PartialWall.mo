within SmartHouse.Boundaries.Walls;
partial model PartialWall
  "partial model of a wall handling the heat transfer between air to material"
  import SI = Modelica.Units.SI;

  // Geometry parameter
  parameter SI.Length lengthWall "length of the wall" annotation(Dialog(group="Geometry"));
  parameter SI.Length heightWall "height of the wall" annotation(Dialog(group="Geometry"));
  final parameter SI.Area area= heightWall * lengthWall "Area of the wall";


  // alpha values
  parameter SI.CoefficientOfHeatTransfer alpha_A "Heat transfer coefficient on A side";
  parameter SI.CoefficientOfHeatTransfer alpha_B "Heat transfer coefficient on B side";


  // Internal surface ports for extending models
protected
  TIL.Connectors.HeatPort heatPort_A_surface
    annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
  TIL.Connectors.HeatPort heatPort_B_surface
    annotation (Placement(transformation(extent={{50,-10},{70,10}})));
public

  // Thermal boundaries
  TIL.Connectors.HeatPort heatPort_A_air
    annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
  TIL.Connectors.HeatPort heatPort_B_air
    annotation (Placement(transformation(extent={{90,-10},{110,10}})));


  // Convective Resistors


  TIL.OtherComponents.Thermal.HeatResistor heatResistor_A_convection(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConvection,
    alpha=alpha_A,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    crossSection=area)
    annotation (Placement(transformation(extent={{-88,-2},{-72,2}})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_B_convection(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConvection,
    alpha=alpha_B,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    crossSection=area)
    annotation (Placement(transformation(extent={{72,-2},{88,2}})));

equation
  connect(heatPort_A_surface, heatResistor_A_convection.heatPortB) annotation (
      Line(
      points={{-60,0},{-72,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_A_air, heatResistor_A_convection.heatPortA) annotation (Line(
      points={{-100,0},{-88,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_B_surface, heatResistor_B_convection.heatPortA) annotation (
      Line(
      points={{60,0},{72,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_B_air, heatResistor_B_convection.heatPortB) annotation (Line(
      points={{100,0},{88,0}},
      color={204,0,0},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Text(
          extent={{-84,16},{-54,-16}},
          textColor={0,0,0},
          textString="A"),
        Text(
          extent={{54,16},{84,-16}},
          textColor={0,0,0},
          textString="B"),
        Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}),
                                                                 Diagram(
      coordinateSystem(preserveAspectRatio=false)));
end PartialWall;
