within SmartHouse.Boundaries.Horizontal;
model PartialHorizontal4R2C
  "tbd"
  extends PartialHorizontal;

  import SI = Modelica.Units.SI;

  //Parameters
  //length width and A_floor defined by parent model

  // Upper layer
  parameter SI.Length thickness_upper "Upper layer thickness" annotation(Dialog(group="Upper layer"));
  parameter SI.ThermalConductivity lambda_upper "Upper layer conductivity" annotation(Dialog(group="Upper layer"));
  parameter SI.Density rho_upper "Upper layer density" annotation(Dialog(group="Upper layer"));
  parameter SI.SpecificHeatCapacity cp_upper "Upper layer heat capacity" annotation(Dialog(group="Upper layer"));

  // Lower layer
  parameter SI.Length thickness_lower "Lower layer thickness" annotation(Dialog(group="Lower layer"));
  parameter SI.ThermalConductivity lambda_lower "Lower layer conductivity" annotation(Dialog(group="Lower layer"));
  parameter SI.Density rho_lower "Lower layer density" annotation(Dialog(group="Lower layer"));
  parameter SI.SpecificHeatCapacity cp_lower "Lower layer heat capacity" annotation(Dialog(group="Lower layer"));

  // Calculated values
  final parameter SI.Length thickness_up_half = thickness_upper / 2;
  final parameter SI.Length thickness_down_half = thickness_lower / 2;
  final parameter SI.HeatCapacity C_up_val = A_floor * thickness_upper * rho_upper * cp_upper;
  final parameter SI.HeatCapacity C_down_val = A_floor * thickness_lower * rho_lower * cp_lower;


  // Components
protected // Heatports that the user is not supposed to use
  TIL.Connectors.HeatPort heatPort_down_inner
    annotation (Placement(transformation(extent={{-10,-74},{10,-54}})));
  TIL.Connectors.HeatPort heatPort_up_inner
    annotation (Placement(transformation(extent={{-10,54},{10,74}})));
  TIL.Connectors.HeatPort heatPort_internal_floor_heating
    annotation (Placement(transformation(extent={{14,-10},{34,10}})));
public //
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_down_outer(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambda_lower,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thickness_down_half,
    crossSection=A_floor) annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=90,
        origin={0,-40})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_down_inner(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambda_lower,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thickness_down_half,
    crossSection=A_floor) annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=90,
        origin={0,-20})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_up_outer(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambda_upper,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thickness_up_half,
    crossSection=A_floor) annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=90,
        origin={0,40})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_up_inner(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConduction,
    use_thermalConductivityValue=true,
    thermalConductivity=lambda_upper,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    thickness=thickness_up_half,
    crossSection=A_floor) annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=90,
        origin={0,20})));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor heatCapacitor_material_up(C=
        C_up_val)
    annotation (Placement(transformation(extent={{-44,32},{-24,52}})));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor heatCapacitor_material_down(C=
        C_down_val)
    annotation (Placement(transformation(extent={{-44,-28},{-24,-8}})));




equation
  connect(heatPort_up_inner, heatResistor_up_outer.heatPortB) annotation (Line(
      points={{0,64},{0,48}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_up_outer.heatPortA, heatResistor_up_inner.heatPortB)
    annotation (Line(
      points={{0,32},{0,28}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_up_inner.heatPortA, heatResistor_down_inner.heatPortB)
    annotation (Line(
      points={{0,12},{0,-12}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_down_inner.heatPortA, heatResistor_down_outer.heatPortB)
    annotation (Line(
      points={{0,-28},{0,-32}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_down_outer.heatPortA, heatPort_down_inner) annotation (
      Line(
      points={{0,-48},{0,-64}},
      color={204,0,0},
      thickness=0.5));
  connect(heatCapacitor_material_down.port, heatResistor_down_outer.heatPortB)
    annotation (Line(points={{-34,-28},{-34,-30},{0,-30},{0,-32}}, color={191,0,
          0}));
  connect(heatCapacitor_material_up.port, heatResistor_up_inner.heatPortB)
    annotation (Line(points={{-34,32},{-34,30},{0,30},{0,28}}, color={191,0,0}));
  connect(heatPort_internal_floor_heating, heatResistor_down_inner.heatPortB)
    annotation (Line(
      points={{24,0},{0,0},{0,-12}},
      color={204,0,0},
      thickness=0.5));


end PartialHorizontal4R2C;
