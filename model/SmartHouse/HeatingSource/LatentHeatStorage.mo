within SmartHouse.HeatingSource;
model LatentHeatStorage

  // ==========================================
  // 1. Speichergeometrie
  // ==========================================

  parameter Modelica.Units.SI.Length blockHeight = 0.35;
  parameter Modelica.Units.SI.Length blockWidth = 0.40;
  parameter Modelica.Units.SI.Length tubeSectionLength = 0.50;

  parameter Integer nSerialTubes = 10;
  parameter Integer nParallelTubes = 8;

  parameter Modelica.Units.SI.Diameter tubeInnerDiameter = 0.016;
  parameter Modelica.Units.SI.Length tubeWallThickness = 0.002;

  // Dichte nur zur Abschätzung der PCM-Masse
  parameter Modelica.Units.SI.Density pcmDensityAssumed = 800;

  // ==========================================
  // 2. Berechnete geometrische Größen
  // ==========================================

  final parameter Integer nTotalTubes =
    nSerialTubes*nParallelTubes;

  final parameter Modelica.Units.SI.Length tubeLength =
    nTotalTubes*tubeSectionLength;

  final parameter Modelica.Units.SI.Diameter tubeOuterDiameter =
    tubeInnerDiameter + 2*tubeWallThickness;

  final parameter Modelica.Units.SI.Volume waterVolume =
    Modelica.Constants.pi/4*tubeInnerDiameter^2*tubeLength;

  final parameter Modelica.Units.SI.Area heatTransferArea =
    Modelica.Constants.pi*tubeInnerDiameter*tubeLength;

  final parameter Modelica.Units.SI.Volume pcmVolume =
    (blockHeight*blockWidth
     - nTotalTubes*Modelica.Constants.pi/4*tubeOuterDiameter^2)
    *tubeSectionLength;

  final parameter Modelica.Units.SI.Mass pcmMassEstimated =
    pcmVolume*pcmDensityAssumed;

  // ==========================================
  // 3. Simulationsergebnisse
  // ==========================================

  Modelica.Units.SI.Energy energy(
    start=0,
    fixed=true)
    "Cumulative heat transferred from liquid to storage";

  // ==========================================
  // 4. TIL System Information Manager
  // ==========================================

  // ==========================================
  // 5. PCM Latent Heat Storage
  // ==========================================

  TIL3_AddOn_PCMStorages.TubeInBlock.SLEMediumLiquid.PCMStorage
    pcmStorage_heated(
    redeclare model SLEMediumType =
  SmartHouse.HeatingSource.TILMedia_RT31,

      nCells=6,
      nCellsSLE=3,

    TInitialLiquid=298.15,
    TInitialWall=298.15,
    TInitialSLE=298.15,

      redeclare model HeatTransferModel =
        TIL3_AddOn_PCMStorages.TubeInBlock.TransportPhenomena.HeatTransfer.ConstantAlpha(
          constantAlpha=500),

      redeclare model WallHeatConductionModel =
        TIL3_AddOn_PCMStorages.TubeInBlock.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,

      redeclare model PressureDropModel =
        TIL3_AddOn_PCMStorages.TubeInBlock.TransportPhenomena.PressureDrop.ZeroPressureDrop,

    hxGeometry(
      height=blockHeight,
      width=blockWidth,
      length=tubeSectionLength,
      nSerialTubes=nSerialTubes,
      nParallelTubes=nParallelTubes,
      nTubeSideParallelHydraulicFlows=nParallelTubes,
      crossSectionType=TIL.Internals.CrossSectionType.Circular,
      wallThickness=tubeWallThickness,
      innerDiameter=tubeInnerDiameter))
    annotation (Placement(transformation(
      extent={{-10,-16},{10,16}},
        rotation=90,
        origin={0,14})));

  // ==========================================
  // 6. Heating Water Source
  // ==========================================

  // ==========================================
  // 7. Pressure Boundary
  // ==========================================

  TIL.LiquidComponents.Valves.LinearDirectionalControlValve
    linearDirectionalControlValve(use_switchingPositionInput=true, m_flowStart=
        -0.3e-3)
    annotation (
      Placement(
        transformation(
          extent={{-12.0001,-9},{11.9999,9}},
          rotation=180,
          origin={-0.0001,-31})));
  TIL.Connectors.LiquidPort WaterInput(liquidType=liquidType)
    "Space-heating return water"
    annotation (
      Placement(
        transformation(extent={{90,-10},{110,10}}),
        iconTransformation(extent={{-110,-40},{-90,-20}})));
  TIL.Connectors.LiquidPort WaterOutput(liquidType=liquidType)
    "Space-heating supply water"
    annotation (
      Placement(
        transformation(extent={{-110,-10},{-90,10}}),
        iconTransformation(extent={{-110,20},{-90,40}})));
equation

  // Positive energy means heat delivered to storage
  der(energy) = -pcmStorage_heated.summary.Q_flow_liq;

  // Heating water enters PCM storage

  // Heating water leaves PCM storage

  connect(WaterInput, linearDirectionalControlValve.portA) annotation (Line(
      points={{100,0},{80,0},{80,-80},{0,-80},{0,-40}},
      color={0,170,238},
      thickness=0.5));
  connect(linearDirectionalControlValve.portC, pcmStorage_heated.portB)
    annotation (Line(
      points={{12,-28},{32,-28},{32,-4},{10,-4},{10,4}},
      color={0,170,238},
      thickness=0.5));
  connect(pcmStorage_heated.portA, WaterOutput) annotation (Line(
      points={{-10,4},{-56,4},{-56,0},{-100,0}},
      color={0,170,238},
      thickness=0.5));
  connect(linearDirectionalControlValve.portB, WaterOutput) annotation (Line(
      points={{-12,-28},{-78,-28},{-78,0},{-100,0}},
      color={0,170,238},
      thickness=0.5));
  annotation (
    experiment(
      StopTime=60000,
      __Dymola_Algorithm="Dassl"),

    Diagram(
      coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}})),

    Icon(
      coordinateSystem(
        preserveAspectRatio=false)));

end LatentHeatStorage;
