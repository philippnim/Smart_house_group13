within SmartHouse;
model HouseVentilation
  extends House(
    Kitchen(
      phiInitial=40,
      useVentilation=true,
      room_volume(fixedInitialPressure=false)),
    bathroom(
      phiInitial=40,
      useVentilation=true,
      room_volume(fixedInitialPressure=false)),
    Bedroom(
      phiInitial=40,
      useVentilation=true,
      room_volume(fixedInitialPressure=false)),
    LivingRoom(
      phiInitial=40,
      useVentilation=true,
      room_volume(fixedInitialPressure=false)),
    Garage(
      useVentilation=true,
      room_volume(fixedInitialPressure=false)),
    Sauna(
      useVentilation=true));

  ventilation.VentilationPorts ventilationPorts(
    supply(each gasType=gasType),
    exhaust(each gasType=gasType))
    annotation (Placement(transformation(
      extent={{200,-200},{220,-180}}), iconTransformation(extent={{-10,-110},
      {10,-90}})));

equation
  // Supply connections (1: Sauna, 2: Bathroom, 3: Bedroom, 4: Kitchen, 5: LivingRoom, 6: Garage)
  connect(Sauna.gasPortA, ventilationPorts.supply[1]);
  connect(bathroom.gasPortA, ventilationPorts.supply[2]);
  connect(Bedroom.gasPortA, ventilationPorts.supply[3]);
  connect(Kitchen.gasPortA, ventilationPorts.supply[4]);
  connect(LivingRoom.gasPortA, ventilationPorts.supply[5]);
  connect(Garage.gasPortA, ventilationPorts.supply[6]);

  // Exhaust connections (1: Sauna, 2: Bathroom, 3: Bedroom, 4: Kitchen, 5: LivingRoom, 6: Garage)
  connect(Sauna.gasPortB, ventilationPorts.exhaust[1]);
  connect(bathroom.gasPortB, ventilationPorts.exhaust[2]);
  connect(Bedroom.gasPortB, ventilationPorts.exhaust[3]);
  connect(Kitchen.gasPortB, ventilationPorts.exhaust[4]);
  connect(LivingRoom.gasPortB, ventilationPorts.exhaust[5]);
  connect(Garage.gasPortB, ventilationPorts.exhaust[6]);

end HouseVentilation;
