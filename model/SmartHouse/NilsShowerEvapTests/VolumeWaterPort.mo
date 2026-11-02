within SmartHouse.NilsShowerEvapTests;
model VolumeWaterPort "VolumewithaWaterport"

  /*********************** SIM ***********************************/

  parameter TILMedia.Gas.Types.BaseGas gasType=sim.gasType1 "Gas type" annotation (Dialog(tab="SIM", group="SIM"),
      choices(
      choice=sim.gasType1 "Gas 1 as defined in SIM",
      choice=sim.gasType2 "Gas 2 as defined in SIM",
      choice=sim.gasType3 "Gas 3 as defined in SIM"));
  replaceable package MediaConfiguration = TIL.Utilities.MediaConfiguration
    constrainedby TIL.Utilities.Internals.PartialMediaConfiguration
    "Media and State Type Configuration" annotation (choicesAllMatching=true, Dialog(
        tab="SIM", group="Media Configuration"));
protected
  outer TIL.SystemInformationManager sim "System information manager";
  parameter Boolean generateEventsAtFlowReversal=sim.generateEventsAtFlowReversalGas
    annotation (Evaluate=true);
  TIL.Internals.SimPortGas simPortGas(gasMass = mass,gasVolume = volume,gasTypeID=gasType.ID);

  /******************** Connectors *****************************/
public
  TIL.Connectors.GasPort[nPorts] portArray(m_flow(each final start=m_flowStart),each final gasType=
        gasType) "Gas ports" annotation (Placement(transformation(extent={{-50,
            -30},{-30,-10}}, rotation=0), iconTransformation(extent={{-10,-88},{10,-68}})));
  TIL.Connectors.HeatPort heatPort if enableHeatPort "Heat port"
    annotation (Placement(
        transformation(extent={{-10,70},{10,90}}, rotation=0),
        iconTransformation(extent={{-10,50},{10,70}})));

parameter Integer nPorts = 5 "Number of Gas Fluid ports (array)"
    annotation(Evaluate=true, Dialog(
     tab="General",
     connectorSizing=true,
     group="Ports"));

  /****************** Gas *************************/

protected
  MediaConfiguration.Media.Gas_ph gas(
    final p=p,
    final h=h,
    final xi=xi,
    final gasType=gasType,
    computeTransportProperties=false) "Gas object"
                                        annotation (Placement(transformation(
          extent={{-10,-10},{10,10}}, rotation=0)));

          /*
  MediaConfiguration.Media.Gas[nPorts] gasArray(
    each final gasType = gasType,
    T_phxi(
        each p = {portArray[i].p for i in 1:nPorts},
        each h = {noEvent(actualStream(portArray[i].h_outflow)) for i in 1:nPorts},
        each xi = {noEvent(actualStream(portArray[i].xi_outflow)) for i in 1:nPorts}),
    d_phxi(
        each p = {portArray[i].p for i in 1:nPorts},
        each h = {noEvent(actualStream(portArray[i].h_outflow))  for i in 1:nPorts},
        each xi = {noEvent(actualStream(portArray[i].xi_outflow))  for i in 1:nPorts}),
    phi_phxi(        each p = {portArray[i].p  for i in 1:nPorts},
        each h = {noEvent(actualStream(portArray[i].h_outflow))  for i in 1:nPorts},
        each xi = {noEvent(actualStream(portArray[i].xi_outflow))  for i in 1:nPorts}))
    annotation (Placement(transformation(extent={{-36,-44},{-16,-24}},rotation=
            0)));
            */
            // T_phxi, d_phxi und phi_phxi stammen aus dem bisherigen Volume

  MediaConfiguration.Media.Gas_ph[nPorts] gasArray(
    each final p=p,
    final h = {noEvent(actualStream(portArray[i].h_outflow)) for i in 1:nPorts},
    final xi = {noEvent(actualStream(portArray[i].xi_outflow)) for i in 1:nPorts},
    each final gasType=gasType,
    each computeTransportProperties=false) "Gas object"
                                        annotation (Placement(transformation(
          extent={{-10,-10},{10,10}}, rotation=0)));

  /****************** General parameters *******************/
public
  Modelica.Blocks.Interfaces.RealInput mEvap_flow(unit="kg/s")
  "Evaporated water entering the air; positive into volume";

  Modelica.Blocks.Interfaces.RealInput hEvap(unit="J/kg")
  "Specific enthalpy of transferred water vapour";

  final parameter Real xiEvap[gasType.nc - 1] =
    {if j == gasType.condensingIndex then 1.0 else 0.0
     for j in 1:gasType.nc - 1}
    "Independent mass fractions of pure water";

  parameter Modelica.Units.SI.Volume volume(min=0) "Size of volume";

  parameter Boolean enableHeatPort = false "If true, heat port is enabled"
    annotation(Dialog(group = "General"));
protected
  parameter TIL.Internals.CellFlowType cellFlowType="allow reverse flow";

  /****************** Start and initial values *******************/
public
  parameter Modelica.Units.SI.MassFlowRate m_flowStart=0.5
    "Start value for mass flow rate" annotation (Dialog(tab="Start Values"));

  parameter Modelica.Units.SI.Pressure pInitial=1.013e5
    "Initial value for air pressure" annotation (Dialog(group="Initial Values"));
  parameter Boolean fixedInitialPressure=true
    "if true, initial pressure is fixed"
    annotation (Dialog(group="Initial Values"));

  parameter Modelica.Units.SI.Temperature TInitial=298.15
    "Initial value air temperature" annotation (Dialog(group="Initial Values"));

  parameter String inputTypeConcentration="xi"
    "Stream variables input type for concentration information"
    annotation(Dialog(group="Initial Values"),
    choices(choice="phi", choice="xi", choice="x"));

  parameter TILMedia.Internals.Units.RelativeHumidity
    phiInitial = 60.0 "Initial value for gas relative humidity (0%-100%)"
    annotation(Dialog(enable=(inputTypeConcentration=="phi"),
     group="Initial Values"));

  parameter Real[gasType.nc] mixingRatioInitial=gasType.defaultMixingRatio
    "Initial array for mixing ratio of mass fraction e.g. {2, 10, 0.3}" annotation (Dialog(group="Initial Values",
    enable=(inputTypeConcentration=="xi" or (gasType.nc>2 and inputTypeConcentration=="phi"))));

  parameter Real[ gasType.nc] molarMixingRatioInitial= ones(gasType.nc)
    "Initial array for mixing ratio of mole fraction e.g. {2, 10, 0.3}"
    annotation(Dialog(enable=inputTypeConcentration=="x",
    group="Initial Values"));

  /****************** Additional values *******************/

  Modelica.Units.SI.Mass mass "Gas mass in control volume";

  Real drhodt;

  MediaConfiguration.Units.GasAbsolutePressure p(start=pInitial);
  MediaConfiguration.Units.GasMassFraction[gasType.nc - 1] xi;
  MediaConfiguration.Units.GasSpecificEnthalpy h "Specific enthalpy";

  Modelica.Units.SI.SpecificEnthalpy h_actualStream[nPorts];
  Modelica.Units.SI.MassFraction[nPorts,gasType.nc - 1] xi_actualStream;

  /*******************Summary**********************/
public
  inner parameter Boolean includeDefaultSummary = true
    "Include default entries in summary" annotation(Dialog(tab="Advanced", group="Summary"));

protected
  final parameter Boolean includeSummary=
    if (TIL.Internals.IncludeSummaryChoice.includeSummary == sim.includeSummaryChoice)
      then true
    elseif (TIL.Internals.IncludeSummaryChoice.doNotIncludeSummary == sim.includeSummaryChoice)
      then false
    else includeDefaultSummary "Include summary record in model results";

  replaceable record SummaryClass =
       TIL.GasComponents.Volumes.Summaries.Summary;

public
  SummaryClass summary(
    p_gas=gas.p,
    T_gas=gas.T,
    h_gas=gas.h,
    d_gas=gas.d,
    T_gas_portArray={if noEvent(portArray[i].m_flow > 0) then gasArray[i].T
         else gas.T for i in 1:nPorts},
    h_gas_portArray={if noEvent(portArray[i].m_flow > 0) then gasArray[i].h
    else gas.h for i in 1:nPorts},
    d_gas_portArray={if noEvent(portArray[i].m_flow > 0) then gasArray[i].d
    else gas.d for i in 1:nPorts},
    m_flow_gas_portArray=portArray.m_flow,
    V_flow_gas_portArray= {if noEvent(portArray[i].m_flow > 0) then portArray[i].m_flow
        /gasArray[i].d else portArray[i].m_flow/gas.d for i in 1:nPorts},
    Q_flow_gas=getInputsThermal.heatPort.Q_flow,
    mass_gas=mass,
    volume_gas=volume,
    mass_component=0,
    nPorts_gas = nPorts) if includeSummary annotation (Placement(transformation(
          extent={{-10,-70},{10,-50}}, rotation=0)));

protected
  TIL.Internals.GetInputsThermal getInputsThermal
    annotation (Placement(transformation(extent={{10,-10},{-10,10}},origin={-20,30})));

  final parameter Modelica.Units.SI.SpecificEnthalpy hInitial=
      MediaConfiguration.Media.GasFunctions.specificEnthalpy_pTxi(
      gasType,
      pInitial,
      TInitial,
      mixingRatioInitial[1:end - 1]/sum(mixingRatioInitial))
    annotation (HideResult=true);
initial equation
  if sim.initializationMode == "free" then

  elseif (sim.initializationMode <> "standard") then
    der(h) = 0;
    der(xi) = zeros(gasType.nc-1);
    der(p) = 0;

  else
    if fixedInitialPressure then
      p = pInitial;
    end if;
    gas.T = TInitial;

    if (inputTypeConcentration == "xi") then
      xi = mixingRatioInitial[1:end - 1]/sum(mixingRatioInitial);
    elseif  (inputTypeConcentration == "phi") and (gasType.nc>1) then
      assert(gasType.condensingIndex>0,"phi can only be set if a vapour-gas mixture is used (if a component can condense)");
      gas.phi = phiInitial;
      //if phi was given use only nc-2 mass fractions and xi_dryGas.
      for i in 1:(gasType.nc-2) loop
        if i<gasType.condensingIndex then
          gas.xi_dryGas[i] = mixingRatioInitial[i]/(sum(mixingRatioInitial)-mixingRatioInitial[max(gasType.condensingIndex,1)]);
        else
          gas.xi_dryGas[i] = mixingRatioInitial[i+1]/(sum(mixingRatioInitial)-mixingRatioInitial[max(gasType.condensingIndex,1)]);
        end if;
      end for;
    else
      gas.x = molarMixingRatioInitial[1:end-1]/sum(molarMixingRatioInitial);
    end if;
  end if;
  assert(gasType.condensingIndex > 0,
  "Evaporation requires a gas mixture with water as condensing species");

equation

  portArray.p = ones(nPorts)*p;
  portArray.h_outflow - ones(nPorts)*h = zeros(nPorts);

  if (generateEventsAtFlowReversal) then
    for i in 1:nPorts loop
      h_actualStream[i] = actualStream(portArray[i].h_outflow);
      for j in 1:gasType.nc-1 loop
        xi_actualStream[i,j] = actualStream(portArray[i].xi_outflow[j]);
        portArray[i].xi_outflow[j] = xi[j];
      end for;
    end for;
  else
    for i in 1:nPorts loop
      h_actualStream[i] = noEvent(actualStream(portArray[i].h_outflow));
      for j in 1:gasType.nc-1 loop
        xi_actualStream[i,j] = noEvent(actualStream(portArray[i].xi_outflow[j]));
        portArray[i].xi_outflow[j] = xi[j];
      end for;
    end for;
  end if;

  getInputsThermal.heatPort.T = gas.T;

  //______________ Balance equations _______________________

    if (generateEventsAtFlowReversal) then
    der(h)*mass =
        sum((portArray.m_flow.*(h_actualStream-h*ones(nPorts))))
        + getInputsThermal.heatPort.Q_flow
      + volume*der(p)
      + mEvap_flow * (hEvap - h)
      "Energy balance";

    for j in 1:gasType.nc-1 loop
      der(xi[j])*mass =
       sum((portArray.m_flow.*(xi_actualStream[:,j]-xi[j]*ones(nPorts))))+ mEvap_flow * (xiEvap[j] - xi[j])
        "Mass balance";
    end for;
  else
    der(h)*mass =
       sum(noEvent(portArray.m_flow.*(h_actualStream-h*ones(nPorts))))
       + getInputsThermal.heatPort.Q_flow
        + volume*der(p)
        + mEvap_flow * (hEvap - h)
      "Energy balance";

    for j in 1:gasType.nc-1 loop
      der(xi[j])*mass =
       sum(noEvent(portArray.m_flow.*(xi_actualStream[:,j]-xi[j]*ones(nPorts))))+ mEvap_flow * (xiEvap[j] - xi[j])
        "Mass balance";
    end for;

  end if;

  drhodt*volume + der(volume)*gas.d =
    sum(portArray.m_flow) + mEvap_flow
    "Total mass balance";

  drhodt = gas.drhodh_pxi*der(h)
         + gas.drhodp_hxi*der(p)
         + gas.drhodxi_ph*der(xi);

  mass = volume*gas.d "Mass in cv";

  connect(heatPort, getInputsThermal.heatPort) annotation (Line(
    points={{0,80},{0,30},{-10,30}},
    color={204,0,0},
    thickness=0.5,
    smooth=Smooth.None));

    annotation(Dialog(group = "Geometry"),
    Icon(coordinateSystem(
        preserveAspectRatio=true,
        extent={{-40,-80},{40,80}},
        initialScale=0.1), graphics={
        Bitmap(extent={{-40,-80},{40,60}},
          imageSource=
              "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",
          fileName="modelica://TIL/Resources/Images/ContainerVolume.png"),
                           Ellipse(
          extent={{-22,-84},{-6,-68}},
          lineColor={255,153,0},
          lineThickness=0.5,
          fillColor={255,153,0},
          fillPattern=FillPattern.Solid),
                           Ellipse(
          extent={{4,-84},{20,-68}},
          lineColor={255,153,0},
          lineThickness=0.5,
          fillColor={255,153,0},
          fillPattern=FillPattern.Solid)}),
    Diagram(coordinateSystem(
        preserveAspectRatio=true,
        extent={{-40,-80},{40,80}},
        initialScale=0.1)),
    Documentation(info="<html>
<table cellspacing=\"0\" cellpadding=\"3\" border=\"1\"><tr>
<td colspan=\"2\"><h4 style=\"text-align: center;\">Model overview</h4></td>
</tr>
<tr>
<td><p>mass balance:</p></td>
<td><p>transient</p></td>
</tr>
<tr>
<td><p>energy balance:</p></td>
<td><p>transient</p></td>
</tr>
<tr>
<td><p>differential states:</p></td>
<td><p>p, h, xi</p></td>
</tr>
<tr>
<td><p>momentum equation:</p></td>
<td><p>isobaric</p></td>
</tr>
</table>
<p>The Volume model consists of a fixed volume, which is assumed to be ideally mixed. This assumption requires that the state (pressure, temperature, mass fraction) of each quantity added to the volume is exchanged directly with the mass remaining in the volume. Only the inertia imposes a resistance against an immediate adaption of the fluid state. With this assumption, the gas volume can be represented by one temperature, one corresponding enthalpy and one mass fraction. Therefore, the volume is resembled by a single gas object. </p>
<p>The value of the <code>volume</code> can be set by the user. The volume has a dynamic energy balance regarding the energy from pressure increase and a dynamic mass balance. Because of the quantity of the volume, this model has a PT1 behavior regarding the energy and mass balance. However, this model does not regard quantities of walls or solid masses. If the heat port is connected, the temperature of the gas volume will be handed over. The heat flow rate of the volume will be considered in the energy balance. </p>
</html>"));
end VolumeWaterPort;
