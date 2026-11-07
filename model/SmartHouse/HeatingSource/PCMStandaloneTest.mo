within SmartHouse.HeatingSource;
model PCMStandaloneTest
  "Closed-loop hydraulic test: PCM with pump, controlled 35 C heater and floor heat loss"

  // ==========================================================
  // 1. Shared TIL medium and simulation time
  // ==========================================================
  inner TIL.SystemInformationManager sim(
    redeclare TILMedia.Gas.Types.VDI4670_MoistAir gasType1,
    redeclare TILMedia.Liquid.Types.TILMedia_Water liquidType1)
    annotation(Placement(transformation(extent={{-165,105},{-145,125}})));

  parameter String scheduleFile =
    "C:/Users/louisjw/Documents/Github/Smart_house_group13/data/scenarios/winter/pcm_charge_window.txt"
    "Full Windows path to the EXISTING daily charging forecast";

  // ==========================================================
  // 2. Hydraulic / thermal trial parameters
  // ==========================================================
  parameter Modelica.Units.SI.PressureDifference dpPump = 10000
    "Pump pressure rise (initial test value)";
  parameter Modelica.Units.SI.PressureDifference dpFloorNominal = 20000
    "Floor branch pressure drop at mFloorNominal";
  parameter Modelica.Units.SI.MassFlowRate mFloorNominal = 0.10
    "Floor branch hydraulic reference mass flow";
  parameter Modelica.Units.SI.PressureDifference dpPCMNominal = 4000
    "PCM branch pressure drop at mPCMNominal";
  parameter Modelica.Units.SI.MassFlowRate mPCMNominal = 0.03
    "PCM branch hydraulic reference mass flow";
  parameter Modelica.Units.SI.Temperature TSupplySet = 308.15
    "35 degC supply temperature";
  parameter Modelica.Units.SI.Power QFloorRemoval = 2000
    "Prescribed heat removal by the dummy floor (2000 W while demand)";

  // ==========================================================
  // 3. Actual PCM module -- already contains the controller
  // ==========================================================
  LatentHeatStorage pcm(
    liquidType=sim.liquidType1,
    forecastFileName=scheduleFile,
    dpPCMNominal=dpPCMNominal,
    mPCMNominal=mPCMNominal)
    annotation(Placement(transformation(extent={{-20,10},{22,52}})));

  // ==========================================================
  // 4. Pump and expansion tank: a closed circuit, NOT 4 ideal
  //    pressure boundaries as in the previous open test
  // ==========================================================
  TIL.LiquidComponents.Pumps.SimplePump circulationPump(
    presetVariableType="dp",
    dpFixed=dpPump)
    annotation(Placement(transformation(extent={{-100,-81},{-80,-61}})));

  TIL.LiquidComponents.HydraulicCapacitors.ExpansionTank expansionTank(
    volume=0.008,
    TInitial=298.15,
    pInitial=300000,
    fixedInitialPressure=true)
    annotation(Placement(transformation(extent={{-45,-81},{-25,-61}})));

  TIL.LiquidComponents.Sensors.Sensor_m_flow sensorTotalFlow
    "Total water flow supplied by the circulation pump"
    annotation(Placement(transformation(extent={{-80,-1},{-65,13}})));

  // ==========================================================
  // 5. Simplified heat source: electric heater in place of HP
  //    It regulates the water supply to 35 degC using its PI.
  //    It is only a test surrogate; NOT the actual heat pump.
  // ==========================================================
  ElectricalBoiler testHeater(
    liquidType=sim.liquidType1,
    P_nominal=9000,
    eta=1.0)
    annotation(Placement(transformation(extent={{-115,23},{-75,63}})));

  Modelica.Blocks.Sources.Constant supplySetpoint(k=TSupplySet)
    annotation(Placement(transformation(extent={{-163,5},{-143,25}})));

  Modelica.Blocks.Sources.BooleanExpression heatingDemand(
    y=time < 18*3600)
    "Keep room demand on until hour 18; thereafter force standby"
    annotation(Placement(transformation(extent={{-162,-26},{-142,-6}})));

  Modelica.Blocks.Sources.BooleanExpression heaterEnable(
    y=heatingDemand.y or pcm.chargeRequest)
    "Heat when rooms need it or the PCM requests charging"
    annotation(Placement(transformation(extent={{-161,-56},{-141,-36}})));

  // ==========================================================
  // 6. Simplified floor-heating circuit: flow resistance and
  //    a water tube losing heat to a prescribed thermal sink
  // ==========================================================
  TIL.LiquidComponents.Sensors.Sensor_m_flow sensorFloorFlow
    "Water flow through the floor branch"
    annotation(Placement(transformation(extent={{43,72},{58,86}})));

  TIL.LiquidComponents.HydraulicResistors.LinearHydraulicResistor
    floorResistance(
      dp_nominal=dpFloorNominal,
      mdot_nominal=mFloorNominal)
    annotation(Placement(transformation(extent={{78,72},{96,86}})));

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
    annotation(Placement(transformation(extent={{122,72},{145,86}})));

  // TIL HeatBoundary convention verified from ElectricalBoiler:
  // for this boundary a NEGATIVE heat flow heats the fluid,
  // hence a POSITIVE value here removes heat from the fluid.
  TIL.OtherComponents.Thermal.HeatBoundary floorCoolingBoundary(
    boundaryType="Q_flow",
    use_heatFlowRateInput=true)
    annotation(Placement(transformation(
      extent={{-5,-7},{5,7}}, rotation=270, origin={135,110})));

  Modelica.Blocks.Sources.RealExpression floorHeatLoss(
    y=if heatingDemand.y then QFloorRemoval else 0)
    annotation(Placement(transformation(extent={{78,107},{103,124}})));

  // Temperature sensors (non-invasive, one-port)
  TIL.LiquidComponents.Sensors.Sensor_T sensorHotSupply(
    redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation(Placement(transformation(extent={{-52,61},{-42,71}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensorFloorReturn(
    redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation(Placement(transformation(extent={{139,-8},{149,2}})));
  TIL.LiquidComponents.Sensors.Sensor_T sensorHeatSourceReturn(
    redeclare TIL.Utilities.Units.Conversions.Units.K unit)
    annotation(Placement(transformation(extent={{32,-74},{42,-64}})));

  // Convenient variables in the simulation result browser
  Modelica.Units.SI.MassFlowRate mMain;
  Modelica.Units.SI.MassFlowRate mFloor;
  Modelica.Units.SI.MassFlowRate mPCM;
  Modelica.Units.SI.Temperature TSupply;
  Modelica.Units.SI.Temperature TFloorReturn;
  Modelica.Units.SI.Temperature THPReturn;
  Modelica.Units.SI.Power QPCM;
  Real SOC(unit="1");
  Integer mode;

equation
  // ==========================================================
  // 7. Hydraulic CLOSED loop
  // Pump -> electric test heater -> PCM supply-side switching
  // -> simulated floor -> PCM return-side switching ->
  // expansion tank -> pump
  // The PCM has its own internal charge shortcut supply->return.
  // ==========================================================
  connect(expansionTank.portB, circulationPump.portA);
  connect(circulationPump.portB, sensorTotalFlow.portA);
  connect(sensorTotalFlow.portB, testHeater.WaterInput);
  connect(testHeater.WaterOutput, pcm.WaterSupplyIn);

  connect(pcm.WaterSupplyOut, sensorFloorFlow.portA);
  connect(sensorFloorFlow.portB, floorResistance.portA);
  connect(floorResistance.portB, floorTube.portA);
  connect(floorTube.portB, pcm.WaterReturnIn);

  connect(pcm.WaterReturnOut, expansionTank.portA);

  // Heat source controls
  connect(supplySetpoint.y, testHeater.TSupplySet);
  connect(heaterEnable.y, testHeater.EnableHeatSource);
  connect(heatingDemand.y, pcm.heatingDemand);

  // Floor heat extraction
  connect(floorHeatLoss.y, floorCoolingBoundary.Q_flow_in);
  connect(floorCoolingBoundary.heatPort, floorTube.heatPort[1]);

  // Non-invasive measurements
  connect(sensorHotSupply.port, testHeater.WaterOutput);
  connect(sensorFloorReturn.port, floorTube.portB);
  connect(sensorHeatSourceReturn.port, pcm.WaterReturnOut);

  // Convenient result aliases
  mMain = sensorTotalFlow.sensorValue;
  mFloor = sensorFloorFlow.sensorValue;
  mPCM = pcm.sensorPCMFlow.sensorValue;
  TSupply = sensorHotSupply.sensorValue;
  TFloorReturn = sensorFloorReturn.sensorValue;
  THPReturn = sensorHeatSourceReturn.sensorValue;
  QPCM = pcm.PCMHeatFlow;
  SOC = pcm.SOC;
  mode = pcm.pCMForecastController.mode;

  annotation(
    experiment(StartTime=0, StopTime=86400, Interval=60,
      __Dymola_Algorithm="Dassl"),
    Diagram(coordinateSystem(preserveAspectRatio=false,
      extent={{-180,-140},{180,140}})),
    Documentation(info="<html><p>Closed-loop standalone validation bench for the existing LatentHeatStorage and internal PCMForecastController.</p><p>Unlike the earlier four-boundary test, all heating flow is conserved. An electric test heater provides a regulated 35 degC supply (not an actual heat pump); a cooled tube represents a simplified floor-heating load; an expansion tank and pump close the water loop.</p><p>Start with Dymola Check. Plot mMain, mFloor, mPCM, TSupply, TFloorReturn, THPReturn, QPCM, SOC and mode. The resistances and load are trial values, NOT validated design parameters. Verify the direction and sign of Q_flow via temperature plots. Do not use testHeater.P_el to infer real heat-pump electricity or COP.</p></html>"));
end PCMStandaloneTest;
