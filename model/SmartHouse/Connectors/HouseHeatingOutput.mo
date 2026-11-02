within SmartHouse.Connectors;
connector HouseHeatingOutput "Heating Connections to the house"
  // Fluid Parameters

  parameter TILMedia.Liquid.Types.BaseLiquid liquidType
  "Liquid type supplied by enclosing model";

  Modelica.Blocks.Interfaces.RealInput roomTemp[4](
    each unit="K")
    "Order: bathroom, bedroom, kitchen, living room";
  TIL.Connectors.LiquidPort supplyP[4](
    each liquidType=liquidType)
    "Order: bathroom, bedroom, kitchen, living room";
  TIL.Connectors.LiquidPort returnP[4](
    each liquidType=liquidType)
    "Order: bathroom, bedroom, kitchen, living room";

annotation (
    Icon(graphics={
      Rectangle(
        extent={{-100,100},{100,-100}},
        lineColor={0,0,127},
        fillColor={215,215,255},
        fillPattern=FillPattern.Solid),
      Text(
        extent={{-90,50},{90,-50}},
        textString="heat",
        lineColor={0,0,127})}));
end HouseHeatingOutput;
