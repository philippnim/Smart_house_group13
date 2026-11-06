within SmartHouse.TestHouses;
model TestShower
  Rooms.ShowerSimpleModel showerSimpleModel(
    liquidType=sim.liquidType1,
    gasType=sim.gasType1,
    p_ColdWater=200000,
    T_coldWater=283.15,
    T_shower=313.15,
    Vdot_shower=0.0001,
    k_Temp=1,
    Ti_Temp=0.5,
    k_Vdot=1,
    Ti_Vdot=0.5)
    annotation (Placement(transformation(extent={{-8,-6},{12,14}})));
  TIL.GasComponents.Volumes.Volume volume(volume=4, nPorts=2)
    annotation (Placement(transformation(extent={{-82,2},{-74,18}})));
  TIL.LiquidComponents.Boundaries.Boundary boundary(
    boundaryType="p",
    pFixed=200000,
    TFixed=333.15)
    annotation (Placement(transformation(extent={{82,10},{90,30}})));
  inner TIL.SystemInformationManager sim(redeclare
      TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
      TILMedia.Liquid.Types.TILMedia_Water liquidType1)
    annotation (Placement(transformation(extent={{-66,40},{-46,60}})));
  TIL.LiquidComponents.Boundaries.Boundary boundary1(boundaryType="p", pFixed=
        200000)
    annotation (Placement(transformation(extent={{58,-16},{66,4}})));
  TIL.LiquidComponents.Pumps.SimplePump simplePump(presetVariableType="dp",
      dpFixed=20000)
    annotation (Placement(transformation(extent={{36,32},{52,48}})));
equation
  connect(volume.portArray[1], showerSimpleModel.ShowerAirIn) annotation (
      Line(
      points={{-78,1.95},{-78,-2},{-14,-2},{-14,12},{-8,12}},
      color={255,153,0},
      thickness=0.5));
  connect(volume.portArray[2], showerSimpleModel.ShowerAirOut) annotation (
      Line(
      points={{-78,2.45},{-78,-4},{-8,-4}},
      color={255,153,0},
      thickness=0.5));
  connect(boundary1.port, showerSimpleModel.BWWRuecklauf) annotation (Line(
      points={{62,-6},{16,-6},{16,-4},{12,-4}},
      color={0,170,238},
      thickness=0.5));
  connect(boundary.port, simplePump.portA) annotation (Line(
      points={{86,20},{44,20},{44,32}},
      color={0,170,238},
      thickness=0.5));
  connect(simplePump.portB, showerSimpleModel.BWWVorlauf) annotation (Line(
      points={{44,48},{44,52},{18,52},{18,12},{12.2,12}},
      color={0,170,238},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end TestShower;
