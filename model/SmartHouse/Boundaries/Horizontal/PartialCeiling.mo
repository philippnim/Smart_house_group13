within SmartHouse.Boundaries.Horizontal;
partial model PartialCeiling
  "Generic ceiling model that can be used either between storeys or as a roof using a two material logic."
  extends PartialHorizontal4R2C;
  import SI = Modelica.Units.SI;

  // alpha up and down
  parameter SI.CoefficientOfHeatTransfer alpha_up "Heat transfer coefficient top";
  parameter SI.CoefficientOfHeatTransfer alpha_down "Heat transfer coefficient bottom";

  // Components

  TIL.OtherComponents.Thermal.HeatResistor heatResistor(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConvection,
    alpha=alpha_up,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    crossSection=A_floor) annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=90,
        origin={0,80})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor1(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConvection,
    alpha=alpha_down,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    crossSection=A_floor) annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=90,
        origin={0,-80})));

equation
  connect(heatResistor.heatPortA, heatPort_up_inner) annotation (Line(
      points={{0,72},{0,64}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor.heatPortB, heatPort_up) annotation (Line(
      points={{0,88},{0,96}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor1.heatPortA, heatPort_down) annotation (Line(
      points={{0,-88},{0,-96}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor1.heatPortB, heatPort_down_inner) annotation (Line(
      points={{0,-72},{0,-64}},
      color={204,0,0},
      thickness=0.5));
end PartialCeiling;
