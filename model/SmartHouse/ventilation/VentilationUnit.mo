within SmartHouse.ventilation;
model VentilationUnit "Ventilation for 4 rooms: one channel (heat recovery + controller + moisture) per room"
  parameter Modelica.Units.SI.Volume V_rooms[4] = {30.8, 52.8, 52.8, 105.6}
    "Room volumes. Order: bathroom, bedroom, kitchen, living room";

  VentilationChannel channel[4](V_room=V_rooms) "One air channel per room"
    annotation (Placement(transformation(extent={{-20,-20},{20,20}})));
  outer TIL.SystemInformationManager sim "Comes from the model around it";

  VentilationPorts ventilationPorts(
    supply(each gasType=sim.gasType1),
    exhaust(each gasType=sim.gasType1)) "Plug to the house"
    annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
  Modelica.Blocks.Interfaces.RealInput occupancy[4]
    "Persons per room. Order: bathroom, bedroom, kitchen, living room"
    annotation (Placement(transformation(extent={{-20,-20},{20,20}}, rotation=90, origin={-40,-120})));
  Modelica.Blocks.Interfaces.RealInput TOutdoor(unit="K") "Outdoor temperature"
    annotation (Placement(transformation(extent={{-20,-20},{20,20}}, rotation=90, origin={40,-120})));
equation
  for i in 1:4 loop
    connect(channel[i].gasPortSupply, ventilationPorts.supply[i]);
    connect(channel[i].gasPortExhaust, ventilationPorts.exhaust[i]);
    connect(occupancy[i], channel[i].Occupancy);
    connect(TOutdoor, channel[i].Toutdoor);
  end for;
  annotation (Icon(graphics={
        Rectangle(extent={{-100,100},{100,-100}}, lineColor={255,153,0},
          fillColor={255,255,255}, fillPattern=FillPattern.Solid),
        Text(extent={{-90,40},{90,-40}}, textString="Vent\nUnit", lineColor={255,153,0})}));
end VentilationUnit;
