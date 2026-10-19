within SmartHouse;
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
