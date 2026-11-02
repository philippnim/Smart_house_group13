within SmartHouse.Connectors;
connector HouseInputs
  "Schedules and environmental conditions supplied to the house"

  Modelica.Blocks.Interfaces.RealInput occupancy[6](
    each unit="1",
    each min=0)
    "Order: sauna, bathroom, bedroom, kitchen, living room, garage";

  Modelica.Blocks.Interfaces.RealInput P_el[5](
    each unit="W")
    "Order: bathroom, bedroom, kitchen, living room, garage";

  Modelica.Blocks.Interfaces.RealInput TOutdoor(
    unit="K",
    displayUnit="degC");

  Modelica.Blocks.Interfaces.RealInput TGround(
    unit="K",
    displayUnit="degC");

  Modelica.Blocks.Interfaces.BooleanInput saunaOn;

  annotation (
    Icon(graphics={
      Rectangle(
        extent={{-100,100},{100,-100}},
        lineColor={0,0,127},
        fillColor={215,215,255},
        fillPattern=FillPattern.Solid),
      Text(
        extent={{-90,50},{90,-50}},
        textString="data",
        lineColor={0,0,127})}));
end HouseInputs;
