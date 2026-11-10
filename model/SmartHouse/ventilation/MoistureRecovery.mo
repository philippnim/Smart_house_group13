within SmartHouse.ventilation;
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
  Modelica.Blocks.Interfaces.BooleanInput bypass
    annotation (Placement(transformation(extent={{-140,84},{-100,124}})));
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
   x_supply = min(max(x_out + (if bypass then 0 else eta_x)*(x_room - x_out)
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
