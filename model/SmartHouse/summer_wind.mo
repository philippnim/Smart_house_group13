within SmartHouse;
model summer_wind
  HouseEnviroment houseEnviroment(
    scenario="summer",
    useHP=false,
    useBoiler=true,
    usePCM=false,
    enablePV=false,
    enableWind=true,
    enableBattery=false)
    annotation (Placement(transformation(extent={{-20,-20},{20,20}})));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(
      StopTime=1209600,
      Interval=300,
      __Dymola_Algorithm="Dassl"));
end summer_wind;
