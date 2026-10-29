within SmartHouse.Boundaries.Horizontal;
partial model PartialHorizontal
  "Partial model of Horizontal Elements"
  import SI = Modelica.Units.SI;

  // Geometry parameters (need to be given)
  parameter SI.Length length "length of the object" annotation(Dialog(group="Geometry"));
  parameter SI.Length width "width of object" annotation(Dialog(group="Geometry"));


  final parameter SI.Area A_floor = length*width;


  // Components
  TIL.Connectors.HeatPort heatPort_down
    annotation (Placement(transformation(extent={{-10,-106},{10,-86}})));
  TIL.Connectors.HeatPort heatPort_up
    annotation (Placement(transformation(extent={{-10,86},{10,106}})));



  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end PartialHorizontal;
