within SmartHouse.HeatingSource;
model TILMedia_RT31
  "Rubitherm RT31 - PCM for low-temperature heating"

  extends TILMedia.SLEMedium.Types.BaseSLEMedium(
    cp_l=2000,
    cp_s=2000,
    T_s=304.15,
    T_l=304.15);

equation

  // Density [kg/m3]
  d_l = 760;
  d_s = 830;

  // Thermal conductivity [W/(m.K)]
  lambda_l = 0.5;
  lambda_s = 0.5;

  // Approximate latent heat of fusion [J/kg]
  h_fusion = 135e3;

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end TILMedia_RT31;
