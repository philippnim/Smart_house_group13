within SmartHouse;
package TestHouses
  model TestSauna
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
    Modelica.Blocks.Sources.TimeTable Occupancy(table=[0,0; 7200,0; 7201,2; 14400,
          2; 14401,0; 86400,0])
      annotation (Placement(transformation(extent={{84,-28},{64,-8}})));
    TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_outside(TFixed=278.15)
      annotation (Placement(transformation(extent={{-80,-22},{-72,-10}})));
    Boundaries.Horizontal.GroundFloor groundFloor(
      length=2,
      width=3,
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
      enableFloorHeating=false,
      pipeLength=133,
      innerDiameter=0.012,
      wallThickness=0.002,
      nbTubes=1,
      nbCells=10,
      alpha_pipe=1000,
      T_init=293.15,
      liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{-30,-76},{-10,-56}})));
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
      lengthTotal=10,
      heightTotal=2.5,
      lengthWindow=1,
      heightWindow=2.5,
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
      TFixed=278.15,
      boundaryType="p, V_flow",
      pFixed=101300,
      V_flowFixed(displayUnit="m3/h") = -0.0041666666666667)
      annotation (Placement(transformation(extent={{74,28},{82,48}})));
    TIL.GasComponents.Boundaries.BoundaryUnderdetermined
      boundaryUnderdetermined_circulation(gasType=sim.gasType1)
      annotation (Placement(transformation(extent={{74,2},{82,22}})));
    Boundaries.Horizontal.Roof roof(
      length=2,
      width=3,
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
    Rooms.Sauna sauna(yMax=15000, useVentilation=true)
      annotation (Placement(transformation(extent={{-4,-14},{16,6}})));
    Modelica.Blocks.Sources.BooleanConstant booleanConstant
      annotation (Placement(transformation(extent={{-118,18},{-98,38}})));
  equation
    connect(heatBoundary_floor.heatPort, groundFloor.heatPort_down) annotation (
        Line(
        points={{-20,-92},{-20,-75.6}},
        color={204,0,0},
        thickness=0.5));
    connect(solarRadiation.y, compositeWall.RadiationInput)
      annotation (Line(points={{-75,-68},{-54,-68},{-54,-28}}, color={0,0,127}));
    connect(compositeWall.solarGains, groundFloor.heatPort_surfaceConnection)
      annotation (Line(
        points={{-46,-26},{-46,-59.6},{-29.6,-59.6}},
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
    connect(roof.heatPort_down, sauna.heatPort_ceiling) annotation (Line(
        points={{-10,58.4},{-10,5.4},{-3.4,5.4}},
        color={204,0,0},
        thickness=0.5));
    connect(compositeWall.heatPort_B, sauna.heatPort_walls) annotation (Line(
        points={{-40,-16},{-14,-16},{-14,-4},{-3.4,-4}},
        color={204,0,0},
        thickness=0.5));
    connect(groundFloor.heatPort_up, sauna.heatPort_floor) annotation (Line(
        points={{-20,-56.4},{-20,-13.4},{-3.4,-13.4}},
        color={204,0,0},
        thickness=0.5));
    connect(Occupancy.y, sauna.occupancy) annotation (Line(points={{63,-18},{18,
            -18},{18,-20},{13,-20},{13,-15}}, color={0,0,127}));
    connect(sauna.gasPortB, boundaryUnderdetermined_circulation.port)
      annotation (Line(
        points={{16,-10},{58,-10},{58,12},{78,12}},
        color={255,153,0},
        thickness=0.5));
    connect(sauna.gasPortA, boundaryOverdetermined_circulation.port)
      annotation (Line(
        points={{16,2},{56,2},{56,38},{78,38}},
        color={255,153,0},
        thickness=0.5));
    connect(booleanConstant.y, sauna.SaunaSwitch) annotation (Line(points={{-97,
            28},{-40,28},{-40,6},{16.4,6},{16.4,5}}, color={255,0,255}));
    annotation (
      Icon(coordinateSystem(preserveAspectRatio=false)),
      Diagram(coordinateSystem(preserveAspectRatio=false)),
      experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
  end TestSauna;

  model TestHouseBathroom
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
      annotation (Placement(transformation(extent={{20,10},{40,30}})));
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
      TFixed=278.15,
      boundaryType="p, V_flow",
      pFixed=101300,
      V_flowFixed(displayUnit="m3/h") = -0.0041666666666667)
      annotation (Placement(transformation(extent={{74,28},{82,48}})));
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
    Rooms.Bathroom bathroom(
      A_floor=10,
      h=2,
      phiInitial=50,
      mixingRatioInitial={0.2,0.8},
      initialPressure=100000,
      initialTemperature=298.15,
      gasType=sim.gasType1,
      fractionElectricToHeat=0.7,
      liquidType=sim.liquidType1)
      annotation (Placement(transformation(extent={{-8,-22},{12,-2}})));
    TIL.LiquidComponents.Boundaries.BoundaryUnderdetermined
      boundaryUnderdetermined1
      annotation (Placement(transformation(extent={{98,-38},{106,-18}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary(
      boundaryType="V_flow",
      V_flowFixed=1e-4,
      TFixed=313.15)
      annotation (Placement(transformation(extent={{98,-10},{106,10}})));
  equation
    connect(heatBoundary_wall.heatPort, internalWall.heatPort_A_air) annotation (
        Line(
        points={{-74,12},{-60,12}},
        color={204,0,0},
        thickness=0.5));
    connect(heatBoundary_floor.heatPort, groundFloor.heatPort_down) annotation (
        Line(
        points={{-20,-92},{-20,-75.6}},
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
    connect(compositeWall.heatPort_A, heatBoundary_outside.heatPort) annotation (
        Line(
        points={{-60,-16},{-76,-16}},
        color={204,0,0},
        thickness=0.5));
    connect(roof.heatPort_up, heatBoundary_ceiling.heatPort) annotation (Line(
        points={{-10,77.6},{-10,92},{0,92},{0,100}},
        color={204,0,0},
        thickness=0.5));
    connect(boundaryOverdetermined_circulation.port, bathroom.gasPortA)
      annotation (Line(
        points={{78,38},{46,38},{46,-6},{11.6,-6}},
        color={255,153,0},
        thickness=0.5));
    connect(boundaryUnderdetermined_circulation.port, bathroom.gasPortB)
      annotation (Line(
        points={{78,12},{50,12},{50,-18},{11.6,-18}},
        color={255,153,0},
        thickness=0.5));
    connect(bathroom.Temperature_sensor, realValue.numberPort)
      annotation (Line(points={{5,-1},{5,20},{18.5,20}}, color={0,0,127}));
    connect(bathroom.heatPort_walls, compositeWall.heatPort_B) annotation (Line(
        points={{-7.4,-12},{-34,-12},{-34,-16},{-40,-16}},
        color={204,0,0},
        thickness=0.5));
    connect(bathroom.heatPort_walls, internalWall.heatPort_B_air) annotation (
        Line(
        points={{-7.4,-12},{-34,-12},{-34,12},{-40,12}},
        color={204,0,0},
        thickness=0.5));
    connect(bathroom.heatPort_ceiling, roof.heatPort_down) annotation (Line(
        points={{-7.4,-2.6},{-12,-2.6},{-12,54},{-10,54},{-10,58.4}},
        color={204,0,0},
        thickness=0.5));
    connect(bathroom.heatPort_floor, groundFloor.heatPort_up) annotation (Line(
        points={{-7.4,-21.4},{-20,-21.4},{-20,-56.4}},
        color={204,0,0},
        thickness=0.5));
    connect(Pel.y, bathroom.P_el) annotation (Line(points={{63,-44},{10,-44},{
            10,-40},{3,-40},{3,-23}}, color={0,0,127}));
    connect(Occupancy.y, bathroom.occupancy) annotation (Line(points={{63,-18},
            {82,-18},{82,-38},{9,-38},{9,-23}}, color={0,0,127}));
    connect(boundaryUnderdetermined1.port, bathroom.BWWRuecklauf) annotation (
        Line(
        points={{102,-28},{90,-28},{90,-2},{44,-2},{44,-15},{12,-15}},
        color={0,170,238},
        thickness=0.5));
    connect(boundary.port, bathroom.BWWVorlauf) annotation (Line(
        points={{102,0},{86,0},{86,-4},{48,-4},{48,-9},{12,-9}},
        color={0,170,238},
        thickness=0.5));
    annotation (
      Icon(coordinateSystem(preserveAspectRatio=false)),
      Diagram(coordinateSystem(preserveAspectRatio=false)),
      experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
  end TestHouseBathroom;

  model SimpleRoom "One room as RC network - Modelica Standard Library only"
    import SI = Modelica.Units.SI;

    // Geometry and parameters (living room as example)
    parameter SI.Area A_floor = 42 "Floor area";
    parameter SI.Height h = 2.5 "Room height";
    parameter SI.ThermalConductance UA_env = 30 "Envelope: sum of U*A (walls, windows, roof, floor)";
    parameter SI.ThermalConductance G_vent = 3.5 "Ventilation: m_flow*cp*(1-eta_HRV), 0.5 ACH, eta=0.8";
    parameter SI.ThermalConductance G_airMass = 8*3*A_floor "Convection air <-> surfaces, h=8 W/m2K";
    parameter SI.HeatCapacity C_air = A_floor*h*1.2*1005 "Room air";
    parameter SI.HeatCapacity C_mass = 150e3*A_floor "Walls, floor, furniture (150 kJ/m2K)";

    // Capacitances
    Modelica.Thermal.HeatTransfer.Components.HeatCapacitor air(C=C_air, T(start=293.15, fixed=true))
      annotation (Placement(transformation(extent={{-10,10},{10,30}})));
    Modelica.Thermal.HeatTransfer.Components.HeatCapacitor mass(C=C_mass, T(start=293.15, fixed=true))
      annotation (Placement(transformation(extent={{50,10},{70,30}})));

    // Resistances
    Modelica.Thermal.HeatTransfer.Components.ThermalConductor envelope(G=UA_env)
      annotation (Placement(transformation(extent={{-40,10},{-20,30}})));
    Modelica.Thermal.HeatTransfer.Components.ThermalConductor ventilation(G=G_vent)
      annotation (Placement(transformation(extent={{-40,-30},{-20,-10}})));
    Modelica.Thermal.HeatTransfer.Components.ThermalConductor airToMass(G=G_airMass)
      annotation (Placement(transformation(extent={{20,-10},{40,10}})));

    // Outdoor temperature (replace with weather data later, e.g. CombiTimeTable)
    Modelica.Blocks.Sources.Sine T_out(amplitude=5, f=1/86400, offset=273.15 - 10)
      annotation (Placement(transformation(extent={{-100,-10},{-80,10}})));
    Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature outdoor
      annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));

    // Heat flow sources
    Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow gains(Q_flow=400) "Occupants, appliances, lighting"
      annotation (Placement(transformation(extent={{-40,-60},{-20,-40}})));
    Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow floorHeating
      annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=90, origin={90,-30})));

    // Control: PI controller keeps room air at 21 degC
    Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor T_room
      annotation (Placement(transformation(extent={{-10,-10},{10,10}}, rotation=90, origin={30,50})));
    Modelica.Blocks.Sources.Constant T_set(k=273.15 + 21)
      annotation (Placement(transformation(extent={{0,70},{20,90}})));
    Modelica.Blocks.Continuous.LimPID PI(
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      k=1000, Ti=3600, yMax=3000, yMin=0) "Output = heating power in W"
      annotation (Placement(transformation(extent={{50,70},{70,90}})));

  equation
    // Outdoor -> envelope and ventilation -> room air
    connect(T_out.y, outdoor.T)
      annotation (Line(points={{-79,0},{-72,0}}, color={0,0,127}));
    connect(outdoor.port, envelope.port_a)
      annotation (Line(points={{-50,0},{-46,0},{-46,20},{-40,20}}, color={191,0,0}));
    connect(envelope.port_b, air.port)
      annotation (Line(points={{-20,20},{-14,20},{-14,0},{0,0},{0,10}}, color={191,0,0}));
    connect(outdoor.port, ventilation.port_a)
      annotation (Line(points={{-50,0},{-46,0},{-46,-20},{-40,-20}}, color={191,0,0}));
    connect(ventilation.port_b, air.port)
      annotation (Line(points={{-20,-20},{-14,-20},{-14,0},{0,0},{0,10}}, color={191,0,0}));

    // Room air <-> thermal mass
    connect(air.port, airToMass.port_a)
      annotation (Line(points={{0,10},{0,0},{20,0}}, color={191,0,0}));
    connect(airToMass.port_b, mass.port)
      annotation (Line(points={{40,0},{60,0},{60,10}}, color={191,0,0}));

    // Gains into air, floor heating into mass
    connect(gains.port, air.port)
      annotation (Line(points={{-20,-50},{-14,-50},{-14,0},{0,0},{0,10}}, color={191,0,0}));
    connect(floorHeating.port, mass.port)
      annotation (Line(points={{90,-20},{90,0},{60,0},{60,10}}, color={191,0,0}));

    // Control loop
    connect(air.port, T_room.port)
      annotation (Line(points={{0,10},{0,0},{14,0},{14,36},{30,36},{30,40}}, color={191,0,0}));
    connect(T_set.y, PI.u_s)
      annotation (Line(points={{21,80},{48,80}}, color={0,0,127}));
    connect(T_room.T, PI.u_m)
      annotation (Line(points={{30,61},{30,64},{60,64},{60,68}}, color={0,0,127}));
    connect(PI.y, floorHeating.Q_flow)
      annotation (Line(points={{71,80},{100,80},{100,-50},{90,-50},{90,-42}}, color={0,0,127}));

    annotation (
      Diagram(coordinateSystem(extent={{-110,-70},{110,100}})),
      experiment(StopTime=604800, Interval=600));
  end SimpleRoom;

  model TestShower
    Rooms.ShowerSimpleModel showerSimpleModel(
      liquidType=sim.liquidType1,
      gasType=sim.gasType1,
      p_ColdWater=200000,
      T_coldWater=283.15,
      T_shower=313.15,
      Vdot_shower=0.0001,
      k_Temp=1,
      Ti_Temp=0.5,
      k_Vdot=1,
      Ti_Vdot=0.5)
      annotation (Placement(transformation(extent={{-8,-6},{12,14}})));
    TIL.GasComponents.Volumes.Volume volume(volume=4, nPorts=2)
      annotation (Placement(transformation(extent={{-82,2},{-74,18}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary(
      boundaryType="p",
      pFixed=200000,
      TFixed=333.15)
      annotation (Placement(transformation(extent={{82,10},{90,30}})));
    inner TIL.SystemInformationManager sim(redeclare
        TILMedia.Gas.Types.VDI4670_MoistAir gasType1, redeclare
        TILMedia.Liquid.Types.TILMedia_Water liquidType1)
      annotation (Placement(transformation(extent={{-66,40},{-46,60}})));
    TIL.LiquidComponents.Boundaries.Boundary boundary1(boundaryType="p", pFixed
        =200000)
      annotation (Placement(transformation(extent={{58,-16},{66,4}})));
    TIL.LiquidComponents.Pumps.SimplePump simplePump(presetVariableType="dp",
        dpFixed=20000)
      annotation (Placement(transformation(extent={{36,32},{52,48}})));
  equation
    connect(volume.portArray[1], showerSimpleModel.ShowerAirIn) annotation (
        Line(
        points={{-78,1.95},{-78,-2},{-14,-2},{-14,12},{-8,12}},
        color={255,153,0},
        thickness=0.5));
    connect(volume.portArray[2], showerSimpleModel.ShowerAirOut) annotation (
        Line(
        points={{-78,2.45},{-78,-4},{-8,-4}},
        color={255,153,0},
        thickness=0.5));
    connect(boundary1.port, showerSimpleModel.BWWRuecklauf) annotation (Line(
        points={{62,-6},{16,-6},{16,-4},{12,-4}},
        color={0,170,238},
        thickness=0.5));
    connect(boundary.port, simplePump.portA) annotation (Line(
        points={{86,20},{44,20},{44,32}},
        color={0,170,238},
        thickness=0.5));
    connect(simplePump.portB, showerSimpleModel.BWWVorlauf) annotation (Line(
        points={{44,48},{44,52},{18,52},{18,10},{12.2,10}},
        color={0,170,238},
        thickness=0.5));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end TestShower;

  model TestHousePhilipp
    Rooms.UnheatedRoom unheatedRoom1(
      A_floor=20,
      h=3,
      initialPressure(displayUnit="bar"),
      initialTemperature=296.15,
      enableInternalMass=false,
      gasType=sim.gasType1,
      useVentilation=true,
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
      annotation (Placement(transformation(extent={{20,10},{40,30}})));
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
      TFixed=278.15,
      boundaryType="p, V_flow",
      pFixed=101300,
      V_flowFixed(displayUnit="m3/h") = -0.0041666666666667)
      annotation (Placement(transformation(extent={{74,28},{82,48}})));
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
  equation
    connect(unheatedRoom1.Temperature_sensor, realValue.numberPort)
      annotation (Line(points={{11,9},{11,20},{18.5,20}}, color={0,0,127}));
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
    connect(boundaryOverdetermined_circulation.port, unheatedRoom1.gasPortA)
      annotation (Line(
        points={{78,38},{46,38},{46,4},{17.6,4}},
        color={255,153,0},
        thickness=0.5));
    connect(boundaryUnderdetermined_circulation.port, unheatedRoom1.gasPortB)
      annotation (Line(
        points={{78,12},{50,12},{50,-8},{17.6,-8}},
        color={255,153,0},
        thickness=0.5));
    connect(roof.heatPort_up, heatBoundary_ceiling.heatPort) annotation (Line(
        points={{-10,77.6},{-10,92},{0,92},{0,100}},
        color={204,0,0},
        thickness=0.5));
    connect(roof.heatPort_down, unheatedRoom1.heatPort_ceiling) annotation (Line(
        points={{-10,58.4},{-10,7.4},{-1.4,7.4}},
        color={204,0,0},
        thickness=0.5));
    annotation (
      Icon(coordinateSystem(preserveAspectRatio=false)),
      Diagram(coordinateSystem(preserveAspectRatio=false)),
      experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
  end TestHousePhilipp;
end TestHouses;
