within SmartHouse.Rooms;
model Bathroom "simpler Batrhroom"
  extends PartialRoom(room_volume(nPorts=5));
  parameter TILMedia.Liquid.Types.BaseLiquid liquidType=sim.liquidType1 "Liquid type" annotation (Dialog(tab="SIM",
        group="SIM"), choices(
      choice=sim.liquidType1 "Liquid 1 as defined in SIM",
      choice=sim.liquidType2 "Liquid 2 as defined in SIM",
      choice=sim.liquidType3 "Liquid 3 as defined in SIM"));
  TIL.Connectors.LiquidPort BWWVorlauf(liquidType=liquidType)
    annotation (Placement(transformation(extent={{90,20},{110,40}})));
  TIL.Connectors.LiquidPort BWWRuecklauf(liquidType=liquidType)
    annotation (Placement(transformation(extent={{90,-40},{110,-20}})));
  ShowerSimpleModel showerSimpleModel(
    p_ColdWater=200000,
    T_coldWater=283.15,
    T_shower=313.15,
    Vdot_shower=0.0001,
    k_Temp=0.1,
    Ti_Temp=5,
    k_Vdot=1,
    Ti_Vdot=0.5)
    annotation (Placement(transformation(extent={{58,-4},{78,16}})));
  TIL.LiquidComponents.Valves.OrificeValve valve(use_effectiveFlowAreaInput=
        true) annotation (Placement(transformation(extent={{72,32},{88,40}})));
  Modelica.Blocks.Interfaces.RealInput showercontroll annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={66,108})));
equation
  connect(BWWRuecklauf, showerSimpleModel.BWWRuecklauf) annotation (Line(
      points={{100,-30},{84,-30},{84,-2},{78,-2}},
      color={0,170,238},
      thickness=0.5));
  connect(showerSimpleModel.ShowerAirIn, room_volume.portArray[4]) annotation (
      Line(
      points={{58,14},{52,14},{52,4},{42.65,4},{42.65,0}},
      color={255,153,0},
      thickness=0.5));
  connect(showerSimpleModel.ShowerAirOut, room_volume.portArray[5]) annotation
    (Line(
      points={{58,-2},{50,-2},{50,0},{42.65,0}},
      color={255,153,0},
      thickness=0.5));
  connect(BWWVorlauf, valve.portB) annotation (Line(
      points={{100,30},{94,30},{94,34},{90,34},{90,36},{88,36}},
      color={0,170,238},
      thickness=0.5));
  connect(valve.portA, showerSimpleModel.BWWVorlauf) annotation (Line(
      points={{72,36},{66,36},{66,20},{84,20},{84,14},{78.2,14}},
      color={0,170,238},
      thickness=0.5));
  connect(showercontroll, valve.effectiveFlowArea_in) annotation (Line(points={
          {66,108},{74,108},{74,41},{80,41}}, color={0,0,127}));
  annotation (Icon(graphics={Bitmap(
          extent={{-100,-100},{100,100}},
    fileName="modelica://SmartHouse/Images/bathroom.png"),
    Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Bathroom;
