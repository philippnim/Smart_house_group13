within ;
package smart_house
  model Test
    Room room(A_floor=20, h=2)
      annotation (Placement(transformation(extent={{-8,-8},{12,12}})));
    Wall Insidewall(Area=4, U=1.5)
      annotation (Placement(transformation(extent={{-28,-8},{-8,12}})));
    Room room1(A_floor=20, h=2)
      annotation (Placement(transformation(extent={{-48,-8},{-28,12}})));
    Wall Outsidewall2(Area=4) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={2,22})));
    Wall Roof(Area=40, U=0.13) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={0,84})));
    Wall Outsidewall3(Area=4) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=180,
          origin={22,2})));
    Wall Outsidewall4(Area=4) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={2,-18})));
    Wall Outsidewall5(Area=4) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={-38,-18})));
    Wall Outsidewall6(Area=4)
      annotation (Placement(transformation(extent={{-68,-8},{-48,12}})));
    Wall Outsidewall1(Area=4) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={-38,22})));
    Wall Floor annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={0,-74})));
    Modelica.Thermal.HeatTransfer.Sources.FixedTemperature Outside(T=278.15)
      annotation (Placement(transformation(extent={{-96,38},{-76,58}})));
    Wall Roof1(Area=40, U=0.13) annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={26,84})));
    Wall Floor1 annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={28,-74})));
  equation
    connect(room.wallLeft, Insidewall.heatPortB) annotation (Line(
        points={{-7.6,2},{-8.4,2}},
        color={204,0,0},
        thickness=0.5));
    connect(Insidewall.heatPortA, room1.wallRight) annotation (Line(
        points={{-27.6,2},{-27.6,1},{-28.4,1},{-28.4,2}},
        color={204,0,0},
        thickness=0.5));
    connect(room.wallRight, Outsidewall3.heatPortB) annotation (Line(
        points={{11.6,2},{12.4,2}},
        color={204,0,0},
        thickness=0.5));
    connect(room.wallUp, Outsidewall2.heatPortA) annotation (Line(
        points={{2,11.6},{2,12.4}},
        color={204,0,0},
        thickness=0.5));
    connect(room.wallDown, Outsidewall4.heatPortB) annotation (Line(
        points={{2,-7.6},{2,-8.4}},
        color={204,0,0},
        thickness=0.5));
    connect(room1.wallDown, Outsidewall5.heatPortB) annotation (Line(
        points={{-38,-7.6},{-38,-8.4}},
        color={204,0,0},
        thickness=0.5));
    connect(room1.wallLeft, Outsidewall6.heatPortB) annotation (Line(
        points={{-47.6,2},{-48.4,2}},
        color={204,0,0},
        thickness=0.5));
    connect(room1.wallUp, Outsidewall1.heatPortA) annotation (Line(
        points={{-38,11.6},{-38,12.4}},
        color={204,0,0},
        thickness=0.5));
    connect(Outside.port, Outsidewall1.heatPortB) annotation (Line(points={{-76,
            48},{-38,48},{-38,31.6}}, color={191,0,0}));
    connect(Outsidewall2.heatPortB, Outside.port) annotation (Line(
        points={{2,31.6},{2,36},{-38,36},{-38,48},{-76,48}},
        color={204,0,0},
        thickness=0.5));
    connect(Outsidewall6.heatPortA, Outsidewall1.heatPortB) annotation (Line(
        points={{-67.6,2},{-72,2},{-72,48},{-38,48},{-38,31.6}},
        color={204,0,0},
        thickness=0.5));
    connect(Outsidewall5.heatPortA, Outside.port) annotation (Line(
        points={{-38,-27.6},{-38,-32},{-102,-32},{-102,62},{-72,62},{-72,48},{
            -76,48}},
        color={204,0,0},
        thickness=0.5));
    connect(Outsidewall4.heatPortA, Outside.port) annotation (Line(
        points={{2,-27.6},{2,-32},{-102,-32},{-102,62},{-72,62},{-72,48},{-76,
            48}},
        color={204,0,0},
        thickness=0.5));
    connect(Outsidewall3.heatPortA, Outside.port) annotation (Line(
        points={{31.6,2},{36,2},{36,-32},{-102,-32},{-102,62},{-72,62},{-72,48},
            {-76,48}},
        color={204,0,0},
        thickness=0.5));
    connect(Roof.heatPortB, Outside.port) annotation (Line(
        points={{0,93.6},{0,98},{-74,98},{-74,62},{-72,62},{-72,48},{-76,48}},
        color={204,0,0},
        thickness=0.5));
    connect(Floor.heatPortA, Outside.port) annotation (Line(
        points={{0,-83.6},{-72,-83.6},{-72,48},{-76,48}},
        color={204,0,0},
        thickness=0.5));
    connect(Roof1.heatPortB, Outside.port) annotation (Line(
        points={{26,93.6},{26,98},{-74,98},{-74,62},{-72,62},{-72,48},{-76,48}},
        color={204,0,0},
        thickness=0.5));
    connect(room1.Roof, Roof.heatPortA) annotation (Line(
        points={{-28.4,11.6},{-28.4,68},{0,68},{0,74.4}},
        color={204,0,0},
        thickness=0.5));
    connect(room.Roof, Roof1.heatPortA) annotation (Line(
        points={{11.6,11.6},{11.6,70},{26,70},{26,74.4}},
        color={204,0,0},
        thickness=0.5));
    connect(Floor1.heatPortA, Outside.port) annotation (Line(
        points={{28,-83.6},{28,-88},{-74,-88},{-74,-32},{-72,-32},{-72,48},{-76,
            48}},
        color={204,0,0},
        thickness=0.5));
    connect(room.Floor, Floor1.heatPortB) annotation (Line(
        points={{-7.6,-7.6},{-7.6,-40},{-8,-40},{-8,-48},{28,-48},{28,-64.4}},
        color={204,0,0},
        thickness=0.5));
    connect(room1.Floor, Floor.heatPortB) annotation (Line(
        points={{-47.6,-7.6},{-52,-7.6},{-52,-34},{0,-34},{0,-64.4}},
        color={204,0,0},
        thickness=0.5));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end Test;

  model SimpleRoom
    "One room as RC network - Modelica Standard Library only"
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

  model Wall
    import SI = Modelica.Units.SI;
    parameter SI.Area Area = 42 "Wall Area";
    parameter SI.CoefficientOfHeatTransfer U = 0.18 "Coefficient of heat transfer";
    parameter SI.ThermalConductance UA = Area*U "Total thermal conductance of the wall";
    Modelica.Thermal.HeatTransfer.Components.ThermalConductor thermalConductor(G=UA)
      annotation (


                  Placement(transformation(extent={{-8,-10},{12,10}})));
    TIL.Connectors.HeatPort heatPortA
      annotation (Placement(transformation(extent={{-106,-10},{-86,10}})));
    TIL.Connectors.HeatPort heatPortB
      annotation (Placement(transformation(extent={{86,-10},{106,10}})));
  equation
    connect(heatPortA, thermalConductor.port_a) annotation (Line(
        points={{-96,0},{-8,0}},
        color={204,0,0},
        thickness=0.5));
    connect(heatPortB, thermalConductor.port_b) annotation (Line(
        points={{96,0},{12,0}},
        color={204,0,0},
        thickness=0.5));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end Wall;
  annotation (uses(
      Modelica(version="4.1.0"),
      TIL(version="2025.1"),
      TILMedia(version="2025.1")));
end smart_house;
