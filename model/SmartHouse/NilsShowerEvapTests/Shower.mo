within SmartHouse.NilsShowerEvapTests;
model Shower "A simple shower modell"

parameter TILMedia.Liquid.Types.BaseLiquid liquidType=sim.liquidType1
    "Select pure liquid water";
parameter TILMedia.Gas.Types.BaseGas gasType=sim.gasType1 "Gas type Shower" annotation (Dialog(tab="SIM", group="SIM"),
    choices(
      choice=sim.gasType1 "Gas 1 as defined in SIM"));

  outer TIL.SystemInformationManager sim
    annotation (Placement(transformation(extent={{86,86},{100,100}})));

  TIL.Connectors.LiquidPort drain annotation (Placement(transformation(extent={{
            88,-84},{108,-64}}), iconTransformation(extent={{88,-84},{108,-64}})));
  TIL.Connectors.LiquidPort waterSupply annotation (Placement(transformation(
          extent={{90,58},{110,78}}), iconTransformation(extent={{90,58},{110,78}})));
  TIL.Connectors.GasPort gasPort annotation (Placement(transformation(extent={{-110,
            -10},{-90,10}}), iconTransformation(extent={{-110,-10},{-90,10}})));
  NilsShowerEvapTests.VolumeWaterPort bathroomVolume(volume=2, enableHeatPort
      =true)
    annotation (Placement(transformation(extent={{-40,-22},{-12,32}})));
  NilsShowerEvapTests.ShowerEvaporator shower(Kp=0)
    annotation (Placement(transformation(extent={{28,-10},{48,10}})));
equation
  // Liquid connections
  connect(waterSupply, shower.liquidIn);
  connect(shower.liquidOut, drain);

  // Evaporated water and its enthalpy
  connect(shower.mEvap_flow, bathroomVolume.mEvap_flow);
  connect(shower.hEvap, bathroomVolume.hEvap);

  // Sensible heat exchange
  connect(shower.airHeatPort, bathroomVolume.heatPort);

  // Room conditions used to calculate evaporation
  shower.pAir = bathroomVolume.p;
  shower.xiAir = bathroomVolume.xi;
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Shower;
