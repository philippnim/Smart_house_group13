within SmartHouse;
package ventilation
  model TestHousePhilipp
    Rooms.UnheatedRoom unheatedRoom1(
      A_floor=20,
      h=3,
      initialPressure(displayUnit="bar"),
      initialTemperature=296.15,
      enableInternalMass=false,
      gasType=sim.gasType1,
      useVentilation=true,
      room_volume(fixedInitialPressure=false),
      redeclare TIL.Utilities.Units.Conversions.Units.degC unitTemp,
      heatPerPerson=70)
      annotation (Placement(transformation(extent={{-2,-12},{18,8}})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_wall(TFixed=293.15)
      annotation (Placement(transformation(extent={{-78,6},{-70,18}})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_ceiling(TFixed=278.15)
      annotation (Placement(transformation(
          extent={{-4,-6},{4,6}},
          rotation=270,
          origin={0,100})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_floor(TFixed=279.15)
      annotation (Placement(transformation(
          extent={{-4,-6},{4,6}},
          rotation=90,
          origin={-20,-92})));
    inner TIL.SystemInformationManager sim(redeclare
        TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
        TILMedia.Liquid.Types.TILMedia_Water liquidType1)
      annotation (Placement(transformation(extent={{80,80},{100,100}})));
    Modelica.Blocks.Interaction.Show.RealValue realValue
      annotation (Placement(transformation(extent={{14,32},{34,52}})));
    Modelica.Blocks.Sources.TimeTable Pel(table=[0.0,0; 28799,0; 28800,50; 61200,
          300; 86400,50])
      annotation (Placement(transformation(extent={{84,-54},{64,-34}})));
    Modelica.Blocks.Sources.TimeTable Occupancy(table=[0,0; 7200,0; 7201,2; 14400,
          2; 14401,0; 86400,0])
      annotation (Placement(transformation(extent={{84,-28},{64,-8}})));
    Boundaries.Walls.InternalWall internalWall(
      lengthWall=13,
      heightWall=3,
      alpha_A=8,
      alpha_B=8,
      thicknessWall=0.15,
      lambdaWall=0.7,
      rhoWall(displayUnit="kg/m3") = 1600,
      cpWall=1000)
      annotation (Placement(transformation(extent={{-60,2},{-40,22}})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_outside(TFixed=278.15)
      annotation (Placement(transformation(extent={{-80,-22},{-72,-10}})));
    Boundaries.Horizontal.GroundFloor groundFloor(
      length=4,
      width=5,
      thickness_upper=0.05,
      lambda_upper=1.4,
      rho_upper(displayUnit="kg/m3") = 2000,
      cp_upper=1000,
      enableSurfaceConnection=true,
      thickness_lower=0.1,
      lambda_lower=0.035,
      rho_lower(displayUnit="kg/m3") = 30,
      cp_lower=1450,
      alpha_up=6,
      enableFloorHeating=true,
      pipeLength=133,
      innerDiameter=0.012,
      wallThickness=0.002,
      nbTubes=1,
      nbCells=10,
      alpha_pipe=1000,
      T_init=293.15,
      liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{-30,-76},{-10,-56}})));
    TIL.LiquidComponents.Boundaries.BoundaryOverdetermined boundaryOverdetermined(
      liquidType=sim.liquidType1,
      pFixed=200000,
      m_flowFixed=-0.05,
      TFixed=308.15)
      annotation (Placement(transformation(extent={{8,-66},{16,-46}})));
    TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined
      boundaryUnderdetermined(liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{8,-86},{16,-66}})));
    Modelica.Blocks.Sources.TimeTable solarRadiation(
      table=[0, 0;
             21600, 0;
             28800, 200;
             36000, 450;
             43200, 600;
             50400, 450;
             57600, 200;
             64800, 0;
             86400, 0])   annotation (Placement(transformation(extent={{-96,-78},{-76,-58}})));

    Boundaries.Walls.CompositeWall compositeWall(
      lengthTotal=5,
      heightTotal=3,
      lengthWindow=1,
      heightWindow=3,
      alpha_A_window=25,
      alpha_B_window=8,
      alpha_A_wall=25,
      alpha_B_wall=8,
      g_value=0.55,
      thicknessWindow=0.04,
      lambdaWindow=0.048,
      thickness_A=0.2,
      lambda_A=0.035,
      rho_A(displayUnit="kg/m3") = 20,
      cp_A=1500,
      thickness_B=0.175,
      lambda_B=0.7,
      rho_B(displayUnit="kg/m3") = 1600,
      cp_B=1000)
      annotation (Placement(transformation(extent={{-60,-26},{-40,-6}})));
    TIL.GasComponents.Boundaries.BoundaryOverdetermined
      boundaryOverdetermined_circulation(
      gasType=sim.gasType1,
      streamVariablesInputType="T",
      streamVariablesInputTypeConcentration="xi",
      use_temperatureInput=true,
      TFixed=278.15,
      use_mixingRatioInput=true,
      boundaryType="p, V_flow",
      pFixed=101300,
      use_volumeFlowRateInput=true,
      V_flowFixed(displayUnit="m3/h") = -0.0083333333333333)
      annotation (Placement(transformation(extent={{126,28},{134,48}})));
    TIL.GasComponents.Boundaries.BoundaryUnderdetermined
      boundaryUnderdetermined_circulation(gasType=sim.gasType1)
      annotation (Placement(transformation(extent={{74,2},{82,22}})));
    Boundaries.Horizontal.Roof roof(
      length=4,
      width=5,
      thickness_upper=0.1,
      lambda_upper=0.039,
      rho_upper(displayUnit="kg/m3") = 50,
      cp_upper=1030,
      enableSurfaceConnection=false,
      thickness_lower=0.02,
      lambda_lower=0.13,
      rho_lower(displayUnit="kg/m3") = 500,
      cp_lower=1600,
      alpha_up=25,
      alpha_down=10)
      annotation (Placement(transformation(extent={{-20,58},{0,78}})));
    TIL.GasComponents.Tubes.Tube supplyTube(
      tubeGeometry(
        innerDiameter=0.05,
        length=1,
        nParallelTubes=10),
      pressureDropPosition=TIL.Internals.PressureDropPosition.port_a,
      nCells=10,
      enableHeatPorts=true,
      redeclare model HeatTransferModel =
          TIL.GasComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
          (constantAlpha=100),
      redeclare model PressureDropModel =
          TIL.GasComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop)
      annotation (Placement(transformation(
          extent={{-8,-2},{8,2}},
          rotation=180,
          origin={64,38})));
    TIL.GasComponents.Tubes.Tube exhaustTube(
      tubeGeometry(
        innerDiameter=0.05,
        length=1,
        nParallelTubes=10),
      pressureDropPosition=TIL.Internals.PressureDropPosition.port_a,
      nCells=10,
      enableHeatPorts=true,
      HeatTransferModel(constantAlpha=100),
      redeclare model PressureDropModel =
          TIL.GasComponents.Tubes.TransportPhenomena.PressureDrop.ZeroPressureDrop)
      annotation (Placement(transformation(
          extent={{-8,2},{8,-2}},
          rotation=180,
          origin={64,12})));
    TIL.GasComponents.Sensors.Sensor_T sensor_T_outdoor
      annotation (Placement(transformation(extent={{104,46},{112,54}})));
    TIL.GasComponents.Sensors.Sensor_T sensor_T_beforeRoom
      annotation (Placement(transformation(extent={{46,48},{54,56}})));
    TIL.GasComponents.Sensors.Sensor_T sensor_T_afterRoom
      annotation (Placement(transformation(extent={{48,24},{56,32}})));
    VentilationController ventilationController
      annotation (Placement(transformation(extent={{74,58},{94,78}})));
    TIL.GasComponents.Sensors.Sensor_phi sensor_phi
      annotation (Placement(transformation(extent={{22,-4},{30,4}})));
    MoistureRecovery moistureRecovery
      annotation (Placement(transformation(extent={{150,-6},{170,14}})));
    Modelica.Blocks.Sources.RealExpression realExpression(y=253.15)
      annotation (Placement(transformation(extent={{78,18},{98,38}})));
  equation


    connect(unheatedRoom1.Temperature_sensor, realValue.numberPort)
      annotation (Line(points={{11,9},{11,28},{6,28},{6,42},{12.5,42}},
                                                          color={0,0,127}));
    connect(Occupancy.y, unheatedRoom1.occupancy)
      annotation (Line(points={{63,-18},{15,-18},{15,-13}}, color={0,0,127}));
    connect(Pel.y, unheatedRoom1.P_el)
      annotation (Line(points={{63,-44},{20,-44},{20,-22},{9,-22},{9,-13}},
                                                          color={0,0,127}));
    connect(heatBoundary_wall.heatPort, internalWall.heatPort_A_air) annotation (
        Line(
        points={{-74,12},{-60,12}},
        color={204,0,0},
        thickness=0.5));
    connect(internalWall.heatPort_B_air, unheatedRoom1.heatPort_walls)
      annotation (Line(
        points={{-40,12},{-12,12},{-12,-2},{-1.4,-2}},
        color={204,0,0},
        thickness=0.5));
    connect(heatBoundary_floor.heatPort, groundFloor.heatPort_down) annotation (
        Line(
        points={{-20,-92},{-20,-75.6}},
        color={204,0,0},
        thickness=0.5));
    connect(groundFloor.heatPort_up, unheatedRoom1.heatPort_floor) annotation (
        Line(
        points={{-20,-56.4},{-20,-18},{-1.4,-18},{-1.4,-11.4}},
        color={204,0,0},
        thickness=0.5));
    connect(boundaryOverdetermined.port, groundFloor.Input) annotation (Line(
        points={{12,-56},{-6,-56},{-6,-62},{-10.4,-62}},
        color={0,170,238},
        thickness=0.5));
    connect(boundaryUnderdetermined.port, groundFloor.Output) annotation (Line(
        points={{12,-76},{-6,-76},{-6,-70},{-10.4,-70}},
        color={0,170,238},
        thickness=0.5));
    connect(solarRadiation.y, compositeWall.RadiationInput)
      annotation (Line(points={{-75,-68},{-54,-68},{-54,-28}}, color={0,0,127}));
    connect(compositeWall.solarGains, groundFloor.heatPort_surfaceConnection)
      annotation (Line(
        points={{-46,-26},{-46,-59.6},{-29.6,-59.6}},
        color={204,0,0},
        thickness=0.5));
    connect(compositeWall.heatPort_B, unheatedRoom1.heatPort_walls) annotation (
        Line(
        points={{-40,-16},{-12,-16},{-12,-2},{-1.4,-2}},
        color={204,0,0},
        thickness=0.5));
    connect(compositeWall.heatPort_A, heatBoundary_outside.heatPort) annotation (
        Line(
        points={{-60,-16},{-76,-16}},
        color={204,0,0},
        thickness=0.5));
    connect(roof.heatPort_up, heatBoundary_ceiling.heatPort) annotation (Line(
        points={{-10,77.6},{-10,92},{0,92},{0,100}},
        color={204,0,0},
        thickness=0.5));
    connect(roof.heatPort_down, unheatedRoom1.heatPort_ceiling) annotation (Line(
        points={{-10,58.4},{-10,7.4},{-1.4,7.4}},
        color={204,0,0},
        thickness=0.5));
    connect(boundaryOverdetermined_circulation.port, supplyTube.portA)
      annotation (Line(
        points={{130,38},{72,38}},
        color={255,153,0},
        thickness=0.5));
    connect(supplyTube.portB, unheatedRoom1.gasPortA) annotation (Line(
        points={{56,38},{46,38},{46,4},{17.6,4}},
        color={255,153,0},
        thickness=0.5));
    connect(boundaryUnderdetermined_circulation.port, exhaustTube.portA)
      annotation (Line(
        points={{78,12},{72,12}},
        color={255,153,0},
        thickness=0.5));
    connect(exhaustTube.portB, unheatedRoom1.gasPortB) annotation (Line(
        points={{56,12},{48,12},{48,-8},{17.6,-8}},
        color={255,153,0},
        thickness=0.5));
    connect(supplyTube.heatPort, exhaustTube.heatPort) annotation (Line(
        points={{64,36},{64,14}},
        color={204,0,0},
        thickness=0.5));
    connect(sensor_T_outdoor.port, supplyTube.portA) annotation (Line(
        points={{108,46},{108,38},{72,38}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_beforeRoom.port, unheatedRoom1.gasPortA) annotation (Line(
        points={{50,48},{50,38},{46,38},{46,4},{17.6,4}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_afterRoom.port, unheatedRoom1.gasPortB) annotation (Line(
        points={{52,24},{52,18},{48,18},{48,-8},{17.6,-8}},
        color={255,153,0},
        thickness=0.5));
    connect(ventilationController.V_flow, boundaryOverdetermined_circulation.V_flow_in)
      annotation (Line(points={{95,68},{120,68},{120,40},{126,40}}, color={0,0,
            127}));
    connect(sensor_phi.port, unheatedRoom1.gasPortB) annotation (Line(
        points={{26,-4},{26,-8},{17.6,-8}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_phi.sensorValue, ventilationController.phi_room) annotation
      (Line(points={{26,2},{26,34},{38,34},{38,64},{72,64}}, color={0,0,127}));
    connect(Occupancy.y, ventilationController.occupancy)
      annotation (Line(points={{63,-18},{63,72},{72,72}}, color={0,0,127}));
    connect(moistureRecovery.mixingRatio, boundaryOverdetermined_circulation.mixingRatio_in)
      annotation (Line(points={{171,8},{176,8},{176,24},{122,24},{122,36},{126,
            36}}, color={0,0,127}));
    connect(sensor_phi.sensorValue, moistureRecovery.phi_room) annotation (Line(
          points={{26,2},{26,8},{40,8},{40,2},{70,2},{70,-2},{104,-2},{104,-8},
            {136,-8},{136,11},{148,11}}, color={0,0,127}));
    connect(Occupancy.y, moistureRecovery.occupancy) annotation (Line(points={{
            63,-18},{60,-18},{60,-4},{140,-4},{140,-1},{148,-1}}, color={0,0,
            127}));
    connect(ventilationController.V_flow, moistureRecovery.V_flow) annotation (
        Line(points={{95,68},{120,68},{120,30},{118,30},{118,-5},{148,-5}},
          color={0,0,127}));
    connect(sensor_T_afterRoom.sensorValue, moistureRecovery.T_room)
      annotation (Line(points={{52,30},{52,44},{100,44},{100,42},{106,42},{106,
            -6},{134,-6},{134,7},{148,7}}, color={0,0,127}));
    connect(moistureRecovery.T_supply, boundaryOverdetermined_circulation.T_in)
      annotation (Line(points={{171,0},{171,-14},{116,-14},{116,32},{126,32}},
          color={0,0,127}));
    connect(realExpression.y, moistureRecovery.T_out) annotation (Line(points={
            {99,28},{120,28},{120,3},{148,3}}, color={0,0,127}));
    annotation (
      Icon(coordinateSystem(preserveAspectRatio=false)),
      Diagram(coordinateSystem(preserveAspectRatio=false)),
      experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
  end TestHousePhilipp;

  block VentilationController "Air flow for one room: 0.5 ACH + people + humidity PI"
    parameter Modelica.Units.SI.Volume V_room = 60 "Room volume";
    parameter Real ACH_min = 0.5 "Minimum air changes per hour (task)";
    parameter Real phi_set = 50 "Humidity setpoint in %";

    Modelica.Blocks.Interfaces.RealInput occupancy "Number of persons in the room"
      annotation (Placement(transformation(extent={{-140,20},{-100,60}})));
    Modelica.Blocks.Interfaces.RealInput phi_room "Room humidity in % (from Sensor_phi)"
      annotation (Placement(transformation(extent={{-140,-60},{-100,-20}})));
    Modelica.Blocks.Interfaces.RealOutput V_flow(unit="m3/s") "Air into the room (negative for TIL)"
      annotation (Placement(transformation(extent={{100,-10},{120,10}})));

    Modelica.Blocks.Sources.Constant baseFlow(k=ACH_min*V_room/3600) "Always 0.5 ACH"
      annotation (Placement(transformation(extent={{-60,60},{-40,80}})));
    Modelica.Blocks.Math.Gain personFlow(k=30/3600) "25 m3/h per person"
      annotation (Placement(transformation(extent={{-60,30},{-40,50}})));
    Modelica.Blocks.Continuous.LimPID humidityPI(
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      k=0.0015,
      Ti=600,
      yMax=100/3600,
      yMin=0) "Extra air when the room is too humid"
      annotation (Placement(transformation(extent={{-60,-50},{-40,-30}})));
    Modelica.Blocks.Sources.Constant setpoint(k=phi_set) "Humidity setpoint"
      annotation (Placement(transformation(extent={{-90,-90},{-70,-70}})));
    Modelica.Blocks.Math.Max max1
      annotation (Placement(transformation(extent={{-20,36},{0,56}})));
    Modelica.Blocks.Math.Add add
      annotation (Placement(transformation(extent={{18,-10},{38,10}})));
    Modelica.Blocks.Continuous.FirstOrder PhiFilter(
      k=1,
      T=60,
      y_start=40)
      annotation (Placement(transformation(extent={{-92,-50},{-72,-30}})));
  equation
    connect(occupancy, personFlow.u)
      annotation (Line(points={{-120,40},{-62,40}}, color={0,0,127}));
    // Swapped on purpose: measured humidity on u_s, setpoint on u_m -> more air when too humid
    connect(setpoint.y, humidityPI.u_m)
      annotation (Line(points={{-69,-80},{-50,-80},{-50,-52}}, color={0,0,127}));
    connect(baseFlow.y, max1.u1) annotation (Line(points={{-39,70},{-30,70},{
            -30,52},{-22,52}}, color={0,0,127}));
    connect(personFlow.y, max1.u2)
      annotation (Line(points={{-39,40},{-22,40}}, color={0,0,127}));
    connect(max1.y, add.u1)
      annotation (Line(points={{1,46},{8,46},{8,6},{16,6}}, color={0,0,127}));
    connect(humidityPI.y, add.u2) annotation (Line(points={{-39,-40},{8,-40},{8,
            -6},{16,-6}}, color={0,0,127}));
    connect(phi_room, PhiFilter.u)
      annotation (Line(points={{-120,-40},{-94,-40}}, color={0,0,127}));
    connect(PhiFilter.y, humidityPI.u_s)
      annotation (Line(points={{-71,-40},{-62,-40}}, color={0,0,127}));
    connect(add.y, V_flow)
      annotation (Line(points={{39,0},{110,0}}, color={0,0,127}));
    annotation (Icon(graphics={
          Rectangle(extent={{-100,100},{100,-100}}, lineColor={0,0,127},
            fillColor={255,255,255}, fillPattern=FillPattern.Solid),
          Text(extent={{-90,40},{90,-40}}, textString="Vent\nCtrl", lineColor={0,0,127})}));
  end VentilationController;

  block MoistureRecovery "Water content of the supply air: moisture recovery of a rotary heat exchanger + moisture from people"
    import SI = Modelica.Units.SI;

    parameter Real eta_x = 0.7 "Moisture recovery (0 = plate HX / no recovery, 0.7 = rotary wheel in winter)";
    parameter Real phi_out = 80 "Outdoor relative humidity in % (typical Nordic winter value)";
    parameter Real moisturePerPerson(unit="kg/s") = 90/3600/1000 "Moisture from one person (ASHRAE: about 90 g/h at rest)";
    parameter SI.Pressure p = 101300 "Air pressure";
    parameter Real h_evap(unit="J/kg") = 2.5e6 "Latent heat of water";
    parameter Real cp_air(unit="J/(kg.K)") = 1006 "Heat capacity of air";
    parameter Integer waterIndex = 1 "Position of water in TIL's mixingRatio (find out with test H1: 1 or 2)";
    parameter SI.Time T_sensor = 60 "Response time of the humidity sensor";
    parameter Real phi_start = 40 "Room humidity in % that the sensor reads at the start";
    parameter SI.Temperature T_start = 296.15 "Room temperature that the sensor reads at the start";

    Modelica.Blocks.Interfaces.RealInput phi_room "Room humidity in % (Sensor_phi)"
      annotation (Placement(transformation(extent={{-140,50},{-100,90}})));
    Modelica.Blocks.Interfaces.RealInput T_room(unit="K") "Room air temperature in K (Sensor_T on the exhaust line)"
      annotation (Placement(transformation(extent={{-140,10},{-100,50}})));
    Modelica.Blocks.Interfaces.RealInput T_out(unit="K") "Outdoor temperature in K (same signal as T_in of the supply boundary)"
      annotation (Placement(transformation(extent={{-140,-30},{-100,10}})));
    Modelica.Blocks.Interfaces.RealInput occupancy "Number of persons in the room"
      annotation (Placement(transformation(extent={{-140,-70},{-100,-30}})));
    Modelica.Blocks.Interfaces.RealInput V_flow(unit="m3/s") "Supply air flow (from the controller, sign does not matter)"
      annotation (Placement(transformation(extent={{-140,-110},{-100,-70}})));
    Modelica.Blocks.Interfaces.RealOutput mixingRatio[2] "To mixingRatio_in of the supply boundary"
      annotation (Placement(transformation(extent={{100,30},{120,50}})));
    Modelica.Blocks.Interfaces.RealOutput T_supply(unit="K") "To T_in of the supply boundary (outdoor T + latent heat of the recovered moisture)"
      annotation (Placement(transformation(extent={{100,-50},{120,-30}})));

    Real x_room "Room water content in kg/kg dry air";
    Real x_out "Outdoor water content in kg/kg dry air";
    SI.Density rho_supply "Density of the outdoor air at the supply boundary";
    SI.Pressure p_sat_out "Saturation pressure of water at outdoor temperature";
    Real x_supply "Supply air water content in kg/kg dry air";
    SI.Pressure p_sat "Saturation pressure of water at room temperature";
    Real phi_sensor(start=phi_start) "Room humidity as the slow sensor sees it, in %";
    Real T_sensor_room(start=T_start, unit="K") "Room temperature as the slow sensor sees it";
  protected
    Real T_degC = T_sensor_room - 273.15;
    Real T_out_degC = T_out - 273.15;
  initial equation
    phi_sensor = phi_start;
    T_sensor_room = T_start;
  equation
    // Real humidity sensors react in about a minute. This also breaks the loop room -> supply -> room at the start
    der(phi_sensor) = (min(max(phi_room, 0), 100) - phi_sensor)/T_sensor;
    der(T_sensor_room) = (min(max(T_room, 263.15), 313.15) - T_sensor_room)/T_sensor;
    // Magnus formula for the saturation pressure of water
    p_sat = 611.2*exp(17.62*T_degC/(243.12 + T_degC));
    p_sat_out = 611.2*exp(17.62*T_out_degC/(243.12 + T_out_degC));
    // Relative humidity -> water content
    x_room = 0.622*(phi_sensor/100*p_sat)/(p - phi_sensor/100*p_sat);
    x_out = 0.622*(phi_out/100*p_sat_out)/(p - phi_out/100*p_sat_out);
    // Ideal gas: colder air is denser
    rho_supply = p/(287*T_out);
    // Rotary wheel brings back eta_x of the difference, plus moisture from people spread over the supply air
    // Kept between 0.1 g/kg and 15 g/kg so the solver never gets a crazy value
    x_supply = min(max(x_out + eta_x*(x_room - x_out)
      + moisturePerPerson*occupancy/(rho_supply*max(abs(V_flow), 1e-4)), 1e-4), 0.015);
    // The wheel moves water as vapour, together with its latent heat. Without this the extra water would enter as fog at -20 C
    // Never warmer than the room
    T_supply = min(T_out + (x_supply - x_out)*h_evap/cp_air, T_sensor_room);
    // TIL normalises mixingRatio, so {x, 1} means x kg water per 1 kg dry air
    mixingRatio = if waterIndex == 1 then {x_supply, 1} else {1, x_supply};
    annotation (Icon(graphics={
          Rectangle(extent={{-100,100},{100,-100}}, lineColor={0,0,127},
            fillColor={255,255,255}, fillPattern=FillPattern.Solid),
          Text(extent={{-90,40},{90,-40}}, textString="Moist\nRec", lineColor={0,0,127})}));
  end MoistureRecovery;

  connector VentilationPorts
    "Air connections between the ventilation unit and the house"
    // gasType is set by the model that uses the plug, e.g. ventilationPorts(supply(each gasType=sim.gasType1), ...)
    TIL.Connectors.GasPort supply[4]
      "Fresh air into the rooms. Order: bathroom, bedroom, kitchen, living room";
    TIL.Connectors.GasPort exhaust[4]
      "Used air out of the rooms. Order: bathroom, bedroom, kitchen, living room";

    annotation (
      Icon(graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={255,153,0},
          fillColor={255,230,200},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-90,50},{90,-50}},
          textString="air",
          lineColor={255,153,0})}));
  end VentilationPorts;

  model VentilationChannel
    parameter Modelica.Units.SI.Volume V_room = 60 "Room volume";
    outer TIL.SystemInformationManager sim "Comes from the model around it";

    TIL.GasComponents.Tubes.Tube supplyTube(
      tubeGeometry(
        innerDiameter=0.05,
        length=1,
        nParallelTubes=10),
      pressureDropPosition=TIL.Internals.PressureDropPosition.port_a,
      nCells=10,
      enableHeatPorts=true,
      redeclare model HeatTransferModel =
          TIL.GasComponents.Tubes.TransportPhenomena.HeatTransfer.ConstantAlpha
          (constantAlpha=100),
      redeclare model PressureDropModel =
          TIL.GasComponents.Tubes.TransportPhenomena.PressureDrop.QuadraticMassFlowDependent
          (mdot_nominal=0.02, pressureDrop_nominal=100),
      wallCellStateType="state south")
      annotation (Placement(transformation(
          extent={{-8,-2},{8,2}},
          rotation=180,
          origin={-30,30})));
    TIL.GasComponents.Tubes.Tube exhaustTube(
      tubeGeometry(
        innerDiameter=0.05,
        length=1,
        nParallelTubes=10),
      pressureDropPosition=TIL.Internals.PressureDropPosition.port_a,
      nCells=10,
      enableHeatPorts=true,
      HeatTransferModel(constantAlpha=100),
      redeclare model PressureDropModel =
          TIL.GasComponents.Tubes.TransportPhenomena.PressureDrop.QuadraticMassFlowDependent
          (mdot_nominal=0.02, pressureDrop_nominal=100),
      wallCellStateType="state south")
      annotation (Placement(transformation(
          extent={{-8,2},{8,-2}},
          rotation=180,
          origin={-30,-10})));
    TIL.GasComponents.Sensors.Sensor_T sensor_T_afterRoom
      annotation (Placement(transformation(extent={{-52,-6},{-44,2}})));
    VentilationController ventilationController(V_room=V_room)
      annotation (Placement(transformation(extent={{-18,46},{2,66}})));
    TIL.GasComponents.Sensors.Sensor_phi sensor_phi
      annotation (Placement(transformation(extent={{-72,-6},{-64,2}})));
    MoistureRecovery moistureRecovery
      annotation (Placement(transformation(extent={{48,10},{68,30}})));
    TIL.Connectors.GasPort gasPortSupply(gasType=sim.gasType1)
      annotation (Placement(transformation(extent={{-100,20},{-80,40}})));
    TIL.Connectors.GasPort gasPortExhaust(gasType=sim.gasType1)
      annotation (Placement(transformation(extent={{-100,-20},{-80,0}})));
    Modelica.Blocks.Interfaces.RealInput Occupancy
      annotation (Placement(transformation(extent={{-106,-102},{-66,-62}})));
    Modelica.Blocks.Interfaces.RealInput Toutdoor
      annotation (Placement(transformation(extent={{-106,-72},{-66,-32}})));
    TIL.GasComponents.Boundaries.Boundary boundary(boundaryType="p")
      annotation (Placement(transformation(extent={{84,-20},{92,0}})));
    TIL.GasComponents.Boundaries.Boundary boundary1(
      use_temperatureInput=true,
      use_mixingRatioInput=true,
      boundaryType="p")
      annotation (Placement(transformation(extent={{118,22},{126,42}})));
    TIL.GasComponents.Fans.SimpleFan simpleFan(
      presetVariableType="V_flow",
      use_volumeFlowRateInput=true,
      eta=0.33) annotation (Placement(transformation(
          extent={{8,-8},{-8,8}},
          rotation=90,
          origin={94,30})));
  equation

    connect(supplyTube.heatPort, exhaustTube.heatPort) annotation (Line(
        points={{-30,28},{-30,-8}},
        color={204,0,0},
        thickness=0.5));
    connect(sensor_phi.sensorValue, ventilationController.phi_room) annotation
      (Line(points={{-68,0},{-68,52},{-20,52}},              color={0,0,127}));
    connect(sensor_phi.sensorValue, moistureRecovery.phi_room) annotation (Line(
          points={{-68,0},{-68,52},{-32,52},{-32,72},{46,72},{46,27}},
                                         color={0,0,127}));
    connect(ventilationController.V_flow, moistureRecovery.V_flow) annotation (
        Line(points={{3,56},{26,56},{26,34},{80,34},{80,4},{46,4},{46,11}},
          color={0,0,127}));
    connect(sensor_T_afterRoom.sensorValue, moistureRecovery.T_room)
      annotation (Line(points={{-48,0},{-48,8},{20,8},{20,23},{46,23}},
                                           color={0,0,127}));
    connect(gasPortExhaust, exhaustTube.portB) annotation (Line(
        points={{-90,-10},{-38,-10}},
        color={255,153,0},
        thickness=0.5));
    connect(gasPortSupply, supplyTube.portB) annotation (Line(
        points={{-90,30},{-38,30}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_phi.port, exhaustTube.portB) annotation (Line(
        points={{-68,-6},{-68,-10},{-38,-10}},
        color={255,153,0},
        thickness=0.5));
    connect(sensor_T_afterRoom.port, exhaustTube.portB) annotation (Line(
        points={{-48,-6},{-48,-10},{-38,-10}},
        color={255,153,0},
        thickness=0.5));
    connect(Occupancy, ventilationController.occupancy) annotation (Line(points={{-86,-82},
            {-24,-82},{-24,60},{-20,60}},          color={0,0,127}));
    connect(Occupancy, moistureRecovery.occupancy) annotation (Line(points={{-86,-82},
            {34,-82},{34,15},{46,15}},         color={0,0,127}));
    connect(moistureRecovery.T_out, Toutdoor) annotation (Line(points={{46,19},
            {24,19},{24,-52},{-86,-52}},           color={0,0,127}));
    connect(exhaustTube.portA, boundary.port) annotation (Line(
        points={{-22,-10},{88,-10}},
        color={255,153,0},
        thickness=0.5));
    connect(simpleFan.portA, boundary1.port) annotation (Line(
        points={{102,30},{112,30},{112,32},{122,32}},
        color={255,153,0},
        thickness=0.5));
    connect(supplyTube.portA, simpleFan.portB) annotation (Line(
        points={{-22,30},{86,30}},
        color={255,153,0},
        thickness=0.5));
    connect(moistureRecovery.mixingRatio, boundary1.mixingRatio_in) annotation
      (Line(points={{69,24},{82,24},{82,18},{114,18},{114,30},{118,30}}, color=
            {0,0,127}));
    connect(moistureRecovery.T_supply, boundary1.T_in) annotation (Line(points=
            {{69,16},{116,16},{116,26},{118,26}}, color={0,0,127}));
    connect(ventilationController.V_flow, simpleFan.V_flow_in)
      annotation (Line(points={{3,56},{94,56},{94,40}}, color={0,0,127}));
    annotation (
      Icon(coordinateSystem(preserveAspectRatio=false)),
      Diagram(coordinateSystem(preserveAspectRatio=false)),
      experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
  end VentilationChannel;

  model VentilationUnit "Ventilation for 4 rooms: one channel (heat recovery + controller + moisture) per room"
    parameter Modelica.Units.SI.Volume V_rooms[4] = {30.8, 52.8, 52.8, 105.6}
      "Room volumes. Order: bathroom, bedroom, kitchen, living room";

    VentilationChannel channel[4](V_room=V_rooms) "One air channel per room"
      annotation (Placement(transformation(extent={{-20,-20},{20,20}})));
    outer TIL.SystemInformationManager sim "Comes from the model around it";

    VentilationPorts ventilationPorts(
      supply(each gasType=sim.gasType1),
      exhaust(each gasType=sim.gasType1)) "Plug to the house"
      annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
    Modelica.Blocks.Interfaces.RealInput occupancy[4]
      "Persons per room. Order: bathroom, bedroom, kitchen, living room"
      annotation (Placement(transformation(extent={{-20,-20},{20,20}}, rotation=90, origin={-40,-120})));
    Modelica.Blocks.Interfaces.RealInput TOutdoor(unit="K") "Outdoor temperature"
      annotation (Placement(transformation(extent={{-20,-20},{20,20}}, rotation=90, origin={40,-120})));
  equation
    for i in 1:4 loop
      connect(channel[i].gasPortSupply, ventilationPorts.supply[i]);
      connect(channel[i].gasPortExhaust, ventilationPorts.exhaust[i]);
      connect(occupancy[i], channel[i].Occupancy);
      connect(TOutdoor, channel[i].Toutdoor);
    end for;
    annotation (Icon(graphics={
          Rectangle(extent={{-100,100},{100,-100}}, lineColor={255,153,0},
            fillColor={255,255,255}, fillPattern=FillPattern.Solid),
          Text(extent={{-90,40},{90,-40}}, textString="Vent\nUnit", lineColor={255,153,0})}));
  end VentilationUnit;

  model HouseVentilation
    extends House(
      Kitchen(
        phiInitial=40,
              useVentilation=true,room_volume(fixedInitialPressure=false)),
      BathroomPlaceholder(
        phiInitial=40,    useVentilation=true,room_volume(fixedInitialPressure=false)),
      Bedroom(
        phiInitial=40,
              useVentilation=true,room_volume(fixedInitialPressure=false)),
      LivingRoom(
        phiInitial=40,
                 useVentilation=true,room_volume(fixedInitialPressure=false)));
  VentilationPorts ventilationPorts(
    supply(each gasType=gasType),
    exhaust(each gasType=gasType))
    annotation (Placement(transformation(extent={{200,-200},{220,-180}}),
        iconTransformation(extent={{-10,-110},{10,-90}})));
  equation
    connect(LivingRoom.gasPortA, ventilationPorts.supply[4]) annotation (Line(
        points={{31.6,-24},{210,-24},{210,-154},{210.05,-154},{210.05,-189.95}},
        color={255,153,0},
        thickness=0.5));
    connect(Kitchen.gasPortA, ventilationPorts.supply[3]) annotation (Line(
        points={{-120.4,-24},{210,-24},{210,-120},{210.05,-120},{210.05,-189.95}},
        color={255,153,0},
        thickness=0.5));
    connect(BathroomPlaceholder.gasPortA, ventilationPorts.supply[1]) annotation
      (Line(
        points={{-20.4,76},{210.05,76},{210.05,-189.95}},
        color={255,153,0},
        thickness=0.5));
    connect(Bedroom.gasPortA, ventilationPorts.supply[2]) annotation (Line(
        points={{79.6,76},{210.05,76},{210.05,-189.95}},
        color={255,153,0},
        thickness=0.5));
    connect(BathroomPlaceholder.gasPortB, ventilationPorts.exhaust[1])
      annotation (Line(
        points={{-20.4,64},{210,64},{210,20},{210.05,20},{210.05,-189.95}},
        color={255,153,0},
        thickness=0.5));
    connect(Bedroom.gasPortB, ventilationPorts.exhaust[2]) annotation (Line(
        points={{79.6,64},{210,64},{210,44},{210.05,44},{210.05,-189.95}},
        color={255,153,0},
        thickness=0.5));
    connect(Kitchen.gasPortB, ventilationPorts.exhaust[3]) annotation (Line(
        points={{-120.4,-36},{210,-36},{210,-82},{210.05,-82},{210.05,-189.95}},
        color={255,153,0},
        thickness=0.5));
    connect(LivingRoom.gasPortB, ventilationPorts.exhaust[4]) annotation (Line(
        points={{31.6,-36},{210,-36},{210,-54},{210.05,-54},{210.05,-189.95}},
        color={255,153,0},
        thickness=0.5));
  end HouseVentilation;

  model HouseEnviromentVentilation
    HouseVentilation
          houseVentilation(
                gasType=sim.gasType1, liquidType=sim.liquidType1)
                annotation (Placement(transformation(extent={{-22,-20},{22,20}})));
    Modelica.Blocks.Sources.BooleanExpression SaunaOn
      annotation (Placement(transformation(extent={{-62,74},{-42,94}})));
    Modelica.Blocks.Sources.TimeTable OccupancyBathroom(table=[0,0; 7200,0; 7201,2;
          14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-88,52})));
    Modelica.Blocks.Sources.TimeTable OccupancyBedroom(table=[0,0; 7200,0; 7201,2;
          14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-88,20})));
    Modelica.Blocks.Sources.TimeTable OccupancyKitchen(table=[0,0; 7200,0; 7201,2;
          14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-88,-12})));
    Modelica.Blocks.Sources.TimeTable OccupancyLivingRoom(table=[0,0; 7200,0; 7201,
          2; 14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-88,-44})));
    Modelica.Blocks.Sources.TimeTable OccupancyGarage(table=[0,0; 7200,0; 7201,2;
          14400,2; 14401,0; 86400,0]) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-88,-76})));
    Modelica.Blocks.Sources.TimeTable OccupancySauna(table=[0,0; 7200,0; 7201,2; 14400,
          2; 14401,0; 86400,0]) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=0,
          origin={-88,84})));
    Modelica.Blocks.Sources.TimeTable PelBathroom(table=[0.0,0; 28799,0; 28800,50;
          61200,300; 86400,50])
      annotation (Placement(transformation(extent={{-60,42},{-40,62}})));
    Modelica.Blocks.Sources.TimeTable PelBedroom(table=[0.0,0; 28799,0; 28800,50;
          61200,300; 86400,50])
      annotation (Placement(transformation(extent={{-60,10},{-40,30}})));
    Modelica.Blocks.Sources.TimeTable PelKitchen(table=[0.0,0; 28799,0; 28800,50;
          61200,300; 86400,50])
      annotation (Placement(transformation(extent={{-60,-22},{-40,-2}})));
    Modelica.Blocks.Sources.TimeTable PelLivingroom(table=[0.0,0; 28799,0; 28800,50;
          61200,300; 86400,50])
      annotation (Placement(transformation(extent={{-60,-54},{-40,-34}})));
    Modelica.Blocks.Sources.TimeTable PelGarage(table=[0.0,0; 28799,0; 28800,50; 61200,
          300; 86400,50])
      annotation (Placement(transformation(extent={{-60,-86},{-40,-66}})));
    Modelica.Blocks.Sources.RealExpression TOutdoor(y=271.15)
      annotation (Placement(transformation(extent={{-8,74},{12,94}})));
    Modelica.Blocks.Sources.RealExpression TGround(y=278.15)
      annotation (Placement(transformation(extent={{-10,-84},{10,-64}})));
    TIL.LiquidComponents.Boundaries.BoundaryOverdetermined bathroomHeatIn(
      liquidType=sim.liquidType1,
      pFixed=200000,
      m_flowFixed=-0.05,
      TFixed=308.15)
      annotation (Placement(transformation(extent={{98,92},{106,112}})));
    TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined bathroomHeatOut(
        liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{98,62},{106,82}})));
    inner TIL.SystemInformationManager sim(redeclare
        TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
        TILMedia.Liquid.Types.TILMedia_Water liquidType1)
      annotation (Placement(transformation(extent={{66,80},{86,100}})));
    TIL.LiquidComponents.Boundaries.BoundaryOverdetermined bedroomHeatIn(
      liquidType=sim.liquidType1,
      pFixed=200000,
      m_flowFixed=-0.05,
      TFixed=308.15)
      annotation (Placement(transformation(extent={{98,32},{106,52}})));
    TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined bedroomHeatOut(
        liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{98,2},{106,22}})));
    TIL.LiquidComponents.Boundaries.BoundaryOverdetermined kitchenHeatIn(
      liquidType=sim.liquidType1,
      pFixed=200000,
      m_flowFixed=-0.05,
      TFixed=308.15)
      annotation (Placement(transformation(extent={{98,-18},{106,2}})));
    TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined kitchenHeatOut(
        liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{98,-48},{106,-28}})));
    TIL.LiquidComponents.Boundaries.BoundaryOverdetermined livingroomHeatIn(
      liquidType=sim.liquidType1,
      pFixed=200000,
      m_flowFixed=-0.05,
      TFixed=308.15)
      annotation (Placement(transformation(extent={{98,-78},{106,-58}})));
    TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined livingroomHeatOut(
        liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{98,-108},{106,-88}})));
    Modelica.Blocks.Sources.BooleanStep SaunaOnStep(startTime=14400)
      annotation (Placement(transformation(extent={{-16,46},{4,66}})));
    VentilationUnit ventilationUnit
      annotation (Placement(transformation(extent={{54,-20},{74,0}})));
  equation
    // Occupancy: sauna, bathroom, bedroom, kitchen, living room, garage.
    connect(OccupancySauna.y, houseVentilation.houseInputs.occupancy[1]);
    connect(OccupancyBathroom.y, houseVentilation.houseInputs.occupancy[2]);
    connect(OccupancyBedroom.y, houseVentilation.houseInputs.occupancy[3]);
    connect(OccupancyKitchen.y, houseVentilation.houseInputs.occupancy[4]);
    connect(OccupancyLivingRoom.y, houseVentilation.houseInputs.occupancy[5]);
    connect(OccupancyGarage.y, houseVentilation.houseInputs.occupancy[6]);

    // Electrical loads: bathroom, bedroom, kitchen, living room, garage.
    connect(PelBathroom.y, houseVentilation.houseInputs.P_el[1]);
    connect(PelBedroom.y, houseVentilation.houseInputs.P_el[2]);
    connect(PelKitchen.y, houseVentilation.houseInputs.P_el[3]);
    connect(PelLivingroom.y, houseVentilation.houseInputs.P_el[4]);
    connect(PelGarage.y, houseVentilation.houseInputs.P_el[5]);

    // Sauna control and environmental temperatures.
    connect(SaunaOnStep.y, houseVentilation.houseInputs.saunaOn);
    connect(TOutdoor.y, houseVentilation.houseInputs.TOutdoor);
    connect(TGround.y, houseVentilation.houseInputs.TGround);

    // All four heating circuits share the same two liquid boundaries.

    connect(bathroomHeatIn.port, houseVentilation.houseHeatingInput.supplyP[1]);
    connect(bedroomHeatIn.port, houseVentilation.houseHeatingInput.supplyP[2]);
    connect(kitchenHeatIn.port, houseVentilation.houseHeatingInput.supplyP[3]);
    connect(livingroomHeatIn.port, houseVentilation.houseHeatingInput.supplyP[4]);
    connect(houseVentilation.houseHeatingInput.returnP[1], bathroomHeatOut.port);
    connect(houseVentilation.houseHeatingInput.returnP[2], bedroomHeatOut.port);
    connect(houseVentilation.houseHeatingInput.returnP[3], kitchenHeatOut.port);
    connect(houseVentilation.houseHeatingInput.returnP[4], livingroomHeatOut.port);

    connect(houseVentilation.ventilationPorts, ventilationUnit.ventilationPorts)
      annotation (Line(points={{0,-10},{54,-10}}, color={255,153,0}));
    connect(TOutdoor.y, ventilationUnit.TOutdoor)
      annotation (Line(points={{13,84},{68,84},{68,-22}}, color={0,0,127}));
    connect(OccupancyBathroom.y, ventilationUnit.occupancy[1]) annotation (Line(
          points={{-77,52},{-66,52},{-66,-60},{60,-60},{60,-22.75}}, color={0,0,
            127}));
    connect(OccupancyBedroom.y, ventilationUnit.occupancy[2]) annotation (Line(
          points={{-77,20},{-66,20},{-66,-60},{60,-60},{60,-22.25}}, color={0,0,
            127}));
    connect(OccupancyKitchen.y, ventilationUnit.occupancy[3]) annotation (Line(
          points={{-77,-12},{-66,-12},{-66,-60},{60,-60},{60,-21.75}}, color={0,
            0,127}));
    connect(OccupancyLivingRoom.y, ventilationUnit.occupancy[4]) annotation (
        Line(points={{-77,-44},{-66,-44},{-66,-60},{60,-60},{60,-21.25}}, color
          ={0,0,127}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end HouseEnviromentVentilation;
end ventilation;
