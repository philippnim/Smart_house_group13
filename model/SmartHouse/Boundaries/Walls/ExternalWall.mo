within SmartHouse.Boundaries.Walls;
model ExternalWall
  "3R2C model for external walls allowing two different materials. For an easier handling of the resistances the Resitance in the Middle was split in two parts"
  extends PartialWall;
  import SI = Modelica.Units.SI;


  // Basic model
  // R---R---R
  //   |   |
  //   C   C

  // Parameters
  // Layer A:
  parameter SI.Length thickness_A "Thickness of material A" annotation(Dialog(group="Material A"));
  parameter SI.ThermalConductivity lambda_A "Conductivity of material A" annotation(Dialog(group="Material A"));
  parameter SI.Density rho_A "Density of material A" annotation(Dialog(group="Material A"));
  parameter SI.SpecificHeatCapacity cp_A "heat capacity of material A" annotation(Dialog(group="Material A"));

  // Layer B:
  parameter SI.Length thickness_B "Thickness of material B" annotation(Dialog(group="Material B"));
  parameter SI.ThermalConductivity lambda_B "Conductivity of material B" annotation(Dialog(group="Material B"));
  parameter SI.Density rho_B "Density of material B" annotation(Dialog(group="Material B"));
  parameter SI.SpecificHeatCapacity cp_B "heat capacity of material B" annotation(Dialog(group="Material B"));

  // Calculated values
  final parameter SI.Length thickness_A_half = thickness_A / 2;
  final parameter SI.Length thickness_B_half = thickness_B / 2;
  final parameter SI.HeatCapacity C_A_val = lengthWall * heightWall * thickness_A * rho_A * cp_A;
  final parameter SI.HeatCapacity C_B_val = lengthWall * heightWall * thickness_B * rho_B * cp_B;


  // Components

  // Capacities
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor heatCapacitor_material_A(C=C_A_val)
    annotation (Placement(transformation(extent={{-40,8},{-20,28}})));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor heatCapacitor_material_B(C=C_B_val)
    annotation (Placement(transformation(extent={{20,8},{40,28}})));


  // Resistors
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_A_outer(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambda_A,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thickness_A_half,
    crossSection=heightWall*lengthWall)
    annotation (Placement(transformation(extent={{-52,-2},{-36,2}})));

  TIL.OtherComponents.Thermal.HeatResistor heatResistor_A_inner(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambda_A,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thickness_A_half,
    crossSection=heightWall*lengthWall)
    annotation (Placement(transformation(extent={{-22,-2},{-6,2}})));

  TIL.OtherComponents.Thermal.HeatResistor heatResistor_B_inner(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambda_B,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thickness_B_half,
    crossSection=heightWall*lengthWall)
    annotation (Placement(transformation(extent={{8,-2},{24,2}})));

  TIL.OtherComponents.Thermal.HeatResistor heatResistor_B_outer(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambda_B,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thickness_B_half,
    crossSection=heightWall*lengthWall)
    annotation (Placement(transformation(extent={{36,-2},{52,2}})));

equation

  connect(heatPort_A_surface, heatResistor_A_outer.heatPortA) annotation (Line(
      points={{-60,0},{-52,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_B_surface, heatResistor_B_outer.heatPortB) annotation (Line(
      points={{60,0},{52,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_A_outer.heatPortB, heatResistor_A_inner.heatPortA)
    annotation (Line(
      points={{-36,0},{-22,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_B_inner.heatPortB, heatResistor_B_outer.heatPortA)
    annotation (Line(
      points={{24,0},{36,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_B_inner.heatPortA, heatResistor_A_inner.heatPortB)
    annotation (Line(
      points={{8,0},{-6,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatCapacitor_material_A.port, heatResistor_A_inner.heatPortA)
    annotation (Line(points={{-30,8},{-30,0},{-22,0}}, color={191,0,0}));
  connect(heatCapacitor_material_B.port, heatResistor_B_outer.heatPortA)
    annotation (Line(points={{30,8},{30,0},{36,0}}, color={191,0,0}));
  annotation (Icon(graphics={Bitmap(extent={{-56,-72},{64,64}}, fileName="modelica://SmartHouse/Images/external_wall.png")}));
end ExternalWall;
