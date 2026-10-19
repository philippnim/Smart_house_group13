within SmartHouse;
model Wall
  import SI = Modelica.Units.SI;
  parameter SI.Area Area = 42 "Wall Area";
  parameter SI.CoefficientOfHeatTransfer U = 0.18 "Coefficient of heat transfer";
  parameter SI.ThermalConductance UA = Area*U "Total thermal conductance of the wall";
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thermalConductor(G=UA)
    annotation (


                Placement(transformation(extent={{-8,-10},{12,10}})));
  TIL.Connectors.HeatPort heatPortA
    annotation (Placement(transformation(extent={{-106,-10},{-86,10}})));
  TIL.Connectors.HeatPort heatPortB
    annotation (Placement(transformation(extent={{86,-10},{106,10}})));
equation
  connect(heatPortA, thermalConductor.port_a) annotation (Line(
      points={{-96,0},{-8,0}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPortB, thermalConductor.port_b) annotation (Line(
      points={{96,0},{12,0}},
      color={204,0,0},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Wall;
