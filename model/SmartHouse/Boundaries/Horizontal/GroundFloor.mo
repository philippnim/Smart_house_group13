within SmartHouse.Boundaries.Horizontal;
model GroundFloor
  "Groundfloor based on the 4R2C Model. Convection heating at the top layer, conduction to earth at bottom layer. 
Optional Floor heating between the two layers."
  extends PartialHorizontal4R2C;
  import SI = Modelica.Units.SI;

  //alpha values
  parameter SI.CoefficientOfHeatTransfer alpha_up "Heat transfer coefficient for floor-air";

  // Heating parameters (Floor Heating)
  parameter Boolean enableFloorHeating = true "Is a floor heating connection available" annotation(Dialog(group="Floor Heating"));

  // Parameters (Standard Parameter should be added!!
  parameter SI.Length pipeLength "Pipe length" annotation(Dialog(enable=enableFloorHeating, group="Floor Heating"));
  parameter SI.Diameter innerDiameter "Pipe inner diameter" annotation(Dialog(enable=enableFloorHeating, group="Floor Heating"));
  parameter SI.Length wallThickness "Pipe wall thickness" annotation(Dialog(enable=enableFloorHeating, group="Floor Heating"));
  parameter Integer nbTubes "Number of parallel tubes" annotation(Dialog(enable=enableFloorHeating, group="Floor Heating"));
  parameter Integer nbCells "Number of tube cells" annotation(Dialog(enable=enableFloorHeating, group="Floor Heating"));
  parameter Real alpha_pipe "Constant heat transfer coefficient" annotation(Dialog(enable=enableFloorHeating, group="Floor Heating"));
  parameter SI.Temperature T_init "Initial Temperature of Wall and Liquid" annotation(Dialog(enable=enableFloorHeating, group="Floor Heating"));

  // Fluid Parameters
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType=sim.liquidType1 "Liquid type" annotation (Dialog(tab="SIM",
        group="SIM"), choices(
      choice=sim.liquidType1 "Liquid 1 as defined in SIM",
      choice=sim.liquidType2 "Liquid 2 as defined in SIM",
      choice=sim.liquidType3 "Liquid 3 as defined in SIM"));

  outer TIL.SystemInformationManager sim "System information manager";

  // Components

  // Convective Resistance

  FloorHeating integratedFloorHeating(
    pipeLength=pipeLength,
    innerDiameter=innerDiameter,
    wallThickness=wallThickness,
    nbTubes=nbTubes,
    nbCells=nbCells,
    alpha=alpha_pipe,
    T_init=T_init,
    liquidType=liquidType)
                 if enableFloorHeating
    annotation (Placement(transformation(extent={{40,-10},{60,10}})));


  TIL.Connectors.LiquidPort liquidPort_A(liquidType=liquidType)
                                         if enableFloorHeating
    annotation (Placement(transformation(extent={{86,30},{106,50}})));
  TIL.Connectors.LiquidPort liquidPort_B(liquidType=liquidType)
                                         if enableFloorHeating
    annotation (Placement(transformation(extent={{86,-50},{106,-30}})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_up_convection(
    thermalResistanceType=TIL.OtherComponents.Thermal.Internals.ThermalResistanceType.ThermalConvection,
    alpha=alpha_up,
    geometryType=TIL.OtherComponents.Thermal.Internals.GeometryType.Plate,
    crossSection=A_floor) annotation (Placement(transformation(
        extent={{-8,-2},{8,2}},
        rotation=90,
      origin={0,80})));

equation
  connect(heatPort_down_inner, heatPort_down) annotation (Line(
      points={{0,-64},{0,-96}},
      color={204,0,0},
      thickness=0.5));

  if enableFloorHeating then
    connect(integratedFloorHeating.heatPort_floorHeating,
      heatPort_internal_floor_heating) annotation (Line(
        points={{40.4,0},{24,0}},
        color={204,0,0},
        thickness=0.5));
    connect(integratedFloorHeating.liquidPort_B, liquidPort_B) annotation (Line(
        points={{59.6,-8},{80,-8},{80,-40},{96,-40}},
        color={0,170,238},
        thickness=0.5));
    connect(integratedFloorHeating.liquidPort_A, liquidPort_A) annotation (Line(
        points={{59.6,8},{82,8},{82,40},{96,40}},
        color={0,170,238},
      thickness=0.5));

  end if;
  connect(heatPort_up_inner, heatResistor_up_convection.heatPortA) annotation (
      Line(
      points={{0,64},{0,72}},
      color={204,0,0},
      thickness=0.5));
  connect(heatPort_up, heatResistor_up_convection.heatPortB) annotation (Line(
      points={{0,96},{0,88}},
      color={204,0,0},
    thickness=0.5));


  // Select icon dynamically based on heating status
  annotation (Icon(graphics={Bitmap(extent={{-74,-72},{74,82}}, fileName=DynamicSelect("modelica://SmartHouse/Images/unheatedFloor.png", if enableFloorHeating then "modelica://SmartHouse/Images/floorHeating.png" else "modelica://SmartHouse/Images/unheatedFloor.png")),
    Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}));

end GroundFloor;
