within SmartHouse;
model winter_hp_wind_bat
  HouseEnviroment houseEnviroment(
    scenario="winter",
    useHP=true,
    useBoiler=true,
    usePCM=false,
    enablePV=false,
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
end winter_hp_wind_bat;
