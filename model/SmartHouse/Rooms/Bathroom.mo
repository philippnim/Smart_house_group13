within SmartHouse.Rooms;
model Bathroom "simpler Batrhroom"
  extends PartialRoom;
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType=sim.liquidType1 "Liquid type" annotation (Dialog(tab="SIM",
        group="SIM"), choices(
      choice=sim.liquidType1 "Liquid 1 as defined in SIM",
      choice=sim.liquidType2 "Liquid 2 as defined in SIM",
      choice=sim.liquidType3 "Liquid 3 as defined in SIM"));
  TIL.Connectors.LiquidPort BWWVorlauf(liquidType=liquidType)
    annotation (Placement(transformation(extent={{90,20},{110,40}})));
  TIL.Connectors.LiquidPort BWWRuecklauf(liquidType=liquidType)
    annotation (Placement(transformation(extent={{90,-40},{110,-20}})));
  TIL.HeatExchangers.FinAndTube.GasLiquid.ParallelFlowHX parallelFlowHX(
    redeclare TIL.HeatExchangers.FinAndTube.Geometry.KKI001 hxGeometry(
      finnedTubeLength=1.5,
      nSerialTubes=10,
      serialTubeDistance=0.01,
      nParallelTubes=10,
      parallelTubeDistance=0.01,
      tubeWallThickness=0.001,
      nTubeSideParallelHydraulicFlows=10),
    nCells=5,
    redeclare model TubeSideHeatTransferModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.TubeSideHeatTransfer.ConstantAlpha
        (constantAlpha=5000),
    redeclare model TubeSidePressureDropModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.TubeSidePressureDrop.ZeroPressureDrop,
    redeclare model WallMaterial = TILMedia.Solid.Types.TILMedia_Copper,
    redeclare model WallHeatConductionModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.WallHeatTransfer.ConstantR
        (constantR=0),
    redeclare model FinMaterial = TILMedia.Solid.Types.TILMedia_Copper,
    redeclare model FinEfficiencyModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinEfficiency.ConstFinEfficiency,
    redeclare model FinSideHeatTransferModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSideHeatTransfer.ConstantAlpha
        (constantAlpha=5000),
    redeclare model FinSidePressureDropModel =
        TIL.HeatExchangers.FinAndTube.TransportPhenomena.FinSidePressureDrop.ZeroPressureDrop)
    annotation (Placement(transformation(
        extent={{-14,-14},{14,14}},
        rotation=270,
        origin={78,4})));
  TIL.GasComponents.Fans.SimpleFan simpleFan(presetVariableType="V_flow",
      V_flowFixed=0.6)
    annotation (Placement(transformation(extent={{64,-32},{80,-16}})));
equation
  connect(BWWRuecklauf, parallelFlowHX.portB_liq) annotation (Line(
      points={{100,-30},{86,-30},{86,-10}},
      color={0,170,238},
      thickness=0.5));
  connect(BWWVorlauf, parallelFlowHX.portA_liq) annotation (Line(
      points={{100,30},{86,30},{86,18}},
      color={0,170,238},
    thickness=0.5));
  annotation (Icon(graphics={Bitmap(
          extent={{-100,-100},{100,100}},
    fileName="modelica://SmartHouse/Images/bathroom.png"),
    Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Bathroom;
