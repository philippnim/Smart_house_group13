within SmartHouse.Boundaries.Horizontal;
model FloorHeating
  "tbd"
  import SI = Modelica.Units.SI;


  // Parameters (Standard Parameter need to be checked!!
  parameter SI.Length pipeLength "Pipe length" annotation(Dialog(group="Geometry"));
  parameter SI.Diameter innerDiameter "Pipe inner diameter" annotation(Dialog(group="Geometry"));
  parameter SI.Length wallThickness "Pipe wall thickness" annotation(Dialog(group="Geometry"));
  parameter Integer nbTubes "Number of parallel tubes" annotation(Dialog(group="Geometry"));
  parameter Integer nbCells "Number of tube cells" annotation(Dialog(group="Geometry"));
  parameter Real alpha "Constant heat transfer coefficient" annotation(Dialog(group="Heat Transfer"));
  parameter SI.Temperature T_init "Initial Temperature of Wall and Liquid" annotation(Dialog(group="Heat Transfer"));


  // Fluid Parameters
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType=sim.liquidType1 "Liquid type" annotation (Dialog(tab="SIM",
        group="SIM"), choices(
      choice=sim.liquidType1 "Liquid 1 as defined in SIM",
      choice=sim.liquidType2 "Liquid 2 as defined in SIM",
      choice=sim.liquidType3 "Liquid 3 as defined in SIM"));

  outer TIL.SystemInformationManager sim "System information manager";


  // Components
  TIL.Connectors.HeatPort heatPort_floorHeating
    annotation (Placement(transformation(extent={{-106,-10},{-86,10}})));



  TIL.LiquidComponents.Tubes.Tube floorHeatingTube(
    liquidType=liquidType,
    tubeGeometry(
      innerDiameter=innerDiameter,
      wallThickness=wallThickness,
      length=pipeLength,
      nParallelTubes=nbTubes,
      crossSectionType=TIL.Internals.CrossSectionType.Circular),
    nCells=nbCells,
    redeclare model TubeSideHeatTransferModel =
        TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
        (constantAlpha=alpha),
    redeclare model WallHeatConductionModel =
        TIL.LiquidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
    redeclare model PressureDropModel =
        TIL.LiquidComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop,
    redeclare model WallMaterial = TILMedia.Solid.Types.TILMedia_Aluminum,
    enableHeatPorts=true,
    initLiquid="constantTemperature",
    TInitialLiquid=T_init,
    TInitialWall=T_init) annotation (Placement(transformation(
        extent={{-16,4},{16,-4}},
        rotation=270,
        origin={8,0})));
  TIL.Connectors.LiquidPort liquidPort_A(liquidType=liquidType)
    annotation (Placement(transformation(extent={{86,70},{106,90}})));
  TIL.Connectors.LiquidPort liquidPort_B(liquidType=liquidType)
    annotation (Placement(transformation(extent={{86,-90},{106,-70}})));
equation


  // Connect all pipe cells to the single thermal floor port
  for i in 1:size(floorHeatingTube.heatPort, 1) loop
    connect(floorHeatingTube.heatPort[i], heatPort_floorHeating);
  end for;

  connect(floorHeatingTube.portB, liquidPort_B) annotation (Line(
      points={{8,-16},{8,-80},{96,-80}},
      color={0,170,238},
      thickness=0.5));
  connect(liquidPort_A, floorHeatingTube.portA) annotation (Line(
      points={{96,80},{8,80},{8,16}},
      color={0,170,238},
      thickness=0.5));


  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end FloorHeating;
