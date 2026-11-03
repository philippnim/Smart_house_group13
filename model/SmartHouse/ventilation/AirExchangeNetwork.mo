within SmartHouse.ventilation;
model AirExchangeNetwork
  "Infiltration and bidirectional room air mixing"
  import SI = Modelica.Units.SI;


  outer TIL.SystemInformationManager sim;

  parameter TILMedia.Gas.Types.BaseGas gasType =
    sim.gasType1;

  parameter SI.Volume V_rooms[6];

  parameter Integer doorConnections[:,3]
    "Room A, Room B, total exchange in m3/h";

  final parameter Integer nDoors = size(doorConnections, 1);

  parameter Real ACH_inf[6](each unit="1/h");

  // Nominal pressure drop and mass flow rate for indoor and outdoor connections
  parameter SI.Pressure dp_nominal_door = 10 "Nominal pressure drop for doors";
  parameter SI.MassFlowRate mdot_nominal_door = 0.1 "Nominal mass flow rate for doors";

  parameter SI.Pressure dp_nominal_inf = 10 "Nominal pressure drop for infiltration";
  parameter SI.MassFlowRate mdot_nominal_inf = 0.01 "Nominal mass flow rate for infiltration";

   // --------------------------------------------------
  // Outdoor boundaries
  // --------------------------------------------------

  TIL.GasComponents.Boundaries.Boundary outdoorSource(
    gasType=gasType,
    streamVariablesInputType="T",
    streamVariablesInputTypeConcentration="phi",
    use_temperatureInput=true,
    use_relativeHumidityInput=true,
    boundaryType="p",
    use_pressureInput=true);

  TIL.GasComponents.Boundaries.Boundary outdoorSink(
    gasType=gasType,
    streamVariablesInputType="T",
    streamVariablesInputTypeConcentration="phi",
    use_temperatureInput=true,
    use_relativeHumidityInput=true,
    boundaryType="p",
    use_pressureInput=true);


  // --------------------------------------------------
  // Ideal air exchange through internal doors (half goes in each direction)
  // --------------------------------------------------
  IdealAirExchange door[nDoors](
    each gasType=gasType,
    each dp_nominal=dp_nominal_door,
    each mdot_nominal=mdot_nominal_door,
    airExchange={
      doorConnections[k,3]/(2*3600)
      for k in 1:nDoors});

  // --------------------------------------------------
  // Ideal air exchange with outdoors
  // --------------------------------------------------
  IdealAirExchange infiltration[6](
    each gasType=gasType,
    each dp_nominal=dp_nominal_inf,
    each mdot_nominal=mdot_nominal_inf,
    airExchange={
      ACH_inf[i]*V_rooms[i]/3600
      for i in 1:6});

  // --------------------------------------------------
  // Room gas connectors
  // --------------------------------------------------

  TIL.Connectors.GasPort roomIn[6](
    each gasType=gasType)
    "Air entering rooms"
    annotation (Placement(transformation(
      extent={{90,40},{110,60}})));

  TIL.Connectors.GasPort roomOut[6](
    each gasType=gasType)
    "Air extracted from rooms"
    annotation (Placement(transformation(
      extent={{90,-60},{110,-40}})));


  Modelica.Blocks.Interfaces.RealInput T_outdoor annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={-50,100})));
  Modelica.Blocks.Interfaces.RealInput phi_outdoor annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={-10,100})));
  Modelica.Blocks.Interfaces.RealInput p_outdoor annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={30,100})));
equation

  // --------------------------------------------------
  // Door connections
  // --------------------------------------------------

  for k in 1:nDoors loop

    // Extract air from room A
    connect(door[k].gasPort_A1, roomOut[doorConnections[k,1]]);

    // Supply air to room A
    connect(door[k].gasPort_A2, roomIn[doorConnections[k,1]]);

    // Extract air from room B
    connect(door[k].gasPort_B1, roomOut[doorConnections[k,2]]);

    // Supply air to room B
    connect(door[k].gasPort_B2, roomIn[doorConnections[k,2]]);

  end for;

  // --------------------------------------------------
  // Infiltration for all six rooms
  // --------------------------------------------------

  for i in 1:6 loop

    // Room side
    connect(infiltration[i].gasPort_A1, roomOut[i]);
    connect(infiltration[i].gasPort_A2, roomIn[i]);

    // Outdoor side
    connect(infiltration[i].gasPort_B1, outdoorSource.port);
    connect(infiltration[i].gasPort_B2, outdoorSink.port);

  end for;

  // --------------------------------------------------
  // Outdoor signal connections
  // --------------------------------------------------

  // Connect outdoor temperature signal
  connect(T_outdoor, outdoorSource.T_in);
  connect(T_outdoor, outdoorSink.T_in);

  // Connect outdoor relative humidity signal
  connect(phi_outdoor, outdoorSource.phi_in);
  connect(phi_outdoor, outdoorSink.phi_in);

  // Connect outdoor pressure signal
  connect(p_outdoor, outdoorSource.p_in);
  connect(p_outdoor, outdoorSink.p_in);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end AirExchangeNetwork;
