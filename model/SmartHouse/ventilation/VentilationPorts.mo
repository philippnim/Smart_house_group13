within SmartHouse.ventilation;
connector VentilationPorts
  "Air connections between the ventilation unit and the house"
  // gasType is set by the model that uses the plug, e.g. ventilationPorts(supply(each gasType=sim.gasType1), ...)
  TIL.Connectors.GasPort supply[6]
    "Fresh air into the rooms. Order: 1 Sauna, 2 Bathroom, 3 Bedroom, 4 Kitchen, 5 Living room, 6 Garage";
  TIL.Connectors.GasPort exhaust[6]
    "Used air out of the rooms. Order: 1 Sauna, 2 Bathroom, 3 Bedroom, 4 Kitchen, 5 Living room, 6 Garage";

  annotation (
    Icon(graphics={
      Rectangle(
        extent={{-100,100},{100,-100}},
        lineColor={255,153,0},
        fillColor={255,230,200},
        fillPattern=FillPattern.Solid),
      Text(
        extent={{-90,50},{90,-50}},
        textString="air",
        lineColor={255,153,0})}));
end VentilationPorts;
