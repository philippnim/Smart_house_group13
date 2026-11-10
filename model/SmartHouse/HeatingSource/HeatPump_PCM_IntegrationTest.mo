within SmartHouse.HeatingSource;
model HeatPump_PCM_IntegrationTest
  "Test real heat source + internal PCM module without the full house"

  // == Medium manager ==
  inner TIL.SystemInformationManager sim(
    redeclare TILMedia.VLEFluid.Types.TILMedia_Propane vleFluidType1,
    redeclare TILMedia.Gas.Types.TILMedia_DryAir gasType1,
    redeclare TILMedia.Liquid.Types.TILMedia_Water liquidType1)
    annotation(Placement(transformation(extent={{-170,110},{-150,130}})));

  // == Test parameters ==
  parameter String scheduleFile =
    "C:/Users/nilsobu/Documents/Project/Smart_house_group13/data/scenarios/winter/pcm_charge_window.txt"
    "The EXISTING winter forecast file";

  parameter Boolean testUseHP = true
    "Test actual heat pump; if it fails to initialise, first set false";
  parameter Boolean testUseBoiler = false
    "Can be set true for a boiler-only hydraulic integration check";

  parameter Modelica.Units.SI.Temperature TOutdoor = 270.15
    "Outdoor air, -3 degC";
  parameter Modelica.Units.SI.Power QFloorRemoval = 1250
    "Test floor heat removal when there is room demand";
  parameter Modelica.Units.SI.PressureDifference dpFloorNominal = 20000;
  parameter Modelica.Units.SI.MassFlowRate mFloorNominal = 0.10;

  // == Existing heat source, now with optional PCM INSIDE ==
  HeatPump_ThermalStorage_test heatSource(
    liquidType=sim.liquidType1,
    useHP=testUseHP,
    useBoiler=testUseBoiler,
    usePCM=true,
    pcmScheduleFile=scheduleFile,
    pDiff=10000,
    T_supplyFloorHeating=308.15,
    // TEST ONLY: keep DHW charging inactive, since tank starts at 30 degC.
    // Restore normal 50/58 degC when testing real DHW priority.
    T_min_DHW=298.15,
    T_max_DHW=302.15)
    annotation(Placement(transformation(extent={{-115,-15},{-50,50}})));

  Modelica.Blocks.Sources.Constant ambient(k=TOutdoor)
    annotation(Placement(transformation(extent={{-172,65},{-152,85}})));

  // Room demand is OFF during most of the charge window (11-17h).
  // chargeRequest must independently enable the heat source.
  // Demand ON again 17-19h permits discharge to the floor return.
  Modelica.Blocks.Sources.BooleanExpression heatingDemand(
    y=(time < 10*3600) or (time >= 17*3600 and time < 19*3600))
    annotation(Placement(transformation(extent={{-171,26},{-151,46}})));

  // == Simplified floor heating, proven from earlier standalone test ==
  TIL.LiquidComponents.Sensors.Sensor_m_flow sensorFloorFlow
    annotation(Placement(transformation(extent={{-15,73},{-1,87}})));

  TIL.LiquidComponents.HydraulicResistors.LinearHydraulicResistor
    floorResistance(
      dp_nominal=dpFloorNominal,
      mdot_nominal=mFloorNominal)
    annotation(Placement(transformation(extent={{23,74},{41,86}})));

  TIL.LiquidComponents.Tubes.Tube floorTube(
    tubeGeometry(
      innerDiameter=0.020,
      wallThickness=0.0015,
      length=5),
    nCells=1,
    enableHeatPorts=true,
    redeclare model TubeSideHeatTransferModel =
      TIL.LiquidComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha(
        constantAlpha=4000),
    redeclare model WallHeatConductionModel =
      TIL.LiquidComponents.Tubes.TransportPhenomena.WallHeatTransfer.GeometryBasedConduction,
    redeclare model PressureDropModel =
      TIL.LiquidComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop)
    annotation(Placement(transformation(extent={{68,73},{92,87}})));

  // The positive Q_flow command removes heat from the water,
  // as tested in the earlier PCM closed-loop setup.
  TIL.OtherComponents.Thermal.HeatBoundary floorCoolingBoundary(
    boundaryType="Q_flow", use_heatFlowRateInput=true)
    annotation(Placement(transformation(extent={{-5,-7},{5,7}},
      rotation=270, origin={80,119})));

  Modelica.Blocks.Sources.RealExpression floorHeatLoss(
    y=if heatingDemand.y then QFloorRemoval else 0)
    annotation(Placement(transformation(extent={{22,110},{48,128}})));

  // == Domestic water connectors must not remain open ==
  // Equal p on both boundaries: no prescribed DHW draw in this test.
  TIL.LiquidComponents.Boundaries.Boundary dhwColdBoundary(
  boundaryType="m_flow",
  m_flowFixed=0,
  TFixed=288.15);
  TIL.LiquidComponents.Boundaries.Boundary dhwHotBoundary(
    boundaryType="p", pFixed=300000, TFixed=303.15)
    annotation(Placement(transformation(extent={{32,-112},{52,-92}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensorHotSupply(
    redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation(Placement(transformation(extent={{-30,94},{-20,104}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensorFloorReturn(
    redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation(Placement(transformation(extent={{116,56},{126,66}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensorHeatSourceReturn(
    redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation(Placement(transformation(extent={{-30,-52},{-20,-42}})));
  Modelica.Units.SI.MassFlowRate mFloor;
  Modelica.Units.SI.MassFlowRate mPCM;
  Modelica.Units.SI.Temperature TSupply;
  Modelica.Units.SI.Temperature TFloorReturn;
  Modelica.Units.SI.Temperature THeatSourceReturn;
  Modelica.Units.SI.Power QPCM;
  Modelica.Units.SI.Power P_el;
  Modelica.Units.SI.Power Q_heatSource;
  Modelica.Units.SI.Energy E_el(start=0, fixed=true);
  Real E_el_kWh "Electrical energy in kWh";
  Real SOC(unit="1");
  Integer mode;
  Boolean chargeRequest;
  Boolean DHWmode;
  Boolean generatorEnabled;
equation
  connect(heatSource.WaterOutput, sensorFloorFlow.portA);
  connect(sensorFloorFlow.portB, floorResistance.portA);
  connect(floorResistance.portB, floorTube.portA);
  connect(floorTube.portB, heatSource.WaterInput);
  connect(floorHeatLoss.y, floorCoolingBoundary.Q_flow_in);
  connect(floorCoolingBoundary.heatPort, floorTube.heatPort[1]);
  connect(ambient.y, heatSource.T_ambient);
  connect(heatingDemand.y, heatSource.SpaceHeatingDemand);
  connect(dhwColdBoundary.port, heatSource.WaterInput1);
  connect(dhwHotBoundary.port, heatSource.WaterOutput1);
  connect(sensorHotSupply.port, heatSource.WaterOutput);
  connect(sensorFloorReturn.port, floorTube.portB);
  connect(sensorHeatSourceReturn.port, heatSource.WaterInput);
  mFloor = sensorFloorFlow.sensorValue;
  mPCM = heatSource.latentHeatStorage.sensorPCMFlow.sensorValue;
  TSupply = sensorHotSupply.sensorValue;
  TFloorReturn = sensorFloorReturn.sensorValue;
  THeatSourceReturn = sensorHeatSourceReturn.sensorValue;
  SOC = heatSource.latentHeatStorage.SOC;
  mode = heatSource.latentHeatStorage.pCMForecastController.mode;
  QPCM = heatSource.latentHeatStorage.PCMHeatFlow;
  chargeRequest = heatSource.latentHeatStorage.chargeRequest;
  DHWmode = heatSource.thermalstorageController.DHWmode;
  generatorEnabled = heatSource.thermalstorageController.enableHeater;
  P_el = heatSource.P_el;
  Q_heatSource = heatSource.HeatFlow;
  der(E_el) = P_el;
  E_el_kWh = E_el/3.6e6;
    annotation(Placement(transformation(extent={{-20,-112},{0,-92}})),
    experiment(StartTime=0, StopTime=86400, Interval=60,
      __Dymola_Algorithm="Dassl"),
    Diagram(coordinateSystem(preserveAspectRatio=false,
      extent={{-180,-140},{160,140}})),
    Documentation(info="<html><p>Integration test: uses the real HeatPump_ThermalStorage class with an optional PCM in the floor heating branch. The PCM controller is instantiated ONLY within LatentHeatStorage, and it can request generation even when the room demand is off. Normal DHW controller remains unmodified; DHW lower/upper temperatures are artificially set below the initial tank temperature ONLY for this first floor-loop test. Restore normal DHW thresholds for subsequent priority tests. Use the selected forecast table on the Windows machine. The mock floor includes a hydraulic resistor and 1250 W heat extraction on demand. This draft must be checked and simulated in Dymola.</p></html>"));

  // == One-port temperature sensors ==

  // == Clearly named plotted variables ==

  // == Closed floor water loop ==

  // == Floor heat extraction ==

  // == Inputs to the actual HeatPump_ThermalStorage ==

  // == Close external DHW water interfaces (NO domestic draw) ==

  // == Temperatures ==

  // == Results (pcm controller is INSIDE latentHeatStorage) ==

end HeatPump_PCM_IntegrationTest;
