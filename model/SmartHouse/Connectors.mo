within SmartHouse;
package Connectors
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

  connector HouseHeatingInput
    "Heating Connections to the house"
    // Fluid Parameters
    parameter TILMedia.Liquid.Types.BaseLiquid liquidType=sim.liquidType1 "Liquid type" annotation (Dialog(tab="SIM",
          group="SIM"), choices(
        choice=sim.liquidType1 "Liquid 1 as defined in SIM",
        choice=sim.liquidType2 "Liquid 2 as defined in SIM",
        choice=sim.liquidType3 "Liquid 3 as defined in SIM"));

    outer TIL.SystemInformationManager sim "System information manager";

    Modelica.Blocks.Interfaces.RealOutput roomTemp[4](
      each unit="degK")
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
  end HouseHeatingInput;
end Connectors;
