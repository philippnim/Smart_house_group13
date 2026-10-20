within SmartHouse.Boundaries.Walls;
partial model PartialWall
  "partial model of a wall handling the heat transfer between air to material"
  import SI = Modelica.Units.SI;

  // Geometry parameter
  parameter SI.Length lengthWall "length of the wall" annotation(Dialog(group="Geometry"));
  parameter SI.Length heightWall "height of the wall" annotation(Dialog(group="Geometry"));

  // Gas type selection
  parameter TILMedia.Gas.Types.BaseGas gasType=sim.gasType1 "Gas type" annotation (Dialog(tab="SIM", group="SIM"));

  // Environment parameters for A (outside) and B (inside)
  parameter TILMedia.Internals.Units.RelativeHumidity phi_A = 50 "Relative humidity at port A" annotation(Dialog(group="Environment"));
  parameter TILMedia.Internals.Units.RelativeHumidity phi_B = 50 "Relative humidity at port B" annotation(Dialog(group="Environment"));
  parameter SI.AbsolutePressure p_A = 101300 "Pressure at port A" annotation(Dialog(group="Environment"));
  parameter SI.AbsolutePressure p_B = 101300 "Pressure at port B" annotation(Dialog(group="Environment"));

  // Required SIM for gasType reference
  outer TIL.SystemInformationManager sim;



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



  TIL.OtherComponents.Thermal.ConvectiveResistor convectiveResistor_A(
    gasType=gasType,
    use_ambientPressureInput=false,
    ambientPressureFixed=p_A,
    ambientTemperatureReference=TIL.Internals.AmbientTemperatureReference.heatPortA,
    use_gasCompositionInput=false,
    phiFixed=phi_A,
    redeclare model HeatTransferModel =
        TIL.OtherComponents.Thermal.HeatTransfer.PlateVerticalFreeConvection (
          length=heightWall, width=lengthWall))
    annotation (Placement(transformation(extent={{-88,-2},{-72,2}})));

  TIL.OtherComponents.Thermal.ConvectiveResistor convectiveResistor_B(
    gasType=gasType,
    use_ambientPressureInput=false,
    ambientPressureFixed=p_B,
    ambientTemperatureReference=TIL.Internals.AmbientTemperatureReference.heatPortB,
    use_gasCompositionInput=false,
    phiFixed=phi_B,
    redeclare model HeatTransferModel =
        TIL.OtherComponents.Thermal.HeatTransfer.PlateVerticalFreeConvection (
          length=heightWall, width=lengthWall))
    annotation (Placement(transformation(extent={{72,-2},{88,2}})));


equation
  connect(convectiveResistor_A.heatPortB, heatPort_A_surface) annotation (Line(
      points={{-72,0},{-60,0}},
      color={204,0,0},
      thickness=0.5));
  connect(convectiveResistor_A.heatPortA, heatPort_A_air) annotation (Line(
      points={{-88,0},{-100,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_B_air, convectiveResistor_B.heatPortB) annotation (Line(
      points={{100,0},{88,0}},
      color={204,0,0},
      thickness=0.5));
  connect(convectiveResistor_B.heatPortA, heatPort_B_surface) annotation (Line(
      points={{72,0},{60,0}},
      color={204,0,0},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
      coordinateSystem(preserveAspectRatio=false)));
end PartialWall;
