within SmartHouse.Boundaries.Walls;
model CompositeWall
  ""
  import SI = Modelica.Units.SI;

  // Geometry parameters
  parameter SI.Length lengthTotal "Total length of the wall" annotation(Dialog(group="Geometry"));
  parameter SI.Length heightTotal "Total height of the wall" annotation(Dialog(group="Geometry"));
  parameter SI.Length lengthWindow "Length of the window" annotation(Dialog(group="Geometry"));
  parameter SI.Length heightWindow "Height of the window" annotation(Dialog(group="Geometry"));

  // Boundary conditions
  parameter Real phi_A = 0.5 "Relative humidity at port A" annotation(Dialog(group="Boundary conditions"));
  parameter Real phi_B = 0.5 "Relative humidity at port B" annotation(Dialog(group="Boundary conditions"));
  parameter SI.Pressure p_A = 101325 "Pressure at port A" annotation(Dialog(group="Boundary conditions"));
  parameter SI.Pressure p_B = 101325 "Pressure at port B" annotation(Dialog(group="Boundary conditions"));

  // Window properties
  parameter Real g_value "Solar energy transmittance" annotation(Dialog(group="Window properties"));
  parameter SI.Length thicknessWindow "Glass thickness" annotation(Dialog(group="Window properties"));
  parameter SI.ThermalConductivity lambdaWindow "Glass thermal conductivity" annotation(Dialog(group="Window properties"));

  // Wall layer A properties
  parameter SI.Length thickness_A "Thickness of layer A" annotation(Dialog(group="Wall layer A"));
  parameter SI.ThermalConductivity lambda_A "Thermal conductivity of layer A" annotation(Dialog(group="Wall layer A"));
  parameter SI.Density rho_A "Density of layer A" annotation(Dialog(group="Wall layer A"));
  parameter SI.SpecificHeatCapacity cp_A "Specific heat capacity of layer A" annotation(Dialog(group="Wall layer A"));

  // Wall layer B properties
  parameter SI.Length thickness_B "Thickness of layer B" annotation(Dialog(group="Wall layer B"));
  parameter SI.ThermalConductivity lambda_B "Thermal conductivity of layer B" annotation(Dialog(group="Wall layer B"));
  parameter SI.Density rho_B "Density of layer B" annotation(Dialog(group="Wall layer B"));
  parameter SI.SpecificHeatCapacity cp_B "Specific heat capacity of layer B" annotation(Dialog(group="Wall layer B"));

  // Gas type selection
  parameter TILMedia.Gas.Types.BaseGas gasType=sim.gasType1 "Gas type" annotation (Dialog(tab="SIM", group="SIM"),
    choices(
      choice=sim.gasType1 "Gas 1 as defined in SIM",
      choice=sim.gasType2 "Gas 2 as defined in SIM",
      choice=sim.gasType3 "Gas 3 as defined in SIM"));
  // Required SIM for gasType reference
  outer TIL.SystemInformationManager sim;


  // Components
  TIL.Connectors.HeatPort heatPort_A
    annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
  TIL.Connectors.HeatPort heatPort_B
    annotation (Placement(transformation(extent={{90,-10},{110,10}})));
  Window window(
    lengthWall=lengthWindow,
    heightWall=heightWindow,
    gasType=gasType,
    phi_A=phi_A,
    phi_B=phi_B,
    p_A=p_A,
    p_B=p_B,
    g_value=g_value,
    thicknessWindow=thicknessWindow,
    lambdaWindow=lambdaWindow)
    annotation (Placement(transformation(extent={{-10,-40},{10,-20}})));
  Modelica.Blocks.Interfaces.RealInput RadiationInput annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={-40,-120}),
                          iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
          origin={-40,-120})));
  TIL.Connectors.HeatPort solarGains
    annotation (Placement(transformation(extent={{30,-110},{50,-90}})));
  ExternalWall externalWall(
   lengthWall=lengthTotal - (lengthWindow * heightWindow / heightTotal),
    heightWall=heightTotal,
    gasType=gasType,
    phi_A=phi_A,
    phi_B=phi_B,
    p_A=p_A,
    p_B=p_B,
    thickness_A=thickness_A,
    lambda_A=lambda_A,
    rho_A=rho_A,
    cp_A=cp_A,
    thickness_B=thickness_B,
    lambda_B=lambda_B,
    rho_B=rho_B,
    cp_B=cp_B) annotation (Placement(transformation(extent={{-10,20},{10,40}})));


equation
  connect(window.RadiationInput, RadiationInput) annotation (Line(points={{-4,-42},
          {-4,-80},{-40,-80},{-40,-120}}, color={0,0,127}));
  connect(window.solarGains, solarGains) annotation (Line(
      points={{4,-40},{4,-100},{40,-100}},
      color={204,0,0},
      thickness=0.5));
  connect(externalWall.heatPort_A_air, heatPort_A) annotation (Line(
      points={{-10,30},{-80,30},{-80,0},{-100,0}},
      color={204,0,0},
      thickness=0.5));
  connect(externalWall.heatPort_B_air, heatPort_B) annotation (Line(
      points={{10,30},{80,30},{80,0},{100,0}},
      color={204,0,0},
      thickness=0.5));
  connect(window.heatPort_B_air, heatPort_B) annotation (Line(
      points={{10,-30},{80,-30},{80,0},{100,0}},
      color={204,0,0},
      thickness=0.5));
  connect(window.heatPort_A_air, heatPort_A) annotation (Line(
      points={{-10,-30},{-80,-30},{-80,0},{-100,0}},
      color={204,0,0},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end CompositeWall;
