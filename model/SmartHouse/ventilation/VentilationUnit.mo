within SmartHouse.ventilation;
model VentilationUnit "Ventilation for 4 rooms: one channel (heat recovery + controller + moisture) per room.
And Infiltration to the outside. Additionally also handles air exchange between the rooms."

  // Room order:
  // 1 Sauna
  // 2 Bathroom
  // 3 Bedroom
  // 4 Kitchen
  // 5 Living room
  // 6 Garage

  // Volumetric exchange rate between the different rooms (open doors etc.)
  parameter Integer doorConnections[:,3] = [
    1, 2, 15;
    2, 5, 20;
    3, 5, 20;
    4, 5, 80]
    "Room A, Room B, total exchange in m3/h";

parameter Real ACH_inf[6](each unit="1/h") = {
  0.05,
  0.05,
  0.05,
  0.07,
  0.05,
  0.25}
  "Natural infiltration air change rate with the outside air";


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

  // All 6 room volumes (1 Sauna, 2 Bathroom, 3 Bedroom, 4 Kitchen, 5 Living room, 6 Garage)
  parameter Modelica.Units.SI.Volume V_rooms[6] = {22.0, 30.8, 52.8, 52.8, 105.6, 33.0}
    "Room volumes for all 6 rooms";

  // Outdoor humidity and pressure for infiltration
  parameter Real phi_outdoor(min=0, max=1) = 0.5 "Outdoor relative humidity";
  parameter Modelica.Units.SI.AbsolutePressure p_outdoor = 101325 "Outdoor pressure";

  // Pass only rooms 2..5 to the 4 active ventilation channels
  VentilationChannel channel[4](V_room=V_rooms[2:5]) "One air channel per ventilated room"
    annotation (Placement(transformation(extent={{-20,-20},{20,20}})));

  // Air exchange network for all 6 rooms (doors + infiltration)
  AirExchangeNetwork airExchangeNetwork(
    gasType=sim.gasType1,
    V_rooms=V_rooms,
    doorConnections=doorConnections,
    ACH_inf=ACH_inf)
    annotation (Placement(transformation(extent={{-20,30},{20,70}})));

  Modelica.Blocks.Sources.Constant constPhi(k=phi_outdoor);
  Modelica.Blocks.Sources.Constant constP(k=p_outdoor);

equation
  // Outdoor signals for AirExchangeNetwork
  connect(TOutdoor, airExchangeNetwork.T_outdoor);
  connect(constPhi.y, airExchangeNetwork.phi_outdoor);
  connect(constP.y, airExchangeNetwork.p_outdoor);

  // Connect all 6 rooms to AirExchangeNetwork (Sauna=1 .. Garage=6)
  for j in 1:6 loop
    connect(airExchangeNetwork.roomIn[j], ventilationPorts.supply[j]);
    connect(airExchangeNetwork.roomOut[j], ventilationPorts.exhaust[j]);
  end for;

  // Connect the 4 active ventilation channels to rooms 2..5 (Bathroom .. LivingRoom)
  for i in 1:4 loop
    connect(channel[i].gasPortSupply, ventilationPorts.supply[i + 1]);
    connect(channel[i].gasPortExhaust, ventilationPorts.exhaust[i + 1]);
    connect(occupancy[i], channel[i].Occupancy);
    connect(TOutdoor, channel[i].Toutdoor);
  end for;



  annotation (Icon(graphics={
        Rectangle(extent={{-100,100},{100,-100}}, lineColor={255,153,0},
          fillColor={255,255,255}, fillPattern=FillPattern.Solid),
        Text(extent={{-90,40},{90,-40}}, textString="Vent\nUnit", lineColor={255,153,0})}));
end VentilationUnit;
