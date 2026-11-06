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
  Modelica.Blocks.Interfaces.RealInput showercontroll annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={66,108})));
  TIL.LiquidComponents.Valves.OrificeValve valve(use_effectiveFlowAreaInput=true)
    annotation (Placement(transformation(extent={{66,26},{82,34}})));
  Modelica.Blocks.Continuous.FirstOrder showerValveActuator(
  k=1,
  T=5,
  initType=Modelica.Blocks.Types.Init.InitialOutput,
  y_start=1e-7)
  "Smooth the external shower-valve area command";
equation
  showerSimpleModel.showerEnabled = showercontroll > 0.25;
  //showerSimpleModel.showerEnabled = false;
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
      points={{100,30},{82,30}},
      color={0,170,238},
      thickness=0.5));
  connect(valve.portA, showerSimpleModel.BWWVorlauf) annotation (Line(
      points={{66,30},{62,30},{62,20},{82,20},{82,14},{78.2,14}},
      color={0,170,238},
      thickness=0.5));
  connect(showercontroll, showerValveActuator.u);
connect(showerValveActuator.y, valve.effectiveFlowArea_in);
  annotation (Icon(graphics={Bitmap(
          extent={{-100,-100},{100,100}},
    fileName="modelica://SmartHouse/Images/bathroom.png"),
    Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Bathroom;
