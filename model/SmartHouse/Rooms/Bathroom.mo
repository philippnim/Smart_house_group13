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
  annotation (Icon(graphics={Bitmap(
          extent={{-100,-100},{100,100}},
    fileName="modelica://SmartHouse/Images/bathroom.png"),
    Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Bathroom;
