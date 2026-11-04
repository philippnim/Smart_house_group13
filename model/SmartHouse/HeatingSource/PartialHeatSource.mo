within SmartHouse.HeatingSource;
partial model PartialHeatSource
  "Base model defining a common interface for heat sources"

  // Fluid parameters
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType = sim.liquidType1
    "Liquid type"
    annotation (
      Dialog(tab="SIM", group="SIM"),
      choices(
        choice=sim.liquidType1 "Liquid 1 as defined in SIM",
        choice=sim.liquidType2 "Liquid 2 as defined in SIM",
        choice=sim.liquidType3 "Liquid 3 as defined in SIM"));

  outer TIL.SystemInformationManager sim
    "System information manager";

  // Water connections
  TIL.Connectors.LiquidPort WaterInput(
    liquidType=liquidType)
    "Return water"
    annotation (Placement(
      transformation(extent={{-210,-10},{-190,10}}), iconTransformation(
          extent={{-210,-10},{-190,10}})));

  TIL.Connectors.LiquidPort WaterOutput(
    liquidType=liquidType)
    "Supply water"
    annotation (Placement(
      transformation(extent={{190,-10},{210,10}}), iconTransformation(extent=
            {{190,-10},{210,10}})));

  Modelica.Blocks.Interfaces.RealOutput P_el
    "Electrical power consumption"
    annotation (Placement(
      transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-50,190})));
  Modelica.Blocks.Interfaces.RealOutput HeatFlow
    "Heat supplied to the heating system"
    annotation (Placement(
      transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={50,190})));
  Modelica.Blocks.Interfaces.BooleanInput EnableHeatSource
    "Enable heat source operation" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={0,-200}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={0,-160})));
  Modelica.Blocks.Interfaces.RealInput TSupplySet
    "Supply water temperature setpoint in K"
                                      annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={132,-200}),  iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
      origin={80,-170})));
                           annotation (Placement(
      transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={0,-198}),
      iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={10,-110})),
    Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,-180},{200,
            180}})),
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-200,-180},{
            200,180}})));

  // Outputs

end PartialHeatSource;
