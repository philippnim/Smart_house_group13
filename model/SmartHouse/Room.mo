within SmartHouse;
model Room "A simple room without mass exchange"
  import SI = Modelica.Units.SI;

  // Geometry and parameters (living room as example)
  parameter SI.Area A_floor = 42 "Floor area";
  parameter SI.Height h = 2.5 "Room height";
  parameter SI.HeatCapacity C_mass = 150e3*A_floor "Walls, floor, furniture (150 kJ/m2K)";
  parameter SI.ThermalConductance G_airMass = 8*3*A_floor "Convection air <-> surfaces, h=8 W/m2K";
  parameter SI.Volume Volume = A_floor*h "total air volume";

  TIL.GasComponents.Volumes.Volume volume(volume=Volume,
                                          enableHeatPort=true,
    inputTypeConcentration="phi",
    phiInitial=50,
    mixingRatioInitial={0.8,0.2},
    nPorts=1)
    annotation (Placement(transformation(extent={{-11,-21},{11,21}},
        rotation=90,
        origin={35,-1})));
  inner TIL.SystemInformationManager sim(redeclare
      TILMedia.Gas.Types.VDI4670_MoistAir gasType1)
    annotation (Placement(transformation(extent={{38,72},{58,92}})));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor heatCapacitor(C=C_mass)
    annotation (Placement(transformation(extent={{-86,66},{-66,86}})));
  TIL.Connectors.HeatPort wallRight
    annotation (Placement(transformation(extent={{86,-10},{106,10}})));
  TIL.Connectors.HeatPort wallDown
    annotation (Placement(transformation(extent={{-10,-106},{10,-86}})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor airToMass(G=
        G_airMass)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-38,64})));
  TIL.Connectors.HeatPort wallLeft
    annotation (Placement(transformation(extent={{-106,-10},{-86,10}})));
  TIL.Connectors.HeatPort wallUp
    annotation (Placement(transformation(extent={{-10,86},{10,106}})));
  TIL.Connectors.HeatPort Roof
    annotation (Placement(transformation(extent={{86,86},{106,106}})));
  TIL.Connectors.HeatPort Floor
    annotation (Placement(transformation(extent={{-106,-106},{-86,-86}})));
equation

  connect(heatCapacitor.port, airToMass.port_b)
    annotation (Line(points={{-76,66},{-76,62},{-54,62},{-54,78},{-38,78},{-38,74}},
                                                       color={191,0,0}));
  connect(wallLeft, volume.heatPort) annotation (Line(
      points={{-96,0},{-38.375,0},{-38.375,-1},{19.25,-1}},
      color={204,0,0},
      thickness=0.5));
  connect(wallUp, volume.heatPort) annotation (Line(
      points={{0,96.5},{0,-1},{19.25,-1}},
      color={204,0,0},
      thickness=0.5));
  connect(wallDown, volume.heatPort) annotation (Line(
      points={{0,-96},{0,-1},{19.25,-1}},
      color={204,0,0},
      thickness=0.5));
  connect(Floor, volume.heatPort) annotation (Line(
      points={{-96,-96},{-40,-96},{-40,-1},{19.25,-1}},
      color={204,0,0},
      thickness=0.5));
  connect(wallRight, volume.heatPort) annotation (Line(
      points={{96,0},{64,0},{64,14},{0,14},{0,-1},{19.25,-1}},
      color={204,0,0},
      thickness=0.5));
  connect(Roof, volume.heatPort) annotation (Line(
      points={{96,96},{62,96},{62,14},{0,14},{0,-1},{19.25,-1}},
      color={204,0,0},
      thickness=0.5));
  connect(airToMass.port_a, volume.heatPort)
    annotation (Line(points={{-38,54},{-38,-1},{19.25,-1}}, color={191,0,0}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Room;
