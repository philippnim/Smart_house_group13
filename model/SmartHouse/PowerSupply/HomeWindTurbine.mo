within SmartHouse.PowerSupply;
model HomeWindTurbine
  parameter Boolean enableWind = true "Wind an/aus";
  parameter Real etaWind = 0.78 "eta of wind turbine";

  Modelica.Electrical.Analog.Interfaces.PositivePin pin_p
    annotation (Placement(transformation(extent={{-110,50},{-90,70}})));
  Modelica.Electrical.Analog.Interfaces.NegativePin pin_n
    annotation (Placement(transformation(extent={{90,50},{110,70}})));
  Modelica.Blocks.Tables.CombiTable1Ds PowerCurveWindTurbine(table=[0,0; 1.99,0;
        2,10; 3,35; 4,83; 5,162; 6,281; 7,446; 8,665; 9,947; 10,1299; 11,1729;
        22,1729; 22.01,0; 40,0])
    annotation (Placement(transformation(extent={{-54,-40},{-34,-20}})));
  Modelica.Blocks.Math.Gain eta(k=etaWind)
    annotation (Placement(transformation(extent={{-10,-40},{10,-20}})));
  Modelica.Blocks.Math.Division PowerToCurrent
    annotation (Placement(transformation(extent={{-10,10},{10,-10}},
        rotation=90,
        origin={28,6})));
  Modelica.Electrical.Analog.Sensors.VoltageSensor voltageSensor
    annotation (Placement(transformation(extent={{-10,50},{10,70}})));
  Modelica.Electrical.Analog.Sources.SignalCurrent signalCurrent
    annotation (Placement(transformation(extent={{38,54},{18,34}})));
  Modelica.Blocks.Continuous.Integrator E_wind(k=1/3.6e6)
    annotation (Placement(transformation(extent={{36,-62},{56,-42}})));
  Modelica.Blocks.Interfaces.RealOutput E_Wind
    annotation (Placement(transformation(extent={{78,-62},{98,-42}})));
  Modelica.Blocks.Interfaces.RealOutput P_wind
    annotation (Placement(transformation(extent={{40,-96},{60,-76}})));
  Modelica.Blocks.Interfaces.RealInput windSpeed annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-120,-30})));
equation
  connect(eta.y, PowerToCurrent.u1)
    annotation (Line(points={{11,-30},{34,-30},{34,-6}}, color={0,0,127}));
  connect(PowerCurveWindTurbine.y[1], eta.u)
    annotation (Line(points={{-33,-30},{-12,-30}}, color={0,0,127}));
  connect(pin_p, voltageSensor.p)
    annotation (Line(points={{-100,60},{-10,60}}, color={0,0,255}));
  connect(voltageSensor.n, pin_n)
    annotation (Line(points={{10,60},{100,60}}, color={0,0,255}));
  connect(voltageSensor.v, PowerToCurrent.u2) annotation (Line(points={{0,49},{
          0,-10},{22,-10},{22,-6}}, color={0,0,127}));
  connect(PowerToCurrent.y, signalCurrent.i)
    annotation (Line(points={{28,17},{28,32}}, color={0,0,127}));
  connect(signalCurrent.p, pin_n) annotation (Line(points={{38,44},{78,44},{78,
          60},{100,60}}, color={0,0,255}));
  connect(signalCurrent.n, pin_p) annotation (Line(points={{18,44},{-78,44},{
          -78,60},{-100,60}}, color={0,0,255}));
  connect(eta.y, E_wind.u) annotation (Line(points={{11,-30},{24,-30},{24,-52},
          {34,-52}}, color={0,0,127}));
  connect(E_wind.y, E_Wind)
    annotation (Line(points={{57,-52},{88,-52}}, color={0,0,127}));
  connect(eta.y, P_wind) annotation (Line(points={{11,-30},{24,-30},{24,-86},
          {50,-86}}, color={0,0,127}));
  connect(windSpeed, PowerCurveWindTurbine.u)
    annotation (Line(points={{-120,-30},{-56,-30}}, color={0,0,127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    uses(Modelica(version="4.1.0")));
end HomeWindTurbine;
