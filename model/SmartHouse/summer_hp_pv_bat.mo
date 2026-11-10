within SmartHouse;
model summer_hp_pv_bat
  HouseEnviroment houseEnviroment(
    scenario="summer",
    useHP=true,
    useBoiler=true,
    usePCM=false,
    enablePV=true,
    enableWind=false,
    enableBattery=true)
    annotation (Placement(transformation(extent={{-20,-20},{20,20}})));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(
      StopTime=1209600,
      Interval=300,
      __Dymola_Algorithm="Dassl"));
end summer_hp_pv_bat;
