within SmartHouse;
model winter_hp_pv_wind_bat_latent
  HouseEnviroment houseEnviroment(
    scenario="winter",
    useHP=false,
    useBoiler=true,
    usePCM=true,
    enablePV=true,
    enableWind=true,
    enableBattery=true)
    annotation (Placement(transformation(extent={{-20,-20},{20,20}})));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(
      StopTime=1209600,
      Interval=300,
      __Dymola_Algorithm="Dassl"));
end winter_hp_pv_wind_bat_latent;
