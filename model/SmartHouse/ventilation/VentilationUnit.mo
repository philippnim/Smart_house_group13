within SmartHouse.ventilation;
model VentilationUnit "Ventilation for 4 rooms: one channel (heat recovery + controller + moisture) per room.
And Infiltration to the outside. Additionally also handles air exchange between the rooms."
  import SI = Modelica.Units.SI;

  // Room order:
  // 1 Sauna
  // 2 Bathroom
  // 3 Bedroom
  // 4 Kitchen
  // 5 Living room
  // 6 Garage

  // All 6 room volumes (1 Sauna, 2 Bathroom, 3 Bedroom, 4 Kitchen, 5 Living room, 6 Garage)
  parameter Modelica.Units.SI.Volume V_rooms[6] = {22.0, 30.8, 52.8, 52.8, 105.6, 33.0}
    "Room volumes for all 6 rooms"
                                  annotation(Dialog(tab="General"));


  parameter Boolean useAirNetwork = true
    "Enable/disable airExchangeNetwork"
    annotation(Dialog(tab="General"),Evaluate=true);

  // Volumetric exchange rate between the different rooms (open doors etc.)
  parameter Integer doorConnections[:,3] = [
    1, 2, 15;
    2, 5, 20;
    3, 5, 20;
    4, 5, 80]
    "Room A, Room B, total exchange in m3/h"
    annotation(Dialog(tab="Air Network", enable=useAirNetwork));

  parameter Real ACH_inf[6](each unit="1/h") = {
    0.05,
    0.05,
    0.05,
    0.07,
    0.05,
    0.25}
    "Natural infiltration air change rate with the outside air"
    annotation(Dialog(tab="Air Network", enable=useAirNetwork));

  // Air exchange
  parameter SI.Pressure dp_nominal_door
    annotation(Dialog(tab="Air Network", enable=useAirNetwork));
  parameter SI.MassFlowRate mdot_nominal_door
    annotation(Dialog(tab="Air Network", enable=useAirNetwork));
  parameter SI.Pressure dp_nominal_inf
    annotation(Dialog(tab="Air Network", enable=useAirNetwork));
  parameter SI.MassFlowRate mdot_nominal_inf
    annotation(Dialog(tab="Air Network", enable=useAirNetwork));

  // Outdoor humidity and pressure for infiltration
  parameter Real phi_outdoor(min=0, max=100) = 50
    "Outdoor relative humidity"
    annotation(Dialog(tab="Air Network", enable=useAirNetwork));
  parameter Modelica.Units.SI.AbsolutePressure p_outdoor = 101325
    "Outdoor pressure"
    annotation(Dialog(tab="Air Network", enable=useAirNetwork));




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





  // Pass only rooms 2..5 to the 4 active ventilation channels
  VentilationChannel channel[4](V_room=V_rooms[2:5]) "One air channel per ventilated room"
    annotation (Placement(transformation(extent={{-20,-20},{20,20}})));

  // Air exchange network for all 6 rooms (doors + infiltration)
  AirExchangeNetwork airExchangeNetwork(
    gasType=sim.gasType1,
    V_rooms=V_rooms,
    doorConnections=doorConnections,
    ACH_inf=ACH_inf,
    dp_nominal_door=dp_nominal_door,
    mdot_nominal_door=mdot_nominal_door,
    dp_nominal_inf=dp_nominal_inf,
    mdot_nominal_inf=mdot_nominal_inf) if useAirNetwork
    annotation (Placement(transformation(extent={{-20,30},{20,70}})));

  Modelica.Blocks.Sources.Constant constPhi(k=phi_outdoor) if useAirNetwork;
  Modelica.Blocks.Sources.Constant constP(k=p_outdoor) if useAirNetwork;

equation

  if useAirNetwork then
    // Outdoor signals for AirExchangeNetwork
    connect(TOutdoor, airExchangeNetwork.T_outdoor);
    connect(constPhi.y, airExchangeNetwork.phi_outdoor);
    connect(constP.y, airExchangeNetwork.p_outdoor);

    // Connect all 6 rooms to AirExchangeNetwork (Sauna=1 .. Garage=6)
    for j in 1:6 loop
      connect(airExchangeNetwork.roomIn[j], ventilationPorts.supply[j]);
      connect(airExchangeNetwork.roomOut[j], ventilationPorts.exhaust[j]);
    end for;
  else
    // Seal unused ports (Sauna=1, Garage=6) with zero mass flow to avoid circular pressure equalities
    for j in {1, 6} loop
      ventilationPorts.supply[j].m_flow = 0;
      ventilationPorts.supply[j].h_outflow = 0;
      ventilationPorts.supply[j].xi_outflow = zeros(size(ventilationPorts.supply[j].xi_outflow, 1));

      ventilationPorts.exhaust[j].m_flow = 0;
      ventilationPorts.exhaust[j].h_outflow = 0;
      ventilationPorts.exhaust[j].xi_outflow = zeros(size(ventilationPorts.exhaust[j].xi_outflow, 1));
    end for;
  end if;

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
