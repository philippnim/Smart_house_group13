#if !defined(FMU_SOURCE_SINGLE_UNIT) && !defined(BUILDFMU) && !defined(DYMOSIM) && !defined(STANDALONE_DYMOSIM) && !defined(Matlab6)
#define DYMOSIM
#if defined(GODESS2) && !defined(GODESS)
#define GODESS
#endif
#endif
\
#include <moutil.h>
PreNonAliasDef(11)
PreNonAliasDef(12)
PreNonAliasDef(13)
PreNonAliasDef(14)
PreNonAliasDef(15)
StartNonAlias(10)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8011,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[1].properties.transp.Pr", 1,\
 5, 7980, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[1].properties.transp.lambda", 1,\
 5, 7981, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[1].properties.transp.eta", 1,\
 5, 7982, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[1].properties.transp.sigma", 1,\
 5, 7983, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 4191, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4192, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4193,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4194, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4195,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4196,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4197, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4198, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 4199, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4200, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4201, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8012, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4202, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11386, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11387, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11388, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11389, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11390, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8013, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8014, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11391, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].H_WallPlusFilmStart", \
"[J]", 8015, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[1].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 85, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[1].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 85, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11392, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].betaA_eff", \
"mass transfer coefficient", 11393, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11394, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[1].properties.T", 1,\
 5, 7977, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].phiMoistAirIn", \
"deprecated interface", 8016, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].xiMoistAirIn[2]", \
"[1]", 8017, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].m_flow", -1,\
 5, 11986, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 4203, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[1].filmSurfaceTemperature", 1,\
 5, 11375, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4204, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4205, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4206, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4207, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4208, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4209, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 4210, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[1].filmSurfaceTemperature", 1,\
 5, 11375, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4211, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4212, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 4213, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[1].filmSurfaceTemperature", 1,\
 5, 11375, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 4214, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 4215, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[1].wallCellGeometry.length", 1, 5,\
 7967, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[1].wallCellGeometry.volume", 1, 5,\
 7968, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4216, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8018, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4217, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.R_NS", 1,\
 5, 8018, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 4218, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8019, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].geometricWallMass", \
"Geometric mass [kg]", 8020, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].QflowMoistAirToWall", \
"[W]", 11395, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].QflowMoistAirToWallLatent",\
 "[W]", 11396, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[1].filmSurfaceTemperature", 1,\
 5, 11375, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].freezingTemperature", \
"[K;degC]", 8021, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4219, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4220,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4221, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4222,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4223,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4224, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4225, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 4226, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4227, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4228, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8022, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[1].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 442, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[1].p_s_Wall", 1,\
 5, 11367, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[1].xiCondensingMoistAirWallSaturation", 1,\
 5, 11374, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11397, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].CpWallAndFin", \
"Heat capacity of wall and fin", 8023, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 4229, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[1].x2", 1,\
 5, 11397, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11398,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11399,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[1].crossSectionalAreaReductionFactor", 1,\
 5, 11377, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 4230, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.wf_blockedCrossSection",\
 "", 11400, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 443, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 444, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 445, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 446, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 447, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 448, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[1].x2", 1,\
 5, 11397, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[1].massFilm", 1,\
 1, 84, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[1].frostingModel.rhoFilm", 1, 5, 11398, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8024, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[1].mdotCondensate", 1, 5, 11372,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[1].properties.transp.lambda", 1,\
 5, 7981, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.massMin",\
 "[kg]", 8025, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8026, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8027, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8028, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8029, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8030, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 86, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 86, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.c1",\
 "factor", 8031, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8032, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8033, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[1].frostingModel.frosting.defaultTau",\
 "", 449, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4231, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4232,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 4233, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4234,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4235,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4236, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4237, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.xi_default[1]",\
 "Default mass fractions", 4238, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4239, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4240, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].cellGeometry.volume", \
"[m3]", 8034, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].cellGeometry.heatTransferArea",\
 "[m2]", 8035, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8036, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].massFilmMax", \
"maximum amount of water in steady state [kg]", 8037, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].dryOutRatio", \
"below this water ratio, wetting partial", 8038, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[2].heatPort.T", 1,\
 5, 10820, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[2].heatPort.Q_flow", -1,\
 5, 10821, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatPortW.T", \
"Port temperature [K;degC]", 11401, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 4241, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatPortE.T", \
"Port temperature [K;degC]", 11402, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 4242, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4243, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4244,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4245, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4246,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4247,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4248, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4249, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 4250, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4251, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4252, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].m_flow", -1,\
 5, 11987, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 4253, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 4254, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4255, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4256,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4257, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4258,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4259,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4260, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4261, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 4262, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4263, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4264, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].m_flow", -1,\
 5, 11997, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11403, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11404, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallCellGeometry.length",\
 "[m]", 8039, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallCellGeometry.volume",\
 "[m3]", 8040, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 4265, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 4266, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finVolume", \
"Volume of the fin [m3]", 8041, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 4267, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8042, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8043, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].TWallInitial", \
"Initial wall temperature [K;degC]", 8044, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 4268, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].massFilmInitial", \
"Initial value for water film mass [kg]", 8045, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 4269,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8046, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 4270, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11405, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.d", \
"Density [kg/m3|g/cm3]", 4271, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature", 1,\
 5, 11415, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4272, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4273, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4274, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4275, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4276, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4277, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.solid.d", \
"Density [kg/m3|g/cm3]", 4278, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature", 1,\
 5, 11415, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4279, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4280, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11406, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11407, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11408, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11409, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.d", \
"Density [kg/m3|g/cm3]", 8047, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.s", \
"Specific entropy [J/(kg.K)]", 8048, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.T", \
"Temperature [K;degC]", 8049, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.q", \
"Steam mass fraction (quality) [1]", 4281, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8050, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8051, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 4282, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 4283, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.crit.p", \
"Critical pressure [Pa|bar]", 4284, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 4285, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.crit.T", \
"Critical temperature [K;degC]", 4286, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 4287, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 4288, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 4289, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 4290, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 4291, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 4292, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 4293, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 4294, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 4295, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 4296, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 4297, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 4298, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 4299, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 4300, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 4301, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 4302, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.transp.Pr",\
 "Prandtl number [1]", 8052, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8053, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8054, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].properties.transp.sigma",\
 "Surface tension [N/m]", 8055, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[2].massFilm", \
"mass of water/ice film [kg]", 87, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[2].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 87, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11410, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11411, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].mdotCondensate", \
"[kg/s]", 11412, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].mdotEvaporate", \
"[kg/s]", 11413, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].pMoistAirIn", "[Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].xiCondensingMoistAirWallSaturation",\
 "[1]", 11414, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature",\
 "[K;degC]", 11415, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallSurfaceTemperature",\
 "[K;degC]", 11416, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature", 1,\
 5, 11415, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11417, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 4303, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finEfficiency.eta", \
"Fin efficiency", 11418, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8056, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8057, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].finEfficiency.X", \
"Auxiliary variable", 11419, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.alphaA", \
"Value for alphaA for one cell [W/K]", 11420, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 4304, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 4305, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.dae", \
"Equivalent diameter [m]", 8058, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11421, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11422, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.Re", \
"Reynolds number [1]", 11423, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.Nu", \
"Nusselt Number [1]", 11424, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 450, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 4306, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 4307, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 4308, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].computeTransportProperties",\
 "[:#(type=Boolean)]", 4309, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].linearLimitRatio", "",\
 451, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11425, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].mdotHydraulicStart", \
"[kg/s]", 8059, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].Le", "Lewis Factor", 4310,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4311, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4312,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4313, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4314,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4315,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4316, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4317, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 4318, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4319, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4320, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8060, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 4321,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4322, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[2].properties.d", 1,\
 5, 8047, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[2].properties.s", 1,\
 5, 8048, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].properties.T", 1,\
 5, 8049, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8061, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8062, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.M", \
"Average molar mass [kg/mol]", 8063, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[2].properties.cp", 1,\
 5, 8050, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8064, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[2].properties.beta", 1,\
 5, 8051, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8065, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.w", \
"Speed of sound [m/s]", 8066, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8067, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8068, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8069, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8070, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8071, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8072, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.phi", \
"Relative humidity", "heatPumpCycle.evaporator.moistAirCell[2].phiMoistAirIn", 1,\
 5, 8088, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8073, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8074, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8075, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8076, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8077, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8078, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8079, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8080, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8081, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8082,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8083,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[2].properties.transp.Pr", 1,\
 5, 8052, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[2].properties.transp.lambda", 1,\
 5, 8053, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[2].properties.transp.eta", 1,\
 5, 8054, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[2].properties.transp.sigma", 1,\
 5, 8055, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 4323, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4324, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4325,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4326, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4327,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4328,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4329, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4330, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 4331, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4332, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4333, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8084, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4334, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11426, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11427, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11428, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11429, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11430, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8085, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8086, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11431, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].H_WallPlusFilmStart", \
"[J]", 8087, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[2].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 88, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[2].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 88, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11432, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].betaA_eff", \
"mass transfer coefficient", 11433, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11434, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].properties.T", 1,\
 5, 8049, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].phiMoistAirIn", \
"deprecated interface", 8088, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].xiMoistAirIn[2]", \
"[1]", 8089, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].m_flow", -1,\
 5, 11987, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 4335, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature", 1,\
 5, 11415, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4336, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4337, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4338, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4339, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4340, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4341, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 4342, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature", 1,\
 5, 11415, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4343, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4344, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 4345, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature", 1,\
 5, 11415, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 4346, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 4347, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[2].wallCellGeometry.length", 1, 5,\
 8039, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[2].wallCellGeometry.volume", 1, 5,\
 8040, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4348, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8090, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4349, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.R_NS", 1,\
 5, 8090, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 4350, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8091, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].geometricWallMass", \
"Geometric mass [kg]", 8092, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].QflowMoistAirToWall", \
"[W]", 11435, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].QflowMoistAirToWallLatent",\
 "[W]", 11436, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature", 1,\
 5, 11415, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].freezingTemperature", \
"[K;degC]", 8093, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4351, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4352,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4353, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4354,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4355,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4356, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4357, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 4358, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4359, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4360, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8094, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 452, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[2].p_s_Wall", 1,\
 5, 11407, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[2].xiCondensingMoistAirWallSaturation", 1,\
 5, 11414, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11437, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].CpWallAndFin", \
"Heat capacity of wall and fin", 8095, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 4361, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[2].x2", 1,\
 5, 11437, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11438,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11439,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[2].crossSectionalAreaReductionFactor", 1,\
 5, 11417, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 4362, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.wf_blockedCrossSection",\
 "", 11440, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 453, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 454, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 455, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 456, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 457, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 458, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[2].x2", 1,\
 5, 11437, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[2].massFilm", 1,\
 1, 87, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[2].frostingModel.rhoFilm", 1, 5, 11438, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8096, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[2].mdotCondensate", 1, 5, 11412,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[2].properties.transp.lambda", 1,\
 5, 8053, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.massMin",\
 "[kg]", 8097, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8098, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8099, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8100, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8101, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8102, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 89, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 89, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.c1",\
 "factor", 8103, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8104, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8105, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[2].frostingModel.frosting.defaultTau",\
 "", 459, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4363, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4364,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 4365, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4366,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4367,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4368, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4369, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.xi_default[1]",\
 "Default mass fractions", 4370, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4371, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4372, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].cellGeometry.volume", \
"[m3]", 8106, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].cellGeometry.heatTransferArea",\
 "[m2]", 8107, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8108, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].massFilmMax", \
"maximum amount of water in steady state [kg]", 8109, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].dryOutRatio", \
"below this water ratio, wetting partial", 8110, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[3].heatPort.T", 1,\
 5, 10881, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[3].heatPort.Q_flow", -1,\
 5, 10882, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatPortW.T", \
"Port temperature [K;degC]", 11441, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 4373, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatPortE.T", \
"Port temperature [K;degC]", 11442, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 4374, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4375, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4376,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4377, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4378,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4379,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4380, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4381, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 4382, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4383, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4384, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].m_flow", -1,\
 5, 11988, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 4385, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 4386, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4387, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4388,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4389, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4390,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4391,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4392, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4393, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 4394, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4395, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4396, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].m_flow", -1,\
 5, 11998, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11443, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11444, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallCellGeometry.length",\
 "[m]", 8111, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallCellGeometry.volume",\
 "[m3]", 8112, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 4397, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 4398, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finVolume", \
"Volume of the fin [m3]", 8113, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 4399, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8114, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8115, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].TWallInitial", \
"Initial wall temperature [K;degC]", 8116, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 4400, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].massFilmInitial", \
"Initial value for water film mass [kg]", 8117, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 4401,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8118, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 4402, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11445, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.d", \
"Density [kg/m3|g/cm3]", 4403, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature", 1,\
 5, 11455, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4404, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4405, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4406, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4407, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4408, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4409, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.solid.d", \
"Density [kg/m3|g/cm3]", 4410, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature", 1,\
 5, 11455, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4411, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4412, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11446, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11447, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11448, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11449, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.d", \
"Density [kg/m3|g/cm3]", 8119, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.s", \
"Specific entropy [J/(kg.K)]", 8120, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.T", \
"Temperature [K;degC]", 8121, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.q", \
"Steam mass fraction (quality) [1]", 4413, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8122, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8123, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 4414, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 4415, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.crit.p", \
"Critical pressure [Pa|bar]", 4416, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 4417, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.crit.T", \
"Critical temperature [K;degC]", 4418, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 4419, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 4420, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 4421, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 4422, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 4423, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 4424, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 4425, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 4426, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 4427, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 4428, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 4429, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 4430, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 4431, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 4432, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 4433, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 4434, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.transp.Pr",\
 "Prandtl number [1]", 8124, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8125, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8126, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].properties.transp.sigma",\
 "Surface tension [N/m]", 8127, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[3].massFilm", \
"mass of water/ice film [kg]", 90, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[3].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 90, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11450, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11451, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].mdotCondensate", \
"[kg/s]", 11452, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].mdotEvaporate", \
"[kg/s]", 11453, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].pMoistAirIn", "[Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].xiCondensingMoistAirWallSaturation",\
 "[1]", 11454, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature",\
 "[K;degC]", 11455, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallSurfaceTemperature",\
 "[K;degC]", 11456, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature", 1,\
 5, 11455, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11457, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 4435, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finEfficiency.eta", \
"Fin efficiency", 11458, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8128, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8129, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].finEfficiency.X", \
"Auxiliary variable", 11459, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.alphaA", \
"Value for alphaA for one cell [W/K]", 11460, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 4436, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 4437, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.dae", \
"Equivalent diameter [m]", 8130, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11461, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11462, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.Re", \
"Reynolds number [1]", 11463, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.Nu", \
"Nusselt Number [1]", 11464, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 460, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 4438, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 4439, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 4440, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].computeTransportProperties",\
 "[:#(type=Boolean)]", 4441, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].linearLimitRatio", "",\
 461, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11465, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].mdotHydraulicStart", \
"[kg/s]", 8131, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].Le", "Lewis Factor", 4442,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4443, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4444,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4445, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4446,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4447,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4448, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4449, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 4450, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4451, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4452, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8132, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 4453,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4454, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[3].properties.d", 1,\
 5, 8119, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[3].properties.s", 1,\
 5, 8120, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].properties.T", 1,\
 5, 8121, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8133, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8134, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.M", \
"Average molar mass [kg/mol]", 8135, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[3].properties.cp", 1,\
 5, 8122, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8136, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[3].properties.beta", 1,\
 5, 8123, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8137, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.w", \
"Speed of sound [m/s]", 8138, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8139, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8140, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8141, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8142, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8143, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8144, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.phi", \
"Relative humidity", "heatPumpCycle.evaporator.moistAirCell[3].phiMoistAirIn", 1,\
 5, 8160, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8145, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8146, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8147, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8148, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8149, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8150, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8151, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8152, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8153, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8154,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8155,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[3].properties.transp.Pr", 1,\
 5, 8124, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[3].properties.transp.lambda", 1,\
 5, 8125, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[3].properties.transp.eta", 1,\
 5, 8126, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[3].properties.transp.sigma", 1,\
 5, 8127, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 4455, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4456, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4457,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4458, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4459,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4460,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4461, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4462, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 4463, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4464, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4465, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8156, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4466, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11466, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11467, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11468, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11469, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11470, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8157, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8158, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11471, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].H_WallPlusFilmStart", \
"[J]", 8159, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[3].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 91, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[3].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 91, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11472, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].betaA_eff", \
"mass transfer coefficient", 11473, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11474, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].properties.T", 1,\
 5, 8121, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].phiMoistAirIn", \
"deprecated interface", 8160, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].xiMoistAirIn[2]", \
"[1]", 8161, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].m_flow", -1,\
 5, 11988, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 4467, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature", 1,\
 5, 11455, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4468, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4469, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4470, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4471, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4472, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4473, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 4474, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature", 1,\
 5, 11455, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4475, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4476, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 4477, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature", 1,\
 5, 11455, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 4478, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 4479, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[3].wallCellGeometry.length", 1, 5,\
 8111, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[3].wallCellGeometry.volume", 1, 5,\
 8112, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4480, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8162, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4481, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.R_NS", 1,\
 5, 8162, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 4482, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8163, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].geometricWallMass", \
"Geometric mass [kg]", 8164, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].QflowMoistAirToWall", \
"[W]", 11475, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].QflowMoistAirToWallLatent",\
 "[W]", 11476, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature", 1,\
 5, 11455, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].freezingTemperature", \
"[K;degC]", 8165, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4483, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4484,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4485, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4486,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4487,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4488, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4489, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 4490, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4491, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4492, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8166, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 462, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[3].p_s_Wall", 1,\
 5, 11447, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[3].xiCondensingMoistAirWallSaturation", 1,\
 5, 11454, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11477, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].CpWallAndFin", \
"Heat capacity of wall and fin", 8167, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 4493, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[3].x2", 1,\
 5, 11477, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11478,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11479,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[3].crossSectionalAreaReductionFactor", 1,\
 5, 11457, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 4494, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.wf_blockedCrossSection",\
 "", 11480, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 463, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 464, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 465, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 466, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 467, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 468, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[3].x2", 1,\
 5, 11477, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[3].massFilm", 1,\
 1, 90, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[3].frostingModel.rhoFilm", 1, 5, 11478, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8168, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[3].mdotCondensate", 1, 5, 11452,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[3].properties.transp.lambda", 1,\
 5, 8125, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.massMin",\
 "[kg]", 8169, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8170, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8171, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8172, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8173, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8174, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 92, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 92, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.c1",\
 "factor", 8175, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8176, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8177, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[3].frostingModel.frosting.defaultTau",\
 "", 469, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4495, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4496,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 4497, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4498,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4499,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4500, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4501, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.xi_default[1]",\
 "Default mass fractions", 4502, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4503, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4504, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].cellGeometry.volume", \
"[m3]", 8178, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].cellGeometry.heatTransferArea",\
 "[m2]", 8179, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8180, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].massFilmMax", \
"maximum amount of water in steady state [kg]", 8181, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].dryOutRatio", \
"below this water ratio, wetting partial", 8182, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[4].heatPort.T", 1,\
 5, 10942, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[4].heatPort.Q_flow", -1,\
 5, 10943, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatPortW.T", \
"Port temperature [K;degC]", 11481, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 4505, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatPortE.T", \
"Port temperature [K;degC]", 11482, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 4506, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4507, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4508,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4509, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4510,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4511,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4512, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4513, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 4514, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4515, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4516, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].m_flow", -1,\
 5, 11989, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 4517, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 4518, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4519, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4520,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4521, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4522,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4523,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4524, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4525, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 4526, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4527, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4528, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].m_flow", -1,\
 5, 11999, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11483, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11484, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallCellGeometry.length",\
 "[m]", 8183, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallCellGeometry.volume",\
 "[m3]", 8184, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 4529, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 4530, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finVolume", \
"Volume of the fin [m3]", 8185, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 4531, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8186, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8187, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].TWallInitial", \
"Initial wall temperature [K;degC]", 8188, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 4532, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].massFilmInitial", \
"Initial value for water film mass [kg]", 8189, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 4533,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8190, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 4534, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11485, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.d", \
"Density [kg/m3|g/cm3]", 4535, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature", 1,\
 5, 11495, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4536, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4537, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4538, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4539, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4540, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4541, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.solid.d", \
"Density [kg/m3|g/cm3]", 4542, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature", 1,\
 5, 11495, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4543, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4544, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11486, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11487, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11488, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11489, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.d", \
"Density [kg/m3|g/cm3]", 8191, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.s", \
"Specific entropy [J/(kg.K)]", 8192, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.T", \
"Temperature [K;degC]", 8193, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.q", \
"Steam mass fraction (quality) [1]", 4545, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8194, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8195, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 4546, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 4547, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.crit.p", \
"Critical pressure [Pa|bar]", 4548, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 4549, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.crit.T", \
"Critical temperature [K;degC]", 4550, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 4551, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 4552, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 4553, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 4554, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 4555, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 4556, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 4557, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 4558, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 4559, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 4560, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 4561, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 4562, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 4563, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 4564, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 4565, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 4566, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.transp.Pr",\
 "Prandtl number [1]", 8196, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8197, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8198, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].properties.transp.sigma",\
 "Surface tension [N/m]", 8199, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[4].massFilm", \
"mass of water/ice film [kg]", 93, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[4].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 93, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11490, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11491, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].mdotCondensate", \
"[kg/s]", 11492, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].mdotEvaporate", \
"[kg/s]", 11493, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].pMoistAirIn", "[Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].xiCondensingMoistAirWallSaturation",\
 "[1]", 11494, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature",\
 "[K;degC]", 11495, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallSurfaceTemperature",\
 "[K;degC]", 11496, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature", 1,\
 5, 11495, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11497, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 4567, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finEfficiency.eta", \
"Fin efficiency", 11498, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8200, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8201, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].finEfficiency.X", \
"Auxiliary variable", 11499, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.alphaA", \
"Value for alphaA for one cell [W/K]", 11500, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 4568, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 4569, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.dae", \
"Equivalent diameter [m]", 8202, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11501, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11502, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.Re", \
"Reynolds number [1]", 11503, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.Nu", \
"Nusselt Number [1]", 11504, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 470, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 4570, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 4571, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 4572, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].computeTransportProperties",\
 "[:#(type=Boolean)]", 4573, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].linearLimitRatio", "",\
 471, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11505, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].mdotHydraulicStart", \
"[kg/s]", 8203, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].Le", "Lewis Factor", 4574,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4575, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4576,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4577, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4578,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4579,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4580, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4581, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 4582, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4583, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4584, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8204, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 4585,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4586, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[4].properties.d", 1,\
 5, 8191, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[4].properties.s", 1,\
 5, 8192, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].properties.T", 1,\
 5, 8193, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8205, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8206, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.M", \
"Average molar mass [kg/mol]", 8207, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[4].properties.cp", 1,\
 5, 8194, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8208, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[4].properties.beta", 1,\
 5, 8195, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8209, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.w", \
"Speed of sound [m/s]", 8210, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8211, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8212, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8213, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8214, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8215, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8216, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.phi", \
"Relative humidity", "heatPumpCycle.evaporator.moistAirCell[4].phiMoistAirIn", 1,\
 5, 8232, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8217, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8218, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8219, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8220, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8221, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8222, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8223, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8224, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8225, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8226,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8227,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[4].properties.transp.Pr", 1,\
 5, 8196, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[4].properties.transp.lambda", 1,\
 5, 8197, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[4].properties.transp.eta", 1,\
 5, 8198, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[4].properties.transp.sigma", 1,\
 5, 8199, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 4587, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4588, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4589,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4590, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4591,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4592,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4593, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4594, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 4595, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4596, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4597, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8228, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4598, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11506, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11507, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11508, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11509, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11510, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8229, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8230, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11511, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].H_WallPlusFilmStart", \
"[J]", 8231, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[4].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 94, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[4].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 94, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11512, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].betaA_eff", \
"mass transfer coefficient", 11513, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11514, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].properties.T", 1,\
 5, 8193, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].phiMoistAirIn", \
"deprecated interface", 8232, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].xiMoistAirIn[2]", \
"[1]", 8233, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].m_flow", -1,\
 5, 11989, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 4599, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature", 1,\
 5, 11495, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4600, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4601, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4602, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4603, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4604, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4605, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 4606, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature", 1,\
 5, 11495, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4607, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4608, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 4609, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature", 1,\
 5, 11495, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 4610, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 4611, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[4].wallCellGeometry.length", 1, 5,\
 8183, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[4].wallCellGeometry.volume", 1, 5,\
 8184, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4612, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8234, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4613, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.R_NS", 1,\
 5, 8234, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 4614, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8235, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].geometricWallMass", \
"Geometric mass [kg]", 8236, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].QflowMoistAirToWall", \
"[W]", 11515, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].QflowMoistAirToWallLatent",\
 "[W]", 11516, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature", 1,\
 5, 11495, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].freezingTemperature", \
"[K;degC]", 8237, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4615, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4616,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4617, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4618,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4619,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4620, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4621, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 4622, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4623, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4624, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8238, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 472, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[4].p_s_Wall", 1,\
 5, 11487, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[4].xiCondensingMoistAirWallSaturation", 1,\
 5, 11494, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11517, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].CpWallAndFin", \
"Heat capacity of wall and fin", 8239, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 4625, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[4].x2", 1,\
 5, 11517, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11518,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11519,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[4].crossSectionalAreaReductionFactor", 1,\
 5, 11497, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 4626, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.wf_blockedCrossSection",\
 "", 11520, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 473, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 474, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 475, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 476, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 477, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 478, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[4].x2", 1,\
 5, 11517, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[4].massFilm", 1,\
 1, 93, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[4].frostingModel.rhoFilm", 1, 5, 11518, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8240, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[4].mdotCondensate", 1, 5, 11492,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[4].properties.transp.lambda", 1,\
 5, 8197, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.massMin",\
 "[kg]", 8241, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8242, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8243, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8244, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8245, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8246, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 95, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 95, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.c1",\
 "factor", 8247, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8248, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8249, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[4].frostingModel.frosting.defaultTau",\
 "", 479, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4627, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4628,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 4629, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4630,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4631,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4632, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4633, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.xi_default[1]",\
 "Default mass fractions", 4634, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4635, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4636, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].cellGeometry.volume", \
"[m3]", 8250, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].cellGeometry.heatTransferArea",\
 "[m2]", 8251, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8252, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].massFilmMax", \
"maximum amount of water in steady state [kg]", 8253, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].dryOutRatio", \
"below this water ratio, wetting partial", 8254, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[5].heatPort.T", 1,\
 5, 11003, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[5].heatPort.Q_flow", -1,\
 5, 11004, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatPortW.T", \
"Port temperature [K;degC]", 11521, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 4637, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatPortE.T", \
"Port temperature [K;degC]", 11522, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 4638, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4639, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4640,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4641, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4642,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4643,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4644, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4645, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 4646, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4647, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4648, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].m_flow", -1,\
 5, 11990, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 4649, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 4650, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4651, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4652,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4653, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4654,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4655,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4656, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4657, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 4658, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4659, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4660, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].m_flow", -1,\
 5, 12000, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11523, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11524, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallCellGeometry.length",\
 "[m]", 8255, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallCellGeometry.volume",\
 "[m3]", 8256, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 4661, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 4662, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finVolume", \
"Volume of the fin [m3]", 8257, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 4663, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8258, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8259, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].TWallInitial", \
"Initial wall temperature [K;degC]", 8260, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 4664, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].massFilmInitial", \
"Initial value for water film mass [kg]", 8261, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 4665,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8262, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 4666, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11525, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.d", \
"Density [kg/m3|g/cm3]", 4667, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature", 1,\
 5, 11535, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4668, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4669, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4670, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4671, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4672, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4673, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.solid.d", \
"Density [kg/m3|g/cm3]", 4674, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature", 1,\
 5, 11535, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4675, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4676, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11526, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11527, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11528, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11529, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.d", \
"Density [kg/m3|g/cm3]", 8263, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.s", \
"Specific entropy [J/(kg.K)]", 8264, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.T", \
"Temperature [K;degC]", 8265, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.q", \
"Steam mass fraction (quality) [1]", 4677, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8266, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8267, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 4678, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 4679, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.crit.p", \
"Critical pressure [Pa|bar]", 4680, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 4681, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.crit.T", \
"Critical temperature [K;degC]", 4682, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 4683, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 4684, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 4685, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 4686, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 4687, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 4688, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 4689, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 4690, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 4691, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 4692, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 4693, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 4694, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 4695, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 4696, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 4697, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 4698, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.transp.Pr",\
 "Prandtl number [1]", 8268, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8269, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8270, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].properties.transp.sigma",\
 "Surface tension [N/m]", 8271, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[5].massFilm", \
"mass of water/ice film [kg]", 96, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[5].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 96, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11530, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11531, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].mdotCondensate", \
"[kg/s]", 11532, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].mdotEvaporate", \
"[kg/s]", 11533, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].pMoistAirIn", "[Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].xiCondensingMoistAirWallSaturation",\
 "[1]", 11534, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature",\
 "[K;degC]", 11535, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallSurfaceTemperature",\
 "[K;degC]", 11536, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature", 1,\
 5, 11535, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11537, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 4699, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finEfficiency.eta", \
"Fin efficiency", 11538, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8272, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8273, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].finEfficiency.X", \
"Auxiliary variable", 11539, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.alphaA", \
"Value for alphaA for one cell [W/K]", 11540, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 4700, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 4701, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.dae", \
"Equivalent diameter [m]", 8274, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11541, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11542, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.Re", \
"Reynolds number [1]", 11543, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.Nu", \
"Nusselt Number [1]", 11544, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 480, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 4702, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 4703, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 4704, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].computeTransportProperties",\
 "[:#(type=Boolean)]", 4705, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].linearLimitRatio", "",\
 481, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11545, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].mdotHydraulicStart", \
"[kg/s]", 8275, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].Le", "Lewis Factor", 4706,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4707, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4708,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4709, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4710,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4711,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4712, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4713, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 4714, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4715, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4716, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8276, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 4717,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4718, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[5].properties.d", 1,\
 5, 8263, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[5].properties.s", 1,\
 5, 8264, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].properties.T", 1,\
 5, 8265, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8277, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8278, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.M", \
"Average molar mass [kg/mol]", 8279, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[5].properties.cp", 1,\
 5, 8266, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8280, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[5].properties.beta", 1,\
 5, 8267, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8281, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.w", \
"Speed of sound [m/s]", 8282, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8283, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8284, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8285, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8286, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8287, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8288, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.phi", \
"Relative humidity", "heatPumpCycle.evaporator.moistAirCell[5].phiMoistAirIn", 1,\
 5, 8304, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8289, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8290, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8291, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8292, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8293, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8294, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8295, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8296, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8297, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8298,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8299,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[5].properties.transp.Pr", 1,\
 5, 8268, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[5].properties.transp.lambda", 1,\
 5, 8269, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[5].properties.transp.eta", 1,\
 5, 8270, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[5].properties.transp.sigma", 1,\
 5, 8271, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 4719, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4720, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4721,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4722, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4723,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4724,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4725, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4726, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 4727, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4728, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4729, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8300, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4730, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11546, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11547, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11548, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11549, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11550, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8301, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8302, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11551, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].H_WallPlusFilmStart", \
"[J]", 8303, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[5].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 97, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[5].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 97, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11552, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].betaA_eff", \
"mass transfer coefficient", 11553, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11554, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].properties.T", 1,\
 5, 8265, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].phiMoistAirIn", \
"deprecated interface", 8304, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].xiMoistAirIn[2]", \
"[1]", 8305, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].m_flow", -1,\
 5, 11990, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 4731, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature", 1,\
 5, 11535, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4732, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4733, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4734, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4735, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4736, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4737, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 4738, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature", 1,\
 5, 11535, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4739, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4740, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 4741, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature", 1,\
 5, 11535, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 4742, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 4743, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[5].wallCellGeometry.length", 1, 5,\
 8255, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[5].wallCellGeometry.volume", 1, 5,\
 8256, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4744, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8306, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4745, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.R_NS", 1,\
 5, 8306, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 4746, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8307, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].geometricWallMass", \
"Geometric mass [kg]", 8308, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].QflowMoistAirToWall", \
"[W]", 11555, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].QflowMoistAirToWallLatent",\
 "[W]", 11556, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature", 1,\
 5, 11535, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].freezingTemperature", \
"[K;degC]", 8309, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4747, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4748,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4749, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4750,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4751,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4752, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4753, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 4754, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4755, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4756, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8310, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 482, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[5].p_s_Wall", 1,\
 5, 11527, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[5].xiCondensingMoistAirWallSaturation", 1,\
 5, 11534, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11557, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].CpWallAndFin", \
"Heat capacity of wall and fin", 8311, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 4757, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[5].x2", 1,\
 5, 11557, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11558,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11559,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[5].crossSectionalAreaReductionFactor", 1,\
 5, 11537, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 4758, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.wf_blockedCrossSection",\
 "", 11560, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 483, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 484, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 485, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 486, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 487, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 488, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[5].x2", 1,\
 5, 11557, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[5].massFilm", 1,\
 1, 96, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[5].frostingModel.rhoFilm", 1, 5, 11558, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8312, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[5].mdotCondensate", 1, 5, 11532,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[5].properties.transp.lambda", 1,\
 5, 8269, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.massMin",\
 "[kg]", 8313, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8314, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8315, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8316, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8317, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8318, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 98, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 98, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.c1",\
 "factor", 8319, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8320, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8321, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[5].frostingModel.frosting.defaultTau",\
 "", 489, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4759, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4760,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 4761, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4762,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4763,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4764, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4765, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.xi_default[1]",\
 "Default mass fractions", 4766, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4767, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4768, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].cellGeometry.volume", \
"[m3]", 8322, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].cellGeometry.heatTransferArea",\
 "[m2]", 8323, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8324, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].massFilmMax", \
"maximum amount of water in steady state [kg]", 8325, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].dryOutRatio", \
"below this water ratio, wetting partial", 8326, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[6].heatPort.T", 1,\
 5, 11064, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[6].heatPort.Q_flow", -1,\
 5, 11065, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatPortW.T", \
"Port temperature [K;degC]", 11561, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 4769, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatPortE.T", \
"Port temperature [K;degC]", 11562, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 4770, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4771, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4772,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4773, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4774,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4775,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4776, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4777, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 4778, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4779, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4780, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].m_flow", -1,\
 5, 11991, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 4781, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 4782, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4783, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4784,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4785, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4786,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4787,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4788, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4789, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 4790, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4791, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4792, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].m_flow", -1,\
 5, 12001, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11563, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11564, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallCellGeometry.length",\
 "[m]", 8327, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallCellGeometry.volume",\
 "[m3]", 8328, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 4793, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 4794, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finVolume", \
"Volume of the fin [m3]", 8329, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 4795, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8330, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8331, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].TWallInitial", \
"Initial wall temperature [K;degC]", 8332, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 4796, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].massFilmInitial", \
"Initial value for water film mass [kg]", 8333, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 4797,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8334, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 4798, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11565, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.d", \
"Density [kg/m3|g/cm3]", 4799, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature", 1,\
 5, 11575, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4800, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4801, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4802, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4803, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4804, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4805, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.solid.d", \
"Density [kg/m3|g/cm3]", 4806, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature", 1,\
 5, 11575, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4807, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4808, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11566, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11567, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11568, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11569, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.d", \
"Density [kg/m3|g/cm3]", 8335, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.s", \
"Specific entropy [J/(kg.K)]", 8336, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.T", \
"Temperature [K;degC]", 8337, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.q", \
"Steam mass fraction (quality) [1]", 4809, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8338, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8339, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 4810, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 4811, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.crit.p", \
"Critical pressure [Pa|bar]", 4812, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 4813, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.crit.T", \
"Critical temperature [K;degC]", 4814, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 4815, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 4816, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 4817, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 4818, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 4819, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 4820, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 4821, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 4822, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 4823, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 4824, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 4825, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 4826, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 4827, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 4828, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 4829, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 4830, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.transp.Pr",\
 "Prandtl number [1]", 8340, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8341, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8342, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].properties.transp.sigma",\
 "Surface tension [N/m]", 8343, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[6].massFilm", \
"mass of water/ice film [kg]", 99, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[6].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 99, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11570, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11571, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].mdotCondensate", \
"[kg/s]", 11572, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].mdotEvaporate", \
"[kg/s]", 11573, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].pMoistAirIn", "[Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].xiCondensingMoistAirWallSaturation",\
 "[1]", 11574, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature",\
 "[K;degC]", 11575, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallSurfaceTemperature",\
 "[K;degC]", 11576, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature", 1,\
 5, 11575, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11577, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 4831, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finEfficiency.eta", \
"Fin efficiency", 11578, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8344, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8345, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].finEfficiency.X", \
"Auxiliary variable", 11579, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.alphaA", \
"Value for alphaA for one cell [W/K]", 11580, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 4832, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 4833, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.dae", \
"Equivalent diameter [m]", 8346, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11581, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11582, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.Re", \
"Reynolds number [1]", 11583, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.Nu", \
"Nusselt Number [1]", 11584, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 490, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 4834, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 4835, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 4836, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].computeTransportProperties",\
 "[:#(type=Boolean)]", 4837, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].linearLimitRatio", "",\
 491, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11585, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].mdotHydraulicStart", \
"[kg/s]", 8347, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].Le", "Lewis Factor", 4838,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4839, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4840,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4841, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4842,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4843,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4844, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4845, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 4846, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4847, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4848, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8348, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 4849,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4850, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[6].properties.d", 1,\
 5, 8335, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[6].properties.s", 1,\
 5, 8336, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].properties.T", 1,\
 5, 8337, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8349, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8350, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.M", \
"Average molar mass [kg/mol]", 8351, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[6].properties.cp", 1,\
 5, 8338, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8352, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[6].properties.beta", 1,\
 5, 8339, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8353, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.w", \
"Speed of sound [m/s]", 8354, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8355, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8356, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8357, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8358, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8359, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8360, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.phi", \
"Relative humidity", "heatPumpCycle.evaporator.moistAirCell[6].phiMoistAirIn", 1,\
 5, 8376, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8361, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8362, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8363, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8364, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8365, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8366, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8367, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8368, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8369, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8370,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8371,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[6].properties.transp.Pr", 1,\
 5, 8340, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[6].properties.transp.lambda", 1,\
 5, 8341, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[6].properties.transp.eta", 1,\
 5, 8342, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[6].properties.transp.sigma", 1,\
 5, 8343, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 4851, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4852, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4853,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4854, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4855,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4856,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4857, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4858, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 4859, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4860, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4861, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8372, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4862, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11586, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11587, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11588, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11589, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11590, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8373, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8374, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11591, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].H_WallPlusFilmStart", \
"[J]", 8375, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[6].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 100, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[6].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 100, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11592, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].betaA_eff", \
"mass transfer coefficient", 11593, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11594, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].properties.T", 1,\
 5, 8337, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].phiMoistAirIn", \
"deprecated interface", 8376, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].xiMoistAirIn[2]", \
"[1]", 8377, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].m_flow", -1,\
 5, 11991, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 4863, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature", 1,\
 5, 11575, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4864, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4865, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4866, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4867, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4868, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4869, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 4870, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature", 1,\
 5, 11575, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4871, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4872, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 4873, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature", 1,\
 5, 11575, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 4874, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 4875, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[6].wallCellGeometry.length", 1, 5,\
 8327, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[6].wallCellGeometry.volume", 1, 5,\
 8328, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4876, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8378, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 4877, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.R_NS", 1,\
 5, 8378, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 4878, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8379, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].geometricWallMass", \
"Geometric mass [kg]", 8380, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].QflowMoistAirToWall", \
"[W]", 11595, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].QflowMoistAirToWallLatent",\
 "[W]", 11596, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature", 1,\
 5, 11575, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].freezingTemperature", \
"[K;degC]", 8381, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4879, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4880,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4881, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4882,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4883,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4884, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4885, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 4886, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4887, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4888, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8382, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 492, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[6].p_s_Wall", 1,\
 5, 11567, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[6].xiCondensingMoistAirWallSaturation", 1,\
 5, 11574, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11597, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].CpWallAndFin", \
"Heat capacity of wall and fin", 8383, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 4889, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[6].x2", 1,\
 5, 11597, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11598,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11599,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[6].crossSectionalAreaReductionFactor", 1,\
 5, 11577, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 4890, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.wf_blockedCrossSection",\
 "", 11600, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 493, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 494, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 495, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 496, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 497, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 498, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[6].x2", 1,\
 5, 11597, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[6].massFilm", 1,\
 1, 99, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[6].frostingModel.rhoFilm", 1, 5, 11598, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8384, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[6].mdotCondensate", 1, 5, 11572,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[6].properties.transp.lambda", 1,\
 5, 8341, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.massMin",\
 "[kg]", 8385, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8386, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8387, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8388, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8389, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8390, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 101, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 101, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.c1",\
 "factor", 8391, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8392, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8393, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[6].frostingModel.frosting.defaultTau",\
 "", 499, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4891, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4892,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 4893, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4894,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4895,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4896, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4897, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.xi_default[1]",\
 "Default mass fractions", 4898, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4899, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4900, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].cellGeometry.volume", \
"[m3]", 8394, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].cellGeometry.heatTransferArea",\
 "[m2]", 8395, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8396, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].massFilmMax", \
"maximum amount of water in steady state [kg]", 8397, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].dryOutRatio", \
"below this water ratio, wetting partial", 8398, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[7].heatPort.T", 1,\
 5, 11125, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[7].heatPort.Q_flow", -1,\
 5, 11126, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatPortW.T", \
"Port temperature [K;degC]", 11601, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 4901, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatPortE.T", \
"Port temperature [K;degC]", 11602, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 4902, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4903, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4904,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4905, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4906,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4907,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4908, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4909, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 4910, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4911, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4912, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].m_flow", -1,\
 5, 11992, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 4913, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 4914, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4915, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4916,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4917, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4918,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4919,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4920, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4921, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 4922, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4923, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4924, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].m_flow", -1,\
 5, 12002, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11603, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11604, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallCellGeometry.length",\
 "[m]", 8399, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallCellGeometry.volume",\
 "[m3]", 8400, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 4925, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 4926, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finVolume", \
"Volume of the fin [m3]", 8401, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 4927, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8402, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8403, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].TWallInitial", \
"Initial wall temperature [K;degC]", 8404, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 4928, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].massFilmInitial", \
"Initial value for water film mass [kg]", 8405, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 4929,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8406, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 4930, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11605, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.d", \
"Density [kg/m3|g/cm3]", 4931, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature", 1,\
 5, 11615, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4932, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4933, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4934, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4935, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4936, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4937, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.solid.d", \
"Density [kg/m3|g/cm3]", 4938, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature", 1,\
 5, 11615, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 4939, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 4940, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11606, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11607, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11608, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11609, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.d", \
"Density [kg/m3|g/cm3]", 8407, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.s", \
"Specific entropy [J/(kg.K)]", 8408, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.T", \
"Temperature [K;degC]", 8409, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.q", \
"Steam mass fraction (quality) [1]", 4941, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8410, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8411, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 4942, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 4943, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.crit.p", \
"Critical pressure [Pa|bar]", 4944, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 4945, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.crit.T", \
"Critical temperature [K;degC]", 4946, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 4947, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 4948, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 4949, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 4950, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 4951, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 4952, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 4953, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 4954, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 4955, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 4956, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 4957, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 4958, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 4959, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 4960, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 4961, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 4962, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.transp.Pr",\
 "Prandtl number [1]", 8412, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8413, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8414, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].properties.transp.sigma",\
 "Surface tension [N/m]", 8415, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[7].massFilm", \
"mass of water/ice film [kg]", 102, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[7].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 102, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11610, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11611, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].mdotCondensate", \
"[kg/s]", 11612, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].mdotEvaporate", \
"[kg/s]", 11613, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].pMoistAirIn", "[Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].xiCondensingMoistAirWallSaturation",\
 "[1]", 11614, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature",\
 "[K;degC]", 11615, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallSurfaceTemperature",\
 "[K;degC]", 11616, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature", 1,\
 5, 11615, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11617, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 4963, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finEfficiency.eta", \
"Fin efficiency", 11618, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8416, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8417, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].finEfficiency.X", \
"Auxiliary variable", 11619, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.alphaA", \
"Value for alphaA for one cell [W/K]", 11620, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 4964, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 4965, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.dae", \
"Equivalent diameter [m]", 8418, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11621, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11622, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.Re", \
"Reynolds number [1]", 11623, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.Nu", \
"Nusselt Number [1]", 11624, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 500, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 4966, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 4967, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 4968, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].computeTransportProperties",\
 "[:#(type=Boolean)]", 4969, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].linearLimitRatio", "",\
 501, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11625, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].mdotHydraulicStart", \
"[kg/s]", 8419, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].Le", "Lewis Factor", 4970,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4971, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4972,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4973, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4974,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4975,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4976, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4977, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 4978, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4979, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4980, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8420, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 4981,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4982, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[7].properties.d", 1,\
 5, 8407, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[7].properties.s", 1,\
 5, 8408, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].properties.T", 1,\
 5, 8409, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8421, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8422, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.M", \
"Average molar mass [kg/mol]", 8423, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[7].properties.cp", 1,\
 5, 8410, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8424, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[7].properties.beta", 1,\
 5, 8411, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8425, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.w", \
"Speed of sound [m/s]", 8426, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8427, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8428, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8429, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8430, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8431, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8432, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.phi", \
"Relative humidity", "heatPumpCycle.evaporator.moistAirCell[7].phiMoistAirIn", 1,\
 5, 8448, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8433, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8434, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8435, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8436, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8437, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8438, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8439, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8440, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8441, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8442,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8443,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[7].properties.transp.Pr", 1,\
 5, 8412, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[7].properties.transp.lambda", 1,\
 5, 8413, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[7].properties.transp.eta", 1,\
 5, 8414, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[7].properties.transp.sigma", 1,\
 5, 8415, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 4983, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 4984, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 4985,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 4986, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4987,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 4988,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 4989, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 4990, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 4991, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 4992, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 4993, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8444, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 4994, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11626, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11627, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11628, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11629, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11630, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8445, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8446, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11631, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].H_WallPlusFilmStart", \
"[J]", 8447, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[7].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 103, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[7].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 103, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11632, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].betaA_eff", \
"mass transfer coefficient", 11633, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11634, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].properties.T", 1,\
 5, 8409, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].phiMoistAirIn", \
"deprecated interface", 8448, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].xiMoistAirIn[2]", \
"[1]", 8449, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].m_flow", -1,\
 5, 11992, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 4995, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature", 1,\
 5, 11615, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 4996, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 4997, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 4998, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 4999, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5000, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5001, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 5002, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature", 1,\
 5, 11615, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 5003, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 5004, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 5005, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature", 1,\
 5, 11615, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 5006, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 5007, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[7].wallCellGeometry.length", 1, 5,\
 8399, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[7].wallCellGeometry.volume", 1, 5,\
 8400, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 5008, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8450, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 5009, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.R_NS", 1,\
 5, 8450, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 5010, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8451, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].geometricWallMass", \
"Geometric mass [kg]", 8452, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].QflowMoistAirToWall", \
"[W]", 11635, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].QflowMoistAirToWallLatent",\
 "[W]", 11636, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature", 1,\
 5, 11615, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].freezingTemperature", \
"[K;degC]", 8453, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5011, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5012,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5013, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5014,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5015,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5016, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5017, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 5018, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5019, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5020, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8454, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 502, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[7].p_s_Wall", 1,\
 5, 11607, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[7].xiCondensingMoistAirWallSaturation", 1,\
 5, 11614, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11637, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].CpWallAndFin", \
"Heat capacity of wall and fin", 8455, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 5021, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[7].x2", 1,\
 5, 11637, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11638,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11639,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[7].crossSectionalAreaReductionFactor", 1,\
 5, 11617, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 5022, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.wf_blockedCrossSection",\
 "", 11640, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 503, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 504, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 505, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 506, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 507, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 508, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[7].x2", 1,\
 5, 11637, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[7].massFilm", 1,\
 1, 102, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[7].frostingModel.rhoFilm", 1, 5, 11638, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8456, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[7].mdotCondensate", 1, 5, 11612,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[7].properties.transp.lambda", 1,\
 5, 8413, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.massMin",\
 "[kg]", 8457, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8458, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8459, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8460, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8461, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8462, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 104, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 104, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.c1",\
 "factor", 8463, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8464, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8465, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[7].frostingModel.frosting.defaultTau",\
 "", 509, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5023, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5024,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5025, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5026,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5027,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5028, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5029, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.xi_default[1]",\
 "Default mass fractions", 5030, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5031, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5032, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].cellGeometry.volume", \
"[m3]", 8466, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].cellGeometry.heatTransferArea",\
 "[m2]", 8467, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8468, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].massFilmMax", \
"maximum amount of water in steady state [kg]", 8469, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].dryOutRatio", \
"below this water ratio, wetting partial", 8470, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[8].heatPort.T", 1,\
 5, 11186, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[8].heatPort.Q_flow", -1,\
 5, 11187, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatPortW.T", \
"Port temperature [K;degC]", 11641, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 5033, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatPortE.T", \
"Port temperature [K;degC]", 11642, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 5034, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5035, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5036,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5037, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5038,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5039,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5040, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5041, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 5042, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5043, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5044, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].m_flow", -1,\
 5, 11993, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 5045, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 5046, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5047, false, 0.0,0.0,0.0,0,1539)
EndNonAlias(10)
PreNonAliasNew(11)
StartNonAlias(11)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5048,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5049, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5050,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5051,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5052, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5053, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 5054, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5055, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5056, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].m_flow", -1,\
 5, 12003, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11643, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11644, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallCellGeometry.length",\
 "[m]", 8471, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallCellGeometry.volume",\
 "[m3]", 8472, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 5057, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 5058, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finVolume", \
"Volume of the fin [m3]", 8473, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 5059, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8474, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8475, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].TWallInitial", \
"Initial wall temperature [K;degC]", 8476, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 5060, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].massFilmInitial", \
"Initial value for water film mass [kg]", 8477, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 5061,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8478, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 5062, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11645, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.d", \
"Density [kg/m3|g/cm3]", 5063, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature", 1,\
 5, 11655, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 5064, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 5065, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5066, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5067, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5068, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5069, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.solid.d", \
"Density [kg/m3|g/cm3]", 5070, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature", 1,\
 5, 11655, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 5071, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 5072, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11646, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11647, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11648, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11649, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.d", \
"Density [kg/m3|g/cm3]", 8479, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.s", \
"Specific entropy [J/(kg.K)]", 8480, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.T", \
"Temperature [K;degC]", 8481, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.q", \
"Steam mass fraction (quality) [1]", 5073, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8482, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8483, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 5074, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 5075, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.crit.p", \
"Critical pressure [Pa|bar]", 5076, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 5077, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.crit.T", \
"Critical temperature [K;degC]", 5078, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 5079, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 5080, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 5081, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 5082, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 5083, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 5084, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 5085, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 5086, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 5087, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 5088, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 5089, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 5090, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 5091, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 5092, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 5093, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 5094, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.transp.Pr",\
 "Prandtl number [1]", 8484, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8485, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8486, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].properties.transp.sigma",\
 "Surface tension [N/m]", 8487, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[8].massFilm", \
"mass of water/ice film [kg]", 105, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[8].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 105, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11650, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11651, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].mdotCondensate", \
"[kg/s]", 11652, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].mdotEvaporate", \
"[kg/s]", 11653, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].pMoistAirIn", "[Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].xiCondensingMoistAirWallSaturation",\
 "[1]", 11654, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature",\
 "[K;degC]", 11655, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallSurfaceTemperature",\
 "[K;degC]", 11656, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature", 1,\
 5, 11655, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11657, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 5095, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finEfficiency.eta", \
"Fin efficiency", 11658, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8488, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8489, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].finEfficiency.X", \
"Auxiliary variable", 11659, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.alphaA", \
"Value for alphaA for one cell [W/K]", 11660, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 5096, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 5097, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.dae", \
"Equivalent diameter [m]", 8490, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11661, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11662, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.Re", \
"Reynolds number [1]", 11663, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.Nu", \
"Nusselt Number [1]", 11664, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 510, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 5098, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 5099, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 5100, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].computeTransportProperties",\
 "[:#(type=Boolean)]", 5101, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].linearLimitRatio", "",\
 511, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11665, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].mdotHydraulicStart", \
"[kg/s]", 8491, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].Le", "Lewis Factor", 5102,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5103, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5104,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5105, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5106,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5107,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5108, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5109, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 5110, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5111, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5112, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8492, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 5113,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 5114, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[8].properties.d", 1,\
 5, 8479, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[8].properties.s", 1,\
 5, 8480, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].properties.T", 1,\
 5, 8481, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8493, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8494, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.M", \
"Average molar mass [kg/mol]", 8495, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[8].properties.cp", 1,\
 5, 8482, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8496, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[8].properties.beta", 1,\
 5, 8483, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8497, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.w", \
"Speed of sound [m/s]", 8498, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8499, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8500, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8501, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8502, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8503, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8504, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.phi", \
"Relative humidity", "heatPumpCycle.evaporator.moistAirCell[8].phiMoistAirIn", 1,\
 5, 8520, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8505, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8506, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8507, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8508, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8509, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8510, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8511, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8512, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8513, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8514,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8515,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[8].properties.transp.Pr", 1,\
 5, 8484, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[8].properties.transp.lambda", 1,\
 5, 8485, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[8].properties.transp.eta", 1,\
 5, 8486, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[8].properties.transp.sigma", 1,\
 5, 8487, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 5115, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5116, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5117,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5118, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5119,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5120,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5121, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5122, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 5123, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5124, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5125, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8516, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 5126, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11666, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11667, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11668, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11669, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11670, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8517, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8518, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11671, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].H_WallPlusFilmStart", \
"[J]", 8519, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[8].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 106, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[8].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 106, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11672, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].betaA_eff", \
"mass transfer coefficient", 11673, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11674, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].properties.T", 1,\
 5, 8481, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].phiMoistAirIn", \
"deprecated interface", 8520, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].xiMoistAirIn[2]", \
"[1]", 8521, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].m_flow", -1,\
 5, 11993, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 5127, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature", 1,\
 5, 11655, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 5128, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 5129, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5130, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5131, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5132, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5133, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 5134, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature", 1,\
 5, 11655, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 5135, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 5136, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 5137, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature", 1,\
 5, 11655, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 5138, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 5139, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[8].wallCellGeometry.length", 1, 5,\
 8471, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[8].wallCellGeometry.volume", 1, 5,\
 8472, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 5140, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8522, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 5141, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.R_NS", 1,\
 5, 8522, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 5142, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8523, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].geometricWallMass", \
"Geometric mass [kg]", 8524, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].QflowMoistAirToWall", \
"[W]", 11675, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].QflowMoistAirToWallLatent",\
 "[W]", 11676, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature", 1,\
 5, 11655, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].freezingTemperature", \
"[K;degC]", 8525, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5143, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5144,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5145, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5146,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5147,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5148, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5149, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 5150, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5151, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5152, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8526, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 512, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[8].p_s_Wall", 1,\
 5, 11647, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[8].xiCondensingMoistAirWallSaturation", 1,\
 5, 11654, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11677, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].CpWallAndFin", \
"Heat capacity of wall and fin", 8527, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 5153, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[8].x2", 1,\
 5, 11677, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11678,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11679,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[8].crossSectionalAreaReductionFactor", 1,\
 5, 11657, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 5154, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.wf_blockedCrossSection",\
 "", 11680, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 513, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 514, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 515, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 516, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 517, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 518, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[8].x2", 1,\
 5, 11677, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[8].massFilm", 1,\
 1, 105, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[8].frostingModel.rhoFilm", 1, 5, 11678, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8528, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[8].mdotCondensate", 1, 5, 11652,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[8].properties.transp.lambda", 1,\
 5, 8485, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.massMin",\
 "[kg]", 8529, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8530, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8531, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8532, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8533, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8534, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 107, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 107, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.c1",\
 "factor", 8535, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8536, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8537, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[8].frostingModel.frosting.defaultTau",\
 "", 519, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5155, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5156,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5157, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5158,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5159,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5160, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5161, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.xi_default[1]",\
 "Default mass fractions", 5162, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5163, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5164, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].cellGeometry.volume", \
"[m3]", 8538, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].cellGeometry.heatTransferArea",\
 "[m2]", 8539, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8540, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].massFilmMax", \
"maximum amount of water in steady state [kg]", 8541, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].dryOutRatio", \
"below this water ratio, wetting partial", 8542, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[9].heatPort.T", 1,\
 5, 11247, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[9].heatPort.Q_flow", -1,\
 5, 11248, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatPortW.T", \
"Port temperature [K;degC]", 11681, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 5165, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatPortE.T", \
"Port temperature [K;degC]", 11682, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 5166, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5167, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5168,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5169, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5170,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5171,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5172, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5173, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 5174, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5175, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5176, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].m_flow", -1,\
 5, 11994, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 5177, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 5178, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5179, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5180,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5181, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5182,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5183,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5184, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5185, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 5186, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5187, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5188, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].m_flow", -1,\
 5, 12004, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11683, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11684, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallCellGeometry.length",\
 "[m]", 8543, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallCellGeometry.volume",\
 "[m3]", 8544, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 5189, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 5190, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finVolume", \
"Volume of the fin [m3]", 8545, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 5191, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8546, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8547, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].TWallInitial", \
"Initial wall temperature [K;degC]", 8548, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 5192, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].massFilmInitial", \
"Initial value for water film mass [kg]", 8549, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 5193,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8550, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 5194, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11685, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.d", \
"Density [kg/m3|g/cm3]", 5195, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature", 1,\
 5, 11695, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 5196, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 5197, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5198, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5199, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5200, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5201, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.solid.d", \
"Density [kg/m3|g/cm3]", 5202, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature", 1,\
 5, 11695, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 5203, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 5204, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11686, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11687, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11688, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11689, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.d", \
"Density [kg/m3|g/cm3]", 8551, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.s", \
"Specific entropy [J/(kg.K)]", 8552, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.T", \
"Temperature [K;degC]", 8553, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.q", \
"Steam mass fraction (quality) [1]", 5205, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8554, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8555, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 5206, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 5207, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.crit.p", \
"Critical pressure [Pa|bar]", 5208, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 5209, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.crit.T", \
"Critical temperature [K;degC]", 5210, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 5211, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 5212, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 5213, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 5214, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 5215, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 5216, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 5217, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 5218, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 5219, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 5220, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 5221, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 5222, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 5223, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 5224, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 5225, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 5226, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.transp.Pr",\
 "Prandtl number [1]", 8556, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8557, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8558, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].properties.transp.sigma",\
 "Surface tension [N/m]", 8559, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[9].massFilm", \
"mass of water/ice film [kg]", 108, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[9].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 108, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11690, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11691, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].mdotCondensate", \
"[kg/s]", 11692, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].mdotEvaporate", \
"[kg/s]", 11693, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].pMoistAirIn", "[Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].xiCondensingMoistAirWallSaturation",\
 "[1]", 11694, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature",\
 "[K;degC]", 11695, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallSurfaceTemperature",\
 "[K;degC]", 11696, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature", 1,\
 5, 11695, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11697, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 5227, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finEfficiency.eta", \
"Fin efficiency", 11698, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8560, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8561, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].finEfficiency.X", \
"Auxiliary variable", 11699, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.alphaA", \
"Value for alphaA for one cell [W/K]", 11700, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 5228, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 5229, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.dae", \
"Equivalent diameter [m]", 8562, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11701, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11702, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.Re", \
"Reynolds number [1]", 11703, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.Nu", \
"Nusselt Number [1]", 11704, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 520, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 5230, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 5231, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 5232, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].computeTransportProperties",\
 "[:#(type=Boolean)]", 5233, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].linearLimitRatio", "",\
 521, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11705, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].mdotHydraulicStart", \
"[kg/s]", 8563, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].Le", "Lewis Factor", 5234,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5235, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5236,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5237, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5238,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5239,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5240, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5241, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 5242, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5243, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5244, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8564, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 5245,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 5246, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[9].properties.d", 1,\
 5, 8551, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[9].properties.s", 1,\
 5, 8552, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].properties.T", 1,\
 5, 8553, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8565, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8566, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.M", \
"Average molar mass [kg/mol]", 8567, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[9].properties.cp", 1,\
 5, 8554, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8568, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[9].properties.beta", 1,\
 5, 8555, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8569, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.w", \
"Speed of sound [m/s]", 8570, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8571, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8572, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8573, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8574, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8575, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8576, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.phi", \
"Relative humidity", "heatPumpCycle.evaporator.moistAirCell[9].phiMoistAirIn", 1,\
 5, 8592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8577, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8578, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8579, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8580, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8581, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8582, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8583, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8584, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8585, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8586,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8587,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[9].properties.transp.Pr", 1,\
 5, 8556, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[9].properties.transp.lambda", 1,\
 5, 8557, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[9].properties.transp.eta", 1,\
 5, 8558, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[9].properties.transp.sigma", 1,\
 5, 8559, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 5247, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5248, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5249,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5250, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5251,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5252,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5253, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5254, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 5255, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5256, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5257, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8588, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 5258, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11706, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11707, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11708, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11709, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11710, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8589, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8590, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11711, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].H_WallPlusFilmStart", \
"[J]", 8591, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[9].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 109, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[9].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 109, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11712, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].betaA_eff", \
"mass transfer coefficient", 11713, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11714, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].hMoistAirIn", "[J/kg]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].properties.T", 1,\
 5, 8553, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].phiMoistAirIn", \
"deprecated interface", 8592, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].xiMoistAirIn[2]", \
"[1]", 8593, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].m_flow", -1,\
 5, 11994, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 5259, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature", 1,\
 5, 11695, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 5260, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 5261, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5262, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5263, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5264, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5265, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 5266, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature", 1,\
 5, 11695, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 5267, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 5268, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 5269, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature", 1,\
 5, 11695, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 5270, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 5271, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[9].wallCellGeometry.length", 1, 5,\
 8543, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[9].wallCellGeometry.volume", 1, 5,\
 8544, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 5272, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8594, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 5273, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.R_NS", 1,\
 5, 8594, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 5274, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8595, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].geometricWallMass", \
"Geometric mass [kg]", 8596, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].QflowMoistAirToWall", \
"[W]", 11715, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].QflowMoistAirToWallLatent",\
 "[W]", 11716, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature", 1,\
 5, 11695, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].freezingTemperature", \
"[K;degC]", 8597, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5275, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5276,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5277, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5278,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5279,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5280, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5281, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 5282, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5283, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5284, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8598, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 522, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[9].p_s_Wall", 1,\
 5, 11687, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[9].xiCondensingMoistAirWallSaturation", 1,\
 5, 11694, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11717, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].CpWallAndFin", \
"Heat capacity of wall and fin", 8599, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 5285, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[9].x2", 1,\
 5, 11717, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11718,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11719,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[9].crossSectionalAreaReductionFactor", 1,\
 5, 11697, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 5286, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.wf_blockedCrossSection",\
 "", 11720, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 523, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 524, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 525, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 526, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 527, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 528, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[9].x2", 1,\
 5, 11717, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[9].massFilm", 1,\
 1, 108, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[9].frostingModel.rhoFilm", 1, 5, 11718, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8600, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[9].mdotCondensate", 1, 5, 11692,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[9].properties.transp.lambda", 1,\
 5, 8557, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.massMin",\
 "[kg]", 8601, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8602, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8603, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8604, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8605, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8606, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 110, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 110, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.c1",\
 "factor", 8607, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8608, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8609, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[9].frostingModel.frosting.defaultTau",\
 "", 529, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5287, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5288,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5289, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5290,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5291,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5292, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5293, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.xi_default[1]",\
 "Default mass fractions", 5294, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5295, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5296, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].cellGeometry.length", \
"[m]", "heatPumpCycle.evaporator.hxGeometry.totalHXDepth", 1, 5, 7580, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].cellGeometry.volume",\
 "[m3]", 8610, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].cellGeometry.heatTransferArea",\
 "[m2]", 8611, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", "heatPumpCycle.evaporator.hxGeometry.finSideHeatTransferAreaRatio", 1,\
 5, 7592, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 8612, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", "heatPumpCycle.evaporator.hxGeometry._nParallelTubes", 1,\
 5, 7569, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].massFilmMax", \
"maximum amount of water in steady state [kg]", 8613, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].dryOutRatio", \
"below this water ratio, wetting partial", 8614, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallHeatPortN.T", \
"Port temperature [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[10].heatPort.T", 1,\
 5, 11308, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallHeatPortN.Q_flow", \
"Heat flow rate [W]", "heatPumpCycle.evaporator.vleFluidCell[10].heatPort.Q_flow", -1,\
 5, 11309, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatPortW.T", \
"Port temperature [K;degC]", 11721, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatPortW.Q_flow",\
 "Heat flow rate [W]", 5297, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatPortE.T", \
"Port temperature [K;degC]", 11722, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatPortE.Q_flow",\
 "Heat flow rate [W]", 5298, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5299, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5300,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5301, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5302,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5303,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5304, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5305, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.xi_default[1]",\
 "Default mass fractions", 5306, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5307, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5308, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].m_flow", -1,\
 5, 11995, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 5309, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortA.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 5310, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5311, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5312,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5313, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5314,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5315,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5316, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5317, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.xi_default[1]",\
 "Default mass fractions", 5318, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5319, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5320, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].m_flow", -1,\
 5, 12005, 1156)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11723, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirPortB.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 11724, \
0.0, 0.0,1.0,0.0,0,2568)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallCellGeometry.length",\
 "[m]", 8615, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallCellGeometry.volume",\
 "[m3]", 8616, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].flagActivateWallCondensation",\
 "if true, water condenses on the wall surface [:#(type=Boolean)]", 5321, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].flagActivateDynWaterBalance",\
 "if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 5322, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finVolume", \
"Volume of the fin [m3]", 8617, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 5323, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8618, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].m_flowStart", \
"Start value for mass flow rate [kg/s]", 8619, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].TWallInitial", \
"Initial wall temperature [K;degC]", 8620, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].TWallInitialParameterFixed",\
 "The parameter (!) TWallInitial is fixed=false or fixed=true [:#(type=Boolean)]",\
 5324, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].massFilmInitial", \
"Initial value for water film mass [kg]", 8621, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].initWallTemperatureInSteadyState",\
 "if true, initialise wall temperature in steady state [:#(type=Boolean)]", 5325,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].pressureDropMoistAirInitial",\
 "Start value for pressure drop [Pa|bar]", 8622, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].fixedPressureDropMoistAirInitial",\
 "if true, force usage of initial value [:#(type=Boolean)]", 5326, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].warningCellFlowDirection",\
 "if > 0, flow direction does not match CellFlowType", 11725, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.d", \
"Density [kg/m3|g/cm3]", 5327, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature", 1,\
 5, 11735, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.cp", \
"Heat capacity [J/(kg.K)]", 5328, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.lambda", \
"Thermal conductivity [W/(m.K)]", 5329, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5330, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5331, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5332, 920.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5333, 215.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 5334, 2700.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature", 1,\
 5, 11735, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 5335, 920.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 5336, 215.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].alpha", \
"Coefficient of heat transfer of this cell [W/(m2.K)]", 11726, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].p_s_Wall", \
"Saturation partial water pressure at wall [Pa|bar]", 11727, 0.0, 0.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].mdotHydraulic", \
"Hydraulic mass flow rate [kg/s]", 11728, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].QdotHydraulic", \
"Hydraulic heat flow rate [W]", 11729, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.d", \
"Density [kg/m3|g/cm3]", 8623, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].properties.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].properties.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.s", \
"Specific entropy [J/(kg.K)]", 8624, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.T", \
"Temperature [K;degC]", 8625, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.q", \
"Steam mass fraction (quality) [1]", 5337, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 8626, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.beta", \
"Isobaric expansion coefficient [1/K]", 8627, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.crit.d", \
"Critical density [kg/m3|g/cm3]", 5338, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.crit.h", \
"Critical specific enthalpy [J/kg]", 5339, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.crit.p", \
"Critical pressure [Pa|bar]", 5340, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.crit.s", \
"Critical specific entropy [J/(kg.K)]", 5341, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.crit.T", \
"Critical temperature [K;degC]", 5342, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 5343, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 5344, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 5345, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 5346, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 5347, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 5348, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 5349, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 5350, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 5351, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 5352, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 5353, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 5354, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 5355, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 5356, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 5357, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 5358, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.transp.Pr",\
 "Prandtl number [1]", 8628, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 8629, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 8630, 0.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].properties.transp.sigma",\
 "Surface tension [N/m]", 8631, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[10].massFilm", \
"mass of water/ice film [kg]", 111, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[10].der(massFilm)", \
"der(mass of water/ice film) [kg/s]", 111, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].x", "liquid film mass fraction (= 1 - ice mass fraction) [1]",\
 11730, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].mdotWaterDrain", \
"condensate leaving heat exchanger [kg/s]", 11731, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].mdotCondensate", \
"[kg/s]", 11732, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].mdotEvaporate", \
"[kg/s]", 11733, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].pMoistAirIn", \
"[Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].xiCondensingMoistAirIn",\
 "[1]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1,\
 5, 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].xiCondensingMoistAirWallSaturation",\
 "[1]", 11734, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature",\
 "[K;degC]", 11735, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallSurfaceTemperature",\
 "[K;degC]", 11736, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature", 1,\
 5, 11735, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of ice or water)",\
 11737, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to ice", 5359, 1, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finEfficiency.eta", \
"Fin efficiency", 11738, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finEfficiency.diameterRatio",\
 "Dimensionless diameter ratio", 8632, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finEfficiency.effectiveFinHeight",\
 "Effective fin height [m]", 8633, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].finEfficiency.X", \
"Auxiliary variable", 11739, 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 11740, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 5360, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 5361, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.dae", \
"Equivalent diameter [m]", 8634, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.alpha", \
"value for alpha [W/(m2.K)]", 11741, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.averageVelocity",\
 "average Speed of air [m/s]", 11742, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.Re", \
"Reynolds number [1]", 11743, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.Nu", \
"Nusselt Number [1]", 11744, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].heatTransfer.correctionFactor",\
 "Linear correction factor for the overall alphaA calculated by this heat transfer model and its submodels.",\
 530, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 5362, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 5363, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 5364, 0.0, 0.0,0.0,\
100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].computeTransportProperties",\
 "[:#(type=Boolean)]", 5365, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].linearLimitRatio", \
"", 531, 0.05, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].mdotLimit", \
"below this mass flow the alpha_eff may cause div 0 [kg/s]", 11745, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].mdotHydraulicStart", \
"[kg/s]", 8635, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].Le", "Lewis Factor", 5366,\
 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5367, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5368,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5369, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5370,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5371,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5372, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5373, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.xi_default[1]",\
 "Default mass fractions", 5374, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5375, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5376, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.gasPointer.id",\
 "[:#(type=Integer)]", 8636, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 5377,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 5378, true,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.d", \
"Density [kg/m3|g/cm3]", "heatPumpCycle.evaporator.moistAirCell[10].properties.d", 1,\
 5, 8623, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.h", \
"Specific enthalpy [J/kg]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1,\
 5, 8763, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.s", \
"Specific entropy [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[10].properties.s", 1,\
 5, 8624, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].properties.T", 1,\
 5, 8625, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.xi[1]",\
 "Mass fraction [1]", 8637, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.x[1]",\
 "Mole fraction [1]", 8638, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.M",\
 "Average molar mass [kg/mol]", 8639, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", "heatPumpCycle.evaporator.moistAirCell[10].properties.cp", 1,\
 5, 8626, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.cv",\
 "Specific isochoric heat capacity cv [J/(kg.K)]", 8640, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.beta",\
 "Isobaric thermal expansion coefficient [1/K]", "heatPumpCycle.evaporator.moistAirCell[10].properties.beta", 1,\
 5, 8627, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.kappa",\
 "Isothermal compressibility [1/Pa]", 8641, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.w",\
 "Speed of sound [m/s]", 8642, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.drhodh_pxi",\
 "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8643, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.drhodp_hxi",\
 "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8644, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.drhodxi_ph[1]",\
 "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8645, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.p_i[1]",\
 "Partial pressure [Pa|bar]", 8646, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.p_i[2]",\
 "Partial pressure [Pa|bar]", 8647, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.xi_gas",\
 "Mass fraction of gasoues condensing component [1]", 8648, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.phi",\
 "Relative humidity", "heatPumpCycle.evaporator.moistAirCell[10].phiMoistAirIn", 1,\
 5, 8664, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.p_s",\
 "Saturation partial pressure of condensing component [Pa|bar]", 8649, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.xi_s",\
 "Saturation mass fraction of condensing component [1]", 8650, 0.0, -1.0,1.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.delta_hv",\
 "Specific enthalpy of vaporation of condensing component [J/kg]", 8651, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.delta_hd",\
 "Specific enthalpy of desublimation of condensing component [J/kg]", 8652, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.h_i[1]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8653, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.h_i[2]",\
 "Specific enthalpy of pure ideal gas component [J/kg]", 8654, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.M_i[1]",\
 "Molar mass of component i [kg/mol]", 8655, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.M_i[2]",\
 "Molar mass of component i [kg/mol]", 8656, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.humRatio",\
 "Content of condensing component aka humidity ratio", 8657, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.humRatio_s",\
 "Saturation content of condensing component aka saturation humidity ratio", 8658,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.h1px",\
 "Enthalpy H divided by the mass of components that cannot condense [J/kg]", 8659,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.transp.Pr",\
 "Prandtl number [1]", "heatPumpCycle.evaporator.moistAirCell[10].properties.transp.Pr", 1,\
 5, 8628, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[10].properties.transp.lambda", 1,\
 5, 8629, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.transp.eta",\
 "Dynamic viscosity [Pa.s]", "heatPumpCycle.evaporator.moistAirCell[10].properties.transp.eta", 1,\
 5, 8630, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.transp.sigma",\
 "Surface tension [N/m]", "heatPumpCycle.evaporator.moistAirCell[10].properties.transp.sigma", 1,\
 5, 8631, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAir_inStream.computeFlags",\
 "[:#(type=Integer)]", 5379, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5380, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5381,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5382, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5383,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5384,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5385, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5386, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.xi_default[1]",\
 "Default mass fractions", 5387, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5388, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5389, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.gasPointer.id",\
 "[:#(type=Integer)]", 8660, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirWall.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 5390, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].hFilm", \
"specific enthalpy of water/ice film [J/kg]", 11746, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceWettingFraction",\
 "wetting fraction of wall and fin surface", 11747, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].H_WallPlusIceFilm_0C",\
 "enthalpy of wall + ice at freezing point [J]", 11748, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].H_WallPlusLiquidFilm_0C",\
 "enthalpy of wall + liquid water at freezing point [J]", 11749, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].h_LiquidFilm", \
"enthalpy of liquid water [J/kg]", 11750, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].h_LiquidFilm_0C", \
"enthalpy of liquid water at freezing point [J/kg]", 8661, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].h_IceFilm_0C", \
"enthalpy of ice at freezing point [J/kg]", 8662, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].delta_hv", \
"specific enthalpy of evaporation / sublimation [J/kg]", 11751, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].H_WallPlusFilmStart",\
 "[J]", 8663, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[10].H_WallPlusFilm", \
"enthalpy of wall and film [J]", 112, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[10].der(H_WallPlusFilm)",\
 "der(enthalpy of wall and film) [W]", 112, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].alphaA_apparent", \
"fin efficiency corrected alphaA [W/K]", 11752, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].betaA_eff", \
"mass transfer coefficient", 11753, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].alphaA_eff", \
"alphaA for inlet temperature difference instead of LMTD [W/K]", 11754, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].hMoistAirIn", "[J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].TMoistAirIn", \
"deprecated interface [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].properties.T", 1,\
 5, 8625, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].phiMoistAirIn", \
"deprecated interface", 8664, 0.0, 0.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].xiMoistAirIn[1]", "[1]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5,\
 8764, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].xiMoistAirIn[2]", \
"[1]", 8665, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].mdotMoistAirIn", \
"[kg/s]", "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].m_flow", -1,\
 5, 11995, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.d", \
"Density [kg/m3|g/cm3]", 5391, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature", 1,\
 5, 11735, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.cp", \
"Heat capacity [J/(kg.K)]", 5392, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 5393, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5394, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5395, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 5396, 380.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 5397, 298.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 5398, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.solid.T", \
"Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature", 1,\
 5, 11735, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 5399, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 5400, 298.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", 5401, 8960.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.properties.T",\
 "Temperature [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature", 1,\
 5, 11735, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.properties.cp",\
 "Heat capacity [J/(kg.K)]", 5402, 380.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 5403, 298.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.cellGeometry.length",\
 "[m]", "heatPumpCycle.evaporator.moistAirCell[10].wallCellGeometry.length", 1, 5,\
 8615, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.cellGeometry.volume",\
 "[m3]", "heatPumpCycle.evaporator.moistAirCell[10].wallCellGeometry.volume", 1,\
 5, 8616, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 5404, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 8666, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 5405, 1000000000000.0, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", "heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.R_NS", 1,\
 5, 8666, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 5406, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].wallHeatTransfer.heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 8667, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].geometricWallMass", \
"Geometric mass [kg]", 8668, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].QflowMoistAirToWall",\
 "[W]", 11755, 0.0, 0.0,0.0,1000.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].QflowMoistAirToWallLatent",\
 "[W]", 11756, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].wallStateTemperature", \
"[K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature", 1,\
 5, 11735, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].freezingTemperature",\
 "[K;degC]", 8669, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5407, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5408,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5409, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5410,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5411,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5412, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5413, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.xi_default[1]",\
 "Default mass fractions", 5414, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5415, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5416, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.gasPointer.id",\
 "[:#(type=Integer)]", 8670, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].moistAirFrozenFilm.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 532, false,\
 0.0,0.0,0.0,0,2610)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].p_s_Wall_bugfix", \
"Saturation partial water pressure at wall [Pa|bar]", "heatPumpCycle.evaporator.moistAirCell[10].p_s_Wall", 1,\
 5, 11727, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].xiCondensingMoistAirWallSaturation_bugfix",\
 "[1]", "heatPumpCycle.evaporator.moistAirCell[10].xiCondensingMoistAirWallSaturation", 1,\
 5, 11734, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].x2", "Transition from ice to liquid, based on the temperature difference between wall surface and film surface (delta T min = 0.01).",\
 11757, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].CpWallAndFin", \
"Heat capacity of wall and fin", 8671, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.computeTransportProperties",\
 "[:#(type=Boolean)]", 5417, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.x", \
"liquid film mass fraction [1]", "heatPumpCycle.evaporator.moistAirCell[10].x2", 1,\
 5, 11757, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.rhoFilm",\
 "Mean density of film (may include liquid water,ice and frost) [kg/m3|g/cm3]", 11758,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.R_film",\
 "Thermal resistance of film (may include liquid water,ice and frost) [K/W]", 11759,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.crossSectionalAreaReductionFactor",\
 "Ratio of free cross sectional area to total cross sectional area (free of liquid water, ice and frost)",\
 "heatPumpCycle.evaporator.moistAirCell[10].crossSectionalAreaReductionFactor", 1,\
 5, 11737, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.heatTransferAreaReductionFactor",\
 "reduction factor for the heat transfer area due to the film thickness", 5418, 1,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.wf_blockedCrossSection",\
 "", 11760, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 533, 2.2, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.lambdaLiquidWater",\
 "Thermal conductivity of liquid water [W/(m.K)]", 534, 0.561, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 535, 1000, 0.0,1.7976931348623157E+308,\
0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 536, 920, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction of water in frost)",\
 537, 0.14, 0.0,0.0,0.0,0,2608)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 538, 2, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.x",\
 "liquid film mass fraction (= 1 - ice mass fraction) [1]", "heatPumpCycle.evaporator.moistAirCell[10].x2", 1,\
 5, 11757, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.massFilm",\
 "mass of water/ice/frost film [kg]", "heatPumpCycle.evaporator.moistAirCell[10].massFilm", 1,\
 1, 111, 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.rhoFilm",\
 "Mean density of film consisting of water,ice and frost [kg/m3|g/cm3]", \
"heatPumpCycle.evaporator.moistAirCell[10].frostingModel.rhoFilm", 1, 5, 11758, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.lambdaFrost",\
 "thermal conductivity of frost [W/(m.K)]", 8672, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.mdotCondensate",\
 "[kg/s]", "heatPumpCycle.evaporator.moistAirCell[10].mdotCondensate", 1, 5, 11732,\
 1024)
DeclareAlias2("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.lambdaMoistAir",\
 "Thermal conductivity of moist air [W/(m.K)]", "heatPumpCycle.evaporator.moistAirCell[10].properties.transp.lambda", 1,\
 5, 8629, 1024)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.massMin",\
 "[kg]", 8673, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.epsilonFixed",\
 "Porosity of hoarfrost (denstiy ratio rhoFrost/rhoIce, is equal to volume fraction water in frost)",\
 8674, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.defrostTimeConstant",\
 "Time Constant that determines the glaciation rate", 8675, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.lambdaIce",\
 "Thermal conductivity of ice [W/(m.K)]", 8676, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.rhoLiquidWater",\
 "Density of liquid water [kg/m3|g/cm3]", 8677, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.rhoIce",\
 "Density of ice [kg/m3|g/cm3]", 8678, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareState("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.frostFraction",\
 "Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero [1]",\
 113, 0.0, -1.0,2.0,0.5,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.der(frostFraction)",\
 "der(Transition between frost (=1) and ice (=0). Does not regard liquid. kg_frost/kg_film_if_below_zero) [s-1]",\
 113, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.c1",\
 "factor", 8679, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.lambda_S",\
 "Serial thermal conductivity [W/(m.K)]", 8680, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.lambda_P",\
 "Parallel thermal conductivity [W/(m.K)]", 8681, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("heatPumpCycle.evaporator.moistAirCell[10].frostingModel.frosting.defaultTau",\
 "", 539, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.useFalseDynamicsMoistAir", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 5419, true, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.evaporator.falseDynamicsTimeConstantMoistAir", \
"Time constant of false dynamics for pressureDropState", 540, 0.1, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.evaporator.flagActivateWallCondensation", \
"if true, water condenses on the wall surface [:#(type=Boolean)]", 5420, true, \
0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.evaporator.flagActivateDynWaterBalance", \
"if true, the condensate on the wall surface is balanced dynamically [:#(type=Boolean)]",\
 5421, true, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.evaporator.mWaterMax", "Maximum water mass in total HX [kg]",\
 541, 0.02, 0.0,1.7976931348623157E+308,0.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.dryOutRatio", "below this water ratio (mWater/mWaterMax), wetting is partial",\
 542, 0.6, 0.0,0.0,0.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.m_flowVLEFluidStart", \
"Start value for mass flow rate [kg/s]", 543, 0.05, 0.0,0.0,0.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.m_flowMoistAirStart", \
"Start value for moist air mass flow rate [kg/s]", 544, 0.05, 0.0,0.0,0.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.pVLEFluidStart", "Start value for pressure [Pa|bar]",\
 545, 100000.0, 0.0,1.7976931348623157E+308,100000.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.hInitialVLEFluid_Cell1", \
"Initial value for specific enthalpy of cell 1 [J/kg]", 546, 250000.0, 0.0,0.0,\
0.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.hInitialVLEFluid_CellN", \
"Initial value for specific enthalpy of cell n [J/kg]", 547, 350000.0, 0.0,0.0,\
0.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.TInitialVLEFluid", "Initial value for temperature [K;degC]",\
 548, 298.15, 0.0,1.7976931348623157E+308,300.0,0,560)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[1]", \
"Initial values for specific enthalpies [J/kg]", 8682, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[2]", \
"Initial values for specific enthalpies [J/kg]", 8683, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[3]", \
"Initial values for specific enthalpies [J/kg]", 8684, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[4]", \
"Initial values for specific enthalpies [J/kg]", 8685, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[5]", \
"Initial values for specific enthalpies [J/kg]", 8686, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[6]", \
"Initial values for specific enthalpies [J/kg]", 8687, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[7]", \
"Initial values for specific enthalpies [J/kg]", 8688, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[8]", \
"Initial values for specific enthalpies [J/kg]", 8689, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[9]", \
"Initial values for specific enthalpies [J/kg]", 8690, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.hInitialUserValues[10]", \
"Initial values for specific enthalpies [J/kg]", 8691, 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("heatPumpCycle.evaporator.pressureDropInitialVLEFluid", \
"Initial value for pressure drop [Pa|bar]", 549, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.evaporator.fixedPressureDropInitialVLEFluid", \
"if true, force usage of initial value [:#(type=Boolean)]", 5422, true, 0.0,0.0,\
0.0,0,515)
DeclareParameter("heatPumpCycle.evaporator.TInitialWall", "Initial value for temperature [K;degC]",\
 550, 298.15, 0.0,1.7976931348623157E+308,300.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.pressureDropInitialMoistAir", \
"Initial value for pressure drop [Pa|bar]", 551, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.evaporator.fixedPressureDropInitialMoistAir", \
"if true, force usage of initial value [:#(type=Boolean)]", 5423, true, 0.0,0.0,\
0.0,0,515)
DeclareParameter("heatPumpCycle.evaporator.mWaterInitial", "Initial water mass in total HX, which should be less or equal than mWaterMax [kg]",\
 552, 0, 0.0,1.7976931348623157E+308,0.0,0,560)
DeclareSParameter("heatPumpCycle.evaporator.initHeatTransfer", "Choice of initialization variable",\
 4, "alphaA", 0.0,0.0,0.0,0,513)
DeclareParameter("heatPumpCycle.evaporator.alphaInitialVLEFluid", \
"Initial value for alpha [W/(m2.K)]", 553, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.alphaAInitialVLEFluid", \
"Initial value for alphaA [W/K]", 554, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.evaporator.mixingRatioInitialVLEFluid[1]", \
"Initial value for mixing ratio", 5424, 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.visualizeWarnings", "If true, warnings will be visualized in the diagram layer [:#(type=Boolean)]",\
 8692, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.evaporator.warning_h_limit", "if > 0, outflowing enthalpy is limited in at least one cell element",\
 11761, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.warningCellFlowDirection", \
"if > 0, flow direction does not match CellFlowType in at least one cell element",\
 11762, 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("heatPumpCycle.evaporator.heatFlowRateVLEFluidHomotopy", \
"Constant heat flow rate used in simplified equation (value>0 => into VLE) [W]",\
 555, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("heatPumpCycle.evaporator.alphaVLEFluidHomotopy", \
"Constant alpha value used in simplified equation. [W/(m2.K)]", 556, 1000, \
0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5425, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5426,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5427, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5428,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5429,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5430, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5431, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.xi_default[1]", \
"Default mass fractions", 5432, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5433, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5434, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirA.gasPointer.id", \
"[:#(type=Integer)]", 8693, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirA.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 557, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5435, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5436,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5437, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5438,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5439,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5440, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5441, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.xi_default[1]", \
"Default mass fractions", 5442, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5443, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5444, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAirB.gasPointer.id", \
"[:#(type=Integer)]", 8694, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAirB.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 558, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5445, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5446,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5447, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5448,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5449, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5450, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.vleFluidPointer.id", \
"[:#(type=Integer)]", 8695, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.vleFluidA.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 559, false,\
 0.0,0.0,0.0,0,2610)
DeclareParameter("heatPumpCycle.evaporator.vleFluidA.interpolateTransportProperties",\
 "Interpolate transport properties in vapor dome [:#(type=Boolean)]", 560, true,\
 0.0,0.0,0.0,0,2610)
DeclareParameter("heatPumpCycle.evaporator.vleFluidA.computeSurfaceTension", \
"[:#(type=Boolean)]", 561, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.deactivateDensityDerivatives",\
 "Deactivate calculation of partial derivatives of density [:#(type=Boolean)]", 5451,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.vleFluidA.deactivateTwoPhaseRegion", \
"Deactivate calculation of two phase region [:#(type=Boolean)]", 5452, false, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5453, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5454,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5455, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5456,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5457, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5458, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.vleFluidPointer.id", \
"[:#(type=Integer)]", 8696, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.vleFluidB.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 562, false,\
 0.0,0.0,0.0,0,2610)
DeclareParameter("heatPumpCycle.evaporator.vleFluidB.interpolateTransportProperties",\
 "Interpolate transport properties in vapor dome [:#(type=Boolean)]", 563, true,\
 0.0,0.0,0.0,0,2610)
DeclareParameter("heatPumpCycle.evaporator.vleFluidB.computeSurfaceTension", \
"[:#(type=Boolean)]", 564, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.deactivateDensityDerivatives",\
 "Deactivate calculation of partial derivatives of density [:#(type=Boolean)]", 5459,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.vleFluidB.deactivateTwoPhaseRegion", \
"Deactivate calculation of two phase region [:#(type=Boolean)]", 5460, false, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.Q_flow", "Total heat flow rate [W]", 11763,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.includeDefaultSummary", \
"Include summary record in model results [:#(type=Boolean)]", 5461, true, \
0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.evaporator.includeWaterBalanceSummaryArrays", \
"Include summary array record for water balance in model results [:#(type=Boolean)]",\
 5462, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.evaporator.includeSummary", "Include summary record in model results [:#(type=Boolean)]",\
 5463, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.evaporator.summary.p_vle_A", "Pressure at port A [Pa|bar]",\
 "heatPumpCycle.pressureState_lp.p", 1, 1, 1, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.p_vle_B", "Pressure at port B [Pa|bar]",\
 "heatPumpCycle.evaporator.vleFluidCell[10].portB.p", 1, 5, 11304, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.T_vle_A", "Temperature at port A [K;degC]",\
 11764, 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.T_vle_B", "Temperature at port B [K;degC]",\
 11765, 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.T_degC_vle_A", \
"Temperature at port A [degC;]", 11766, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.T_degC_vle_B", \
"Temperature at port B [degC;]", 11767, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.q_vle_A", "Vapor quality (steam mass fraction) at port A [1]",\
 11768, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.q_vle_B", "Vapor quality (steam mass fraction) at port B [1]",\
 11769, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.h_vle_A", "Specific enthalpy at port A [J/kg]",\
 11770, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.h_vle_B", "Specific enthalpy at port B [J/kg]",\
 11771, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.d_vle_A", "Density at port A [kg/m3|g/cm3]",\
 11772, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.d_vle_B", "Density at port B [kg/m3|g/cm3]",\
 11773, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.m_flow_vle_A", "Mass flow rate at port A [kg/s]",\
 "heatPumpCycle.evaporator.vleFluidCell[1].portA.m_flow", 1, 5, 10752, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.m_flow_vle_B", "Mass flow rate at port B [kg/s]",\
 "heatPumpCycle.evaporator.vleFluidCell[10].portB.m_flow", 1, 5, 11305, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.dp_vle", "Total pressure drop [Pa|bar]",\
 11774, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.Q_flow_vle", "Total heat flow rate [W]",\
 11775, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.superheating", \
"Maximum superheating of port A or B [K,]", 11776, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.subcooling", "Maximum subcooling of port A or B [K,]",\
 11777, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.mass_vle", "Total fluid mass [kg]",\
 "heatPumpCycle.evaporator.cumulatedVLEFluidMass", 1, 5, 10750, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.volume_vle", "Total fluid volume [m3]",\
 "heatPumpCycle.evaporator.cumulatedVLEFluidVolume", 1, 5, 7631, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.alpha_average_vle", \
"Average coefficient of heat transfer [W/(m2.K)]", 8697, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.alphaA_average_vle", \
"Average coefficient of thermal conductance [W/K]", 8698, 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("heatPumpCycle.evaporator.summary.p_air_A", "Pressure at port A [Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.p_air_B", "Pressure at port B [Pa|bar]",\
 "heatPumpCycle.evaporator.portB_gas.p", 1, 5, 11982, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.T_air_A", "Temperature at port A [K;degC]",\
 11778, 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.T_air_B", "Temperature at port B [K;degC]",\
 11779, 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.T_degC_air_A", \
"Temperature at port A [degC;]", 11780, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.T_degC_air_B", \
"Temperature at port B [degC;]", 11781, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.h_air_A", "Specific enthalpy at port A [J/kg]",\
 11782, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.h_air_B", "Specific enthalpy at port B [J/kg]",\
 11783, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.m_flow_air_A", "Mass flow rate at port A [kg/s]",\
 "heatPumpCycle.evaporator.portA_gas.m_flow", 1, 5, 11981, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.m_flow_air_B", "Mass flow rate at port B [kg/s]",\
 "heatPumpCycle.evaporator.portB_gas.m_flow", 1, 5, 11983, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.humRatio_air_A", \
"Content of condensing component aka humidity ratio at port A [1]", 11784, 0.0, \
0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.humRatio_air_B", \
"Content of condensing component aka humidity ratio at port B [1]", 11785, 0.0, \
0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.phi_air_A", "Relative humidity at port A [1]",\
 11786, 0.0, 0.0,100.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.phi_air_B", "Relative humidity at port B [1]",\
 11787, 0.0, 0.0,100.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.w_air_A", "Flow velocity at port A [m/s]",\
 11788, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.w_air_B", "Flow velocity at port B [m/s]",\
 11789, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.dp_air", "Total pressure drop [Pa|bar]",\
 11790, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.Q_flow_air", "Total heat flow rate [W]",\
 11791, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.Q_flow_air_sensible", \
"Sensible heat flow rate [W]", 11792, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.Q_flow_air_latent", \
"Latent heat flow rate [W]", 11793, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.alpha_average_air", \
"Average coefficient of heat transfer [W/(m2.K)]", 11794, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.alphaA_average_air", \
"Average coefficient of thermal conductance [W/K]", 11795, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.mass_component", \
"Solid mass of component [kg]", 8699, 0.0, 0.0,1.7976931348623157E+308,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.UA", "Overall heat transfer coefficient [W/K]",\
 11796, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.includeWaterBalance", \
"[:#(type=Boolean)]", 5464, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.summary.waterBalance.mass_film", \
"Mass of water (liquid, frost and ice) [kg]", 11797, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.waterBalance.mass_liquidWater",\
 "Mass of liquid water [kg]", 11798, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.waterBalance.mass_frostAndIce",\
 "Mass of frost and ice [kg]", 11799, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.waterBalance.m_flow_condensation",\
 "Latent water mass flow rate (condensation/desublimation) [kg/s]", 11800, 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.waterBalance.m_flow_evaporation",\
 "Latent water mass flow rate (evaporation or sublimation) [kg/s]", 11801, 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.waterBalance.m_flow_drain", \
"Liquid water mass flow rate (drained water) [kg/s]", 11802, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.waterBalance.includeWaterBalanceArrays",\
 "[:#(type=Boolean)]", 5465, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.finnedTubeLength", \
"[m]", 8700, 2.220446049250313E-16, 2.220446049250313E-16,1.7976931348623157E+308,\
0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.nSerialTubes", "", 8701,\
 1.0, 1.0,1.7976931348623157E+308,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.serialTubeDistance", \
"[m]", 8702, 2.220446049250313E-16, 2.220446049250313E-16,1.7976931348623157E+308,\
0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.nParallelTubes", "", 8703,\
 1.0, 1.0,1.7976931348623157E+308,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.parallelTubeDistance",\
 "[m]", 8704, 2.220446049250313E-16, 2.220446049250313E-16,1.7976931348623157E+308,\
0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.finThickness", "[m]",\
 8705, 2.220446049250313E-16, 2.220446049250313E-16,1.7976931348623157E+308,0.0,\
0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.finPitch", "[m]", 8706,\
 2.220446049250313E-16, 2.220446049250313E-16,1.7976931348623157E+308,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.tubeInnerDiameter", \
"[m]", 8707, 2.220446049250313E-16, 2.220446049250313E-16,1.7976931348623157E+308,\
0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.tubeWallThickness", \
"[m]", 8708, 2.220446049250313E-16, 2.220446049250313E-16,1.7976931348623157E+308,\
0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.nTubeSideParallelHydraulicFlows",\
 "", 8709, 1.0, 1.0,1.7976931348623157E+308,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.tubeSidePathLength", \
"[m]", 8710, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.tubeOuterDiameter", \
"[m]", 8711, 0.0, 0.0,1.7976931348623157E+308,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalNTubes", "", 8712,\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalFinnedVolume", \
"[m3]", 8713, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalFinSideHeatTransferArea",\
 "[m2]", 8714, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalTubeSideHeatTransferArea",\
 "[m2]", 8715, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalTubeInnerVolume",\
 "[m3]", 8716, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalHXHeight", "[m]",\
 8717, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalHXWidth", "[m]",\
 8718, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalHXDepth", "[m]",\
 8719, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.geometry.totalFinSideCrossSectionalArea",\
 "[m2]", 8720, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.n", "[:#(type=Integer)]",\
 5466, 10, 0.0,0.0,0.0,0,517)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.m", "[:#(type=Integer)]",\
 5467, 1, 0.0,0.0,0.0,0,517)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[1]", \
"Temperature at port [K;degC]", 11803, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[2]", \
"Temperature at port [K;degC]", 11804, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[3]", \
"Temperature at port [K;degC]", 11805, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[4]", \
"Temperature at port [K;degC]", 11806, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[5]", \
"Temperature at port [K;degC]", 11807, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[6]", \
"Temperature at port [K;degC]", 11808, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[7]", \
"Temperature at port [K;degC]", 11809, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[8]", \
"Temperature at port [K;degC]", 11810, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[9]", \
"Temperature at port [K;degC]", 11811, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[10]", \
"Temperature at port [K;degC]", 11812, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_vle_port[11]", \
"Temperature at port [K;degC]", 11813, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[1]", \
"Temperature at port [degC;]", 11814, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[2]", \
"Temperature at port [degC;]", 11815, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[3]", \
"Temperature at port [degC;]", 11816, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[4]", \
"Temperature at port [degC;]", 11817, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[5]", \
"Temperature at port [degC;]", 11818, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[6]", \
"Temperature at port [degC;]", 11819, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[7]", \
"Temperature at port [degC;]", 11820, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[8]", \
"Temperature at port [degC;]", 11821, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[9]", \
"Temperature at port [degC;]", 11822, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[10]", \
"Temperature at port [degC;]", 11823, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_port[11]", \
"Temperature at port [degC;]", 11824, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[1]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[1].properties.T", 1,\
 5, 10770, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[2]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[2].properties.T", 1,\
 5, 10831, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[3]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[3].properties.T", 1,\
 5, 10892, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[4]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[4].properties.T", 1,\
 5, 10953, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[5]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[5].properties.T", 1,\
 5, 11014, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[6]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[6].properties.T", 1,\
 5, 11075, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[7]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[7].properties.T", 1,\
 5, 11136, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[8]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[8].properties.T", 1,\
 5, 11197, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[9]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[9].properties.T", 1,\
 5, 11258, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_vle_cell[10]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.vleFluidCell[10].properties.T", 1,\
 5, 11319, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[1]", \
"Temperature in cell [degC;]", 11825, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[2]", \
"Temperature in cell [degC;]", 11826, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[3]", \
"Temperature in cell [degC;]", 11827, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[4]", \
"Temperature in cell [degC;]", 11828, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[5]", \
"Temperature in cell [degC;]", 11829, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[6]", \
"Temperature in cell [degC;]", 11830, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[7]", \
"Temperature in cell [degC;]", 11831, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[8]", \
"Temperature in cell [degC;]", 11832, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[9]", \
"Temperature in cell [degC;]", 11833, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_vle_cell[10]", \
"Temperature in cell [degC;]", 11834, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[1]", \
"Vapor quality (steam mass fraction) at port [1]", 11835, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[2]", \
"Vapor quality (steam mass fraction) at port [1]", 11836, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[3]", \
"Vapor quality (steam mass fraction) at port [1]", 11837, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[4]", \
"Vapor quality (steam mass fraction) at port [1]", 11838, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[5]", \
"Vapor quality (steam mass fraction) at port [1]", 11839, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[6]", \
"Vapor quality (steam mass fraction) at port [1]", 11840, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[7]", \
"Vapor quality (steam mass fraction) at port [1]", 11841, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[8]", \
"Vapor quality (steam mass fraction) at port [1]", 11842, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[9]", \
"Vapor quality (steam mass fraction) at port [1]", 11843, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[10]", \
"Vapor quality (steam mass fraction) at port [1]", 11844, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.q_vle_port[11]", \
"Vapor quality (steam mass fraction) at port [1]", 11845, 0.0, 0.0,1.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[1]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.pressureState_lp.p", 1, 1, 1, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[2]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[1].portB.p", 1,\
 5, 10755, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[3]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[2].portB.p", 1,\
 5, 10816, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[4]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[3].portB.p", 1,\
 5, 10877, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[5]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[4].portB.p", 1,\
 5, 10938, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[6]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[5].portB.p", 1,\
 5, 10999, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[7]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[6].portB.p", 1,\
 5, 11060, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[8]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[7].portB.p", 1,\
 5, 11121, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[9]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[8].portB.p", 1,\
 5, 11182, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[10]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[9].portB.p", 1,\
 5, 11243, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_vle_port[11]", \
"Pressure at port [Pa|bar]", "heatPumpCycle.evaporator.vleFluidCell[10].portB.p", 1,\
 5, 11304, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[1]", \
"Specific enthalpy at port [J/kg]", 11846, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[2]", \
"Specific enthalpy at port [J/kg]", 11847, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[3]", \
"Specific enthalpy at port [J/kg]", 11848, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[4]", \
"Specific enthalpy at port [J/kg]", 11849, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[5]", \
"Specific enthalpy at port [J/kg]", 11850, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[6]", \
"Specific enthalpy at port [J/kg]", 11851, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[7]", \
"Specific enthalpy at port [J/kg]", 11852, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[8]", \
"Specific enthalpy at port [J/kg]", 11853, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[9]", \
"Specific enthalpy at port [J/kg]", 11854, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[10]", \
"Specific enthalpy at port [J/kg]", 11855, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_vle_port[11]", \
"Specific enthalpy at port [J/kg]", 11856, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[1]", \
"Density at port [kg/m3|g/cm3]", 11857, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[2]", \
"Density at port [kg/m3|g/cm3]", 11858, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[3]", \
"Density at port [kg/m3|g/cm3]", 11859, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[4]", \
"Density at port [kg/m3|g/cm3]", 11860, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[5]", \
"Density at port [kg/m3|g/cm3]", 11861, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[6]", \
"Density at port [kg/m3|g/cm3]", 11862, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[7]", \
"Density at port [kg/m3|g/cm3]", 11863, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[8]", \
"Density at port [kg/m3|g/cm3]", 11864, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[9]", \
"Density at port [kg/m3|g/cm3]", 11865, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[10]", \
"Density at port [kg/m3|g/cm3]", 11866, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.d_vle_port[11]", \
"Density at port [kg/m3|g/cm3]", 11867, 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[1]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[1].portA.m_flow", 1,\
 5, 10752, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[2]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[1].portB.m_flow", -1,\
 5, 10756, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[3]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[2].portB.m_flow", -1,\
 5, 10817, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[4]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[3].portB.m_flow", -1,\
 5, 10878, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[5]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[4].portB.m_flow", -1,\
 5, 10939, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[6]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[5].portB.m_flow", -1,\
 5, 11000, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[7]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[6].portB.m_flow", -1,\
 5, 11061, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[8]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[7].portB.m_flow", -1,\
 5, 11122, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[9]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[8].portB.m_flow", -1,\
 5, 11183, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[10]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[9].portB.m_flow", -1,\
 5, 11244, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.m_flow_vle_port[11]", \
"Mass flow rate at port [kg/s]", "heatPumpCycle.evaporator.vleFluidCell[10].portB.m_flow", -1,\
 5, 11305, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[1]", \
"Flow velocity at port [m/s]", 11868, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[2]", \
"Flow velocity at port [m/s]", 11869, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[3]", \
"Flow velocity at port [m/s]", 11870, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[4]", \
"Flow velocity at port [m/s]", 11871, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[5]", \
"Flow velocity at port [m/s]", 11872, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[6]", \
"Flow velocity at port [m/s]", 11873, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[7]", \
"Flow velocity at port [m/s]", 11874, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[8]", \
"Flow velocity at port [m/s]", 11875, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[9]", \
"Flow velocity at port [m/s]", 11876, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[10]", \
"Flow velocity at port [m/s]", 11877, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.w_vle_port[11]", \
"Flow velocity at port [m/s]", 11878, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[1]", \
"Heat transfer coefficient [W/(m2.K)]", 8721, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[2]", \
"Heat transfer coefficient [W/(m2.K)]", 8722, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[3]", \
"Heat transfer coefficient [W/(m2.K)]", 8723, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[4]", \
"Heat transfer coefficient [W/(m2.K)]", 8724, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[5]", \
"Heat transfer coefficient [W/(m2.K)]", 8725, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[6]", \
"Heat transfer coefficient [W/(m2.K)]", 8726, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[7]", \
"Heat transfer coefficient [W/(m2.K)]", 8727, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[8]", \
"Heat transfer coefficient [W/(m2.K)]", 8728, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[9]", \
"Heat transfer coefficient [W/(m2.K)]", 8729, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_vle_cell[10]", \
"Heat transfer coefficient [W/(m2.K)]", 8730, 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[1]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[1].wallSurfaceTemperature", 1,\
 5, 11376, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[2]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].wallSurfaceTemperature", 1,\
 5, 11416, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[3]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].wallSurfaceTemperature", 1,\
 5, 11456, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[4]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].wallSurfaceTemperature", 1,\
 5, 11496, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[5]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].wallSurfaceTemperature", 1,\
 5, 11536, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[6]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].wallSurfaceTemperature", 1,\
 5, 11576, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[7]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].wallSurfaceTemperature", 1,\
 5, 11616, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[8]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].wallSurfaceTemperature", 1,\
 5, 11656, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[9]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].wallSurfaceTemperature", 1,\
 5, 11696, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_finSideWallSurface_cell[10]",\
 "Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].wallSurfaceTemperature", 1,\
 5, 11736, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[1]",\
 "Temperature in cell [degC;]", 11879, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[2]",\
 "Temperature in cell [degC;]", 11880, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[3]",\
 "Temperature in cell [degC;]", 11881, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[4]",\
 "Temperature in cell [degC;]", 11882, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[5]",\
 "Temperature in cell [degC;]", 11883, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[6]",\
 "Temperature in cell [degC;]", 11884, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[7]",\
 "Temperature in cell [degC;]", 11885, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[8]",\
 "Temperature in cell [degC;]", 11886, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[9]",\
 "Temperature in cell [degC;]", 11887, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_finSideWallSurface_cell[10]",\
 "Temperature in cell [degC;]", 11888, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[1]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[1].filmSurfaceTemperature", 1,\
 5, 11375, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[2]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].filmSurfaceTemperature", 1,\
 5, 11415, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[3]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].filmSurfaceTemperature", 1,\
 5, 11455, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[4]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].filmSurfaceTemperature", 1,\
 5, 11495, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[5]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].filmSurfaceTemperature", 1,\
 5, 11535, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[6]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].filmSurfaceTemperature", 1,\
 5, 11575, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[7]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].filmSurfaceTemperature", 1,\
 5, 11615, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[8]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].filmSurfaceTemperature", 1,\
 5, 11655, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[9]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].filmSurfaceTemperature", 1,\
 5, 11695, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_wall_cell[10]", \
"Temperature in cell [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].filmSurfaceTemperature", 1,\
 5, 11735, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[1]", \
"Temperature in cell [degC;]", 11889, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[2]", \
"Temperature in cell [degC;]", 11890, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[3]", \
"Temperature in cell [degC;]", 11891, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[4]", \
"Temperature in cell [degC;]", 11892, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[5]", \
"Temperature in cell [degC;]", 11893, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[6]", \
"Temperature in cell [degC;]", 11894, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[7]", \
"Temperature in cell [degC;]", 11895, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[8]", \
"Temperature in cell [degC;]", 11896, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[9]", \
"Temperature in cell [degC;]", 11897, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_wall_cell[10]", \
"Temperature in cell [degC;]", 11898, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[1]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[1].properties.T", 1,\
 5, 7977, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[2]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[2].properties.T", 1,\
 5, 8049, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[3]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[3].properties.T", 1,\
 5, 8121, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[4]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[4].properties.T", 1,\
 5, 8193, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[5]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[5].properties.T", 1,\
 5, 8265, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[6]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[6].properties.T", 1,\
 5, 8337, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[7]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[7].properties.T", 1,\
 5, 8409, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[8]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[8].properties.T", 1,\
 5, 8481, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[9]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[9].properties.T", 1,\
 5, 8553, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.T_air_portA[10]", \
"Temperature at port A [K;degC]", "heatPumpCycle.evaporator.moistAirCell[10].properties.T", 1,\
 5, 8625, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[1]", \
"Temperature at port A [degC;]", 8731, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[2]", \
"Temperature at port A [degC;]", 8732, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[3]", \
"Temperature at port A [degC;]", 8733, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[4]", \
"Temperature at port A [degC;]", 8734, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[5]", \
"Temperature at port A [degC;]", 8735, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[6]", \
"Temperature at port A [degC;]", 8736, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[7]", \
"Temperature at port A [degC;]", 8737, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[8]", \
"Temperature at port A [degC;]", 8738, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[9]", \
"Temperature at port A [degC;]", 8739, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portA[10]", \
"Temperature at port A [degC;]", 8740, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[1]", \
"Temperature at port B [K;degC]", 11899, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[2]", \
"Temperature at port B [K;degC]", 11900, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[3]", \
"Temperature at port B [K;degC]", 11901, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[4]", \
"Temperature at port B [K;degC]", 11902, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[5]", \
"Temperature at port B [K;degC]", 11903, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[6]", \
"Temperature at port B [K;degC]", 11904, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[7]", \
"Temperature at port B [K;degC]", 11905, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[8]", \
"Temperature at port B [K;degC]", 11906, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[9]", \
"Temperature at port B [K;degC]", 11907, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_air_portB[10]", \
"Temperature at port B [K;degC]", 11908, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[1]", \
"Temperature at port B [degC;]", 11909, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[2]", \
"Temperature at port B [degC;]", 11910, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[3]", \
"Temperature at port B [degC;]", 11911, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[4]", \
"Temperature at port B [degC;]", 11912, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[5]", \
"Temperature at port B [degC;]", 11913, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[6]", \
"Temperature at port B [degC;]", 11914, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[7]", \
"Temperature at port B [degC;]", 11915, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[8]", \
"Temperature at port B [degC;]", 11916, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[9]", \
"Temperature at port B [degC;]", 11917, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.T_degC_air_portB[10]", \
"Temperature at port B [degC;]", 11918, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[1]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[2]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[3]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[4]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[5]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[6]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[7]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[8]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[9]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portA[10]", \
"Pressure at port A [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[1]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[2]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[3]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[4]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[5]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[6]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[7]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[8]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[9]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.p_air_portB[10]", \
"Pressure at port B [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[1]", \
"Specific enthalpy at port A [J/kg]", 11919, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[2]", \
"Specific enthalpy at port A [J/kg]", 11920, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[3]", \
"Specific enthalpy at port A [J/kg]", 11921, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[4]", \
"Specific enthalpy at port A [J/kg]", 11922, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[5]", \
"Specific enthalpy at port A [J/kg]", 11923, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[6]", \
"Specific enthalpy at port A [J/kg]", 11924, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[7]", \
"Specific enthalpy at port A [J/kg]", 11925, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[8]", \
"Specific enthalpy at port A [J/kg]", 11926, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[9]", \
"Specific enthalpy at port A [J/kg]", 11927, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portA[10]", \
"Specific enthalpy at port A [J/kg]", 11928, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[1]", \
"Specific enthalpy at port B [J/kg]", 11929, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[2]", \
"Specific enthalpy at port B [J/kg]", 11930, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[3]", \
"Specific enthalpy at port B [J/kg]", 11931, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[4]", \
"Specific enthalpy at port B [J/kg]", 11932, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[5]", \
"Specific enthalpy at port B [J/kg]", 11933, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[6]", \
"Specific enthalpy at port B [J/kg]", 11934, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[7]", \
"Specific enthalpy at port B [J/kg]", 11935, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[8]", \
"Specific enthalpy at port B [J/kg]", 11936, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[9]", \
"Specific enthalpy at port B [J/kg]", 11937, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.h_air_portB[10]", \
"Specific enthalpy at port B [J/kg]", 11938, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 1]", \
"Air mass fraction at port A [1]", 11939, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 2]", \
"Air mass fraction at port A [1]", 11940, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 3]", \
"Air mass fraction at port A [1]", 11941, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 4]", \
"Air mass fraction at port A [1]", 11942, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 5]", \
"Air mass fraction at port A [1]", 11943, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 6]", \
"Air mass fraction at port A [1]", 11944, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 7]", \
"Air mass fraction at port A [1]", 11945, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 8]", \
"Air mass fraction at port A [1]", 11946, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 9]", \
"Air mass fraction at port A [1]", 11947, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portA[1, 10]", \
"Air mass fraction at port A [1]", 11948, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 1]", \
"Air mass fraction at port B [1]", 11949, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 2]", \
"Air mass fraction at port B [1]", 11950, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 3]", \
"Air mass fraction at port B [1]", 11951, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 4]", \
"Air mass fraction at port B [1]", 11952, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 5]", \
"Air mass fraction at port B [1]", 11953, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 6]", \
"Air mass fraction at port B [1]", 11954, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 7]", \
"Air mass fraction at port B [1]", 11955, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 8]", \
"Air mass fraction at port B [1]", 11956, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 9]", \
"Air mass fraction at port B [1]", 11957, 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.xi_air_portB[1, 10]", \
"Air mass fraction at port B [1]", 11958, 0.0, 0.0,1.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[1]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[1].xiCondensingMoistAirWallSaturation", 1,\
 5, 11374, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[2]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[2].xiCondensingMoistAirWallSaturation", 1,\
 5, 11414, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[3]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[3].xiCondensingMoistAirWallSaturation", 1,\
 5, 11454, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[4]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[4].xiCondensingMoistAirWallSaturation", 1,\
 5, 11494, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[5]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[5].xiCondensingMoistAirWallSaturation", 1,\
 5, 11534, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[6]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[6].xiCondensingMoistAirWallSaturation", 1,\
 5, 11574, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[7]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[7].xiCondensingMoistAirWallSaturation", 1,\
 5, 11614, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[8]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[8].xiCondensingMoistAirWallSaturation", 1,\
 5, 11654, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[9]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[9].xiCondensingMoistAirWallSaturation", 1,\
 5, 11694, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.xis_air_wall_cell[10]", \
"Saturation mass fraction of condensing component in cell [1]", "heatPumpCycle.evaporator.moistAirCell[10].xiCondensingMoistAirWallSaturation", 1,\
 5, 11734, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[1]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[1].phiMoistAirIn", 1,\
 5, 8016, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[2]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[2].phiMoistAirIn", 1,\
 5, 8088, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[3]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[3].phiMoistAirIn", 1,\
 5, 8160, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[4]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[4].phiMoistAirIn", 1,\
 5, 8232, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[5]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[5].phiMoistAirIn", 1,\
 5, 8304, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[6]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[6].phiMoistAirIn", 1,\
 5, 8376, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[7]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[7].phiMoistAirIn", 1,\
 5, 8448, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[8]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[8].phiMoistAirIn", 1,\
 5, 8520, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[9]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[9].phiMoistAirIn", 1,\
 5, 8592, 0)
DeclareAlias2("heatPumpCycle.evaporator.summary.arrays.phi_air_portA[10]", \
"Relative humidity at port A", "heatPumpCycle.evaporator.moistAirCell[10].phiMoistAirIn", 1,\
 5, 8664, 0)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[1]", \
"Relative humidity at port B", 11959, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[2]", \
"Relative humidity at port B", 11960, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[3]", \
"Relative humidity at port B", 11961, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[4]", \
"Relative humidity at port B", 11962, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[5]", \
"Relative humidity at port B", 11963, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[6]", \
"Relative humidity at port B", 11964, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[7]", \
"Relative humidity at port B", 11965, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[8]", \
"Relative humidity at port B", 11966, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[9]", \
"Relative humidity at port B", 11967, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.phi_air_portB[10]", \
"Relative humidity at port B", 11968, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[1]", \
"Heat transfer coefficient [W/(m2.K)]", 11969, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[2]", \
"Heat transfer coefficient [W/(m2.K)]", 11970, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[3]", \
"Heat transfer coefficient [W/(m2.K)]", 11971, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[4]", \
"Heat transfer coefficient [W/(m2.K)]", 11972, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[5]", \
"Heat transfer coefficient [W/(m2.K)]", 11973, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[6]", \
"Heat transfer coefficient [W/(m2.K)]", 11974, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[7]", \
"Heat transfer coefficient [W/(m2.K)]", 11975, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[8]", \
"Heat transfer coefficient [W/(m2.K)]", 11976, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[9]", \
"Heat transfer coefficient [W/(m2.K)]", 11977, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.summary.arrays.alpha_air_cell[10]", \
"Heat transfer coefficient [W/(m2.K)]", 11978, 0.0, 0.0,0.0,0.0,0,512)
DeclareSParameter("heatPumpCycle.evaporator.hxType", "HX type", 5, "FinAndTube",\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.dp_vle", "Total VLEFluid pressure drop [Pa|bar]",\
 11979, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.dp_air", "Total air pressure drop [Pa|bar]",\
 11980, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.evaporator.portB_vle.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5468, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.portB_vle.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5469,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portB_vle.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5470, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portB_vle.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5471,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portB_vle.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5472, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portB_vle.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5473, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.portB_vle.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "heatPumpCycle.evaporator.vleFluidCell[10].portB.p", 1, 5, 11304, 4)
DeclareAlias2("heatPumpCycle.evaporator.portB_vle.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "heatPumpCycle.evaporator.vleFluidCell[10].portB.m_flow", 1, 5, 11305, 132)
DeclareAlias2("heatPumpCycle.evaporator.portB_vle.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.vleFluidCell[10].portB.h_outflow", 1, 5, 11306, 4)
DeclareAlias2("heatPumpCycle.evaporator.portB_vle.h_limit", "[J/kg]", \
"heatPumpCycle.evaporator.vleFluidCell[10].portB.h_limit", 1, 5, 11307, 4)
DeclareVariable("heatPumpCycle.evaporator.portA_vle.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5474, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.portA_vle.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5475,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portA_vle.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5476, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portA_vle.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5477,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portA_vle.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5478, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portA_vle.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5479, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.portA_vle.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "heatPumpCycle.pressureState_lp.p", 1, 1, 1, 4)
DeclareAlias2("heatPumpCycle.evaporator.portA_vle.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "heatPumpCycle.evaporator.vleFluidCell[1].portA.m_flow", 1, 5, 10752, 132)
DeclareAlias2("heatPumpCycle.evaporator.portA_vle.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.vleFluidCell[1].portA.h_outflow", 1, 5, 10753, 4)
DeclareAlias2("heatPumpCycle.evaporator.portA_vle.h_limit", "[J/kg]", \
"heatPumpCycle.evaporator.vleFluidCell[1].portA.h_limit", 1, 5, 10754, 4)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5480, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5481,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5482, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5483,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5484,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5485, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5486, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.xi_default[1]", \
"Default mass fractions", 5487, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5488, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5489, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.portA_gas.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 4)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.m_flow", "Mass flow rate [kg/s]",\
 11981, 0.0, 0.0,0.0,0.0,0,776)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 5490, 0, 0.0,0.0,0.0,0,521)
DeclareVariable("heatPumpCycle.evaporator.portA_gas.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", 5491, \
9.999000099990002E-05, 0.0,1.0,0.0,0,521)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5492, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5493,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5494, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5495,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5496,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5497, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5498, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.xi_default[1]", \
"Default mass fractions", 5499, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5500, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5501, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.p", "Pressure [Pa|bar]", 11982,\
 0.0, 0.0,1.7976931348623157E+308,100000.0,0,520)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.m_flow", "Mass flow rate [kg/s]",\
 11983, 0.0, 0.0,0.0,0.0,0,776)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 11984, 0.0, 0.0,0.0,0.0,0,584)
DeclareVariable("heatPumpCycle.evaporator.portB_gas.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", 11985, \
0.0, 0.0,1.0,0.0,0,584)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5502, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5503,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5504, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5505,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5506,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5507, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5508, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.xi_default[1]",\
 "Default mass fractions", 5509, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5510, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5511, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5512, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5513,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5514, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5515,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5516,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5517, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5518, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.xi_default[1]",\
 "Default mass fractions", 5519, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5520, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5521, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.portA_gas.m_flow", 1, 5, 11981,\
 1156)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 5522, 0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlet.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 5523, \
9.999000099990002E-05, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5524, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5525,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5526, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5527,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5528,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5529, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5530, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.xi_default[1]",\
 "Default mass fractions", 5531, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5532, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5533, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.p", \
"Pressure [Pa|bar]", "heatPumpCycle.evaporator.portB_gas.p", 1, 5, 11982, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.portB_gas.m_flow", 1, 5, 11983,\
 1156)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.portB_gas.h_outflow", 1, 5, 11984, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlet.xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.portB_gas.xi_outflow[1]", 1, 5, 11985, 1028)
DeclareState("heatPumpCycle.evaporator.gasSplitterJoiner.pressureDropState", \
"Pressure drop used in false dynamics model [Pa|bar]", 114, 0.0, 0.0,0.0,\
100000.0,0,2592)
DeclareDerivative("heatPumpCycle.evaporator.gasSplitterJoiner.der(pressureDropState)",\
 "der(Pressure drop used in false dynamics model) [Pa/s]", 114, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.nPorts1", \
"Number of ports in first dimension [:#(type=Integer)]", 5534, 10, 1.0,\
1.7976931348623157E+308,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.nPorts2", \
"Number of ports in second dimension [:#(type=Integer)]", 5535, 1, 1.0,\
1.7976931348623157E+308,0.0,0,2565)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[1, 1]",\
 "Ratio of output quantity", 5536, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[2, 1]",\
 "Ratio of output quantity", 5537, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[3, 1]",\
 "Ratio of output quantity", 5538, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[4, 1]",\
 "Ratio of output quantity", 5539, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[5, 1]",\
 "Ratio of output quantity", 5540, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[6, 1]",\
 "Ratio of output quantity", 5541, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[7, 1]",\
 "Ratio of output quantity", 5542, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[8, 1]",\
 "Ratio of output quantity", 5543, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[9, 1]",\
 "Ratio of output quantity", 5544, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightingFactor[10, 1]",\
 "Ratio of output quantity", 5545, 1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.useFalseDynamics", \
"sets pressure drop as differential state; True, if false dynamics should be used [:#(type=Boolean)]",\
 5546, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.falseDynamicsTimeConstant",\
 "Time constant of false dynamics for pressureDropState", 8741, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.pressureDropInitial",\
 "Initial value for pressure drop [Pa|bar]", 8742, 0.0, 0.0,0.0,100000.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.fixedPressureDropInitial",\
 "If true, force usage of initial value [:#(type=Boolean)]", 5547, true, \
0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.evaporator.gasSplitterJoiner.massFlowRateAdaptionSpeed",\
 "change of mass flow rate kg/s due to the pressure difference in Pa", 565, 0.1,\
 0.0,0.0,0.0,0,2608)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[1, 1]",\
 "", 5548, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[2, 1]",\
 "", 5549, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[3, 1]",\
 "", 5550, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[4, 1]",\
 "", 5551, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[5, 1]",\
 "", 5552, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[6, 1]",\
 "", 5553, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[7, 1]",\
 "", 5554, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[8, 1]",\
 "", 5555, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[9, 1]",\
 "", 5556, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatio[10, 1]",\
 "", 5557, 0.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[1, 1]",\
 "", 8743, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[2, 1]",\
 "", 8744, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[3, 1]",\
 "", 8745, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[4, 1]",\
 "", 8746, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[5, 1]",\
 "", 8747, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[6, 1]",\
 "", 8748, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[7, 1]",\
 "", 8749, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[8, 1]",\
 "", 8750, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[9, 1]",\
 "", 8751, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.weightedAdaptionSpeed[10, 1]",\
 "", 8752, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[1, 1]",\
 "", 8753, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[2, 1]",\
 "", 8754, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[3, 1]",\
 "", 8755, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[4, 1]",\
 "", 8756, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[5, 1]",\
 "", 8757, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[6, 1]",\
 "", 8758, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[7, 1]",\
 "", 8759, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[8, 1]",\
 "", 8760, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[9, 1]",\
 "", 8761, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.splittingRatioStart[10, 1]",\
 "", 8762, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.totalWeightingFactor",\
 "", 5558, 10, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.sumSplittingRatio", \
"", 5559, 0.9999999999999999, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.p_", "Auxiliary pressure [Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5560, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5561,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5562, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5563,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5564,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5565, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5566, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5567, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5568, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5569, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].m_flow",\
 "Mass flow rate [kg/s]", 11986, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 8763, 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", 8764, \
0.0, 0.0,1.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5570, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5571,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5572, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5573,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5574,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5575, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5576, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5577, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5578, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5579, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].m_flow",\
 "Mass flow rate [kg/s]", 11987, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[2, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5580, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5581,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5582, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5583,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5584,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5585, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5586, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5587, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5588, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5589, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].m_flow",\
 "Mass flow rate [kg/s]", 11988, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[3, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5590, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5591,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5592, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5593,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5594,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5595, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5596, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5597, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5598, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5599, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].m_flow",\
 "Mass flow rate [kg/s]", 11989, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[4, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5600, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5601,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5602, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5603,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5604,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5605, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5606, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5607, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5608, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5609, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].m_flow",\
 "Mass flow rate [kg/s]", 11990, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[5, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5610, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5611,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5612, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5613,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5614,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5615, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5616, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5617, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5618, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5619, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].m_flow",\
 "Mass flow rate [kg/s]", 11991, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[6, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5620, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5621,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5622, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5623,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5624,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5625, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5626, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5627, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5628, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5629, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].m_flow",\
 "Mass flow rate [kg/s]", 11992, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[7, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5630, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5631,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5632, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5633,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5634,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5635, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5636, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5637, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5638, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5639, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].m_flow",\
 "Mass flow rate [kg/s]", 11993, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[8, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5640, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5641,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5642, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5643,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5644,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5645, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5646, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5647, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5648, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5649, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].m_flow",\
 "Mass flow rate [kg/s]", 11994, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[9, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5650, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5651,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5652, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5653,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5654,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5655, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5656, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5657, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5658, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5659, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].m_flow",\
 "Mass flow rate [kg/s]", 11995, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].h_outflow", 1, 5, 8763,\
 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.outlets[10, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.gasSplitterJoiner.outlets[1, 1].xi_outflow[1]", 1, 5, 8764,\
 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5660, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5661,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5662, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5663,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5664,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5665, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5666, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5667, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5668, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5669, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].m_flow",\
 "Mass flow rate [kg/s]", 11996, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[1, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5670, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5671,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5672, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5673,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5674,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5675, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5676, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5677, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5678, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5679, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].m_flow",\
 "Mass flow rate [kg/s]", 11997, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[2, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5680, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5681,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5682, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5683,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5684,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5685, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5686, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5687, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5688, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5689, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].m_flow",\
 "Mass flow rate [kg/s]", 11998, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[3, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5690, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5691,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5692, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5693,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5694,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5695, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5696, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5697, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5698, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5699, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].m_flow",\
 "Mass flow rate [kg/s]", 11999, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[4, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5700, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5701,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5702, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5703,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5704,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5705, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5706, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5707, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5708, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5709, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].m_flow",\
 "Mass flow rate [kg/s]", 12000, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[5, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5710, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5711,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5712, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5713,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5714,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5715, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5716, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5717, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5718, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5719, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].m_flow",\
 "Mass flow rate [kg/s]", 12001, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[6, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5720, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5721,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5722, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5723,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5724,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5725, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5726, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5727, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5728, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5729, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].m_flow",\
 "Mass flow rate [kg/s]", 12002, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[7, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5730, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5731,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5732, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5733,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5734,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5735, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5736, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5737, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5738, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5739, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].m_flow",\
 "Mass flow rate [kg/s]", 12003, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[8, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5740, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5741,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5742, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5743,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5744,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5745, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5746, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5747, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5748, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5749, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].m_flow",\
 "Mass flow rate [kg/s]", 12004, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[9, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5750, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5751,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 5752, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5753,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5754,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5755, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5756, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.xi_default[1]",\
 "Default mass fractions", 5757, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5758, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].gasType.ID",\
 "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5759, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1028)
DeclareVariable("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].m_flow",\
 "Mass flow rate [kg/s]", 12005, 0.0, 0.0,0.0,0.0,0,2824)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.fan2ndOrder.portA.h_outflow", 1, 5, 12281, 1028)
DeclareAlias2("heatPumpCycle.evaporator.gasSplitterJoiner.inlets[10, 1].xi_outflow[1]",\
 "Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 1028)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5760, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5761,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5762, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5763,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5764,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5765, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5766, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.xi_default[1]",\
 "Default mass fractions", 5767, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5768, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5769, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[1].gasPointer.id", \
"[:#(type=Integer)]", 8765, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[1].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 566, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5770, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5771,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5772, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5773,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5774,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5775, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5776, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.xi_default[1]",\
 "Default mass fractions", 5777, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5778, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5779, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[2].gasPointer.id", \
"[:#(type=Integer)]", 8766, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[2].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 567, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5780, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5781,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5782, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5783,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5784,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5785, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5786, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.xi_default[1]",\
 "Default mass fractions", 5787, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5788, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5789, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[3].gasPointer.id", \
"[:#(type=Integer)]", 8767, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[3].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 568, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5790, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5791,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5792, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5793,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5794,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5795, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5796, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.xi_default[1]",\
 "Default mass fractions", 5797, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5798, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5799, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[4].gasPointer.id", \
"[:#(type=Integer)]", 8768, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[4].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 569, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5800, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5801,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5802, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5803,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5804,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5805, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5806, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.xi_default[1]",\
 "Default mass fractions", 5807, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5808, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5809, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[5].gasPointer.id", \
"[:#(type=Integer)]", 8769, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[5].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 570, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5810, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5811,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5812, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5813,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5814,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5815, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5816, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.xi_default[1]",\
 "Default mass fractions", 5817, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5818, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5819, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[6].gasPointer.id", \
"[:#(type=Integer)]", 8770, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[6].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 571, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5820, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5821,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5822, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5823,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5824,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5825, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5826, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.xi_default[1]",\
 "Default mass fractions", 5827, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5828, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5829, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[7].gasPointer.id", \
"[:#(type=Integer)]", 8771, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[7].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 572, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5830, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5831,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5832, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5833,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5834,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5835, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5836, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.xi_default[1]",\
 "Default mass fractions", 5837, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5838, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5839, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[8].gasPointer.id", \
"[:#(type=Integer)]", 8772, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[8].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 573, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5840, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5841,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5842, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5843,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5844,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5845, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5846, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.xi_default[1]",\
 "Default mass fractions", 5847, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5848, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5849, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[9].gasPointer.id", \
"[:#(type=Integer)]", 8773, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[9].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 574, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5850, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5851,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5852, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5853,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5854,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5855, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 5856, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.xi_default[1]",\
 "Default mass fractions", 5857, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 5858, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 5859, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.evaporator.moistAir_outflow[10].gasPointer.id", \
"[:#(type=Integer)]", 8774, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.evaporator.moistAir_outflow[10].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 575, false,\
 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5860, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5861,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5862, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5863,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5864, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5865, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5866, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5867,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5868, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5869,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5870, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5871, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.sensor_subcooling.port.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "heatPumpCycle.statePoint2.sensorPort.p", 1, 5, 9108, 516)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 5872, 0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 5873, 0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_subcooling.port.h_limit", "[J/kg]", 5874, \
-1000000.0, 0.0,0.0,0.0,0,1545)
DeclareAlias2("heatPumpCycle.sensor_subcooling.sensorValue", "Sensor value [K]",\
 "heatPumpCycle.sensor_subcooling.sensorValueSI", 1, 1, 115, 0)
DeclareState("heatPumpCycle.sensor_subcooling.sensorValueSI", "Sensor value in SI unit [K]",\
 115, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("heatPumpCycle.sensor_subcooling.der(sensorValueSI)", \
"der(Sensor value in SI unit) [K/s]", 115, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.sensor_subcooling.offset", "", 5875, 0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.factor", "", 5876, 1.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.useTimeConstant", \
"If true, time constant tau is used [:#(type=Boolean)]", 5877, true, 0.0,0.0,0.0,\
0,1539)
DeclareParameter("heatPumpCycle.sensor_subcooling.tau", "Time constant for delay time of the sensor value [s]",\
 576, 0.1, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_subcooling.useSteadyStateInitialization", \
"If true, steady state initialization is used [:#(type=Boolean)]", 5878, false, \
0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_subcooling.displaySignificantDigits", \
"Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 577, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("heatPumpCycle.sensor_subcooling.visualizeLimitViolation", \
"If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 5879, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_subcooling.lowerLimit", "Lower limit in [Sensor unit] []",\
 578, 0, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_subcooling.upperLimit", "Upper limit in [Sensor unit] []",\
 579, 1, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_subcooling.sensorValue_", "", 12006, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5880, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5881,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5882, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5883,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5884, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5885, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.vleFluidPointer.id", \
"[:#(type=Integer)]", 8775, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 5886,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 5887, false,\
 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.sensor_subcooling.vleFluid.interpolateTransportProperties",\
 "Interpolate transport properties in vapor dome [:#(type=Boolean)]", 580, true,\
 0.0,0.0,0.0,0,2610)
DeclareParameter("heatPumpCycle.sensor_subcooling.vleFluid.computeSurfaceTension",\
 "[:#(type=Boolean)]", 581, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.deactivateDensityDerivatives",\
 "Deactivate calculation of partial derivatives of density [:#(type=Boolean)]", 5888,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.computeVLEAdditionalProperties",\
 "Compute detailed vapor liquid equilibrium properties [:#(type=Boolean)]", 5889,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.computeVLETransportProperties",\
 "Compute detailed vapor liquid equilibrium transport properties [:#(type=Boolean)]",\
 5890, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.deactivateTwoPhaseRegion",\
 "Deactivate calculation of two phase region [:#(type=Boolean)]", 5891, false, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.d", "Density [kg/m3|g/cm3]",\
 12007, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_subcooling.vleFluid.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.statePoint2.sensorPort.p", 1, 5, 9108, 1024)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.h", "Specific enthalpy [J/kg]",\
 12008, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.s", "Specific entropy [J/(kg.K)]",\
 12009, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.T", "Temperature [K;degC]",\
 12010, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_subcooling.vleFluid.M", "Average molar mass [kg/mol]",\
 "heatPumpCycle.sensor_subcooling.vleFluid.M_i[1]", 1, 5, 8776, 1024)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.q", "Steam mass fraction (quality) [1]",\
 12011, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 12012, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 12013, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.beta", \
"Isobaric thermal expansion coefficient [1/K]", 12014, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.kappa", \
"Isothermal compressibility [1/Pa]", 12015, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.w", "Speed of sound [m/s]",\
 12016, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.drhodh_pxi", \
"1st derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12017, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.drhodp_hxi", \
"1st derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12018, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.gamma", \
"Heat capacity ratio aka isentropic expansion factor", 12019, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.M_i[1]", \
"Molar mass of component i [kg/mol]", 8776, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.crit.d", \
"Critical density [kg/m3|g/cm3]", 8777, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.crit.h", \
"Critical specific enthalpy [J/kg]", 8778, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.crit.p", \
"Critical pressure [Pa|bar]", 8779, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.crit.s", \
"Critical specific entropy [J/(kg.K)]", 8780, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.crit.T", \
"Critical temperature [K;degC]", 8781, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.transp.Pr", \
"Prandtl number [1]", 5892, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 5893, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.transp.eta", \
"Dynamic viscosity [Pa.s]", 5894, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.transp.sigma", \
"Surface tension [N/m]", 5895, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 12020, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 12021, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 12022, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 12023, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 12024, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 12025, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 12026, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 12027, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 12028, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 12029, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLE.nc", \
"[:#(type=Integer)]", 5896, 1, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLEAdditional.cp_l", \
"Specific heat capacity cp of liquid phase [J/(kg.K)]", 5897, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLEAdditional.cp_v", \
"Specific heat capacity cp of vapour phase [J/(kg.K)]", 5898, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLEAdditional.beta_l",\
 "Isobaric expansion coefficient of liquid phase [1/K]", 5899, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLEAdditional.beta_v",\
 "Isobaric expansion coefficient of vapour phase [1/K]", 5900, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLEAdditional.kappa_l",\
 "Isothermal compressibility of liquid phase [1/Pa]", 5901, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLEAdditional.kappa_v",\
 "Isothermal compressibility of vapour phase [1/Pa]", 5902, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLETransp.Pr_l", \
"Prandtl number of liquid phase [1]", 5903, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLETransp.Pr_v", \
"Prandtl number of vapour phase [1]", 5904, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLETransp.lambda_l", \
"Thermal conductivity of liquid phase [W/(m.K)]", 5905, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLETransp.lambda_v", \
"Thermal conductivity of vapour phase [W/(m.K)]", 5906, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLETransp.eta_l", \
"Dynamic viscosity of liquid phase [Pa.s]", 5907, -1, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.VLETransp.eta_v", \
"Dynamic viscosity of vapour phase [Pa.s]", 5908, -1, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_subcooling.vleFluid.computeFlags", \
"[:#(type=Integer)]", 8782, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_subcooling.generateEventsAtSaturation", \
"[:#(type=Boolean)]", 5909, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_subcooling.initialSensorValue", \
"Initial value [Sensor unit] []", 582, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_subcooling.unit.factor", "", 5910, 1, \
0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_subcooling.unit.offset", "", 5911, 0, \
0.0,0.0,0.0,0,1537)
DeclareAlias2("heatPumpCycle.expansionValveController.u_s", "Connector of setpoint input signal",\
 "heatPumpCycle.subcoolingSetpointValue", 1, 7, 61, 0)
DeclareAlias2("heatPumpCycle.expansionValveController.u_m", "Connector of measurement input signal",\
 "heatPumpCycle.sensor_subcooling.sensorValueSI", 1, 1, 115, 0)
DeclareVariable("heatPumpCycle.expansionValveController.y", "Connector of actuator output signal",\
 12030, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.expansionValveController.e", "Difference between setpoint and measurement aka control error",\
 12031, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.expansionValveController.invertFeedback", \
"If true, feedback signal is inverted [:#(type=Boolean)]", 5912, true, 0.0,0.0,\
0.0,0,515)
DeclareParameter("heatPumpCycle.expansionValveController.offset", \
"Operating point, added to proportional output", 583, 0.0, 0.0,0.0,0.0,0,560)
DeclareSParameter("heatPumpCycle.expansionValveController.integralParameterType",\
 "Controller Structure [k*(e + 1/Ti*integral(e))] or [k*e + ki*integral(e)] []",\
 6, "Ti", 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.expansionValveController.k", "Proportional gain of controller",\
 8783, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.expansionValveController.Ti", "Time constant of Integrator block [s]",\
 8784, 2.2250738585072014E-308, 2.2250738585072014E-308,1.7976931348623157E+308,\
0.0,0,513)
DeclareParameter("heatPumpCycle.expansionValveController.ki", "Integral gain [s-1]",\
 584, 0.5, 2.2250738585072014E-308,1.7976931348623157E+308,0.0,0,560)
DeclareVariable("heatPumpCycle.expansionValveController.use_kInput", \
"If true, k is defined by input [:#(type=Boolean)]", 5913, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.expansionValveController.use_TiInput", \
"If true, Ti is defined by input [:#(type=Boolean)]", 5914, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.expansionValveController.use_kiInput", \
"If true, ki is defined by input [:#(type=Boolean)]", 5915, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.expansionValveController.yMax", "Upper limit of output",\
 8785, 0.0, 0.0,0.0,0.0,0,513)
EndNonAlias(11)
PreNonAliasNew(12)
StartNonAlias(12)
DeclareVariable("heatPumpCycle.expansionValveController.yMin", "Lower limit of output",\
 8786, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.expansionValveController.use_setpointWeighting", \
"If true, setpoint weighting is active. [:#(type=Boolean)]", 5916, false, \
0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.expansionValveController.b", "Setpoint weight 0 <= b <= 1",\
 585, 0.5, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.expansionValveController.yInitial", \
"Initial output of controller", 8787, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.expansionValveController.isActive", \
"If true, controller is active [:#(type=Boolean)]", 9067, false, 0.0,0.0,0.0,0,642)
DeclareVariable("heatPumpCycle.expansionValveController.use_activeInput", \
"If true, controller is switched on/off externally [:#(type=Boolean)]", 5917, \
true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.expansionValveController.use_y_notActive", \
"If true, output of not activated controller is defined externally. Otherwise output is hold at deactivation. [:#(type=Boolean)]",\
 5918, true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.expansionValveController.activationTime", \
"Time when controller is switched on [s]", 8788, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.expansionValveController.nominalValueForIntegral",\
 "Nominal value for integral. Quantity approximately as the expected controller output y",\
 8789, 1E-50, 1E-50,1.7976931348623157E+308,0.0,0,513)
DeclareAlias2("heatPumpCycle.expansionValveController.u_mHomotopy", \
"Continuous time variable for homotopy 'measurement' input", "heatPumpCycle.expansionValveController.y", 1,\
 5, 12030, 0)
DeclareAlias2("heatPumpCycle.expansionValveController.u_sHomotopy", \
"Continuous time variable for homotopy set point input", "heatPumpCycle.expansionValveController.yInitial", 1,\
 5, 8787, 0)
DeclareVariable("heatPumpCycle.expansionValveController.weightOfHomotopyControlErrorToControlError",\
 "Weighting factor: w * eHomotopy = e, (e=ControlError)", 8790, 0.0, 0.0,0.0,0.0,\
0,513)
DeclareAlias2("heatPumpCycle.expansionValveController.getActive.u", \
"Connector of Boolean input signal [:#(type=Boolean)]", "heatPumpCycle.expansionValveController.isActive", 1,\
 5, 9067, 1089)
DeclareAlias2("heatPumpCycle.expansionValveController.getActive.y", \
"Connector of Boolean output signal [:#(type=Boolean)]", "heatPumpCycle.expansionValveController.isActive", 1,\
 5, 9067, 1089)
DeclareVariable("heatPumpCycle.expansionValveController.y_scaledUnlim", "", 12032,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.expansionValveController.y_unlim", "", 12033, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.expansionValveController.y_old", "", 9068, 0.0, \
0.0,0.0,0.0,0,2688)
DeclareVariable("heatPumpCycle.expansionValveController.e_antiWindUp", "", 12034,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.expansionValveController.e_setpointWeighting", \
"Control error for proportional part if setpoint weighting is active", 12035, \
0.0, 0.0,0.0,0.0,0,2560)
DeclareState("heatPumpCycle.expansionValveController.integral", "", 116, 0.0, \
0.0,0.0,0.0,0,2592)
DeclareDerivative("heatPumpCycle.expansionValveController.der(integral)", "", 116,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.expansionValveController.ki_internal", "", 8791, \
0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.expansionValveController.getInputs.ki_in", "", \
"heatPumpCycle.expansionValveController.ki_in_.k", 1, 5, 8793, 1024)
DeclareAlias2("heatPumpCycle.expansionValveController.getInputs.k_in", "", \
"heatPumpCycle.expansionValveController.k_in_.k", 1, 5, 8792, 1024)
DeclareAlias2("heatPumpCycle.expansionValveController.getInputs.Ti_in", "", \
"heatPumpCycle.expansionValveController.Ti_in_.k", 1, 5, 8794, 1024)
DeclareAlias2("heatPumpCycle.expansionValveController.getInputs.y_notActive", "",\
 "heatPumpCycle.expansionValveAreaRestart", 1, 7, 67, 1024)
DeclareVariable("heatPumpCycle.expansionValveController.k_in_.k", \
"Constant output value", 8792, 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.expansionValveController.k_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.expansionValveController.k_in_.k", 1, 5, 8792, 1024)
DeclareVariable("heatPumpCycle.expansionValveController.ki_in_.k", \
"Constant output value", 8793, 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.expansionValveController.ki_in_.y", \
"Connector of Real output signal", "heatPumpCycle.expansionValveController.ki_in_.k", 1,\
 5, 8793, 1024)
DeclareVariable("heatPumpCycle.expansionValveController.Ti_in_.k", \
"Constant output value", 8794, 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.expansionValveController.Ti_in_.y", \
"Connector of Real output signal", "heatPumpCycle.expansionValveController.Ti_in_.k", 1,\
 5, 8794, 1024)
DeclareAlias2("heatPumpCycle.expansionValveController.y_notActive", \
"Controller output if not active", "heatPumpCycle.expansionValveAreaRestart", 1,\
 7, 67, 0)
DeclareAlias2("heatPumpCycle.expansionValveController.activeInput", \
"true, if controller is on [:#(type=Boolean)]", "heatPumpCycle.expansionValveController.isActive", 1,\
 5, 9067, 65)
DeclareAlias2("heatPumpCycle.subcoolingSetpoint.y", "Value of Real output", \
"heatPumpCycle.subcoolingSetpointValue", 1, 7, 61, 0)
DeclareVariable("heatPumpCycle.statePoint7.vleFluidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5919, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.statePoint7.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5920,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint7.vleFluidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 5921, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint7.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5922,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint7.vleFluidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 5923, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint7.vleFluidType.ID", "ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5924, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5925, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5926,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5927, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5928,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5929, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5930, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.statePoint7.sensorPort.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "heatPumpCycle.evaporator.vleFluidCell[10].portB.p", 1, 5, 11304, 516)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 5931, 0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 5932, 0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.statePoint7.sensorPort.h_limit", "[J/kg]", 5933, \
-1000000.0, 0.0,0.0,0.0,0,1545)
DeclareParameter("heatPumpCycle.statePoint7.stateViewerIndex", "Index for DaVE State Chart [:#(type=Integer)]",\
 586, 6, 0.0,0.0,0.0,0,564)
DeclareVariable("heatPumpCycle.statePoint7.h", "Specific enthalpy [J/kg]", 12036,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.statePoint7.p", "Pressure [Pa|bar]", \
"heatPumpCycle.evaporator.vleFluidCell[10].portB.p", 1, 5, 11304, 0)
DeclareVariable("heatPumpCycle.statePoint7.vleFluidTypeID", "[:#(type=Integer)]",\
 5934, 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("heatPumpCycle.compressorController.u_s", "Connector of setpoint input signal",\
 "heatPumpCycle.heatPumpController.TSupplySet", 1, 5, 8816, 0)
DeclareAlias2("heatPumpCycle.compressorController.u_m", "Connector of measurement input signal",\
 "heatPumpCycle.sensor_T_degC_waterOut.sensorValue", 1, 5, 9311, 0)
DeclareVariable("heatPumpCycle.compressorController.y", "Connector of actuator output signal",\
 12037, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.compressorController.e", "Difference between setpoint and measurement aka control error",\
 12038, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.compressorController.invertFeedback", \
"If true, feedback signal is inverted [:#(type=Boolean)]", 5935, false, 0.0,0.0,\
0.0,0,515)
DeclareParameter("heatPumpCycle.compressorController.offset", "Operating point, added to proportional output",\
 587, 0.0, 0.0,0.0,0.0,0,560)
DeclareSParameter("heatPumpCycle.compressorController.integralParameterType", \
"Controller Structure [k*(e + 1/Ti*integral(e))] or [k*e + ki*integral(e)] []", 7,\
 "Ti", 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.compressorController.k", "Proportional gain of controller",\
 8795, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.compressorController.Ti", "Time constant of Integrator block [s]",\
 8796, 2.2250738585072014E-308, 2.2250738585072014E-308,1.7976931348623157E+308,\
0.0,0,513)
DeclareParameter("heatPumpCycle.compressorController.ki", "Integral gain [s-1]",\
 588, 0.5, 2.2250738585072014E-308,1.7976931348623157E+308,0.0,0,560)
DeclareVariable("heatPumpCycle.compressorController.use_kInput", \
"If true, k is defined by input [:#(type=Boolean)]", 5936, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.compressorController.use_TiInput", \
"If true, Ti is defined by input [:#(type=Boolean)]", 5937, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.compressorController.use_kiInput", \
"If true, ki is defined by input [:#(type=Boolean)]", 5938, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.compressorController.yMax", "Upper limit of output",\
 8797, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.compressorController.yMin", "Lower limit of output",\
 8798, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.compressorController.use_setpointWeighting", \
"If true, setpoint weighting is active. [:#(type=Boolean)]", 5939, false, \
0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.compressorController.b", "Setpoint weight 0 <= b <= 1",\
 589, 0.5, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.compressorController.yInitial", "Initial output of controller",\
 8799, 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("heatPumpCycle.compressorController.isActive", "If true, controller is active [:#(type=Boolean)]",\
 "heatPumpCycle.expansionValveController.isActive", 1, 5, 9067, 65)
DeclareVariable("heatPumpCycle.compressorController.use_activeInput", \
"If true, controller is switched on/off externally [:#(type=Boolean)]", 5940, \
true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.compressorController.use_y_notActive", \
"If true, output of not activated controller is defined externally. Otherwise output is hold at deactivation. [:#(type=Boolean)]",\
 5941, true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.compressorController.activationTime", \
"Time when controller is switched on [s]", 8800, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.compressorController.nominalValueForIntegral", \
"Nominal value for integral. Quantity approximately as the expected controller output y",\
 8801, 1E-50, 1E-50,1.7976931348623157E+308,0.0,0,513)
DeclareAlias2("heatPumpCycle.compressorController.u_mHomotopy", "Continuous time variable for homotopy 'measurement' input",\
 "heatPumpCycle.compressorController.y", 1, 5, 12037, 0)
DeclareAlias2("heatPumpCycle.compressorController.u_sHomotopy", "Continuous time variable for homotopy set point input",\
 "heatPumpCycle.compressorController.yInitial", 1, 5, 8799, 0)
DeclareVariable("heatPumpCycle.compressorController.weightOfHomotopyControlErrorToControlError",\
 "Weighting factor: w * eHomotopy = e, (e=ControlError)", 8802, 0.0, 0.0,0.0,0.0,\
0,513)
DeclareAlias2("heatPumpCycle.compressorController.getActive.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "heatPumpCycle.expansionValveController.isActive", 1, 5, 9067, 1089)
DeclareAlias2("heatPumpCycle.compressorController.getActive.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 "heatPumpCycle.expansionValveController.isActive", 1, 5, 9067, 1089)
DeclareVariable("heatPumpCycle.compressorController.y_scaledUnlim", "", 12039, \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.compressorController.y_unlim", "", 12040, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.compressorController.y_old", "", 9069, 0.0, \
0.0,0.0,0.0,0,2688)
DeclareVariable("heatPumpCycle.compressorController.e_antiWindUp", "", 12041, \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.compressorController.e_setpointWeighting", \
"Control error for proportional part if setpoint weighting is active", 12042, \
0.0, 0.0,0.0,0.0,0,2560)
DeclareState("heatPumpCycle.compressorController.integral", "", 117, 0.0, \
0.0,0.0,0.0,0,2592)
DeclareDerivative("heatPumpCycle.compressorController.der(integral)", "", 117, \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.compressorController.ki_internal", "", 8803, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.compressorController.getInputs.ki_in", "", \
"heatPumpCycle.compressorController.ki_in_.k", 1, 5, 8805, 1024)
DeclareAlias2("heatPumpCycle.compressorController.getInputs.k_in", "", \
"heatPumpCycle.compressorController.k_in_.k", 1, 5, 8804, 1024)
DeclareAlias2("heatPumpCycle.compressorController.getInputs.Ti_in", "", \
"heatPumpCycle.compressorController.Ti_in_.k", 1, 5, 8806, 1024)
DeclareAlias2("heatPumpCycle.compressorController.getInputs.y_notActive", "", \
"heatPumpCycle.compressorSpeedDefrost", 1, 7, 26, 1024)
DeclareVariable("heatPumpCycle.compressorController.k_in_.k", "Constant output value",\
 8804, 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.compressorController.k_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.compressorController.k_in_.k", 1, 5, 8804, 1024)
DeclareVariable("heatPumpCycle.compressorController.ki_in_.k", "Constant output value",\
 8805, 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.compressorController.ki_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.compressorController.ki_in_.k", 1, 5, 8805, 1024)
DeclareVariable("heatPumpCycle.compressorController.Ti_in_.k", "Constant output value",\
 8806, 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.compressorController.Ti_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.compressorController.Ti_in_.k", 1, 5, 8806, 1024)
DeclareAlias2("heatPumpCycle.compressorController.y_notActive", "Controller output if not active",\
 "heatPumpCycle.compressorSpeedDefrost", 1, 7, 26, 0)
DeclareAlias2("heatPumpCycle.compressorController.activeInput", "true, if controller is on [:#(type=Boolean)]",\
 "heatPumpCycle.expansionValveController.isActive", 1, 5, 9067, 65)
DeclareState("heatPumpCycle.rotatoryBoundary1.rotatoryFlange.phi", \
"Absolute rotation angle of flange [rad|deg]", 118, 0.0, 0.0,0.0,1000000.0,0,552)
DeclareDerivative("heatPumpCycle.rotatoryBoundary1.rotatoryFlange.der(phi)", \
"der(Absolute rotation angle of flange) [rad/s]", 118, 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.rotatoryFlange.tau", \
"Cut torque in the flange [N.m]", 5942, 0.0, 0.0,0.0,0.0,0,777)
DeclareParameter("heatPumpCycle.rotatoryBoundary1.phiInitial", "Initial value for rotatory flange angle [rad|deg]",\
 590, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.fixedPhiInitial", \
"if true, force usage of initial value phiInitial [:#(type=Boolean)]", 5943, \
true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.n", "Frequency (rps) [Hz]", 5944,\
 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.rotatoryBoundary1.w", "Angular frequency [rad/s]", \
"heatPumpCycle.rotatoryBoundary1.rotatoryFlange.der(phi)", 1, 6, 118, 1024)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.tau", "Torque [N.m]", 5945, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.use_wInput", "true, if w is defined by input [:#(type=Boolean)]",\
 5946, false, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.rotatoryBoundary1.wFixed", "Fixed Value for w (rad/s) [rad/s]",\
 591, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.use_nInput", "= true, if n is defined by input [:#(type=Boolean)]",\
 5947, true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.nFixed", "Fixed Value for n (rps) [Hz]",\
 8807, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.use_tauInput", "= true, if torque is defined by input [:#(type=Boolean)]",\
 5948, false, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.rotatoryBoundary1.tauFixed", "Fixed Value for torque [N.m]",\
 592, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.n_in", "Prescribed boundary n [Hz] []",\
 5949, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.getInputs.tau_in", \
"Prescribed boundary torque", 5950, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.getInputs.n_in", \
"Prescribed boundary frequency", 5951, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.getInputs.w_in", \
"Prescribed boundary angular frequency", 5952, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.tau_in_", "", 5953, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary1.w_in_", "", 5954, 0.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5955, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5956,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 5957, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5958,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5959, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluidType.ID", "ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5960, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5961, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5962,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5963, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5964,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5965, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5966, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.sensor_T_degC.port.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "heatPumpCycle.pressureState_lp.p", 1, 1, 1, 516)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 5967, 0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 5968, 0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_T_degC.port.h_limit", "[J/kg]", 5969, \
-1000000.0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_T_degC.sensorValue", "Sensor value [degC]",\
 12043, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.sensor_T_degC.sensorValueSI", "Sensor value in SI unit [K]",\
 12044, 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("heatPumpCycle.sensor_T_degC.offset", "", 5970, -273.15, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.factor", "", 5971, 1.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.useTimeConstant", "If true, time constant tau is used [:#(type=Boolean)]",\
 5972, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_T_degC.tau", "Time constant for delay time of the sensor value [s]",\
 593, 1, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_T_degC.useSteadyStateInitialization", \
"If true, steady state initialization is used [:#(type=Boolean)]", 594, false, \
0.0,0.0,0.0,0,1586)
DeclareParameter("heatPumpCycle.sensor_T_degC.displaySignificantDigits", \
"Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 595, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("heatPumpCycle.sensor_T_degC.visualizeLimitViolation", \
"If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 5973, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_T_degC.lowerLimit", "Lower limit in [Sensor unit] []",\
 596, 0, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_T_degC.upperLimit", "Upper limit in [Sensor unit] []",\
 597, 1, 0.0,0.0,0.0,0,1584)
DeclareAlias2("heatPumpCycle.sensor_T_degC.sensorValue_", "", "heatPumpCycle.sensor_T_degC.sensorValueSI", 1,\
 5, 12044, 1024)
DeclareParameter("heatPumpCycle.sensor_T_degC.initialSensorValue", \
"Initial value [Sensor unit] []", 598, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.vleFluidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 5974, true, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.vleFluidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 5975,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.vleFluidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 5976, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.vleFluidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 5977,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.vleFluidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 5978, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.vleFluidType.ID", \
"ID is used to map the selected VLEFluid to the sim.cumulatedVLEFluidMass array item [:#(type=Integer)]",\
 5979, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.vleFluidPointer.id", \
"[:#(type=Integer)]", 8808, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 5980,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 5981, false,\
 0.0,0.0,0.0,0,2563)
DeclareParameter("heatPumpCycle.sensor_T_degC.vleFluid.interpolateTransportProperties",\
 "Interpolate transport properties in vapor dome [:#(type=Boolean)]", 599, true,\
 0.0,0.0,0.0,0,2610)
DeclareParameter("heatPumpCycle.sensor_T_degC.vleFluid.computeSurfaceTension", \
"[:#(type=Boolean)]", 600, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.deactivateDensityDerivatives",\
 "Deactivate calculation of partial derivatives of density [:#(type=Boolean)]", 5982,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.computeVLEAdditionalProperties",\
 "Compute detailed vapor liquid equilibrium properties [:#(type=Boolean)]", 5983,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.computeVLETransportProperties",\
 "Compute detailed vapor liquid equilibrium transport properties [:#(type=Boolean)]",\
 5984, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.deactivateTwoPhaseRegion",\
 "Deactivate calculation of two phase region [:#(type=Boolean)]", 5985, false, \
0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.d", "Density [kg/m3|g/cm3]",\
 12045, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_T_degC.vleFluid.p", "Pressure [Pa|bar]", \
"heatPumpCycle.pressureState_lp.p", 1, 1, 1, 1024)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.h", "Specific enthalpy [J/kg]",\
 12046, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.s", "Specific entropy [J/(kg.K)]",\
 12047, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_T_degC.vleFluid.T", "Temperature [K;degC]", \
"heatPumpCycle.sensor_T_degC.sensorValueSI", 1, 5, 12044, 1024)
DeclareAlias2("heatPumpCycle.sensor_T_degC.vleFluid.M", "Average molar mass [kg/mol]",\
 "heatPumpCycle.sensor_T_degC.vleFluid.M_i[1]", 1, 5, 8809, 1024)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.q", "Steam mass fraction (quality) [1]",\
 12048, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 12049, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 12050, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.beta", "Isobaric thermal expansion coefficient [1/K]",\
 12051, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.kappa", "Isothermal compressibility [1/Pa]",\
 12052, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.w", "Speed of sound [m/s]",\
 12053, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.drhodh_pxi", \
"1st derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12054, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.drhodp_hxi", \
"1st derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12055, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.gamma", "Heat capacity ratio aka isentropic expansion factor",\
 12056, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.M_i[1]", "Molar mass of component i [kg/mol]",\
 8809, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.crit.d", "Critical density [kg/m3|g/cm3]",\
 8810, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.crit.h", "Critical specific enthalpy [J/kg]",\
 8811, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.crit.p", "Critical pressure [Pa|bar]",\
 8812, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.crit.s", "Critical specific entropy [J/(kg.K)]",\
 8813, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.crit.T", "Critical temperature [K;degC]",\
 8814, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.transp.Pr", \
"Prandtl number [1]", 5986, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 5987, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.transp.eta", \
"Dynamic viscosity [Pa.s]", 5988, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.transp.sigma", \
"Surface tension [N/m]", 5989, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.d_l", "Density of liquid phase [kg/m3|g/cm3]",\
 12057, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.d_v", "Density of vapour phase [kg/m3|g/cm3]",\
 12058, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.h_l", "Specific enthalpy of liquid phase [J/kg]",\
 12059, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.h_v", "Specific enthalpy of vapour phase [J/kg]",\
 12060, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.p_l", "Pressure of liquid phase [Pa|bar]",\
 12061, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.p_v", "Pressure of vapour phase [Pa|bar]",\
 12062, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.s_l", "Specific entropy of liquid phase [J/(kg.K)]",\
 12063, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.s_v", "Specific entropy of vapour phase [J/(kg.K)]",\
 12064, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.T_l", "Temperature of liquid phase [K;degC]",\
 12065, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.T_v", "Temperature of vapour phase [K;degC]",\
 12066, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLE.nc", "[:#(type=Integer)]",\
 5990, 1, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLEAdditional.cp_l", \
"Specific heat capacity cp of liquid phase [J/(kg.K)]", 5991, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLEAdditional.cp_v", \
"Specific heat capacity cp of vapour phase [J/(kg.K)]", 5992, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLEAdditional.beta_l", \
"Isobaric expansion coefficient of liquid phase [1/K]", 5993, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLEAdditional.beta_v", \
"Isobaric expansion coefficient of vapour phase [1/K]", 5994, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLEAdditional.kappa_l", \
"Isothermal compressibility of liquid phase [1/Pa]", 5995, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLEAdditional.kappa_v", \
"Isothermal compressibility of vapour phase [1/Pa]", 5996, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLETransp.Pr_l", \
"Prandtl number of liquid phase [1]", 5997, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLETransp.Pr_v", \
"Prandtl number of vapour phase [1]", 5998, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLETransp.lambda_l", \
"Thermal conductivity of liquid phase [W/(m.K)]", 5999, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLETransp.lambda_v", \
"Thermal conductivity of vapour phase [W/(m.K)]", 6000, -1, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLETransp.eta_l", \
"Dynamic viscosity of liquid phase [Pa.s]", 6001, -1, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.VLETransp.eta_v", \
"Dynamic viscosity of vapour phase [Pa.s]", 6002, -1, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC.vleFluid.computeFlags", \
"[:#(type=Integer)]", 8815, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_T_degC.unit.factor", "", 6003, 1, 0.0,0.0,\
0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC.unit.offset", "", 6004, -273.15, \
0.0,0.0,0.0,0,1537)
DeclareAlias2("heatPumpCycle.speedDefrost.y", "Value of Real output", \
"heatPumpCycle.compressorSpeedDefrost", 1, 7, 26, 0)
DeclareAlias2("heatPumpCycle.valveAreaRestart.y", "Value of Real output", \
"heatPumpCycle.expansionValveAreaRestart", 1, 7, 67, 0)
DeclareVariable("heatPumpCycle.COP.y", "Value of Real output", 12067, 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.defrostTriggerOn.y", "Value of Boolean output [:#(type=Boolean)]",\
 9070, false, 0.0,0.0,0.0,0,642)
DeclareVariable("heatPumpCycle.defrostTriggerOff.y", "Value of Boolean output [:#(type=Boolean)]",\
 9071, false, 0.0,0.0,0.0,0,706)
DeclareAlias2("heatPumpCycle.switch1.u1", "Connector of first Real input signal",\
 "heatPumpCycle.expansionValveController.y", 1, 5, 12030, 0)
DeclareAlias2("heatPumpCycle.switch1.u2", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "heatPumpCycle.expansionValveController.isActive", 1, 5, 9067, 65)
DeclareAlias2("heatPumpCycle.switch1.u3", "Connector of second Real input signal",\
 "heatPumpCycle.defrostValveArea", 1, 7, 29, 0)
DeclareAlias2("heatPumpCycle.switch1.y", "Connector of Real output signal", \
"heatPumpCycle.expansionValve.effectiveFlowArea", 1, 5, 9146, 0)
DeclareAlias2("heatPumpCycle.valveAreaDefrost.y", "Value of Real output", \
"heatPumpCycle.defrostValveArea", 1, 7, 29, 0)
DeclareVariable("heatPumpCycle.heatPumpController.TSupplySet", "Supply water temperature setpoint in degC",\
 8816, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.heatPumpController.useDefrost", "Enable automatic defrost operation [:#(type=Boolean)]",\
 8817, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.heatPumpController.minTriggerOnTime", \
"Defrost trigger must be active this long before defrost starts [s]", 8818, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.heatPumpController.minTriggerOffTime", \
"Defrost-off trigger must be active this long before defrost stops [s]", 8819, \
0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.heatPumpController.minOffTimeAfterDefrost", \
"Minimum time between two defrost cycles [s]", 8820, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.heatPumpController.fanSpeedHeating", \
"FanSpeed for normal usage", 8821, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.heatPumpController.fanSpeedDefrost", \
"FanSpeed for defrost usage", 8822, 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("heatPumpCycle.heatPumpController.defrostTriggerOn", \
"Start defrost cycle [:#(type=Boolean)]", "heatPumpCycle.defrostTriggerOn.y", 1,\
 5, 9070, 65)
DeclareAlias2("heatPumpCycle.heatPumpController.defrostTriggerOff", \
"Stop defrost cycle [:#(type=Boolean)]", "heatPumpCycle.defrostTriggerOff.y", 1,\
 5, 9071, 65)
DeclareAlias2("heatPumpCycle.heatPumpController.controllerSwitch", \
"True: normal PI control, False: defrost operation [:#(type=Boolean)]", \
"heatPumpCycle.expansionValveController.isActive", 1, 5, 9067, 65)
DeclareVariable("heatPumpCycle.heatPumpController.fourWayValve", \
"False: heating mode, True: reversed flow for defrost [:#(type=Boolean)]", 6005,\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("heatPumpCycle.heatPumpController.TemperatureSetpoint", \
"Supply water temperature setpoint in degC", "heatPumpCycle.heatPumpController.TSupplySet", 1,\
 5, 8816, 0)
DeclareVariable("heatPumpCycle.heatPumpController.fanSpeed", "Sets a lower FanSpeed when Defrost is activated",\
 6006, 0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.heatPumpController.defrostActive", \
"True while defrost is active [:#(type=Boolean)]", 9072, false, 0.0,0.0,0.0,0,2706)
DeclareAlias2("heatPumpCycle.heatPumpController.timerDefrostOn.u", \
"Connector of Boolean input signal [:#(type=Boolean)]", "heatPumpCycle.defrostTriggerOn.y", 1,\
 5, 9070, 1089)
DeclareVariable("heatPumpCycle.heatPumpController.timerDefrostOn.y", \
"Connector of Real output signal", 12068, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.heatPumpController.timerDefrostOn.entryTime", \
"Time instant when u became true [s]", 9073, 0.0, 0.0,0.0,0.0,0,2688)
DeclareAlias2("heatPumpCycle.heatPumpController.timerDefrostOff.u", \
"Connector of Boolean input signal [:#(type=Boolean)]", "heatPumpCycle.defrostTriggerOff.y", 1,\
 5, 9071, 1089)
DeclareVariable("heatPumpCycle.heatPumpController.timerDefrostOff.y", \
"Connector of Real output signal", 12069, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.heatPumpController.timerDefrostOff.entryTime", \
"Time instant when u became true [s]", 9074, 0.0, 0.0,0.0,0.0,0,2688)
DeclareVariable("heatPumpCycle.heatPumpController.lastDefrostEnd", \
"Time when previous defrost cycle ended [s]", 9075, 0.0, 0.0,0.0,0.0,0,2688)
DeclareVariable("heatPumpCycle.heatPumpController.enableHeatPump", \
"\"True: heat pump enabled, False: heat pump off\"; [:#(type=Boolean)]", 6007, \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.heatPumpController.controllerSwitchCompressor", \
"True: normal PI control, False: Compressor off [:#(type=Boolean)]", 6008, false,\
 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.T_ambient", "Temperature of the ambient in K", 6009,\
 263.15, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6010, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSource.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6011,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6012, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6013,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6014,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6015, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6016, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gasType.xi_default[1]", \
"Default mass fractions", 6017, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6018, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6019, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6020, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6021,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6022, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6023,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6024,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6025, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6026, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.xi_default[1]", \
"Default mass fractions", 6027, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6028, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.port.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6029, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.gasSource.port.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 4)
DeclareAlias2("heatPumpCycle.gasSource.port.m_flow", "Mass flow rate [kg/s]", \
"heatPumpCycle.evaporator.portA_gas.m_flow", -1, 5, 11981, 132)
DeclareVariable("heatPumpCycle.gasSource.port.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 8823, 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("heatPumpCycle.gasSource.port.xi_outflow[1]", "Independent mixture mass fractions m_i/m in the connection point [1]",\
 8824, 9.999000099990002E-05, 0.0,1.0,0.0,0,521)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6030, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6031,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6032, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6033,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6034,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6035, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6036, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.xi_default[1]", \
"Default mass fractions", 6037, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6038, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6039, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.gasPointer.id", "[:#(type=Integer)]",\
 8825, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.stateSelectPreferForInputs", \
"=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6040,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 6041, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.gasSource.gas_ph.d", "Density [kg/m3|g/cm3]", \
"heatPumpCycle.gasSource.d", 1, 5, 8920, 1024)
DeclareAlias2("heatPumpCycle.gasSource.gas_ph.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.gasSource.gas_ph.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.gasSource.port.h_outflow", 1, 5, 8823, 1024)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.s", "Specific entropy [J/(kg.K)]",\
 8826, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.T", "Temperature [K;degC]", 8827,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.xi[1]", "Mass fraction [1]", 8828,\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.x[1]", "Mole fraction [1]", 8829,\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.M", "Average molar mass [kg/mol]",\
 8830, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 8831, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 8832, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.beta", "Isobaric thermal expansion coefficient [1/K]",\
 8833, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.kappa", "Isothermal compressibility [1/Pa]",\
 8834, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.w", "Speed of sound [m/s]", 8835,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.drhodh_pxi", "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8836, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.drhodp_hxi", "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8837, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.drhodxi_ph[1]", "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8838, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.p_i[1]", "Partial pressure [Pa|bar]",\
 8839, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.p_i[2]", "Partial pressure [Pa|bar]",\
 8840, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 8841, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.phi", "Relative humidity", 8842,\
 0.2, -1.0,100.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 8843, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.xi_s", "Saturation mass fraction of condensing component [1]",\
 8844, 0.0, -1.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.delta_hv", "Specific enthalpy of vaporation of condensing component [J/kg]",\
 8845, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.delta_hd", "Specific enthalpy of desublimation of condensing component [J/kg]",\
 8846, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8847, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8848, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.M_i[1]", "Molar mass of component i [kg/mol]",\
 8849, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.M_i[2]", "Molar mass of component i [kg/mol]",\
 8850, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.humRatio", "Content of condensing component aka humidity ratio",\
 8851, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.humRatio_s", "Saturation content of condensing component aka saturation humidity ratio",\
 8852, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 8853, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.transp.Pr", "Prandtl number [1]",\
 6042, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6043, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.transp.eta", "Dynamic viscosity [Pa.s]",\
 6044, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.transp.sigma", "Surface tension [N/m]",\
 6045, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_ph.computeFlags", "[:#(type=Integer)]",\
 8854, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6046, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6047,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6048, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6049,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6050,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6051, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6052, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.xi_default[1]", \
"Default mass fractions", 6053, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6054, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6055, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.gasPointer.id", "[:#(type=Integer)]",\
 8855, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.stateSelectPreferForInputs", \
"=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6056,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 6057, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.d", "Density [kg/m3|g/cm3]", 8856,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.gas_pT.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.gasSource.port.h_outflow", 1, 5, 8823, 1024)
DeclareAlias2("heatPumpCycle.gasSource.gas_pT.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.s", "Specific entropy [J/(kg.K)]",\
 8857, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.T", "Temperature [K;degC]", 6058,\
 263.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.xi[1]", "Mass fraction [1]", 8858,\
 9.999000099990002E-05, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.x[1]", "Mole fraction [1]", 8859,\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.M", "Average molar mass [kg/mol]",\
 8860, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 8861, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 8862, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.beta", "Isobaric thermal expansion coefficient [1/K]",\
 8863, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.kappa", "Isothermal compressibility [1/Pa]",\
 8864, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.w", "Speed of sound [m/s]", 8865,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.drhodh_pxi", "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8866, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.drhodp_hxi", "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8867, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.drhodxi_ph[1]", "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8868, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.p_i[1]", "Partial pressure [Pa|bar]",\
 8869, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.p_i[2]", "Partial pressure [Pa|bar]",\
 8870, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 8871, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.gas_pT.phi", "Relative humidity", \
"heatPumpCycle.gasSource.phi_in_.k", 1, 5, 8922, 1024)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 8872, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.xi_s", "Saturation mass fraction of condensing component [1]",\
 8873, 0.0, -1.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.delta_hv", "Specific enthalpy of vaporation of condensing component [J/kg]",\
 8874, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.delta_hd", "Specific enthalpy of desublimation of condensing component [J/kg]",\
 8875, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8876, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8877, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.M_i[1]", "Molar mass of component i [kg/mol]",\
 8878, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.M_i[2]", "Molar mass of component i [kg/mol]",\
 8879, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.humRatio", "Content of condensing component aka humidity ratio",\
 8880, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.humRatio_s", "Saturation content of condensing component aka saturation humidity ratio",\
 8881, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 8882, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.transp.Pr", "Prandtl number [1]",\
 6059, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6060, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.transp.eta", "Dynamic viscosity [Pa.s]",\
 6061, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.transp.sigma", "Surface tension [N/m]",\
 6062, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_pT.computeFlags", "[:#(type=Integer)]",\
 8883, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6063, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6064,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6065, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6066,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6067,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6068, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6069, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.xi_default[1]", \
"Default mass fractions", 6070, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6071, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6072, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.gasPointer.id", \
"[:#(type=Integer)]", 8884, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6073,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 6074, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.d", "Density [kg/m3|g/cm3]",\
 8885, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.gas_inStream.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.h", "Specific enthalpy [J/kg]",\
 6075, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.s", "Specific entropy [J/(kg.K)]",\
 8886, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.T", "Temperature [K;degC]",\
 8887, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.xi[1]", "Mass fraction [1]",\
 6076, 9.999000099990002E-05, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.x[1]", "Mole fraction [1]",\
 8888, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.M", "Average molar mass [kg/mol]",\
 8889, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 8890, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 8891, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.beta", "Isobaric thermal expansion coefficient [1/K]",\
 8892, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.kappa", "Isothermal compressibility [1/Pa]",\
 8893, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.w", "Speed of sound [m/s]",\
 8894, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.drhodh_pxi", \
"Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8895, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.drhodp_hxi", \
"Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8896, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.drhodxi_ph[1]", \
"Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8897, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.p_i[1]", "Partial pressure [Pa|bar]",\
 8898, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.p_i[2]", "Partial pressure [Pa|bar]",\
 8899, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 8900, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.phi", "Relative humidity",\
 8901, 0.0, -1.0,100.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 8902, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.xi_s", "Saturation mass fraction of condensing component [1]",\
 8903, 0.0, -1.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.delta_hv", \
"Specific enthalpy of vaporation of condensing component [J/kg]", 8904, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.delta_hd", \
"Specific enthalpy of desublimation of condensing component [J/kg]", 8905, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8906, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8907, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.M_i[1]", "Molar mass of component i [kg/mol]",\
 8908, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.M_i[2]", "Molar mass of component i [kg/mol]",\
 8909, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.humRatio", \
"Content of condensing component aka humidity ratio", 6077, 0.0001, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.humRatio_s", \
"Saturation content of condensing component aka saturation humidity ratio", 8910,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 6078, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.transp.Pr", \
"Prandtl number [1]", 6079, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 6080, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.transp.eta", \
"Dynamic viscosity [Pa.s]", 6081, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.transp.sigma", \
"Surface tension [N/m]", 6082, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.gas_inStream.computeFlags", \
"[:#(type=Integer)]", 8911, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSource.use_temperatureInput", "= true, if T defined by input [:#(type=Boolean)]",\
 6083, true, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.gasSource.TFixed", "Fixed value for temperature [K;degC]",\
 601, 298.15, 0.0,1.7976931348623157E+308,300.0,0,560)
DeclareVariable("heatPumpCycle.gasSource.use_specificEnthalpyInput", \
"= true if h defined by input [:#(type=Boolean)]", 6084, false, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.gasSource.hFixed", "Fixed value for h [J/kg]", 602,\
 350000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.gasSource.use_relativeHumidityInput", \
"= true if phi defined by input [:#(type=Boolean)]", 6085, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSource.phiFixed", "Fixed value for gas relative humidity (0%-100%)",\
 8912, 0.0, 0.0,100.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.use_mixingRatioInput", "= true if xi defined by input [:#(type=Boolean)]",\
 6086, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSource.mixingRatioFixed[1]", "Fixed array for mass fraction of gas components e.g. {2, 10, 0.3}",\
 6087, 0.0001, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.mixingRatioFixed[2]", "Fixed array for mass fraction of gas components e.g. {2, 10, 0.3}",\
 6088, 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.use_molarMixingRatioInput", \
"= true if x defined by input [:#(type=Boolean)]", 6089, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSource.molarMixingRatioFixed[1]", \
"Fixed array for mole fraction of gas components e.g. {2, 10, 0.3}", 8913, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.molarMixingRatioFixed[2]", \
"Fixed array for mole fraction of gas components e.g. {2, 10, 0.3}", 8914, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.fractionSum", "", 6090, 1.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.M_dry_i[1]", "Molar mass of component i [kg/mol]",\
 8915, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.defaultDryMixingRatio[1]", \
"Default dry mixing ratio [1]", 8916, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.defaultMolarMixingRatio[1]", \
"Default molar mixing ratio [1]", 8917, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.defaultMolarMixingRatio[2]", \
"Default molar mixing ratio [1]", 8918, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.defaultDryMolarMixingRatio[1]", \
"Default dry molar mixing ratio [1]", 8919, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.correctSizeMassMixingRatio", \
"[:#(type=Boolean)]", 6091, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSource.correctSizeDryMassMixingRatio", \
"[:#(type=Boolean)]", 6092, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSource.correctSizeMolarMixingRatio", \
"[:#(type=Boolean)]", 6093, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSource.correctSizeDryMolarMixingRatio", \
"[:#(type=Boolean)]", 6094, false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.gasSource.m_flow", "Mass flow rate [kg/s]", \
"heatPumpCycle.evaporator.portA_gas.m_flow", -1, 5, 11981, 1024)
DeclareVariable("heatPumpCycle.gasSource.d", "Density [kg/m3|g/cm3]", 8920, 0.0,\
 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.gasSource.port.h_outflow", 1, 5, 8823, 1024)
DeclareAlias2("heatPumpCycle.gasSource.p", "Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1,\
 5, 8924, 1024)
DeclareVariable("heatPumpCycle.gasSource.T", "Temperature [K;degC]", 6095, \
263.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.xi[1]", "Mass fraction [1]", \
"heatPumpCycle.gasSource.port.xi_outflow[1]", 1, 5, 8824, 1024)
DeclareVariable("heatPumpCycle.gasSource.h_in_.k", "Constant output value", 8921,\
 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.h_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSource.h_in_.k", 1, 5, 8921, 1024)
DeclareVariable("heatPumpCycle.gasSource.phi_in_.k", "Constant output value", 8922,\
 1, -1.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.phi_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSource.phi_in_.k", 1, 5, 8922, 1024)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6096, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6097,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6098, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6099,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6100,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6101, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6102, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.xi_default[1]", \
"Default mass fractions", 6103, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6104, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.getInputs.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6105, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSource.getInputs.T_in", "Prescribed boundary temperature",\
 6106, 263.15, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.getInputs.m_flow_in", "Prescribed boundary mass flow rate",\
 "heatPumpCycle.gasSource.m_flow_in_.k", 1, 5, 8925, 1024)
DeclareAlias2("heatPumpCycle.gasSource.getInputs.V_flow_in", "Prescribed boundary volume flow rate",\
 "heatPumpCycle.gasSource.V_flow_in_.k", 1, 5, 8926, 1024)
DeclareAlias2("heatPumpCycle.gasSource.getInputs.p_in", "Prescribed boundary pressure",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.gasSource.getInputs.h_in", "Prescribed boundary specific enthalpy",\
 "heatPumpCycle.gasSource.h_in_.k", 1, 5, 8921, 1024)
DeclareAlias2("heatPumpCycle.gasSource.getInputs.phi_in", "Prescribed boundary relative humidity",\
 "heatPumpCycle.gasSource.phi_in_.k", 1, 5, 8922, 1024)
DeclareVariable("heatPumpCycle.gasSource.getInputs.mixingRatio_in[1]", \
"Prescribed boundary mass fraction of gas component", 6107, 0.0001, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.gasSource.getInputs.mixingRatio_in[2]", \
"Prescribed boundary mass fraction of gas component", 6108, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.getInputs.molarMixingRatio_in[1]", \
"Prescribed boundary mole fraction of gas component", 6109, 0.0001, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.gasSource.getInputs.molarMixingRatio_in[2]", \
"Prescribed boundary mole fraction of gas component", 6110, 1.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.summary.p_gas", "Pressure at port [Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareVariable("heatPumpCycle.gasSource.summary.T_gas", "Temperature at port [K;degC]",\
 12070, 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("heatPumpCycle.gasSource.summary.T_outflow_gas", \
"Outflowing temperature [K;degC]", 6111, 263.15, 0.0,1.7976931348623157E+308,\
300.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.summary.h_gas", "Specific enthalpy at port [J/kg]",\
 12071, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.gasSource.summary.phi_gas", "Relative humidity at port",\
 12072, 0.0, 0.0,100.0,0.0,0,512)
DeclareVariable("heatPumpCycle.gasSource.summary.xi_gas[1]", "Mass fraction of independent gas components at port [1]",\
 12073, 0.0, 0.0,1.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.gasSource.summary.m_flow_gas", "Mass flow rate at port [kg/s]",\
 "heatPumpCycle.evaporator.portA_gas.m_flow", -1, 5, 11981, 0)
DeclareVariable("heatPumpCycle.gasSource.summary.V_flow_gas", "Volume flow rate at port [m3/s]",\
 12074, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.gasSource.summary.nc_gas", "Number of gas components [:#(type=Integer)]",\
 6112, 2, 0.0,0.0,0.0,0,517)
DeclareVariable("heatPumpCycle.gasSource.use_pressureInput", "= true, if p defined by input [:#(type=Boolean)]",\
 6113, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSource.pFixed", "Fixed value for p [Pa|bar]", 8923,\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.use_massFlowRateInput", \
"= true, if m_flow defined by input [:#(type=Boolean)]", 6114, false, 0.0,0.0,\
0.0,0,515)
DeclareParameter("heatPumpCycle.gasSource.m_flowFixed", "Fixed value for m_flow [kg/s]",\
 603, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.gasSource.use_volumeFlowRateInput", \
"= true, if V_flow defined by input [:#(type=Boolean)]", 6115, false, 0.0,0.0,\
0.0,0,515)
DeclareParameter("heatPumpCycle.gasSource.V_flowFixed", "Fixed value for V_flow [m3/s]",\
 604, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.gasSource.p_in_.k", "Constant output value", 8924,\
 1, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.p_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.gasSource.m_flow_in_.k", "Constant output value",\
 8925, 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.m_flow_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSource.m_flow_in_.k", 1, 5, 8925, 1024)
DeclareVariable("heatPumpCycle.gasSource.V_flow_in_.k", "Constant output value",\
 8926, 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSource.V_flow_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSource.V_flow_in_.k", 1, 5, 8926, 1024)
DeclareVariable("heatPumpCycle.gasSource.T_in", "Prescribed boundary temperature [K] []",\
 6116, 263.15, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSource.mixingRatio_in_[1].k", "Constant output value",\
 6117, 0.0001, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.mixingRatio_in_[1].y", "Connector of Real output signal",\
 6118, 0.0001, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.mixingRatio_in_[2].k", "Constant output value",\
 6119, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.mixingRatio_in_[2].y", "Connector of Real output signal",\
 6120, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.molarMixingRatio_in_[1].k", \
"Constant output value", 6121, 0.0001, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.molarMixingRatio_in_[1].y", \
"Connector of Real output signal", 6122, 0.0001, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.molarMixingRatio_in_[2].k", \
"Constant output value", 6123, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSource.molarMixingRatio_in_[2].y", \
"Connector of Real output signal", 6124, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6125, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6126,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6127, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6128,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6129,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6130, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6131, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.xi_default[1]",\
 "Default mass fractions", 6132, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6133, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6134, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6135, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6136,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6137, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6138,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6139,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6140, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6141, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.xi_default[1]",\
 "Default mass fractions", 6142, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6143, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6144, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.sensor_T_degC_ambientAirIn.port.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 516)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.m_flow", \
"Mass flow rate [kg/s]", 6145, 0.0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 6146, 0.0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.port.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", 6147, \
0.0, 0.0,1.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.sensorValue", \
"Sensor value [degC]", 12075, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.sensorValueSI", \
"Sensor value in SI unit [K]", 12076, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.offset", "", 6148, \
-273.15, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.factor", "", 6149, 1.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.useTimeConstant", \
"If true, time constant tau is used [:#(type=Boolean)]", 6150, false, 0.0,0.0,\
0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirIn.tau", \
"Time constant for delay time of the sensor value [s]", 605, 1, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirIn.useSteadyStateInitialization",\
 "If true, steady state initialization is used [:#(type=Boolean)]", 606, false, \
0.0,0.0,0.0,0,1586)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirIn.displaySignificantDigits",\
 "Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 607, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.visualizeLimitViolation",\
 "If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 6151, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirIn.lowerLimit", \
"Lower limit [Sensor unit] []", 608, 0, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirIn.upperLimit", \
"Upper limit [Sensor unit] []", 609, 1, 0.0,0.0,0.0,0,1584)
DeclareAlias2("heatPumpCycle.sensor_T_degC_ambientAirIn.sensorValue_", "", \
"heatPumpCycle.sensor_T_degC_ambientAirIn.sensorValueSI", 1, 5, 12076, 1024)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirIn.initialSensorValue", \
"Initial value [Sensor unit] []", 610, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6152, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6153,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6154, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6155,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6156,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6157, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6158, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.xi_default[1]",\
 "Default mass fractions", 6159, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6160, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6161, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.gasPointer.id", \
"[:#(type=Integer)]", 8927, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6162,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 6163, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.d", \
"Density [kg/m3|g/cm3]", 12077, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.h", \
"Specific enthalpy [J/kg]", 12078, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.s", \
"Specific entropy [J/(kg.K)]", 12079, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.T", "Temperature [K;degC]",\
 "heatPumpCycle.sensor_T_degC_ambientAirIn.sensorValueSI", 1, 5, 12076, 1024)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.xi[1]", \
"Mass fraction [1]", 12080, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.x[1]", \
"Mole fraction [1]", 12081, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.M", \
"Average molar mass [kg/mol]", 12082, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 12083, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.cv", \
"Specific isochoric heat capacity cv [J/(kg.K)]", 12084, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.beta", \
"Isobaric thermal expansion coefficient [1/K]", 12085, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.kappa", \
"Isothermal compressibility [1/Pa]", 12086, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.w", \
"Speed of sound [m/s]", 12087, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.drhodh_pxi", \
"Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12088, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.drhodp_hxi", \
"Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12089, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.drhodxi_ph[1]", \
"Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12090, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.p_i[1]", \
"Partial pressure [Pa|bar]", 12091, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.p_i[2]", \
"Partial pressure [Pa|bar]", 12092, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.xi_gas", \
"Mass fraction of gasoues condensing component [1]", 12093, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.phi", \
"Relative humidity", 12094, 0.0, -1.0,100.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.p_s", \
"Saturation partial pressure of condensing component [Pa|bar]", 12095, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.xi_s", \
"Saturation mass fraction of condensing component [1]", 12096, 0.0, -1.0,1.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.delta_hv", \
"Specific enthalpy of vaporation of condensing component [J/kg]", 12097, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.delta_hd", \
"Specific enthalpy of desublimation of condensing component [J/kg]", 12098, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.h_i[1]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12099, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.h_i[2]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12100, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.M_i[1]", \
"Molar mass of component i [kg/mol]", 8928, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.M_i[2]", \
"Molar mass of component i [kg/mol]", 8929, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.humRatio", \
"Content of condensing component aka humidity ratio", 12101, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.humRatio_s", \
"Saturation content of condensing component aka saturation humidity ratio", 12102,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.h1px", \
"Enthalpy H divided by the mass of components that cannot condense [J/kg]", 12103,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.transp.Pr", \
"Prandtl number [1]", 6164, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 6165, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.transp.eta", \
"Dynamic viscosity [Pa.s]", 6166, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.transp.sigma", \
"Surface tension [N/m]", 6167, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.gas.computeFlags", \
"[:#(type=Integer)]", 8930, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.unit.factor", "", 6168,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirIn.unit.offset", "", 6169,\
 -273.15, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6170, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6171,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6172, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6173,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6174,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6175, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6176, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.xi_default[1]", \
"Default mass fractions", 6177, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6178, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6179, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6180, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6181,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6182, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6183,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6184,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6185, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6186, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.xi_default[1]",\
 "Default mass fractions", 6187, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6188, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6189, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirIn.port.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 516)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.m_flow", \
"Mass flow rate [kg/s]", 6190, 0.0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 6191, 0.0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.port.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", 6192, \
0.0, 0.0,1.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.sensorValue", \
"Sensor value", 12104, 0.0, -1.0,100.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirIn.sensorValueSI", \
"Sensor value in SI unit", "heatPumpCycle.sensor_phi_ambientAirIn.sensorValue", 1,\
 5, 12104, 0)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.offset", "", 6193, 0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.factor", "", 6194, 1, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.useTimeConstant", \
"If true, time constant tau is used [:#(type=Boolean)]", 6195, false, 0.0,0.0,\
0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirIn.tau", "Time constant for delay time of the sensor value [s]",\
 611, 1, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirIn.useSteadyStateInitialization",\
 "If true, steady state initialization is used [:#(type=Boolean)]", 612, false, \
0.0,0.0,0.0,0,1586)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirIn.displaySignificantDigits",\
 "Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 613, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.visualizeLimitViolation",\
 "If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 6196, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirIn.lowerLimit", \
"Lower limit [Sensor unit] []", 614, 0, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirIn.upperLimit", \
"Upper limit [Sensor unit] []", 615, 1, 0.0,0.0,0.0,0,1584)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirIn.sensorValue_", "", \
"heatPumpCycle.sensor_phi_ambientAirIn.sensorValue", 1, 5, 12104, 1024)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirIn.initialSensorValue", \
"Initial value", 616, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6197, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6198,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6199, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6200,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6201,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6202, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6203, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.xi_default[1]",\
 "Default mass fractions", 6204, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6205, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6206, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.gasPointer.id", \
"[:#(type=Integer)]", 8931, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6207,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 6208, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.d", "Density [kg/m3|g/cm3]",\
 12105, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirIn.gas.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.h", "Specific enthalpy [J/kg]",\
 12106, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.s", "Specific entropy [J/(kg.K)]",\
 12107, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.T", "Temperature [K;degC]",\
 12108, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.xi[1]", \
"Mass fraction [1]", 12109, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.x[1]", \
"Mole fraction [1]", 12110, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.M", "Average molar mass [kg/mol]",\
 12111, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 12112, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 12113, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.beta", \
"Isobaric thermal expansion coefficient [1/K]", 12114, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.kappa", \
"Isothermal compressibility [1/Pa]", 12115, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.w", "Speed of sound [m/s]",\
 12116, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.drhodh_pxi", \
"Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12117, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.drhodp_hxi", \
"Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12118, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.drhodxi_ph[1]", \
"Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12119, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.p_i[1]", \
"Partial pressure [Pa|bar]", 12120, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.p_i[2]", \
"Partial pressure [Pa|bar]", 12121, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.xi_gas", \
"Mass fraction of gasoues condensing component [1]", 12122, 0.0, 0.0,1.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirIn.gas.phi", "Relative humidity",\
 "heatPumpCycle.sensor_phi_ambientAirIn.sensorValue", 1, 5, 12104, 1024)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.p_s", \
"Saturation partial pressure of condensing component [Pa|bar]", 12123, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.xi_s", \
"Saturation mass fraction of condensing component [1]", 12124, 0.0, -1.0,1.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.delta_hv", \
"Specific enthalpy of vaporation of condensing component [J/kg]", 12125, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.delta_hd", \
"Specific enthalpy of desublimation of condensing component [J/kg]", 12126, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.h_i[1]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12127, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.h_i[2]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12128, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.M_i[1]", \
"Molar mass of component i [kg/mol]", 8932, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.M_i[2]", \
"Molar mass of component i [kg/mol]", 8933, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.humRatio", \
"Content of condensing component aka humidity ratio", 12129, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.humRatio_s", \
"Saturation content of condensing component aka saturation humidity ratio", 12130,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.h1px", \
"Enthalpy H divided by the mass of components that cannot condense [J/kg]", 12131,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.transp.Pr", \
"Prandtl number [1]", 6209, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 6210, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.transp.eta", \
"Dynamic viscosity [Pa.s]", 6211, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.transp.sigma", \
"Surface tension [N/m]", 6212, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirIn.gas.computeFlags", \
"[:#(type=Integer)]", 8934, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.statePoint.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6213, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.statePoint.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6214,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6215, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6216,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6217,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6218, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6219, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gasType.xi_default[1]", \
"Default mass fractions", 6220, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6221, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6222, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6223, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6224,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6225, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6226,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6227,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6228, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6229, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.xi_default[1]", \
"Default mass fractions", 6230, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6231, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.port.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6232, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.statePoint.port.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 516)
DeclareVariable("heatPumpCycle.statePoint.port.m_flow", "Mass flow rate [kg/s]",\
 6233, 0.0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.statePoint.port.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 6234, 0.0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.statePoint.port.xi_outflow[1]", "Independent mixture mass fractions m_i/m in the connection point [1]",\
 6235, 0.0, 0.0,1.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.statePoint.extendedInformation", "deprecated [:#(type=Boolean)]",\
 6236, true, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.statePoint.index", "Index for DaVE State Chart [:#(type=Integer)]",\
 617, 0, 0.0,0.0,0.0,0,564)
DeclareVariable("heatPumpCycle.statePoint.h", "Specific enthalpy [J/kg]", 12132,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.statePoint.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 0)
DeclareVariable("heatPumpCycle.statePoint.xi[1]", "Gas mass fraction [1]", 12133,\
 0.0, 0.0,1.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.statePoint.xi_vapor", "Mass fraction of the vapor [1]",\
 "heatPumpCycle.statePoint.xi[1]", 1, 5, 12133, 0)
DeclareVariable("heatPumpCycle.statePoint.phi", "Relative humidity", 12134, 0.0,\
 -1.0,100.0,0.0,0,512)
DeclareVariable("heatPumpCycle.statePoint.T", "Temperature [K;degC]", 12135, \
288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6237, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6238,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6239, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6240,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6241,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6242, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6243, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.xi_default[1]", \
"Default mass fractions", 6244, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6245, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.gas.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6246, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint.gas.gasPointer.id", "[:#(type=Integer)]",\
 8935, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.statePoint.gas.stateSelectPreferForInputs", \
"=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6247,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.statePoint.gas.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 6248, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.statePoint.gas.d", "Density [kg/m3|g/cm3]", 12136,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.statePoint.gas.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSource.p_in_.k", 1, 5, 8924, 1024)
DeclareAlias2("heatPumpCycle.statePoint.gas.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.statePoint.h", 1, 5, 12132, 1024)
DeclareVariable("heatPumpCycle.statePoint.gas.s", "Specific entropy [J/(kg.K)]",\
 12137, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.statePoint.gas.T", "Temperature [K;degC]", \
"heatPumpCycle.statePoint.T", 1, 5, 12135, 1024)
DeclareVariable("heatPumpCycle.statePoint.gas.xi[1]", "Mass fraction [1]", 12138,\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.x[1]", "Mole fraction [1]", 12139,\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.M", "Average molar mass [kg/mol]",\
 12140, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 12141, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 12142, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.beta", "Isobaric thermal expansion coefficient [1/K]",\
 12143, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.kappa", "Isothermal compressibility [1/Pa]",\
 12144, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.w", "Speed of sound [m/s]", 12145,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.drhodh_pxi", "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12146, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.drhodp_hxi", "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12147, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.drhodxi_ph[1]", "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12148, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.p_i[1]", "Partial pressure [Pa|bar]",\
 12149, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.p_i[2]", "Partial pressure [Pa|bar]",\
 12150, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 12151, 0.0, 0.0,1.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.statePoint.gas.phi", "Relative humidity", \
"heatPumpCycle.statePoint.phi", 1, 5, 12134, 1024)
DeclareVariable("heatPumpCycle.statePoint.gas.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 12152, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.xi_s", "Saturation mass fraction of condensing component [1]",\
 12153, 0.0, -1.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.delta_hv", "Specific enthalpy of vaporation of condensing component [J/kg]",\
 12154, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.delta_hd", "Specific enthalpy of desublimation of condensing component [J/kg]",\
 12155, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 12156, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 12157, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.M_i[1]", "Molar mass of component i [kg/mol]",\
 8936, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint.gas.M_i[2]", "Molar mass of component i [kg/mol]",\
 8937, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint.gas.humRatio", "Content of condensing component aka humidity ratio",\
 12158, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.humRatio_s", "Saturation content of condensing component aka saturation humidity ratio",\
 12159, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 12160, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint.gas.transp.Pr", "Prandtl number [1]", 6249,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint.gas.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6250, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint.gas.transp.eta", "Dynamic viscosity [Pa.s]",\
 6251, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint.gas.transp.sigma", "Surface tension [N/m]",\
 6252, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint.gas.computeFlags", "[:#(type=Integer)]",\
 8938, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSink.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6253, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSink.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6254,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6255, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6256,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6257,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6258, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6259, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gasType.xi_default[1]", "Default mass fractions",\
 6260, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6261, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6262, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6263, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6264,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6265, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6266,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6267,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6268, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6269, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.xi_default[1]", \
"Default mass fractions", 6270, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6271, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.port.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6272, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.gasSink.port.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 4)
DeclareAlias2("heatPumpCycle.gasSink.port.m_flow", "Mass flow rate [kg/s]", \
"heatPumpCycle.evaporator.portB_gas.m_flow", -1, 5, 11983, 132)
DeclareVariable("heatPumpCycle.gasSink.port.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 8939, 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("heatPumpCycle.gasSink.port.xi_outflow[1]", "Independent mixture mass fractions m_i/m in the connection point [1]",\
 8940, 9.999000099990002E-05, 0.0,1.0,0.0,0,521)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6273, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6274,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6275, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6276,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6277,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6278, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6279, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.xi_default[1]", \
"Default mass fractions", 6280, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6281, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6282, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.gasPointer.id", "[:#(type=Integer)]",\
 8941, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.stateSelectPreferForInputs", \
"=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6283,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 6284, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.gasSink.gas_ph.d", "Density [kg/m3|g/cm3]", \
"heatPumpCycle.gasSink.d", 1, 5, 9013, 1024)
DeclareAlias2("heatPumpCycle.gasSink.gas_ph.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareAlias2("heatPumpCycle.gasSink.gas_ph.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.gasSink.port.h_outflow", 1, 5, 8939, 1024)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.s", "Specific entropy [J/(kg.K)]",\
 8942, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.T", "Temperature [K;degC]", 8943, \
288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.xi[1]", "Mass fraction [1]", 8944,\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.x[1]", "Mole fraction [1]", 8945, \
0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.M", "Average molar mass [kg/mol]",\
 8946, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 8947, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 8948, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.beta", "Isobaric thermal expansion coefficient [1/K]",\
 8949, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.kappa", "Isothermal compressibility [1/Pa]",\
 8950, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.w", "Speed of sound [m/s]", 8951, \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.drhodh_pxi", "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8952, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.drhodp_hxi", "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8953, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.drhodxi_ph[1]", "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8954, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.p_i[1]", "Partial pressure [Pa|bar]",\
 8955, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.p_i[2]", "Partial pressure [Pa|bar]",\
 8956, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 8957, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.phi", "Relative humidity", 8958, \
0.2, -1.0,100.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 8959, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.xi_s", "Saturation mass fraction of condensing component [1]",\
 8960, 0.0, -1.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.delta_hv", "Specific enthalpy of vaporation of condensing component [J/kg]",\
 8961, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.delta_hd", "Specific enthalpy of desublimation of condensing component [J/kg]",\
 8962, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8963, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8964, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.M_i[1]", "Molar mass of component i [kg/mol]",\
 8965, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.M_i[2]", "Molar mass of component i [kg/mol]",\
 8966, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.humRatio", "Content of condensing component aka humidity ratio",\
 8967, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.humRatio_s", "Saturation content of condensing component aka saturation humidity ratio",\
 8968, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 8969, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.transp.Pr", "Prandtl number [1]", 6285,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6286, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.transp.eta", "Dynamic viscosity [Pa.s]",\
 6287, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.transp.sigma", "Surface tension [N/m]",\
 6288, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_ph.computeFlags", "[:#(type=Integer)]",\
 8970, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6289, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6290,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6291, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6292,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6293,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6294, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6295, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.xi_default[1]", \
"Default mass fractions", 6296, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6297, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6298, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.gasPointer.id", "[:#(type=Integer)]",\
 8971, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.stateSelectPreferForInputs", \
"=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6299,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 6300, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.d", "Density [kg/m3|g/cm3]", 8972,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.gas_pT.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.gasSink.port.h_outflow", 1, 5, 8939, 1024)
DeclareAlias2("heatPumpCycle.gasSink.gas_pT.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.s", "Specific entropy [J/(kg.K)]",\
 8973, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.gas_pT.T", "Temperature [K;degC]", \
"heatPumpCycle.gasSink.T_in_.k", 1, 5, 9014, 1024)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.xi[1]", "Mass fraction [1]", 8974,\
 9.999000099990002E-05, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.x[1]", "Mole fraction [1]", 8975, \
0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.M", "Average molar mass [kg/mol]",\
 8976, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 8977, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 8978, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.beta", "Isobaric thermal expansion coefficient [1/K]",\
 8979, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.kappa", "Isothermal compressibility [1/Pa]",\
 8980, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.w", "Speed of sound [m/s]", 8981, \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.drhodh_pxi", "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 8982, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.drhodp_hxi", "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 8983, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.drhodxi_ph[1]", "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 8984, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.p_i[1]", "Partial pressure [Pa|bar]",\
 8985, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.p_i[2]", "Partial pressure [Pa|bar]",\
 8986, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 8987, 0.0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.gas_pT.phi", "Relative humidity", \
"heatPumpCycle.gasSink.phi_in_.k", 1, 5, 9016, 1024)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 8988, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.xi_s", "Saturation mass fraction of condensing component [1]",\
 8989, 0.0, -1.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.delta_hv", "Specific enthalpy of vaporation of condensing component [J/kg]",\
 8990, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.delta_hd", "Specific enthalpy of desublimation of condensing component [J/kg]",\
 8991, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8992, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 8993, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.M_i[1]", "Molar mass of component i [kg/mol]",\
 8994, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.M_i[2]", "Molar mass of component i [kg/mol]",\
 8995, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.humRatio", "Content of condensing component aka humidity ratio",\
 8996, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.humRatio_s", "Saturation content of condensing component aka saturation humidity ratio",\
 8997, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 8998, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.transp.Pr", "Prandtl number [1]", 6301,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6302, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.transp.eta", "Dynamic viscosity [Pa.s]",\
 6303, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.transp.sigma", "Surface tension [N/m]",\
 6304, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_pT.computeFlags", "[:#(type=Integer)]",\
 8999, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6305, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6306,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6307, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6308,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6309,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6310, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6311, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.xi_default[1]", \
"Default mass fractions", 6312, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6313, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6314, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.gasPointer.id", \
"[:#(type=Integer)]", 9000, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6315,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 6316, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.d", "Density [kg/m3|g/cm3]",\
 12161, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.gasSink.gas_inStream.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.h", "Specific enthalpy [J/kg]",\
 12162, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.s", "Specific entropy [J/(kg.K)]",\
 12163, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.T", "Temperature [K;degC]", 12164,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.xi[1]", "Mass fraction [1]",\
 12165, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.x[1]", "Mole fraction [1]", 12166,\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.M", "Average molar mass [kg/mol]",\
 12167, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 12168, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 12169, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.beta", "Isobaric thermal expansion coefficient [1/K]",\
 12170, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.kappa", "Isothermal compressibility [1/Pa]",\
 12171, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.w", "Speed of sound [m/s]", 12172,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.drhodh_pxi", \
"Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12173, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.drhodp_hxi", \
"Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12174, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.drhodxi_ph[1]", \
"Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12175, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.p_i[1]", "Partial pressure [Pa|bar]",\
 12176, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.p_i[2]", "Partial pressure [Pa|bar]",\
 12177, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 12178, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.phi", "Relative humidity", 12179,\
 0.0, -1.0,100.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 12180, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.xi_s", "Saturation mass fraction of condensing component [1]",\
 12181, 0.0, -1.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.delta_hv", "Specific enthalpy of vaporation of condensing component [J/kg]",\
 12182, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.delta_hd", "Specific enthalpy of desublimation of condensing component [J/kg]",\
 12183, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 12184, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 12185, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.M_i[1]", "Molar mass of component i [kg/mol]",\
 9001, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.M_i[2]", "Molar mass of component i [kg/mol]",\
 9002, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.humRatio", "Content of condensing component aka humidity ratio",\
 12186, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.humRatio_s", \
"Saturation content of condensing component aka saturation humidity ratio", 12187,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 12188, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.transp.Pr", "Prandtl number [1]",\
 6317, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 6318, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.transp.eta", \
"Dynamic viscosity [Pa.s]", 6319, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.transp.sigma", \
"Surface tension [N/m]", 6320, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.gas_inStream.computeFlags", \
"[:#(type=Integer)]", 9003, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.gasSink.use_temperatureInput", "= true, if T defined by input [:#(type=Boolean)]",\
 6321, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSink.TFixed", "Fixed value for temperature [K;degC]",\
 9004, 288.15, 0.0,1.7976931348623157E+308,300.0,0,513)
DeclareVariable("heatPumpCycle.gasSink.use_specificEnthalpyInput", \
"= true if h defined by input [:#(type=Boolean)]", 6322, false, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.gasSink.hFixed", "Fixed value for h [J/kg]", 618,\
 350000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.gasSink.use_relativeHumidityInput", \
"= true if phi defined by input [:#(type=Boolean)]", 6323, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSink.phiFixed", "Fixed value for gas relative humidity (0%-100%)",\
 9005, 0.0, 0.0,100.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSink.use_mixingRatioInput", "= true if xi defined by input [:#(type=Boolean)]",\
 6324, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSink.mixingRatioFixed[1]", "Fixed array for mass fraction of gas components e.g. {2, 10, 0.3}",\
 6325, 0.0001, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSink.mixingRatioFixed[2]", "Fixed array for mass fraction of gas components e.g. {2, 10, 0.3}",\
 6326, 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSink.use_molarMixingRatioInput", \
"= true if x defined by input [:#(type=Boolean)]", 6327, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSink.molarMixingRatioFixed[1]", \
"Fixed array for mole fraction of gas components e.g. {2, 10, 0.3}", 9006, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSink.molarMixingRatioFixed[2]", \
"Fixed array for mole fraction of gas components e.g. {2, 10, 0.3}", 9007, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSink.fractionSum", "", 6328, 1.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.gasSink.M_dry_i[1]", "Molar mass of component i [kg/mol]",\
 9008, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.defaultDryMixingRatio[1]", \
"Default dry mixing ratio [1]", 9009, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.defaultMolarMixingRatio[1]", \
"Default molar mixing ratio [1]", 9010, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.defaultMolarMixingRatio[2]", \
"Default molar mixing ratio [1]", 9011, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.defaultDryMolarMixingRatio[1]", \
"Default dry molar mixing ratio [1]", 9012, 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.correctSizeMassMixingRatio", \
"[:#(type=Boolean)]", 6329, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSink.correctSizeDryMassMixingRatio", \
"[:#(type=Boolean)]", 6330, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSink.correctSizeMolarMixingRatio", \
"[:#(type=Boolean)]", 6331, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.gasSink.correctSizeDryMolarMixingRatio", \
"[:#(type=Boolean)]", 6332, false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.gasSink.m_flow", "Mass flow rate [kg/s]", \
"heatPumpCycle.evaporator.portB_gas.m_flow", -1, 5, 11983, 1024)
DeclareVariable("heatPumpCycle.gasSink.d", "Density [kg/m3|g/cm3]", 9013, 0.0, \
0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.gasSink.port.h_outflow", 1, 5, 8939, 1024)
DeclareAlias2("heatPumpCycle.gasSink.p", "Pressure [Pa|bar]", "heatPumpCycle.gasSink.p_in_.k", 1,\
 5, 9019, 1024)
DeclareAlias2("heatPumpCycle.gasSink.T", "Temperature [K;degC]", \
"heatPumpCycle.gasSink.T_in_.k", 1, 5, 9014, 1024)
DeclareAlias2("heatPumpCycle.gasSink.xi[1]", "Mass fraction [1]", \
"heatPumpCycle.gasSink.port.xi_outflow[1]", 1, 5, 8940, 1024)
DeclareVariable("heatPumpCycle.gasSink.T_in_.k", "Constant output value", 9014, 1,\
 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.T_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSink.T_in_.k", 1, 5, 9014, 1024)
DeclareVariable("heatPumpCycle.gasSink.h_in_.k", "Constant output value", 9015, 1,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.h_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSink.h_in_.k", 1, 5, 9015, 1024)
DeclareVariable("heatPumpCycle.gasSink.phi_in_.k", "Constant output value", 9016,\
 1, -1.0,100.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.phi_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSink.phi_in_.k", 1, 5, 9016, 1024)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6333, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6334,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6335, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6336,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6337,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6338, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6339, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.xi_default[1]", \
"Default mass fractions", 6340, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6341, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.gasSink.getInputs.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6342, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.gasSink.getInputs.T_in", "Prescribed boundary temperature",\
 "heatPumpCycle.gasSink.T_in_.k", 1, 5, 9014, 1024)
DeclareAlias2("heatPumpCycle.gasSink.getInputs.m_flow_in", "Prescribed boundary mass flow rate",\
 "heatPumpCycle.gasSink.m_flow_in_.k", 1, 5, 9020, 1024)
DeclareAlias2("heatPumpCycle.gasSink.getInputs.V_flow_in", "Prescribed boundary volume flow rate",\
 "heatPumpCycle.gasSink.V_flow_in_.k", 1, 5, 9021, 1024)
DeclareAlias2("heatPumpCycle.gasSink.getInputs.p_in", "Prescribed boundary pressure",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareAlias2("heatPumpCycle.gasSink.getInputs.h_in", "Prescribed boundary specific enthalpy",\
 "heatPumpCycle.gasSink.h_in_.k", 1, 5, 9015, 1024)
DeclareAlias2("heatPumpCycle.gasSink.getInputs.phi_in", "Prescribed boundary relative humidity",\
 "heatPumpCycle.gasSink.phi_in_.k", 1, 5, 9016, 1024)
DeclareVariable("heatPumpCycle.gasSink.getInputs.mixingRatio_in[1]", \
"Prescribed boundary mass fraction of gas component", 6343, 0.0001, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.gasSink.getInputs.mixingRatio_in[2]", \
"Prescribed boundary mass fraction of gas component", 6344, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.getInputs.molarMixingRatio_in[1]", \
"Prescribed boundary mole fraction of gas component", 6345, 0.0001, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.gasSink.getInputs.molarMixingRatio_in[2]", \
"Prescribed boundary mole fraction of gas component", 6346, 1.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.summary.p_gas", "Pressure at port [Pa|bar]",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 0)
DeclareVariable("heatPumpCycle.gasSink.summary.T_gas", "Temperature at port [K;degC]",\
 12189, 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareAlias2("heatPumpCycle.gasSink.summary.T_outflow_gas", "Outflowing temperature [K;degC]",\
 "heatPumpCycle.gasSink.T_in_.k", 1, 5, 9014, 0)
DeclareVariable("heatPumpCycle.gasSink.summary.h_gas", "Specific enthalpy at port [J/kg]",\
 12190, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.gasSink.summary.phi_gas", "Relative humidity at port",\
 12191, 0.0, 0.0,100.0,0.0,0,512)
DeclareVariable("heatPumpCycle.gasSink.summary.xi_gas[1]", "Mass fraction of independent gas components at port [1]",\
 12192, 0.0, 0.0,1.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.gasSink.summary.m_flow_gas", "Mass flow rate at port [kg/s]",\
 "heatPumpCycle.evaporator.portB_gas.m_flow", -1, 5, 11983, 0)
DeclareVariable("heatPumpCycle.gasSink.summary.V_flow_gas", "Volume flow rate at port [m3/s]",\
 12193, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.gasSink.summary.nc_gas", "Number of gas components [:#(type=Integer)]",\
 6347, 2, 0.0,0.0,0.0,0,517)
DeclareVariable("heatPumpCycle.gasSink.use_pressureInput", "= true, if p defined by input [:#(type=Boolean)]",\
 6348, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.gasSink.pFixed", "Fixed value for p [Pa|bar]", 9017,\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSink.use_massFlowRateInput", "= true, if m_flow defined by input [:#(type=Boolean)]",\
 6349, false, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.gasSink.m_flowFixed", "Fixed value for m_flow [kg/s]",\
 619, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.gasSink.use_volumeFlowRateInput", \
"= true, if V_flow defined by input [:#(type=Boolean)]", 6350, false, 0.0,0.0,\
0.0,0,515)
DeclareVariable("heatPumpCycle.gasSink.V_flowFixed", "Fixed value for V_flow [m3/s]",\
 9018, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.gasSink.p_in_.k", "Constant output value", 9019, 1,\
 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.p_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareVariable("heatPumpCycle.gasSink.m_flow_in_.k", "Constant output value", 9020,\
 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.m_flow_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSink.m_flow_in_.k", 1, 5, 9020, 1024)
DeclareVariable("heatPumpCycle.gasSink.V_flow_in_.k", "Constant output value", 9021,\
 1, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.gasSink.V_flow_in_.y", "Connector of Real output signal",\
 "heatPumpCycle.gasSink.V_flow_in_.k", 1, 5, 9021, 1024)
DeclareVariable("heatPumpCycle.gasSink.mixingRatio_in_[1].k", "Constant output value",\
 6351, 0.0001, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.mixingRatio_in_[1].y", "Connector of Real output signal",\
 6352, 0.0001, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.mixingRatio_in_[2].k", "Constant output value",\
 6353, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.mixingRatio_in_[2].y", "Connector of Real output signal",\
 6354, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.molarMixingRatio_in_[1].k", \
"Constant output value", 6355, 0.0001, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.molarMixingRatio_in_[1].y", \
"Connector of Real output signal", 6356, 0.0001, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.molarMixingRatio_in_[2].k", \
"Constant output value", 6357, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.gasSink.molarMixingRatio_in_[2].y", \
"Connector of Real output signal", 6358, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6359, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6360,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6361, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6362,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6363,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6364, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6365, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.xi_default[1]",\
 "Default mass fractions", 6366, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6367, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6368, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6369, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6370,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6371, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6372,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6373,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6374, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6375, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.xi_default[1]",\
 "Default mass fractions", 6376, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6377, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6378, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.sensor_T_degC_ambientAirOut.port.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 516)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.m_flow", \
"Mass flow rate [kg/s]", 6379, 0.0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 6380, 0.0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.port.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", 6381, \
0.0, 0.0,1.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.sensorValue", \
"Sensor value [degC]", 12194, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.sensorValueSI", \
"Sensor value in SI unit [K]", 12195, 288.15, 0.0,1.7976931348623157E+308,300.0,\
0,512)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.offset", "", 6382, \
-273.15, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.factor", "", 6383, \
1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.useTimeConstant", \
"If true, time constant tau is used [:#(type=Boolean)]", 6384, false, 0.0,0.0,\
0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirOut.tau", \
"Time constant for delay time of the sensor value [s]", 620, 1, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirOut.useSteadyStateInitialization",\
 "If true, steady state initialization is used [:#(type=Boolean)]", 621, false, \
0.0,0.0,0.0,0,1586)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirOut.displaySignificantDigits",\
 "Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 622, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.visualizeLimitViolation",\
 "If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 6385, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirOut.lowerLimit", \
"Lower limit [Sensor unit] []", 623, 0, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirOut.upperLimit", \
"Upper limit [Sensor unit] []", 624, 1, 0.0,0.0,0.0,0,1584)
DeclareAlias2("heatPumpCycle.sensor_T_degC_ambientAirOut.sensorValue_", "", \
"heatPumpCycle.sensor_T_degC_ambientAirOut.sensorValueSI", 1, 5, 12195, 1024)
DeclareParameter("heatPumpCycle.sensor_T_degC_ambientAirOut.initialSensorValue",\
 "Initial value [Sensor unit] []", 625, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6386, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6387,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6388, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6389,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6390,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6391, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6392, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.xi_default[1]",\
 "Default mass fractions", 6393, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6394, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6395, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.gasPointer.id", \
"[:#(type=Integer)]", 9022, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6396,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 6397, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.d", \
"Density [kg/m3|g/cm3]", 12196, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.p", \
"Pressure [Pa|bar]", "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.h", \
"Specific enthalpy [J/kg]", 12197, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.s", \
"Specific entropy [J/(kg.K)]", 12198, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.T", \
"Temperature [K;degC]", "heatPumpCycle.sensor_T_degC_ambientAirOut.sensorValueSI", 1,\
 5, 12195, 1024)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.xi[1]", \
"Mass fraction [1]", 12199, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.x[1]", \
"Mole fraction [1]", 12200, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.M", \
"Average molar mass [kg/mol]", 12201, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 12202, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.cv", \
"Specific isochoric heat capacity cv [J/(kg.K)]", 12203, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.beta", \
"Isobaric thermal expansion coefficient [1/K]", 12204, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.kappa", \
"Isothermal compressibility [1/Pa]", 12205, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.w", \
"Speed of sound [m/s]", 12206, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.drhodh_pxi", \
"Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12207, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.drhodp_hxi", \
"Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12208, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.drhodxi_ph[1]", \
"Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12209, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.p_i[1]", \
"Partial pressure [Pa|bar]", 12210, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.p_i[2]", \
"Partial pressure [Pa|bar]", 12211, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.xi_gas", \
"Mass fraction of gasoues condensing component [1]", 12212, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.phi", \
"Relative humidity", 12213, 0.0, -1.0,100.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.p_s", \
"Saturation partial pressure of condensing component [Pa|bar]", 12214, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.xi_s", \
"Saturation mass fraction of condensing component [1]", 12215, 0.0, -1.0,1.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.delta_hv", \
"Specific enthalpy of vaporation of condensing component [J/kg]", 12216, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.delta_hd", \
"Specific enthalpy of desublimation of condensing component [J/kg]", 12217, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.h_i[1]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12218, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.h_i[2]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12219, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.M_i[1]", \
"Molar mass of component i [kg/mol]", 9023, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.M_i[2]", \
"Molar mass of component i [kg/mol]", 9024, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.humRatio", \
"Content of condensing component aka humidity ratio", 12220, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.humRatio_s", \
"Saturation content of condensing component aka saturation humidity ratio", 12221,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.h1px", \
"Enthalpy H divided by the mass of components that cannot condense [J/kg]", 12222,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.transp.Pr", \
"Prandtl number [1]", 6398, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 6399, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.transp.eta", \
"Dynamic viscosity [Pa.s]", 6400, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.transp.sigma", \
"Surface tension [N/m]", 6401, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.gas.computeFlags", \
"[:#(type=Integer)]", 9025, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.unit.factor", "", 6402,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_T_degC_ambientAirOut.unit.offset", "", 6403,\
 -273.15, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6404, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6405,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6406, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6407,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6408,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6409, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6410, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.xi_default[1]", \
"Default mass fractions", 6411, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6412, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6413, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6414, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6415,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6416, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6417,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6418,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6419, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6420, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.xi_default[1]",\
 "Default mass fractions", 6421, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6422, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6423, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.portA.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 516)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.portA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.portB_gas.m_flow", -1, 5, 11983,\
 644)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portA.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 9026, 0.0, 0.0,0.0,0.0,0,1545)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.portA.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", 1, 5, 9035, 516)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6424, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6425,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6426, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6427,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6428,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6429, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6430, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.xi_default[1]",\
 "Default mass fractions", 6431, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6432, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6433, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.portB.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 516)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.portB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle.evaporator.portB_gas.m_flow", 1, 5, 11983,\
 644)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.portB.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 12223, 0.0, 0.0,0.0,0.0,0,1544)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.portB.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", \
"heatPumpCycle.evaporator.portB_gas.xi_outflow[1]", 1, 5, 11985, 516)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.sensorValue", \
"Sensor value [m3/s]", 12224, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.sensorValueSI", \
"Sensor value in SI unit [m3/s]", "heatPumpCycle.sensor_V_flow_ambientAir.sensorValue", 1,\
 5, 12224, 0)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.offset", "", 6434, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.factor", "", 6435, 1.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.useTimeConstant", \
"If true, time constant tau is used [:#(type=Boolean)]", 6436, false, 0.0,0.0,\
0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_V_flow_ambientAir.tau", "Time constant for delay time of the sensor value [s]",\
 626, 1, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_V_flow_ambientAir.useSteadyStateInitialization",\
 "If true, steady state initialization is used [:#(type=Boolean)]", 627, false, \
0.0,0.0,0.0,0,1586)
DeclareParameter("heatPumpCycle.sensor_V_flow_ambientAir.displaySignificantDigits",\
 "Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 628, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.visualizeLimitViolation",\
 "If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 6437, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_V_flow_ambientAir.lowerLimit", \
"Lower limit [Sensor unit] []", 629, 0, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_V_flow_ambientAir.upperLimit", \
"Upper limit [Sensor unit] []", 630, 1, 0.0,0.0,0.0,0,1584)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.sensorValue_", "", \
"heatPumpCycle.sensor_V_flow_ambientAir.sensorValue", 1, 5, 12224, 1024)
DeclareParameter("heatPumpCycle.sensor_V_flow_ambientAir.initialSensorValue", \
"Initial value [Sensor unit] []", 631, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6438, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6439,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6440, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6441,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6442,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6443, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6444, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.xi_default[1]",\
 "Default mass fractions", 6445, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6446, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6447, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.gasPointer.id", \
"[:#(type=Integer)]", 9027, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6448,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 6449, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.d", "Density [kg/m3|g/cm3]",\
 12225, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_V_flow_ambientAir.gas.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.h", "Specific enthalpy [J/kg]",\
 12226, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.s", "Specific entropy [J/(kg.K)]",\
 12227, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.T", "Temperature [K;degC]",\
 12228, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.xi[1]", \
"Mass fraction [1]", 12229, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.x[1]", \
"Mole fraction [1]", 12230, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.M", "Average molar mass [kg/mol]",\
 12231, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 12232, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.cv", \
"Specific isochoric heat capacity cv [J/(kg.K)]", 12233, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.beta", \
"Isobaric thermal expansion coefficient [1/K]", 12234, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.kappa", \
"Isothermal compressibility [1/Pa]", 12235, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.w", "Speed of sound [m/s]",\
 12236, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.drhodh_pxi", \
"Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12237, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.drhodp_hxi", \
"Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12238, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.drhodxi_ph[1]", \
"Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12239, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.p_i[1]", \
"Partial pressure [Pa|bar]", 12240, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.p_i[2]", \
"Partial pressure [Pa|bar]", 12241, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.xi_gas", \
"Mass fraction of gasoues condensing component [1]", 12242, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.phi", \
"Relative humidity", 12243, 0.0, -1.0,100.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.p_s", \
"Saturation partial pressure of condensing component [Pa|bar]", 12244, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.xi_s", \
"Saturation mass fraction of condensing component [1]", 12245, 0.0, -1.0,1.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.delta_hv", \
"Specific enthalpy of vaporation of condensing component [J/kg]", 12246, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.delta_hd", \
"Specific enthalpy of desublimation of condensing component [J/kg]", 12247, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.h_i[1]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12248, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.h_i[2]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12249, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.M_i[1]", \
"Molar mass of component i [kg/mol]", 9028, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.M_i[2]", \
"Molar mass of component i [kg/mol]", 9029, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.humRatio", \
"Content of condensing component aka humidity ratio", 12250, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.humRatio_s", \
"Saturation content of condensing component aka saturation humidity ratio", 12251,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.h1px", \
"Enthalpy H divided by the mass of components that cannot condense [J/kg]", 12252,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.transp.Pr", \
"Prandtl number [1]", 6450, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 6451, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.transp.eta", \
"Dynamic viscosity [Pa.s]", 6452, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.transp.sigma", \
"Surface tension [N/m]", 6453, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.gas.computeFlags", \
"[:#(type=Integer)]", 9030, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.unit.factor", "", 6454, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_V_flow_ambientAir.unit.offset", "", 6455, 0,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6456, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6457,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6458, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6459,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6460,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6461, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6462, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.xi_default[1]", \
"Default mass fractions", 6463, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6464, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6465, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6466, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6467,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6468, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6469,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6470,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6471, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6472, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.xi_default[1]",\
 "Default mass fractions", 6473, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6474, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6475, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirOut.port.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 516)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.m_flow", \
"Mass flow rate [kg/s]", 6476, 0.0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 6477, 0.0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.port.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", 6478, \
0.0, 0.0,1.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.sensorValue", \
"Sensor value", 12253, 0.0, -1.0,100.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirOut.sensorValueSI", \
"Sensor value in SI unit", "heatPumpCycle.sensor_phi_ambientAirOut.sensorValue", 1,\
 5, 12253, 0)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.offset", "", 6479, 0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.factor", "", 6480, 1, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.useTimeConstant", \
"If true, time constant tau is used [:#(type=Boolean)]", 6481, false, 0.0,0.0,\
0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirOut.tau", "Time constant for delay time of the sensor value [s]",\
 632, 1, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirOut.useSteadyStateInitialization",\
 "If true, steady state initialization is used [:#(type=Boolean)]", 633, false, \
0.0,0.0,0.0,0,1586)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirOut.displaySignificantDigits",\
 "Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 634, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.visualizeLimitViolation",\
 "If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 6482, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirOut.lowerLimit", \
"Lower limit [Sensor unit] []", 635, 0, 0.0,0.0,0.0,0,1584)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirOut.upperLimit", \
"Upper limit [Sensor unit] []", 636, 1, 0.0,0.0,0.0,0,1584)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirOut.sensorValue_", "", \
"heatPumpCycle.sensor_phi_ambientAirOut.sensorValue", 1, 5, 12253, 1024)
DeclareParameter("heatPumpCycle.sensor_phi_ambientAirOut.initialSensorValue", \
"Initial value", 637, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6483, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6484,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 6485, 2, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6486,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6487,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6488, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6489, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.xi_default[1]",\
 "Default mass fractions", 6490, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.condensingIndex",\
 "Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6491, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasType.ID", \
"ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6492, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.gasPointer.id", \
"[:#(type=Integer)]", 9031, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.stateSelectPreferForInputs",\
 "=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6493,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 6494, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.d", "Density [kg/m3|g/cm3]",\
 12254, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirOut.gas.p", "Pressure [Pa|bar]",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.h", "Specific enthalpy [J/kg]",\
 12255, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.s", "Specific entropy [J/(kg.K)]",\
 12256, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.T", "Temperature [K;degC]",\
 12257, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.xi[1]", \
"Mass fraction [1]", 12258, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.x[1]", \
"Mole fraction [1]", 12259, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.M", "Average molar mass [kg/mol]",\
 12260, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.cp", \
"Specific isobaric heat capacity cp [J/(kg.K)]", 12261, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.cv", \
"Specific isochoric heat capacity cv [J/(kg.K)]", 12262, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.beta", \
"Isobaric thermal expansion coefficient [1/K]", 12263, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.kappa", \
"Isothermal compressibility [1/Pa]", 12264, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.w", "Speed of sound [m/s]",\
 12265, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.drhodh_pxi", \
"Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12266, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.drhodp_hxi", \
"Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12267, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.drhodxi_ph[1]", \
"Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12268, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.p_i[1]", \
"Partial pressure [Pa|bar]", 12269, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.p_i[2]", \
"Partial pressure [Pa|bar]", 12270, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.xi_gas", \
"Mass fraction of gasoues condensing component [1]", 12271, 0.0, 0.0,1.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.sensor_phi_ambientAirOut.gas.phi", "Relative humidity",\
 "heatPumpCycle.sensor_phi_ambientAirOut.sensorValue", 1, 5, 12253, 1024)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.p_s", \
"Saturation partial pressure of condensing component [Pa|bar]", 12272, 0.0, -1.0,\
1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.xi_s", \
"Saturation mass fraction of condensing component [1]", 12273, 0.0, -1.0,1.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.delta_hv", \
"Specific enthalpy of vaporation of condensing component [J/kg]", 12274, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.delta_hd", \
"Specific enthalpy of desublimation of condensing component [J/kg]", 12275, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.h_i[1]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12276, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.h_i[2]", \
"Specific enthalpy of pure ideal gas component [J/kg]", 12277, 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.M_i[1]", \
"Molar mass of component i [kg/mol]", 9032, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.M_i[2]", \
"Molar mass of component i [kg/mol]", 9033, 0.0, 0.0,1.7976931348623157E+308,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.humRatio", \
"Content of condensing component aka humidity ratio", 12278, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.humRatio_s", \
"Saturation content of condensing component aka saturation humidity ratio", 12279,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.h1px", \
"Enthalpy H divided by the mass of components that cannot condense [J/kg]", 12280,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.transp.Pr", \
"Prandtl number [1]", 6495, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.transp.lambda", \
"Thermal conductivity [W/(m.K)]", 6496, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.transp.eta", \
"Dynamic viscosity [Pa.s]", 6497, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.transp.sigma", \
"Surface tension [N/m]", 6498, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.sensor_phi_ambientAirOut.gas.computeFlags", \
"[:#(type=Integer)]", 9034, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6499, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6500,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6501, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6502,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6503,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6504, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6505, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.xi_default[1]", \
"Default mass fractions", 6506, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6507, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6508, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6509, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6510,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6511, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6512,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6513,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6514, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6515, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.xi_default[1]", \
"Default mass fractions", 6516, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6517, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6518, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.fan2ndOrder.portA.p", "Pressure [Pa|bar]", \
"heatPumpCycle.evaporator.portB_gas.p", 1, 5, 11982, 4)
DeclareAlias2("heatPumpCycle.fan2ndOrder.portA.m_flow", "Mass flow rate [kg/s]",\
 "heatPumpCycle.evaporator.portB_gas.m_flow", -1, 5, 11983, 132)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 12281, 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("heatPumpCycle.fan2ndOrder.portA.xi_outflow[1]", \
"Independent mixture mass fractions m_i/m in the connection point [1]", 9035, \
0.0, 0.0,1.0,0.0,0,521)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6519, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6520,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6521, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6522,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6523,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 6524, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.defaultMixingRatio[2]",\
 "Default composition for models in Modelica (={1} for pure components)", 6525, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.xi_default[1]", \
"Default mass fractions", 6526, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6527, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.portB.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6528, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.fan2ndOrder.portB.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 4)
DeclareAlias2("heatPumpCycle.fan2ndOrder.portB.m_flow", "Mass flow rate [kg/s]",\
 "heatPumpCycle.evaporator.portB_gas.m_flow", 1, 5, 11983, 132)
DeclareAlias2("heatPumpCycle.fan2ndOrder.portB.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "heatPumpCycle.sensor_V_flow_ambientAir.portB.h_outflow", 1, 5, 12223, 4)
DeclareAlias2("heatPumpCycle.fan2ndOrder.portB.xi_outflow[1]", "Independent mixture mass fractions m_i/m in the connection point [1]",\
 "heatPumpCycle.evaporator.portB_gas.xi_outflow[1]", 1, 5, 11985, 4)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6529, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6530,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6531, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6532,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6533,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6534, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6535, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.xi_default[1]", \
"Default mass fractions", 6536, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6537, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6538, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.gasPointer.id", "[:#(type=Integer)]",\
 9036, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.stateSelectPreferForInputs", \
"=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6539,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 6540, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.fan2ndOrder.gas.d", "Density [kg/m3|g/cm3]", \
"heatPumpCycle.fan2ndOrder.d_gas", 1, 5, 12315, 1024)
DeclareAlias2("heatPumpCycle.fan2ndOrder.gas.p", "Pressure [Pa|bar]", \
"heatPumpCycle.evaporator.portB_gas.p", 1, 5, 11982, 1024)
DeclareAlias2("heatPumpCycle.fan2ndOrder.gas.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.evaporator.portB_gas.h_outflow", 1, 5, 11984, 1024)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.s", "Specific entropy [J/(kg.K)]",\
 12282, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.T", "Temperature [K;degC]", 12283,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.xi[1]", "Mass fraction [1]", 12284,\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.x[1]", "Mole fraction [1]", 12285,\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.M", "Average molar mass [kg/mol]",\
 12286, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 12287, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 12288, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.beta", "Isobaric thermal expansion coefficient [1/K]",\
 12289, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.kappa", "Isothermal compressibility [1/Pa]",\
 12290, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.w", "Speed of sound [m/s]", 12291,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.drhodh_pxi", "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12292, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.drhodp_hxi", "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12293, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.drhodxi_ph[1]", "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12294, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.p_i[1]", "Partial pressure [Pa|bar]",\
 12295, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.p_i[2]", "Partial pressure [Pa|bar]",\
 12296, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 12297, 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.phi", "Relative humidity", 12298,\
 0.0, -1.0,100.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 12299, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.xi_s", "Saturation mass fraction of condensing component [1]",\
 12300, 0.0, -1.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.delta_hv", "Specific enthalpy of vaporation of condensing component [J/kg]",\
 12301, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.delta_hd", "Specific enthalpy of desublimation of condensing component [J/kg]",\
 12302, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 12303, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 12304, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.M_i[1]", "Molar mass of component i [kg/mol]",\
 9037, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.M_i[2]", "Molar mass of component i [kg/mol]",\
 9038, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.humRatio", "Content of condensing component aka humidity ratio",\
 12305, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.humRatio_s", "Saturation content of condensing component aka saturation humidity ratio",\
 12306, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 12307, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.transp.Pr", "Prandtl number [1]",\
 6541, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6542, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.transp.eta", "Dynamic viscosity [Pa.s]",\
 6543, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.transp.sigma", "Surface tension [N/m]",\
 6544, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.gas.computeFlags", "[:#(type=Integer)]",\
 9039, 0, 0.0,0.0,0.0,0,2565)
DeclareParameter("heatPumpCycle.fan2ndOrder.m_flowStart", "Mass flow rate at start [kg/s]",\
 638, 0.001, 0.0,0.0,0.0,0,2608)
DeclareAlias2("heatPumpCycle.fan2ndOrder.p", "pressure used for gas property calculation [Pa|bar]",\
 "heatPumpCycle.evaporator.portB_gas.p", 1, 5, 11982, 1024)
DeclareVariable("heatPumpCycle.fan2ndOrder.dp", "pressure increase [Pa|bar]", 12308,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.fan2ndOrder.volumeFlowRate", "[m3/s]", 12309, 0.0,\
 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_hyd", "Hydraulic power [W]", 12310,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_shaft", "Shaft power [W]", 12311, \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("heatPumpCycle.fan2ndOrder.includeDefaultSummary", \
"Include summary record in model results [:#(type=Boolean)]", 6545, true, \
0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.fan2ndOrder.includeSummary", "Include summary record in model results [:#(type=Boolean)]",\
 6546, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.p_gas_A", "Pressure at port A [Pa|bar]",\
 "heatPumpCycle.evaporator.portB_gas.p", 1, 5, 11982, 0)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.p_gas_B", "Pressure at port B [Pa|bar]",\
 "heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 0)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.T_gas", "Temperature [K;degC]",\
 "heatPumpCycle.fan2ndOrder.gas.T", 1, 5, 12283, 0)
DeclareVariable("heatPumpCycle.fan2ndOrder.summary.T_degC_gas", "Temperature [degC;]",\
 12312, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.h_gas", "Specific enthalpy [J/kg]",\
 "heatPumpCycle.evaporator.portB_gas.h_outflow", 1, 5, 11984, 0)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.d_gas", "Density [kg/m3|g/cm3]",\
 "heatPumpCycle.fan2ndOrder.d_gas", 1, 5, 12315, 0)
DeclareVariable("heatPumpCycle.fan2ndOrder.summary.dp_gas", "Total pressure increase [Pa|bar]",\
 12313, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.m_flow_gas_A", "Mass flow rate at port A [kg/s]",\
 "heatPumpCycle.evaporator.portB_gas.m_flow", -1, 5, 11983, 0)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.m_flow_gas_B", "Mass flow rate at port B [kg/s]",\
 "heatPumpCycle.evaporator.portB_gas.m_flow", 1, 5, 11983, 0)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.V_flow_gas", "Volume flow rate [m3/s]",\
 "heatPumpCycle.fan2ndOrder.volumeFlowRate", 1, 5, 12309, 0)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.P_shaft", "Shaft Power [W]", \
"heatPumpCycle.fan2ndOrder.P_shaft", 1, 5, 12311, 0)
DeclareVariable("heatPumpCycle.fan2ndOrder.summary.P_loss", "Total loss power [W]",\
 6547, 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.eta", "Efficiency: P_hyd/P_shaft [1]",\
 "heatPumpCycle.fan2ndOrder.eta", 1, 5, 12314, 0)
DeclareAlias2("heatPumpCycle.fan2ndOrder.summary.Q_flow_loss", "Heat flow rate of fan losses to ambient [W]",\
 "heatPumpCycle.fan2ndOrder.Q_flow_loss", 1, 5, 12320, 0)
DeclareVariable("heatPumpCycle.fan2ndOrder.summary.speed", "Speed of fan [Hz]", 6548,\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.summary.speed_rpm", "Speed of fan in rpm [rev/min]",\
 6549, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.useMassFlowInductor", \
"If true: Mass flow rate is a differential state. [:#(type=Boolean)]", 6550, \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.fan2ndOrder.fixedInitialMassFlow", \
"If true, the initial mass flow rate is fixed [:#(type=Boolean)]", 6551, true, \
0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.fan2ndOrder.momentumFactor", "This factor describes the acceleration and deceleration of    the fluid mass in a hydraulic section. A/l [m^2/m]: crossSectionalArea divided by tube length.",\
 639, 0.05, 0.0,0.0,0.0,0,560)
DeclareParameter("heatPumpCycle.fan2ndOrder.m_flowInitial", "Initial mass flow rate for port A [kg/s]",\
 640, 0.01, 0.0,0.0,0.0,0,560)
DeclareAlias2("heatPumpCycle.fan2ndOrder.pInternalOutlet", "[Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareAlias2("heatPumpCycle.fan2ndOrder.m_flow", "[kg/s]", "heatPumpCycle.evaporator.portB_gas.m_flow", -1,\
 5, 11983, 1024)
DeclareAlias2("heatPumpCycle.fan2ndOrder.getInputsRotary.rotatoryFlange.phi", \
"Absolute rotation angle of flange [rad|deg]", "heatPumpCycle.rotatoryBoundary.rotatoryFlange.phi", 1,\
 1, 119, 1028)
DeclareVariable("heatPumpCycle.fan2ndOrder.getInputsRotary.rotatoryFlange.der(phi)",\
 "der(Absolute rotation angle of flange) [rad/s]", 6552, 0.0, 0.0,0.0,0.0,0,2569)
DeclareVariable("heatPumpCycle.fan2ndOrder.getInputsRotary.rotatoryFlange.tau", \
"Cut torque in the flange [N.m]", 6553, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_loss", "Overall power losses [W]", 6554,\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_loss_blade", "Power losses blade [W]",\
 6555, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_loss_impact", "Power losses impact [W]",\
 6556, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.n", "Speed [Hz]", 6557, 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.eta", "Overall fan efficiency [1]", 12314,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("heatPumpCycle.fan2ndOrder.w", "Angular velocity [rad/s]", 6558,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.a", "Angular acceleration [rad/s2]", 6559,\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.fluidTorque", "Fluid torque [N.m]", 6560,\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.d_gas", "Actual gas density in fan [kg/m3|g/cm3]",\
 12315, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.coef.dp_0", "", 9040, 0.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.coef.c1", "", 9041, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.coef.c2", "", 9042, 0.0, 0.0,0.0,0.0,\
0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.coef.V_flow_transition", "", 9043, \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.coef_affinity.dp_0", "", 12316, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.coef_affinity.c1", "", 12317, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.coef_affinity.c2", "", 12318, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.coef_affinity.V_flow_transition", "",\
 6561, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_loss0_affinity", "Power losses @ nominal volume flow rate following the third affinity law [W]",\
 6562, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.use_mechanicalPort", "= true, if mechanical port is used [:#(type=Boolean)]",\
 6563, true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.fan2ndOrder.steadyStateMomentum", \
"true, to avoid differentiation of angular speed [:#(type=Boolean)]", 6564, true,\
 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.fan2ndOrder.J", "Moment of inertia of the fan [kg.m2]",\
 641, 0.005, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.fan2ndOrder.nFixed", "Constant speed [Hz]", 9044,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.isenthalpicProcess", "= true, if h_out = h_in [:#(type=Boolean)]",\
 6565, false, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.fan2ndOrder.maxDeltaT", "Maximal possible temperature difference from portA to portB, when m_flow is almost zero. [K,K]",\
 642, 5, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.fan2ndOrder.dh_dhmax_transition", \
"Transition point in percentage of maximal possible enthalpy difference from portA to portB.",\
 6566, 0.9, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.dh", "Enthalpy difference from portA to portB. [J/kg]",\
 12319, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.fan2ndOrder.n_nominal", "Nominal value for fan speed [Hz]",\
 9045, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.dp_nominal", "Nominal value for pressure increase @ n_nominal [Pa|Pa]",\
 9046, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.V_flow_nominal", "Nominal value for volume flow rate @ n_nominal [m3/s]",\
 9047, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.V_flow0", "Volume flow rate @ dp = 0 and @ n_nomial [m3/s]",\
 9048, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.deltaV_flow", "Volume flow rate difference between V_flow0 and gradient line @ nominal point [m3/s]",\
 9049, 0.0, 0.0,1.7976931348623157E+308,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.T_nominal", "Nominal value for gas temperature [K;degC]",\
 6567, 298.15, 0.0,1.7976931348623157E+308,300.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.p_nominal", "Nominal value for gas pressure [Pa|bar]",\
 6568, 101300.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.mixingRatio_nominal[1]", \
"Nominal value for gas mixing ratio", 6569, 0.0001, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.mixingRatio_nominal[2]", \
"Nominal value for gas mixing ratio", 6570, 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.V_flow_maxPhyd", "Volume flow rate @ maximum nominal hydraulic power [m3/s]",\
 9050, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_hyd_max_nominal", "Maximum hydraulic power @ nominal conditions [W]",\
 9051, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_loss_nominal", "Power loss @ maximum nominal hydraulic power [W]",\
 9052, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.P_shaft_nominal", "Shaft power @ maximum nominal hydraulic power [W]",\
 9053, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.Q_flow_loss", "Heat flow rate of fan losses to ambient [W]",\
 12320, 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("heatPumpCycle.fan2ndOrder.eta_maxPhyd", "Fan efficiency @ maximum hydraulic power and nominal conditions => V_flow_maxPhyd [1]",\
 643, 0.3, 0.0,1.7976931348623157E+308,0.0,0,560)
DeclareParameter("heatPumpCycle.fan2ndOrder.bladeLossExponent", "Affects the blade loss: P_loss_blade = P_loss_nominal*(V_flow/V_flow_maxPhyd)^bladeLossExponent",\
 644, 2.3, 0.0,0.0,0.0,0,560)
DeclareParameter("heatPumpCycle.fan2ndOrder.impactLossCoefficient", \
"Affects the impact loss: P_loss_impact = P_loss_nominal*impactLossCoefficient*(1-V_flow/V_flow_maxPhyd)^2",\
 645, 0.4, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.fan2ndOrder.d_nominal", "[kg/m3|g/cm3]", 9054, 1,\
 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.fan2ndOrder.dpInitial", "Initialization of pressure inrease [Pa|Pa]",\
 9055, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.V_flow_Start", "Start value for volume flow rate [m3/s]",\
 9056, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.fan2ndOrder.visualizeWarnings", "If true, warnings will be visualized in the diagram layer [:#(type=Boolean)]",\
 9057, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.fan2ndOrder.warningQ_flow_loss", "Limitation of dh causes heat flow into ambience",\
 12321, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.fan2ndOrder.simPortWarning.simConnector.warningsPort.warnings",\
 "Accumulated warnings", "heatPumpCycle.fan2ndOrder.warningQ_flow_loss", 1, 5, 12321,\
 132)
DeclareAlias2("heatPumpCycle.fan2ndOrder.simPortWarning.simConnector.warningsPort.warningsTotal",\
 "", "sim.warningsPort.warnings", -1, 5, 9078, 4)
DeclareAlias2("heatPumpCycle.fan2ndOrder.simPortWarning.warnings", "", \
"heatPumpCycle.fan2ndOrder.warningQ_flow_loss", 1, 5, 12321, 0)
DeclareAlias2("heatPumpCycle.fan2ndOrder.rotatoryFlange.phi", "Absolute rotation angle of flange [rad|deg]",\
 "heatPumpCycle.rotatoryBoundary.rotatoryFlange.phi", 1, 1, 119, 4)
DeclareVariable("heatPumpCycle.fan2ndOrder.rotatoryFlange.tau", "Cut torque in the flange [N.m]",\
 6571, 0.0, 0.0,0.0,0.0,0,777)
DeclareState("heatPumpCycle.rotatoryBoundary.rotatoryFlange.phi", \
"Absolute rotation angle of flange [rad|deg]", 119, 0.0, 0.0,0.0,1000000.0,0,552)
DeclareDerivative("heatPumpCycle.rotatoryBoundary.rotatoryFlange.der(phi)", \
"der(Absolute rotation angle of flange) [rad/s]", 119, 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("heatPumpCycle.rotatoryBoundary.rotatoryFlange.tau", \
"Cut torque in the flange [N.m]", 6572, 0.0, 0.0,0.0,0.0,0,777)
DeclareParameter("heatPumpCycle.rotatoryBoundary.phiInitial", "Initial value for rotatory flange angle [rad|deg]",\
 646, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.rotatoryBoundary.fixedPhiInitial", \
"if true, force usage of initial value phiInitial [:#(type=Boolean)]", 6573, \
true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.rotatoryBoundary.n", "Frequency (rps) [Hz]", 6574,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("heatPumpCycle.rotatoryBoundary.w", "Angular frequency [rad/s]", \
"heatPumpCycle.rotatoryBoundary.rotatoryFlange.der(phi)", 1, 6, 119, 1024)
DeclareVariable("heatPumpCycle.rotatoryBoundary.tau", "Torque [N.m]", 6575, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary.use_wInput", "true, if w is defined by input [:#(type=Boolean)]",\
 6576, false, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.rotatoryBoundary.wFixed", "Fixed Value for w (rad/s) [rad/s]",\
 647, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.rotatoryBoundary.use_nInput", "= true, if n is defined by input [:#(type=Boolean)]",\
 6577, true, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.rotatoryBoundary.nFixed", "Fixed Value for n (rps) [Hz]",\
 9058, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.rotatoryBoundary.use_tauInput", "= true, if torque is defined by input [:#(type=Boolean)]",\
 6578, false, 0.0,0.0,0.0,0,515)
DeclareParameter("heatPumpCycle.rotatoryBoundary.tauFixed", "Fixed Value for torque [N.m]",\
 648, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("heatPumpCycle.rotatoryBoundary.n_in", "Prescribed boundary n [Hz] []",\
 6579, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.rotatoryBoundary.getInputs.tau_in", \
"Prescribed boundary torque", 6580, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary.getInputs.n_in", \
"Prescribed boundary frequency", 6581, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary.getInputs.w_in", \
"Prescribed boundary angular frequency", 6582, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary.tau_in_", "", 6583, 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.rotatoryBoundary.w_in_", "", 6584, 0.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint5.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6585, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.statePoint5.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6586,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6587, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6588,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6589,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6590, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6591, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gasType.xi_default[1]", \
"Default mass fractions", 6592, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6593, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6594, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6595, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 6596,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6597, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6598,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6599,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6600, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6601, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.xi_default[1]", \
"Default mass fractions", 6602, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6603, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.port.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6604, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("heatPumpCycle.statePoint5.port.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 516)
DeclareVariable("heatPumpCycle.statePoint5.port.m_flow", "Mass flow rate [kg/s]",\
 6605, 0.0, 0.0,0.0,0.0,0,1801)
DeclareVariable("heatPumpCycle.statePoint5.port.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 6606, 0.0, 0.0,0.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.statePoint5.port.xi_outflow[1]", "Independent mixture mass fractions m_i/m in the connection point [1]",\
 6607, 0.0, 0.0,1.0,0.0,0,1545)
DeclareVariable("heatPumpCycle.statePoint5.extendedInformation", \
"deprecated [:#(type=Boolean)]", 6608, true, 0.0,0.0,0.0,0,1539)
DeclareParameter("heatPumpCycle.statePoint5.index", "Index for DaVE State Chart [:#(type=Integer)]",\
 649, 1, 0.0,0.0,0.0,0,564)
DeclareVariable("heatPumpCycle.statePoint5.h", "Specific enthalpy [J/kg]", 12322,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.statePoint5.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 0)
DeclareVariable("heatPumpCycle.statePoint5.xi[1]", "Gas mass fraction [1]", 12323,\
 0.0, 0.0,1.0,0.0,0,512)
DeclareAlias2("heatPumpCycle.statePoint5.xi_vapor", "Mass fraction of the vapor [1]",\
 "heatPumpCycle.statePoint5.xi[1]", 1, 5, 12323, 0)
DeclareVariable("heatPumpCycle.statePoint5.phi", "Relative humidity", 12324, 0.0,\
 -1.0,100.0,0.0,0,512)
DeclareVariable("heatPumpCycle.statePoint5.T", "Temperature [K;degC]", 12325, \
288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6609, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6610,\
 2, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6611, 2, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6612,\
 0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.mixingRatio_propertyCalculation[2]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6613,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6614, \
0.0001, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.defaultMixingRatio[2]", \
"Default composition for models in Modelica (={1} for pure components)", 6615, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.xi_default[1]", \
"Default mass fractions", 6616, 9.999000099990002E-05, 0.0,0.0,0.0,0,1537)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.condensingIndex", \
"Index of condensing component (=0, if no condensation is desired) [:#(type=Integer)]",\
 6617, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasType.ID", "ID is used to map the selected Gas to the sim.cumulatedGasMass array item [:#(type=Integer)]",\
 6618, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("heatPumpCycle.statePoint5.gas.gasPointer.id", "[:#(type=Integer)]",\
 9059, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("heatPumpCycle.statePoint5.gas.stateSelectPreferForInputs", \
"=true, StateSelect.prefer is set for input variables [:#(type=Boolean)]", 6619,\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.statePoint5.gas.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 6620, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("heatPumpCycle.statePoint5.gas.d", "Density [kg/m3|g/cm3]", 12326,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("heatPumpCycle.statePoint5.gas.p", "Pressure [Pa|bar]", \
"heatPumpCycle.gasSink.p_in_.k", 1, 5, 9019, 1024)
DeclareAlias2("heatPumpCycle.statePoint5.gas.h", "Specific enthalpy [J/kg]", \
"heatPumpCycle.statePoint5.h", 1, 5, 12322, 1024)
DeclareVariable("heatPumpCycle.statePoint5.gas.s", "Specific entropy [J/(kg.K)]",\
 12327, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.statePoint5.gas.T", "Temperature [K;degC]", \
"heatPumpCycle.statePoint5.T", 1, 5, 12325, 1024)
DeclareVariable("heatPumpCycle.statePoint5.gas.xi[1]", "Mass fraction [1]", 12328,\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.x[1]", "Mole fraction [1]", 12329,\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.M", "Average molar mass [kg/mol]",\
 12330, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 12331, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.cv", "Specific isochoric heat capacity cv [J/(kg.K)]",\
 12332, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.beta", "Isobaric thermal expansion coefficient [1/K]",\
 12333, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.kappa", "Isothermal compressibility [1/Pa]",\
 12334, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.w", "Speed of sound [m/s]", 12335,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.drhodh_pxi", "Derivative of density wrt specific enthalpy at constant pressure and mass fraction [kg.s2/m5]",\
 12336, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.drhodp_hxi", "Derivative of density wrt pressure at specific enthalpy and mass fraction [s2/m2]",\
 12337, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.drhodxi_ph[1]", "Derivative of density wrt mass fraction of water at constant pressure and specific enthalpy [kg/(m3)]",\
 12338, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.p_i[1]", "Partial pressure [Pa|bar]",\
 12339, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.p_i[2]", "Partial pressure [Pa|bar]",\
 12340, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.xi_gas", "Mass fraction of gasoues condensing component [1]",\
 12341, 0.0, 0.0,1.0,0.0,0,2560)
DeclareAlias2("heatPumpCycle.statePoint5.gas.phi", "Relative humidity", \
"heatPumpCycle.statePoint5.phi", 1, 5, 12324, 1024)
DeclareVariable("heatPumpCycle.statePoint5.gas.p_s", "Saturation partial pressure of condensing component [Pa|bar]",\
 12342, 0.0, -1.0,1.7976931348623157E+308,100000.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.xi_s", "Saturation mass fraction of condensing component [1]",\
 12343, 0.0, -1.0,1.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.delta_hv", "Specific enthalpy of vaporation of condensing component [J/kg]",\
 12344, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.delta_hd", "Specific enthalpy of desublimation of condensing component [J/kg]",\
 12345, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.h_i[1]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 12346, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.h_i[2]", "Specific enthalpy of pure ideal gas component [J/kg]",\
 12347, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.M_i[1]", "Molar mass of component i [kg/mol]",\
 9060, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint5.gas.M_i[2]", "Molar mass of component i [kg/mol]",\
 9061, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint5.gas.humRatio", "Content of condensing component aka humidity ratio",\
 12348, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.humRatio_s", "Saturation content of condensing component aka saturation humidity ratio",\
 12349, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.h1px", "Enthalpy H divided by the mass of components that cannot condense [J/kg]",\
 12350, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("heatPumpCycle.statePoint5.gas.transp.Pr", "Prandtl number [1]",\
 6621, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint5.gas.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6622, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint5.gas.transp.eta", "Dynamic viscosity [Pa.s]",\
 6623, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint5.gas.transp.sigma", "Surface tension [N/m]",\
 6624, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("heatPumpCycle.statePoint5.gas.computeFlags", "[:#(type=Integer)]",\
 9062, 0, 0.0,0.0,0.0,0,2565)
DeclareAlias2("heatPumpCycle.switch2.u1", "Connector of first Real input signal",\
 "heatPumpCycle.compressorController.y", 1, 5, 12037, 0)
DeclareVariable("heatPumpCycle.switch2.u2", "Connector of Boolean input signal [:#(type=Boolean)]",\
 6625, false, 0.0,0.0,0.0,0,515)
DeclareVariable("heatPumpCycle.switch2.u3", "Connector of second Real input signal",\
 6626, 0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.switch2.y", "Connector of Real output signal", 6627,\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("heatPumpCycle.CompressorDisable.y", "Value of Real output", 6628,\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("T_ambient.y", "Value of Real output", 6629, 263.15, 0.0,0.0,0.0,\
0,513)
DeclareVariable("Enable.y", "Value of Boolean output [:#(type=Boolean)]", 6630, \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("sensor_T.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6631, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("sensor_T.liquidType.nc_propertyCalculation", "Number of components for fluid property calculations [:#(type=Integer)]",\
 6632, 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("sensor_T.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6633, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 6634, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T.liquidType.defaultMixingRatio[1]", "Default composition for models in Modelica (={1} for pure components)",\
 6635, 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 6636, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T.port.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6637, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("sensor_T.port.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6638,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("sensor_T.port.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6639, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T.port.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 6640, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T.port.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6641, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T.port.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 6642, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("sensor_T.port.p", "Pressure [Pa|bar]", "boundary.port.p", 1, 5, 9079,\
 516)
DeclareVariable("sensor_T.port.m_flow", "Mass flow rate [kg/s]", 6643, 0.0, \
0.0,0.0,0.0,0,1801)
DeclareVariable("sensor_T.port.h_outflow", "Specific enthalpy [J/kg]", 6644, 0.0,\
 0.0,0.0,0.0,0,1545)
DeclareVariable("sensor_T.sensorValue", "Sensor value [degC]", 12351, 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sensor_T.sensorValueSI", "Sensor value in SI unit [K]", 12352, \
288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("sensor_T.offset", "", 6645, -273.15, 0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T.factor", "", 6646, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T.useTimeConstant", "If true, time constant tau is used [:#(type=Boolean)]",\
 6647, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("sensor_T.tau", "Time constant for delay time of the sensor value [s]",\
 650, 1, 0.0,0.0,0.0,0,1584)
DeclareParameter("sensor_T.useSteadyStateInitialization", "If true, steady state initialization is used [:#(type=Boolean)]",\
 651, false, 0.0,0.0,0.0,0,1586)
DeclareParameter("sensor_T.displaySignificantDigits", "Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 652, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("sensor_T.visualizeLimitViolation", "If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 6648, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("sensor_T.lowerLimit", "Lower limit [Sensor unit] []", 653, 0, \
0.0,0.0,0.0,0,1584)
DeclareParameter("sensor_T.upperLimit", "Upper limit [Sensor unit] []", 654, 1, \
0.0,0.0,0.0,0,1584)
DeclareAlias2("sensor_T.sensorValue_", "", "sensor_T.sensorValueSI", 1, 5, 12352,\
 1024)
DeclareParameter("sensor_T.initialSensorValue", "Initial value [Sensor unit] []",\
 655, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("sensor_T.liquid.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6649, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("sensor_T.liquid.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6650,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("sensor_T.liquid.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6651, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T.liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6652,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T.liquid.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6653, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T.liquid.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 6654, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T.liquid.liquidPointer.id", "[:#(type=Integer)]", 9063, 0,\
 0.0,0.0,0.0,0,2565)
DeclareVariable("sensor_T.liquid.computeTransportProperties", "=true, if transport properties are calculated [:#(type=Boolean)]",\
 6655, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("sensor_T.liquid.d", "Density [kg/m3|g/cm3]", 12353, 0.0, 0.0,\
1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("sensor_T.liquid.p", "Pressure [Pa|bar]", "boundary.port.p", 1, 5,\
 9079, 1024)
DeclareVariable("sensor_T.liquid.h", "Specific enthalpy [J/kg]", 12354, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("sensor_T.liquid.s", "Specific entropy [J/(kg.K)]", 12355, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("sensor_T.liquid.T", "Temperature [K;degC]", "sensor_T.sensorValueSI", 1,\
 5, 12352, 1024)
DeclareVariable("sensor_T.liquid.cp", "Specific heat capacity [J/(kg.K)]", 12356,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("sensor_T.liquid.beta", "Isobaric expansion coefficient [1/K]", 12357,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("sensor_T.liquid.transp.Pr", "Prandtl number [1]", 6656, -1.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T.liquid.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6657, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T.liquid.transp.eta", "Dynamic viscosity [Pa.s]", 6658, \
-1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("sensor_T.liquid.transp.sigma", "Surface tension [N/m]", 6659, \
-1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T.liquid.computeFlags", "[:#(type=Integer)]", 9064, 0, \
0.0,0.0,0.0,0,2565)
DeclareVariable("sensor_T.unit.factor", "", 6660, 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T.unit.offset", "", 6661, -273.15, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T1.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6662, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("sensor_T1.liquidType.nc_propertyCalculation", "Number of components for fluid property calculations [:#(type=Integer)]",\
 6663, 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("sensor_T1.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6664, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T1.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 6665, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T1.liquidType.defaultMixingRatio[1]", "Default composition for models in Modelica (={1} for pure components)",\
 6666, 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T1.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 6667, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T1.port.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6668, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("sensor_T1.port.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6669,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("sensor_T1.port.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6670, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T1.port.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 6671, 1,\
 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T1.port.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6672, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T1.port.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 6673, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("sensor_T1.port.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5,\
 6735, 516)
DeclareVariable("sensor_T1.port.m_flow", "Mass flow rate [kg/s]", 6674, 0.0, \
0.0,0.0,0.0,0,1801)
DeclareVariable("sensor_T1.port.h_outflow", "Specific enthalpy [J/kg]", 6675, \
0.0, 0.0,0.0,0.0,0,1545)
DeclareVariable("sensor_T1.sensorValue", "Sensor value [degC]", 12358, 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("sensor_T1.sensorValueSI", "Sensor value in SI unit [K]", 12359,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("sensor_T1.offset", "", 6676, -273.15, 0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T1.factor", "", 6677, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T1.useTimeConstant", "If true, time constant tau is used [:#(type=Boolean)]",\
 6678, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("sensor_T1.tau", "Time constant for delay time of the sensor value [s]",\
 656, 1, 0.0,0.0,0.0,0,1584)
DeclareParameter("sensor_T1.useSteadyStateInitialization", "If true, steady state initialization is used [:#(type=Boolean)]",\
 657, false, 0.0,0.0,0.0,0,1586)
DeclareParameter("sensor_T1.displaySignificantDigits", "Number of significant digits for the display of sensor value [:#(type=Integer)]",\
 658, 4, 0.0,0.0,0.0,0,1588)
DeclareVariable("sensor_T1.visualizeLimitViolation", "If true, the sensor value display is highlighted if a limit is violated [:#(type=Boolean)]",\
 6679, false, 0.0,0.0,0.0,0,1539)
DeclareParameter("sensor_T1.lowerLimit", "Lower limit [Sensor unit] []", 659, 0,\
 0.0,0.0,0.0,0,1584)
DeclareParameter("sensor_T1.upperLimit", "Upper limit [Sensor unit] []", 660, 1,\
 0.0,0.0,0.0,0,1584)
DeclareAlias2("sensor_T1.sensorValue_", "", "sensor_T1.sensorValueSI", 1, 5, 12359,\
 1024)
DeclareParameter("sensor_T1.initialSensorValue", "Initial value [Sensor unit] []",\
 661, 0, 0.0,0.0,0.0,0,1584)
DeclareVariable("sensor_T1.liquid.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 6680, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("sensor_T1.liquid.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 6681,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("sensor_T1.liquid.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 6682, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T1.liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 6683,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T1.liquid.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 6684, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T1.liquid.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 6685, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("sensor_T1.liquid.liquidPointer.id", "[:#(type=Integer)]", 9065,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("sensor_T1.liquid.computeTransportProperties", "=true, if transport properties are calculated [:#(type=Boolean)]",\
 6686, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("sensor_T1.liquid.d", "Density [kg/m3|g/cm3]", 12360, 0.0, 0.0,\
1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("sensor_T1.liquid.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1,\
 5, 6735, 1024)
DeclareVariable("sensor_T1.liquid.h", "Specific enthalpy [J/kg]", 12361, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("sensor_T1.liquid.s", "Specific entropy [J/(kg.K)]", 12362, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareAlias2("sensor_T1.liquid.T", "Temperature [K;degC]", "sensor_T1.sensorValueSI", 1,\
 5, 12359, 1024)
DeclareVariable("sensor_T1.liquid.cp", "Specific heat capacity [J/(kg.K)]", 12363,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("sensor_T1.liquid.beta", "Isobaric expansion coefficient [1/K]",\
 12364, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("sensor_T1.liquid.transp.Pr", "Prandtl number [1]", 6687, -1.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T1.liquid.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 6688, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T1.liquid.transp.eta", "Dynamic viscosity [Pa.s]", 6689,\
 -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("sensor_T1.liquid.transp.sigma", "Surface tension [N/m]", 6690, \
-1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("sensor_T1.liquid.computeFlags", "[:#(type=Integer)]", 9066, 0, \
0.0,0.0,0.0,0,2565)
DeclareVariable("sensor_T1.unit.factor", "", 6691, 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("sensor_T1.unit.offset", "", 6692, -273.15, 0.0,0.0,0.0,0,1537)
EndNonAlias(12)
PreNonAliasNew(13)
