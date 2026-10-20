within SmartHouse;
model TestHousePhilipp
  Rooms.UnheatedRoom unheatedRoom1(
    A_floor=20,
    h=3,
    initialPressure(displayUnit="bar"),
    initialTemperature=296.15,
    gasType=sim.gasType1,
    useVentilation=false,
    redeclare TIL.Utilities.Units.Conversions.Units.degC unitTemp)
    annotation (Placement(transformation(extent={{-2,-12},{18,8}})));
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
    annotation (Placement(transformation(extent={{-78,6},{-70,18}})));
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
  Modelica.Blocks.Sources.TimeTable Pel(table=[0.0,0; 28799,0; 28800,50; 61200,
        300; 86400,50])
    annotation (Placement(transformation(extent={{82,-84},{62,-64}})));
  Modelica.Blocks.Sources.TimeTable Occupancy(table=[0,0; 7200,0; 7201,2; 14400,
        2; 14401,0; 86400,0])
    annotation (Placement(transformation(extent={{82,-50},{62,-30}})));
  Boundaries.Walls.InternalWall internalWall(
    lengthWall=13,
    heightWall=3,
    phi_B(displayUnit="%"),
    thicknessWall=0.15,
    lambdaWall=0.7,
    rhoWall(displayUnit="kg/m3") = 1600,
    cpWall=1000)
    annotation (Placement(transformation(extent={{-58,2},{-38,22}})));
  Boundaries.Walls.ExternalWall externalWall(
    lengthWall=5,
    heightWall=3,
    thickness_A=0.2,
    lambda_A=0.035,
    rho_A(displayUnit="kg/m3") = 20,
    cp_A=1500,
    thickness_B=0.175,
    lambda_B=0.7,
    rho_B(displayUnit="kg/m3") = 1600,
    cp_B=1000)
    annotation (Placement(transformation(extent={{-58,-26},{-38,-6}})));
  TIL.OtherComponents.Thermal.HeatBoundary heatBoundary_outside(TFixed=278.15)
    annotation (Placement(transformation(extent={{-78,-22},{-70,-10}})));
equation
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
  connect(heatBoundary_wall.heatPort, internalWall.heatPort_A_air) annotation (
      Line(
      points={{-74,12},{-58,12}},
      color={204,0,0},
      thickness=0.5));
  connect(internalWall.heatPort_B_air, unheatedRoom1.heatPort_walls)
    annotation (Line(
      points={{-38,12},{-12,12},{-12,-2},{-1.4,-2}},
      color={204,0,0},
      thickness=0.5));
  connect(externalWall.heatPort_B_air, unheatedRoom1.heatPort_walls)
    annotation (Line(
      points={{-38,-16},{-12,-16},{-12,-2},{-1.4,-2}},
      color={204,0,0},
      thickness=0.5));
  connect(heatBoundary_outside.heatPort, externalWall.heatPort_A_air)
    annotation (Line(
      points={{-74,-16},{-58,-16}},
      color={204,0,0},
      thickness=0.5));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    experiment(StopTime=86400, __Dymola_Algorithm="Dassl"));
end TestHousePhilipp;
