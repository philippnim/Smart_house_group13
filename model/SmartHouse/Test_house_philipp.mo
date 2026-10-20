within SmartHouse;
model Test_house_philipp
  Rooms.UnheatedRoom unheatedRoom1(
    A_floor=20,
    h=3,
    initialPressure(displayUnit="bar"),
    initialTemperature=296.15,
    gasType=sim.gasType1,
    useVentilation=false,
    redeclare TIL.Utilities.Units.Conversions.Units.degC unitTemp)
    annotation (Placement(transformation(extent={{-2,-12},{18,8}})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_wall(thermalResistance=
        0.37) annotation (Placement(transformation(extent={{-58,-6},{-28,2}})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_ceiling(
      thermalResistance=0.38) annotation (Placement(transformation(
        extent={{-15,-4},{15,4}},
        rotation=270,
        origin={-7,36})));
  TIL.OtherComponents.Thermal.HeatResistor heatResistor_floor(thermalResistance
      =0.50) annotation (Placement(transformation(
        extent={{-15,-4},{15,4}},
        rotation=90,
        origin={-7,-40})));
  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_wall(TFixed=293.15)
    annotation (Placement(transformation(extent={{-76,-8},{-68,4}})));
  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_ceiling(TFixed=293.15)
    annotation (Placement(transformation(
        extent={{-4,-6},{4,6}},
        rotation=270,
        origin={-8,68})));
  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_floor(TFixed=303.15)
    annotation (Placement(transformation(
        extent={{-4,-6},{4,6}},
        rotation=90,
        origin={-8,-72})));
  inner TIL.SystemInformationManager sim(redeclare
      TILMedia.Gas.Types.VDI4670_MoistAir gasType1)
    annotation (Placement(transformation(extent={{80,80},{100,100}})));
  Modelica.Blocks.Interaction.Show.RealValue realValue
    annotation (Placement(transformation(extent={{20,10},{40,30}})));
  Modelica.Blocks.Sources.TimeTable Pel(table=[0.0,50; 28800,50; 61200,300;
        86400,50])
    annotation (Placement(transformation(extent={{82,-84},{62,-64}})));
  Modelica.Blocks.Sources.TimeTable Occupancy(table=[0,0; 28800,0; 28801,2;
        61200,2; 61201,0; 86400,0])
    annotation (Placement(transformation(extent={{82,-50},{62,-30}})));
equation
  connect(heatResistor_wall.heatPortB, unheatedRoom1.heatPort_walls)
    annotation (Line(
      points={{-28,-2},{-1.4,-2}},
      color={204,0,0},
      thickness=0.5));
  connect(heatBoundary_wall.heatPort, heatResistor_wall.heatPortA) annotation (
      Line(
      points={{-72,-2},{-58,-2}},
      color={204,0,0},
      thickness=0.5));
  connect(heatBoundary_ceiling.heatPort, heatResistor_ceiling.heatPortA)
    annotation (Line(
      points={{-8,68},{-8,56},{-7,56},{-7,51}},
      color={204,0,0},
      thickness=0.5));
  connect(heatBoundary_floor.heatPort, heatResistor_floor.heatPortA)
    annotation (Line(
      points={{-8,-72},{-8,-62},{-7,-62},{-7,-55}},
      color={204,0,0},
      thickness=0.5));
  connect(heatResistor_ceiling.heatPortB, unheatedRoom1.heatPort_ceiling)
    annotation (Line(
      points={{-7,21},{-7,7.4},{-1.4,7.4}},
      color={204,0,0},
      thickness=0.5));
  connect(unheatedRoom1.heatPort_floor, heatResistor_floor.heatPortB)
    annotation (Line(
      points={{-1.4,-11.4},{-4,-11.4},{-4,-22},{-7,-22},{-7,-25}},
      color={204,0,0},
      thickness=0.5));
  connect(unheatedRoom1.Temperature_sensor, realValue.numberPort)
    annotation (Line(points={{11,9},{11,20},{18.5,20}}, color={0,0,127}));
  connect(Occupancy.y, unheatedRoom1.occupancy)
    annotation (Line(points={{61,-40},{15,-40},{15,-13}}, color={0,0,127}));
  connect(Pel.y, unheatedRoom1.P_el)
    annotation (Line(points={{61,-74},{9,-74},{9,-13}}, color={0,0,127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
end Test_house_philipp;
