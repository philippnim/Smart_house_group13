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
    Modelica.Blocks.Math.Gain personFlow(k=25/3600) "25 m3/h per person"
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
    Modelica.Blocks.Math.Gain sign(k=-1) "TIL: negative = into the room"
      annotation (Placement(transformation(extent={{60,-10},{80,10}})));
    Modelica.Blocks.Math.Max max1
      annotation (Placement(transformation(extent={{-20,36},{0,56}})));
    Modelica.Blocks.Math.Add add
      annotation (Placement(transformation(extent={{18,-10},{38,10}})));
  equation
    connect(occupancy, personFlow.u)
      annotation (Line(points={{-120,40},{-62,40}}, color={0,0,127}));
    // Swapped on purpose: measured humidity on u_s, setpoint on u_m -> more air when too humid
    connect(phi_room, humidityPI.u_s)
      annotation (Line(points={{-120,-40},{-62,-40}}, color={0,0,127}));
    connect(setpoint.y, humidityPI.u_m)
      annotation (Line(points={{-69,-80},{-50,-80},{-50,-52}}, color={0,0,127}));
    connect(sign.y, V_flow)
      annotation (Line(points={{81,0},{110,0}}, color={0,0,127}));
    connect(baseFlow.y, max1.u1) annotation (Line(points={{-39,70},{-30,70},{
            -30,52},{-22,52}}, color={0,0,127}));
    connect(personFlow.y, max1.u2)
      annotation (Line(points={{-39,40},{-22,40}}, color={0,0,127}));
    connect(max1.y, add.u1)
      annotation (Line(points={{1,46},{8,46},{8,6},{16,6}}, color={0,0,127}));
    connect(humidityPI.y, add.u2) annotation (Line(points={{-39,-40},{8,-40},{8,
            -6},{16,-6}}, color={0,0,127}));
    connect(add.y, sign.u)
      annotation (Line(points={{39,0},{58,0}}, color={0,0,127}));
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
end ventilation;
