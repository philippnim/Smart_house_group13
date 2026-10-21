within SmartHouse.Boundaries.Walls;
model InternalWall
  "2R1C Wall model for internal walls"
  extends PartialWall;
  import SI = Modelica.Units.SI;

  // Parameters

  parameter SI.Length thicknessWall "Total wall thickness" annotation(Dialog(group="Geometry"));
  parameter SI.ThermalConductivity lambdaWall "Thermal conductivity" annotation(Dialog(group="Thermal properties"));
  parameter SI.Density rhoWall "Material density" annotation(Dialog(group="Thermal properties"));
  parameter SI.SpecificHeatCapacity cpWall "Specific heat capacity" annotation(Dialog(group="Thermal properties"));

  // Calculated parameters for 2R1C wall model
  final parameter SI.Length plateThickness = thicknessWall / 2;
  final parameter SI.ThermalConductivity thermalConductivity_A = lambdaWall;
  final parameter SI.ThermalConductivity thermalConductivity_B = lambdaWall;
  final parameter SI.HeatCapacity C_mass = lengthWall * heightWall * thicknessWall * rhoWall * cpWall;

  //Components

  TIL.OtherComponents.Thermal.HeatResistor heatResistor_A(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=thermalConductivity_A,
    thickness=plateThickness,
    crossSection=heightWall*lengthWall)
    annotation (Placement(transformation(extent={{-48,-2},{-32,2}})));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor heatCapacitor_wall(C=C_mass)
    annotation (Placement(transformation(extent={{-10,6},{10,26}})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_B(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    thermalConductivity=thermalConductivity_B,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=plateThickness,
    crossSection=heightWall*lengthWall)
    annotation (Placement(transformation(extent={{32,-2},{48,2}})));
equation

  connect(heatResistor_A.heatPortA, heatPort_A_surface) annotation (Line(
      points={{-48,0},{-60,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_A.heatPortB, heatResistor_B.heatPortA) annotation (Line(
      points={{-32,0},{32,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_B.heatPortB, heatPort_B_surface) annotation (Line(
      points={{48,0},{60,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatCapacitor_wall.port, heatResistor_B.heatPortA)
    annotation (Line(points={{0,6},{0,0},{32,0}}, color={191,0,0}));
  annotation (Icon(graphics={Bitmap(extent={{-66,-78},{70,76}}, fileName=
              "C:/Users/phili/Documents/Smart_house_group13/model/images/internal_wall.png")}));
end InternalWall;
