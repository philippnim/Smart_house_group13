within SmartHouse;
model Simulation_Winter
  HouseEnviroment houseEnviroment(
    scenario="winter",
    useHP=true,
    useBoiler=false,
    enablePV=false,
    enableWind=false,
    enableBattery=false,
    usePCM=false)
    annotation (Placement(transformation(extent={{-20,-20},{20,20}})));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(
      StopTime=1209600,
      Interval=300,
      __Dymola_Algorithm="Dassl"));
end Simulation_Winter;
