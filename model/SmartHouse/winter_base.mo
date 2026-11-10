within SmartHouse;
model winter_base
  HouseEnviroment houseEnviroment(
    scenario="winter",
    useHP=false,
    useBoiler=true,
    usePCM=false,
    enablePV=false,
    enableWind=false,
    enableBattery=false)
    annotation (Placement(transformation(extent={{-20,-20},{20,20}})));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(
      StopTime=1209600,
      Interval=300,
      __Dymola_Algorithm="Dassl"));
end winter_base;
