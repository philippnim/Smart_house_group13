within SmartHouse.Boundaries.Walls;
model CompositeWall
  ""
  import SI = Modelica.Units.SI;

  // Geometry parameters
  parameter SI.Length lengthTotal "Total length of the wall" annotation(Dialog(group="Geometry"));
  parameter SI.Length heightTotal "Total height of the wall" annotation(Dialog(group="Geometry"));
  parameter SI.Length lengthWindow "Length of the window" annotation(Dialog(group="Geometry"));
  parameter SI.Length heightWindow "Height of the window" annotation(Dialog(group="Geometry"));

  // Transition parameters

  parameter SI.CoefficientOfHeatTransfer alpha_A_window "Heat transfer coefficient on A side of the window";
  parameter SI.CoefficientOfHeatTransfer alpha_B_window "Heat transfer coefficient on B side  of the window";
  parameter SI.CoefficientOfHeatTransfer alpha_A_wall "Heat transfer coefficient on A side  of the wall";
  parameter SI.CoefficientOfHeatTransfer alpha_B_wall "Heat transfer coefficient on B side of the wall";

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



  // Components
  TIL.Connectors.HeatPort heatPort_A
    annotation (Placement(transformation(extent={{-110,-10},{-90,10}})));
  TIL.Connectors.HeatPort heatPort_B
    annotation (Placement(transformation(extent={{90,-10},{110,10}})));
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


  Window window(
    lengthWall=lengthWindow,
    heightWall=heightWindow,
    alpha_A=alpha_A_window,
    alpha_B=alpha_B_window,
    g_value=g_value,
    thicknessWindow=thicknessWindow,
    lambdaWindow=lambdaWindow)
    annotation (Placement(transformation(extent={{-10,-40},{10,-20}})));
  ExternalWall externalWall(
    lengthWall=lengthTotal - (lengthWindow * heightWindow) / heightTotal,
    heightWall=heightTotal,
    alpha_A=alpha_A_wall,
    alpha_B=alpha_B_wall,
    thickness_A=thickness_A,
    lambda_A=lambda_A,
    rho_A=rho_A,
    cp_A=cp_A,
    thickness_B=thickness_B,
    lambda_B=lambda_B,
    rho_B=rho_B,
    cp_B=cp_B) annotation (Placement(transformation(extent={{-10,20},{10,40}})));
equation
  connect(heatPort_A, externalWall.heatPort_A_air) annotation (Line(
      points={{-100,0},{-80,0},{-80,30},{-10,30}},
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
  connect(RadiationInput, window.RadiationInput) annotation (Line(points={{-40,-120},
          {-40,-60},{-4,-60},{-4,-42}}, color={0,0,127}));
  connect(solarGains, window.solarGains) annotation (Line(
      points={{40,-100},{40,-60},{4,-60},{4,-40}},
      color={204,0,0},
      thickness=0.5));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200}),
        Bitmap(extent={{-68,-86},{68,72}}, fileName=
              "modelica://SmartHouse/Images/composite_wall.png"),
        Text(
          extent={{-86,18},{-56,-14}},
          textColor={0,0,0},
          textString="A"),
        Text(
          extent={{54,16},{84,-16}},
          textColor={0,0,0},
          textString="B")}),                                     Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end CompositeWall;
