within SmartHouse;
model HouseVentilation
  extends House(
    Kitchen(
      phiInitial=40,
            useVentilation=true,room_volume(fixedInitialPressure=false)),
    BathroomPlaceholder(
      phiInitial=40,    useVentilation=true,room_volume(fixedInitialPressure=false)),
    Bedroom(
      phiInitial=40,
            useVentilation=true,room_volume(fixedInitialPressure=false)),
    LivingRoom(
      phiInitial=40,
               useVentilation=true,room_volume(fixedInitialPressure=false)));
ventilation.VentilationPorts ventilationPorts(supply(each gasType=gasType),
      exhaust(each gasType=gasType)) annotation (Placement(transformation(
          extent={{200,-200},{220,-180}}), iconTransformation(extent={{-10,-110},
            {10,-90}})));
equation
  connect(LivingRoom.gasPortA, ventilationPorts.supply[4]) annotation (Line(
      points={{31.6,-24},{210,-24},{210,-154},{210.05,-154},{210.05,-189.95}},
      color={255,153,0},
      thickness=0.5));
  connect(Kitchen.gasPortA, ventilationPorts.supply[3]) annotation (Line(
      points={{-120.4,-24},{220,-24},{220,-96},{210.05,-96},{210.05,-189.95}},
      color={255,153,0},
      thickness=0.5));
  connect(BathroomPlaceholder.gasPortA, ventilationPorts.supply[1]) annotation
    (Line(
      points={{-20.4,76},{210.05,76},{210.05,-189.95}},
      color={255,153,0},
      thickness=0.5));
  connect(Bedroom.gasPortA, ventilationPorts.supply[2]) annotation (Line(
      points={{79.6,76},{210.05,76},{210.05,-189.95}},
      color={255,153,0},
      thickness=0.5));
  connect(BathroomPlaceholder.gasPortB, ventilationPorts.exhaust[1])
    annotation (Line(
      points={{-20.4,64},{210,64},{210,20},{210.05,20},{210.05,-189.95}},
      color={255,153,0},
      thickness=0.5));
  connect(Bedroom.gasPortB, ventilationPorts.exhaust[2]) annotation (Line(
      points={{79.6,64},{210,64},{210,44},{210.05,44},{210.05,-189.95}},
      color={255,153,0},
      thickness=0.5));
  connect(Kitchen.gasPortB, ventilationPorts.exhaust[3]) annotation (Line(
      points={{-120.4,-36},{210,-36},{210,-82},{210.05,-82},{210.05,-189.95}},
      color={255,153,0},
      thickness=0.5));
  connect(LivingRoom.gasPortB, ventilationPorts.exhaust[4]) annotation (Line(
      points={{31.6,-36},{210,-36},{210,-54},{210.05,-54},{210.05,-189.95}},
      color={255,153,0},
      thickness=0.5));
end HouseVentilation;
