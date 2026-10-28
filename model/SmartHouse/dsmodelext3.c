#if !defined(FMU_SOURCE_SINGLE_UNIT) && !defined(BUILDFMU) && !defined(DYMOSIM) && !defined(STANDALONE_DYMOSIM) && !defined(Matlab6)
#define DYMOSIM
#if defined(GODESS2) && !defined(GODESS)
#define GODESS
#endif
#endif
\
#include <moutil.h>
PreNonAliasDef(16)
PreNonAliasDef(17)
PreNonAliasDef(18)
PreNonAliasDef(19)
PreNonAliasDef(20)
StartNonAlias(15)
DeclareVariable("hotWaterTank1.tankCell[9].buoyancyModel.dTemperature", "[K,]", 18111,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[9].thermalConductionModel.UA_TopLiquid",\
 "Thermal conductance [W/K]", 18112, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[9].thermalConductionModel.UA_BottomLiquid",\
 "Thermal conductance [W/K]", "hotWaterTank1.tankCell[9].thermalConductionModel.UA_TopLiquid", 1,\
 5, 18112, 1024)
DeclareParameter("hotWaterTank1.tankCell[9].thermalConductionModel.lambdaWall", \
"Thermal conductivity of tank wall material [W/(m.K)]", 792, 21, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tankCell[9].thermalConductionModel.lambda", \
"Thermal conductivity [W/(m.K)]", 18113, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankTopLidEqu",\
 "Tank top lid overall heat transfer coefficient [W/K]", "hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankTopLid", 1,\
 7, 793, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankCylinderEqu",\
 "Tank cylinder overall heat transfer coefficient [W/K]", "hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankCylinder", 1,\
 7, 794, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankBottomLidEqu",\
 "Tank bottom lid overall heat transfer coefficient [W/K]", "hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankBottomLid", 1,\
 7, 795, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA", \
"Thermal conductance from liquid in tank over insulation to ambient air [W/K]", 13986,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankTopLid",\
 "Tank top lid overall heat transfer coefficient [W/K]", 793, 3, 0.0,0.0,0.0,0,2608)
DeclareParameter("hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankCylinder",\
 "Tank cylinder overall heat transfer coefficient [W/K]", 794, 3, 0.0,0.0,0.0,0,2608)
DeclareParameter("hotWaterTank1.tankCell[9].ambientHeatTransferModel.UA_tankBottomLid",\
 "Tank bottom lid overall heat transfer coefficient [W/K]", 795, 3, 0.0,0.0,0.0,\
0,2608)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.alphaA_tankTop",\
 "Thermal convection of liquid inside tank at tank top lid [W/K]", 18114, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.alphaA_tankCylinder",\
 "Thermal convection of liquid inside tank at tank wall [W/K]", 18115, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.alphaA_tankBottom",\
 "Thermal convection of liquid inside tank at tank bottom lid [W/K]", 18116, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareParameter("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.correctionFactor",\
 "Linear correction factor for the overall alphaA", 796, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.characLength",\
 "[m]", 9232, 0.15000000000000002, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.diameter",\
 "[m]", 13987, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", 9233, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.globalData.tankCellsProperties[9].d", 1,\
 5, 17914, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.globalData.tankCellsProperties[9].h", 1,\
 5, 17915, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.p",\
 "Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.s",\
 "Specific entropy [J/(kg.K)]", 9234, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tankCell[9].T", 1, 1, 129, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.q",\
 "Steam mass fraction (quality) [1]", 9235, 0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", "hotWaterTank1.globalData.tankCellsProperties[9].cp", 1,\
 5, 17916, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.globalData.tankCellsProperties[9].beta", 1,\
 5, 17917, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9236, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9237, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.p",\
 "Critical pressure [Pa|bar]", 9238, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9239, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.T",\
 "Critical temperature [K;degC]", 9240, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9241, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9242, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9243, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9244, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9245, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9246, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9247, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9248, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9249, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9250, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9251, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9252, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9253, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9254, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9255, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9256, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.transp.Pr",\
 "Prandtl number [1]", "hotWaterTank1.globalData.tankCellsProperties[9].transp.Pr", 1,\
 5, 17918, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "hotWaterTank1.globalData.tankCellsProperties[9].transp.lambda", 1,\
 5, 17919, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", "hotWaterTank1.globalData.tankCellsProperties[9].transp.eta", 1,\
 5, 17920, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.properties.transp.sigma",\
 "Surface tension [N/m]", "hotWaterTank1.globalData.tankCellsProperties[9].transp.sigma", 1,\
 5, 17921, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.alpha",\
 "Coefficient of heat transfer [W/(m2.K)]", 18117, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.T_W",\
 "Wall temperature [K;degC]", "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1,\
 5, 13994, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.T_inf",\
 "Ambient temperature [K;degC]", "hotWaterTank1.tankCell[9].T", 1, 1, 129, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.characLength",\
 "Characteristic length [m]", 9257, 0.15000000000000002, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.d",\
 "Diameter [m]", "hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.diameter", 1,\
 5, 13987, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.Nu",\
 "Nusselt number [1]", 18118, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.Gr",\
 "Grashof number [1]", 18119, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.Ra",\
 "Rayleigh number [1]", 18120, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[9].liquidToTankWallHeatTransferModel.heatTransfer.f1",\
 "", 18121, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.d", "Density [kg/m3|g/cm3]",\
 "hotWaterTank1.globalData.tankCellsProperties[9].d", 1, 5, 17914, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.h", "Specific enthalpy [J/kg]",\
 "hotWaterTank1.globalData.tankCellsProperties[9].h", 1, 5, 17915, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.p", "Pressure [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].properties.s", "Specific entropy [J/(kg.K)]",\
 9258, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.T", "Temperature [K;degC]", \
"hotWaterTank1.tankCell[9].T", 1, 1, 129, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].properties.q", "Steam mass fraction (quality) [1]",\
 9259, 0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 "hotWaterTank1.globalData.tankCellsProperties[9].cp", 1, 5, 17916, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.beta", "Isobaric expansion coefficient [1/K]",\
 "hotWaterTank1.globalData.tankCellsProperties[9].beta", 1, 5, 17917, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].properties.crit.d", "Critical density [kg/m3|g/cm3]",\
 9260, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.crit.h", "Critical specific enthalpy [J/kg]",\
 9261, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.crit.p", "Critical pressure [Pa|bar]",\
 9262, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.crit.s", "Critical specific entropy [J/(kg.K)]",\
 9263, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.crit.T", "Critical temperature [K;degC]",\
 9264, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.d_l", "Density of liquid phase [kg/m3|g/cm3]",\
 9265, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.d_v", "Density of vapour phase [kg/m3|g/cm3]",\
 9266, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.h_l", "Specific enthalpy of liquid phase [J/kg]",\
 9267, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.h_v", "Specific enthalpy of vapour phase [J/kg]",\
 9268, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.p_l", "Pressure of liquid phase [Pa|bar]",\
 9269, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.p_v", "Pressure of vapour phase [Pa|bar]",\
 9270, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.s_l", "Specific entropy of liquid phase [J/(kg.K)]",\
 9271, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.s_v", "Specific entropy of vapour phase [J/(kg.K)]",\
 9272, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.T_l", "Temperature of liquid phase [K;degC]",\
 9273, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLE.T_v", "Temperature of vapour phase [K;degC]",\
 9274, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLETransp.Pr_l", \
"Prandtl number of liquid phase [1]", 9275, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLETransp.Pr_v", \
"Prandtl number of vapour phase [1]", 9276, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLETransp.lambda_l", \
"Thermal conductivity of liquid phase [W/(m.K)]", 9277, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLETransp.lambda_v", \
"Thermal conductivity of vapour phase [W/(m.K)]", 9278, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLETransp.eta_l", \
"Dynamic viscosity of liquid phase [Pa.s]", 9279, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].properties.VLETransp.eta_v", \
"Dynamic viscosity of vapour phase [Pa.s]", 9280, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.transp.Pr", "Prandtl number [1]",\
 "hotWaterTank1.globalData.tankCellsProperties[9].transp.Pr", 1, 5, 17918, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.transp.lambda", \
"Thermal conductivity [W/(m.K)]", "hotWaterTank1.globalData.tankCellsProperties[9].transp.lambda", 1,\
 5, 17919, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.transp.eta", \
"Dynamic viscosity [Pa.s]", "hotWaterTank1.globalData.tankCellsProperties[9].transp.eta", 1,\
 5, 17920, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].properties.transp.sigma", \
"Surface tension [N/m]", "hotWaterTank1.globalData.tankCellsProperties[9].transp.sigma", 1,\
 5, 17921, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].mass", "Mass of liquid in cell [kg]",\
 18122, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[9].p", "Pressure of liquid in cell [Pa|bar]",\
 "boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareState("hotWaterTank1.tankCell[9].T", "Temperature [K;degC]", 129, 0.0, \
0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tankCell[9].der(T)", "der(Temperature) [K/s]", 129,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[9].pHalfGeostatic", "Geostatic pressure of half tank cell height [Pa|bar]",\
 9281, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].H_flow_portA[1]", "Enthalpy flow rates at port A [W]",\
 18123, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[9].H_flow_portB[1]", "Enthalpy flow rates at port B [W]",\
 18124, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[9].heatFlowRate_Ambient", "Heat flow rate to ambient [W]",\
 "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[9]", -1, 5, 18149, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].heatFlowRate_topBuoyancy", \
"Heat flow rate inner buoyancy at top heat port [W]", "hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 18108, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].heatFlowRate_bottomBuoyancy", \
"Heat flow rate inner buoyancy at bottom heat port [W]", "hotWaterTank1.tankCell[8].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", -1,\
 5, 18089, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].heatFlowRate_topThermalConductivity", \
"Heat flow rate inner thermal conductivity and at top heat port [W]", \
"hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 18107, 1024)
DeclareAlias2("hotWaterTank1.tankCell[9].heatFlowRate_bottomThermalConductivity",\
 "Heat flow rate inner thermal conductivity at bottom heat port [W]", \
"hotWaterTank1.tankCell[8].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18088, 1024)
DeclareVariable("hotWaterTank1.tankCell[9].heatFlowRate_SumHeatExchangers", \
"Sum of heat flow rate to heat exchanger [W]", 9282, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].heatFlowRate_SumHeatExchangerInternal_a",\
 "Sum of heat flow rate to internal heat exchanger a [W]", 9283, 0.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].heatFlowRate_SumHeatExchangerInternal_b",\
 "Sum of heat flow rate to internal heat exchanger b [W]", 9284, 0.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsTop[1].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9285, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsTop[1].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9286,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsTop[1].liquidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 9287, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsTop[1].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9288,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsTop[1].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9289, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsTop[1].liquidType.ID", \
"ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9290, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tankCell[9].fluidPortsTop[1].p", "Pressure [Pa|bar]",\
 "boundary1.p_in_.k", 1, 5, 14378, 1028)
DeclareAlias2("hotWaterTank1.tankCell[9].fluidPortsTop[1].m_flow", \
"Mass flow rate [kg/s]", "boundary.m_flow_in_.k", 1, 5, 14400, 1156)
DeclareAlias2("hotWaterTank1.tankCell[9].fluidPortsTop[1].h_outflow", \
"Specific enthalpy [J/kg]", "hotWaterTank1.globalData.tankCellsProperties[9].h", 1,\
 5, 17915, 1028)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsBottom[1].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9291, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsBottom[1].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9292,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsBottom[1].liquidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 9293, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsBottom[1].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9294,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsBottom[1].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9295, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[9].fluidPortsBottom[1].liquidType.ID", \
"ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9296, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tankCell[9].fluidPortsBottom[1].p", \
"Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5, 14378, 1028)
DeclareAlias2("hotWaterTank1.tankCell[9].fluidPortsBottom[1].m_flow", \
"Mass flow rate [kg/s]", "boundary.m_flow_in_.k", -1, 5, 14400, 1156)
DeclareAlias2("hotWaterTank1.tankCell[9].fluidPortsBottom[1].h_outflow", \
"Specific enthalpy [J/kg]", "hotWaterTank1.globalData.tankCellsProperties[9].h", 1,\
 5, 17915, 1028)
DeclareAlias2("hotWaterTank1.tankCell[9].heatPorts[1].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 1028)
DeclareAlias2("hotWaterTank1.tankCell[9].heatPorts[1].Q_flow", "Heat flow rate [W]",\
 "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[9]", -1, 5, 18149, 1156)
DeclareVariable("hotWaterTank1.tankCell[10].tankCellID", "Position ID of tank cell [:#(type=Integer)]",\
 9297, 10, 1.0,1.7976931348623157E+308,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].tankCellVolume", "Volume of tank cell [m3]",\
 13988, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].tankCellHeight", "Height of tank cell [m]",\
 9298, 0.15000000000000002, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].TWallAmbient", "Wall cell temperature to ambient [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9299, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tankCell[10].liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 9300,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 9301, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9302,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 9303, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9304, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].ambientHeatTransfer", \
"Ambient Heat Transfer Model [:#(type=TIL3_AddOn_HeatStorage.ThermalStorages.Internals.AmbientHeatTransfer)]",\
 9305, 1, 1.0,2.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].heatPortTop_thermalConductivityBuoyancy[1].T",\
 "Port temperature [K;degC]", 18125, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tankCell[10].heatPortTop_thermalConductivityBuoyancy[1].Q_flow",\
 "Heat flow rate [W]", 9306, 0.0, 0.0,0.0,0.0,0,2825)
DeclareAlias2("hotWaterTank1.tankCell[10].heatPortTop_thermalConductivityBuoyancy[2].T",\
 "Port temperature [K;degC]", "hotWaterTank1.tankCell[10].T", 1, 1, 130, 1028)
DeclareVariable("hotWaterTank1.tankCell[10].heatPortTop_thermalConductivityBuoyancy[2].Q_flow",\
 "Heat flow rate [W]", 9307, 0.0, 0.0,0.0,0.0,0,2825)
DeclareAlias2("hotWaterTank1.tankCell[10].heatPortBottom_thermalConductivityBuoyancy[1].T",\
 "Port temperature [K;degC]", "hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[1].T", 1,\
 5, 18106, 1028)
DeclareAlias2("hotWaterTank1.tankCell[10].heatPortBottom_thermalConductivityBuoyancy[1].Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18107, 1156)
DeclareAlias2("hotWaterTank1.tankCell[10].heatPortBottom_thermalConductivityBuoyancy[2].T",\
 "Port temperature [K;degC]", "hotWaterTank1.tankCell[10].T", 1, 1, 130, 1028)
DeclareAlias2("hotWaterTank1.tankCell[10].heatPortBottom_thermalConductivityBuoyancy[2].Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", -1,\
 5, 18108, 1156)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9308, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9309,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.liquidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 9310, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9311,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9312, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.liquidType.ID", \
"ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9313, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.liquidPointer.id", \
"[:#(type=Integer)]", 13989, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 9314, true, \
0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.d", "Density [kg/m3|g/cm3]", \
"hotWaterTank1.globalData.tankCellsProperties[10].d", 1, 5, 17922, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.h", "Specific enthalpy [J/kg]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].h", 1, 5, 17923, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.p", "Pressure [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.s", "Specific entropy [J/(kg.K)]",\
 18126, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.T", "Temperature [K;degC]", \
"hotWaterTank1.tankCell[10].T", 1, 1, 130, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.cp", "Specific heat capacity [J/(kg.K)]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].cp", 1, 5, 17924, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.beta", "Isobaric expansion coefficient [1/K]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].beta", 1, 5, 17925, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.transp.Pr", "Prandtl number [1]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].transp.Pr", 1, 5, 17926, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.transp.lambda", \
"Thermal conductivity [W/(m.K)]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.lambda", 1,\
 5, 17927, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.transp.eta", "Dynamic viscosity [Pa.s]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].transp.eta", 1, 5, 17928, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquid.transp.sigma", "Surface tension [N/m]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].transp.sigma", 1, 5, 17929, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquid.computeFlags", \
"[:#(type=Integer)]", 9315, 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].nCells", "Number of tank cells [:#(type=Integer)]",\
 9316, 10, 1.0,300.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].nBottomFluidPorts", "Number of inlet fluid ports for direct charching/discharging [:#(type=Integer)]",\
 9317, 0, 0.0,10.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].nTopFluidPorts", "Number of outlet fluid ports for direct charching/discharging [:#(type=Integer)]",\
 9318, 1, 0.0,10.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].nHeatPorts", "Number of heat ports for thermal charging/discharging by mantle heat exchangers [:#(type=Integer)]",\
 9319, 0, 0.0,100.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].nHeatPortsInternalHX_a", \
"Number of heat ports for thermal charging/discharging by internal heat exchanger a [:#(type=Integer)]",\
 9320, 0, 0.0,100.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].nHeatPortsInternalHX_b", \
"Number of heat ports for thermal charging/discharging by internal heat exchanger b [:#(type=Integer)]",\
 9321, 0, 0.0,100.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tankCell[10].tankCellMantleHeatTransferArea", \
"Heat transfer area of tank cell for mantle HX [m2]", 9322, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].tankCellInternalHXHeatTransferArea_a",\
 "Heat transfer area of tank cell for internal heat exchanger a [m2]", 9323, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].tankCellInternalHXHeatTransferArea_b",\
 "Heat transfer area of tank cell for internal heat exchanger b [m2]", 9324, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].geostaticPressure", "true, if geostatic pressure shall be considered [:#(type=Boolean)]",\
 9325, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tankCell[10].TStart", "Start value for specific temperature [K;degC]",\
 13990, 288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].buoyancyModel.analogyQflow", \
"Analogy heat flow for buoyancy - simplifies energy transport based on mass transfer [W]",\
 9326, 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("hotWaterTank1.tankCell[10].buoyancyModel.k", "User defined constant proportionality factor [W/K2]",\
 797, 1200.0, 0.0,1.7976931348623157E+308,0.0,0,2608)
DeclareParameter("hotWaterTank1.tankCell[10].buoyancyModel.tauMixing", \
"Time constant for intermixing of single tank cell [s]", 798, 1, 0.0,\
1.7976931348623157E+308,0.0,0,2608)
DeclareVariable("hotWaterTank1.tankCell[10].buoyancyModel.generateEvents", \
"If true, event generation is caused by Buoyancy [:#(type=Boolean)]", 9327, true,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tankCell[10].buoyancyModel.k_", "", 18127, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[10].buoyancyModel.kMediaDyn", "", \
"hotWaterTank1.tankCell[10].buoyancyModel.k_", 1, 5, 18127, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].buoyancyModel.tankCellTemperature", \
"[K;degC]", "hotWaterTank1.tankCell[10].T", 1, 1, 130, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].buoyancyModel.tankCellTemperatureAbove",\
 "[K;degC]", "hotWaterTank1.tankCell[10].T", 1, 1, 130, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].buoyancyModel.dTemperature", "[K,]",\
 9328, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].thermalConductionModel.UA_TopLiquid",\
 "Thermal conductance [W/K]", 18128, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[10].thermalConductionModel.UA_BottomLiquid",\
 "Thermal conductance [W/K]", "hotWaterTank1.tankCell[10].thermalConductionModel.UA_TopLiquid", 1,\
 5, 18128, 1024)
DeclareParameter("hotWaterTank1.tankCell[10].thermalConductionModel.lambdaWall",\
 "Thermal conductivity of tank wall material [W/(m.K)]", 799, 21, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tankCell[10].thermalConductionModel.lambda", \
"Thermal conductivity [W/(m.K)]", 18129, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankTopLidEqu",\
 "Tank top lid overall heat transfer coefficient [W/K]", "hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankTopLid", 1,\
 7, 800, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankCylinderEqu",\
 "Tank cylinder overall heat transfer coefficient [W/K]", "hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankCylinder", 1,\
 7, 801, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankBottomLidEqu",\
 "Tank bottom lid overall heat transfer coefficient [W/K]", "hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankBottomLid", 1,\
 7, 802, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA", \
"Thermal conductance from liquid in tank over insulation to ambient air [W/K]", 13991,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankTopLid",\
 "Tank top lid overall heat transfer coefficient [W/K]", 800, 3, 0.0,0.0,0.0,0,2608)
DeclareParameter("hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankCylinder",\
 "Tank cylinder overall heat transfer coefficient [W/K]", 801, 3, 0.0,0.0,0.0,0,2608)
DeclareParameter("hotWaterTank1.tankCell[10].ambientHeatTransferModel.UA_tankBottomLid",\
 "Tank bottom lid overall heat transfer coefficient [W/K]", 802, 3, 0.0,0.0,0.0,\
0,2608)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.alphaA_tankTop",\
 "Thermal convection of liquid inside tank at tank top lid [W/K]", 18130, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.alphaA_tankCylinder",\
 "Thermal convection of liquid inside tank at tank wall [W/K]", 18131, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.alphaA_tankBottom",\
 "Thermal convection of liquid inside tank at tank bottom lid [W/K]", 18132, 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareParameter("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.correctionFactor",\
 "Linear correction factor for the overall alphaA", 803, 1, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.characLength",\
 "[m]", 9329, 0.15000000000000002, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.diameter",\
 "[m]", 13992, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", 9330, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.globalData.tankCellsProperties[10].d", 1,\
 5, 17922, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.globalData.tankCellsProperties[10].h", 1,\
 5, 17923, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.p",\
 "Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.s",\
 "Specific entropy [J/(kg.K)]", 9331, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tankCell[10].T", 1, 1, 130, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.q",\
 "Steam mass fraction (quality) [1]", 9332, 0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", "hotWaterTank1.globalData.tankCellsProperties[10].cp", 1,\
 5, 17924, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.globalData.tankCellsProperties[10].beta", 1,\
 5, 17925, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9333, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9334, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.p",\
 "Critical pressure [Pa|bar]", 9335, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9336, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.crit.T",\
 "Critical temperature [K;degC]", 9337, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9338, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9339, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9340, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9341, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9342, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9343, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9344, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9345, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9346, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9347, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9348, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9349, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9350, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9351, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9352, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9353, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.transp.Pr",\
 "Prandtl number [1]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.Pr", 1,\
 5, 17926, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.lambda", 1,\
 5, 17927, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.eta", 1,\
 5, 17928, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.properties.transp.sigma",\
 "Surface tension [N/m]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.sigma", 1,\
 5, 17929, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.alpha",\
 "Coefficient of heat transfer [W/(m2.K)]", 18133, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.T_W",\
 "Wall temperature [K;degC]", "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1,\
 5, 13994, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.T_inf",\
 "Ambient temperature [K;degC]", "hotWaterTank1.tankCell[10].T", 1, 1, 130, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.characLength",\
 "Characteristic length [m]", 9354, 0.15000000000000002, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.d",\
 "Diameter [m]", "hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.diameter", 1,\
 5, 13992, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.Nu",\
 "Nusselt number [1]", 18134, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.Gr",\
 "Grashof number [1]", 18135, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.Ra",\
 "Rayleigh number [1]", 18136, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[10].liquidToTankWallHeatTransferModel.heatTransfer.f1",\
 "", 18137, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.d", "Density [kg/m3|g/cm3]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].d", 1, 5, 17922, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.h", "Specific enthalpy [J/kg]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].h", 1, 5, 17923, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.p", "Pressure [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].properties.s", "Specific entropy [J/(kg.K)]",\
 9355, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.T", "Temperature [K;degC]",\
 "hotWaterTank1.tankCell[10].T", 1, 1, 130, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].properties.q", "Steam mass fraction (quality) [1]",\
 9356, 0, 0.0,1.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.cp", "Specific isobaric heat capacity cp [J/(kg.K)]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].cp", 1, 5, 17924, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.beta", "Isobaric expansion coefficient [1/K]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].beta", 1, 5, 17925, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].properties.crit.d", "Critical density [kg/m3|g/cm3]",\
 9357, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.crit.h", "Critical specific enthalpy [J/kg]",\
 9358, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.crit.p", "Critical pressure [Pa|bar]",\
 9359, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.crit.s", "Critical specific entropy [J/(kg.K)]",\
 9360, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.crit.T", "Critical temperature [K;degC]",\
 9361, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.d_l", \
"Density of liquid phase [kg/m3|g/cm3]", 9362, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.d_v", \
"Density of vapour phase [kg/m3|g/cm3]", 9363, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.h_l", \
"Specific enthalpy of liquid phase [J/kg]", 9364, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.h_v", \
"Specific enthalpy of vapour phase [J/kg]", 9365, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.p_l", \
"Pressure of liquid phase [Pa|bar]", 9366, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.p_v", \
"Pressure of vapour phase [Pa|bar]", 9367, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.s_l", \
"Specific entropy of liquid phase [J/(kg.K)]", 9368, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.s_v", \
"Specific entropy of vapour phase [J/(kg.K)]", 9369, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.T_l", \
"Temperature of liquid phase [K;degC]", 9370, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLE.T_v", \
"Temperature of vapour phase [K;degC]", 9371, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLETransp.Pr_l", \
"Prandtl number of liquid phase [1]", 9372, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLETransp.Pr_v", \
"Prandtl number of vapour phase [1]", 9373, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLETransp.lambda_l", \
"Thermal conductivity of liquid phase [W/(m.K)]", 9374, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLETransp.lambda_v", \
"Thermal conductivity of vapour phase [W/(m.K)]", 9375, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLETransp.eta_l", \
"Dynamic viscosity of liquid phase [Pa.s]", 9376, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].properties.VLETransp.eta_v", \
"Dynamic viscosity of vapour phase [Pa.s]", 9377, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.transp.Pr", \
"Prandtl number [1]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.Pr", 1,\
 5, 17926, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.transp.lambda", \
"Thermal conductivity [W/(m.K)]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.lambda", 1,\
 5, 17927, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.transp.eta", \
"Dynamic viscosity [Pa.s]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.eta", 1,\
 5, 17928, 1024)
DeclareAlias2("hotWaterTank1.tankCell[10].properties.transp.sigma", \
"Surface tension [N/m]", "hotWaterTank1.globalData.tankCellsProperties[10].transp.sigma", 1,\
 5, 17929, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].mass", "Mass of liquid in cell [kg]",\
 18138, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tankCell[10].p", "Pressure of liquid in cell [Pa|bar]",\
 "boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareState("hotWaterTank1.tankCell[10].T", "Temperature [K;degC]", 130, 0.0, \
0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tankCell[10].der(T)", "der(Temperature) [K/s]",\
 130, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[10].pHalfGeostatic", "Geostatic pressure of half tank cell height [Pa|bar]",\
 9378, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].H_flow_portA[1]", "Enthalpy flow rates at port A [W]",\
 18139, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[10].H_flow_portB[1]", "Enthalpy flow rates at port B [W]",\
 18140, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tankCell[10].H_flow_portB[2]", "Enthalpy flow rates at port B [W]",\
 9379, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].heatFlowRate_Ambient", \
"Heat flow rate to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[10]", -1,\
 5, 18150, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].heatFlowRate_topBuoyancy", \
"Heat flow rate inner buoyancy at top heat port [W]", 9380, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].heatFlowRate_bottomBuoyancy", \
"Heat flow rate inner buoyancy at bottom heat port [W]", "hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", -1,\
 5, 18108, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].heatFlowRate_topThermalConductivity",\
 "Heat flow rate inner thermal conductivity and at top heat port [W]", 9381, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tankCell[10].heatFlowRate_bottomThermalConductivity",\
 "Heat flow rate inner thermal conductivity at bottom heat port [W]", \
"hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18107, 1024)
DeclareVariable("hotWaterTank1.tankCell[10].heatFlowRate_SumHeatExchangers", \
"Sum of heat flow rate to heat exchanger [W]", 9382, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].heatFlowRate_SumHeatExchangerInternal_a",\
 "Sum of heat flow rate to internal heat exchanger a [W]", 9383, 0.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].heatFlowRate_SumHeatExchangerInternal_b",\
 "Sum of heat flow rate to internal heat exchanger b [W]", 9384, 0.0, 0.0,0.0,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[1].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9385, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[1].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9386,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[1].liquidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 9387, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[1].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 13993,\
 0.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[1].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9388, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[1].liquidType.ID", \
"ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9389, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tankCell[10].fluidPortsTop[1].p", "Pressure [Pa|bar]",\
 "boundary1.p_in_.k", 1, 5, 14378, 1028)
DeclareAlias2("hotWaterTank1.tankCell[10].fluidPortsTop[1].m_flow", \
"Mass flow rate [kg/s]", "boundary.m_flow_in_.k", 1, 5, 14400, 1156)
DeclareAlias2("hotWaterTank1.tankCell[10].fluidPortsTop[1].h_outflow", \
"Specific enthalpy [J/kg]", "hotWaterTank1.globalData.tankCellsProperties[10].h", 1,\
 5, 17923, 1028)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[2].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9390, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[2].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9391,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[2].liquidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 9392, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[2].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9393,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[2].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9394, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[2].liquidType.ID", \
"ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9395, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tankCell[10].fluidPortsTop[2].p", "Pressure [Pa|bar]",\
 "boundary1.p_in_.k", 1, 5, 14378, 1028)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsTop[2].m_flow", \
"Mass flow rate [kg/s]", 9396, 0.0, 0.0,0.0,0.0,0,2825)
DeclareAlias2("hotWaterTank1.tankCell[10].fluidPortsTop[2].h_outflow", \
"Specific enthalpy [J/kg]", "hotWaterTank1.globalData.tankCellsProperties[10].h", 1,\
 5, 17923, 1028)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsBottom[1].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9397, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsBottom[1].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9398,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsBottom[1].liquidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 9399, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsBottom[1].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9400,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsBottom[1].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9401, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tankCell[10].fluidPortsBottom[1].liquidType.ID", \
"ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9402, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tankCell[10].fluidPortsBottom[1].p", \
"Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5, 14378, 1028)
DeclareAlias2("hotWaterTank1.tankCell[10].fluidPortsBottom[1].m_flow", \
"Mass flow rate [kg/s]", "boundary.m_flow_in_.k", -1, 5, 14400, 1156)
DeclareAlias2("hotWaterTank1.tankCell[10].fluidPortsBottom[1].h_outflow", \
"Specific enthalpy [J/kg]", "hotWaterTank1.globalData.tankCellsProperties[10].h", 1,\
 5, 17923, 1028)
DeclareAlias2("hotWaterTank1.tankCell[10].heatPorts[1].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 1028)
DeclareAlias2("hotWaterTank1.tankCell[10].heatPorts[1].Q_flow", "Heat flow rate [W]",\
 "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[10]", -1, 5, 18150, 1156)
DeclareVariable("hotWaterTank1.ambientBoundary.nPorts", "Number of heat ports [:#(type=Integer)]",\
 9403, 10, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.ambientBoundary.constAmbientTemperature", \
"Constant ambient temperature [K;degC]", 13994, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,1537)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[1]", "[W]", 18141,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[2]", "[W]", 18142,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[3]", "[W]", 18143,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[4]", "[W]", 18144,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[5]", "[W]", 18145,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[6]", "[W]", 18146,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[7]", "[W]", 18147,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[8]", "[W]", 18148,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[9]", "[W]", 18149,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[10]", "[W]",\
 18150, 0.0, 0.0,0.0,0.0,0,1536)
DeclareVariable("hotWaterTank1.ambientBoundary.sumHeatFlowRate_Ambient", "[W]", 18151,\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[1].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[1].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[1]", 1,\
 5, 18141, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[2].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[2].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[2]", 1,\
 5, 18142, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[3].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[3].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[3]", 1,\
 5, 18143, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[4].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[4].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[4]", 1,\
 5, 18144, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[5].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[5].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[5]", 1,\
 5, 18145, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[6].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[6].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[6]", 1,\
 5, 18146, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[7].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[7].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[7]", 1,\
 5, 18147, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[8].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[8].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[8]", 1,\
 5, 18148, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[9].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[9].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[9]", 1,\
 5, 18149, 644)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[10].T", "Port temperature [K;degC]",\
 "hotWaterTank1.ambientBoundary.constAmbientTemperature", 1, 5, 13994, 516)
DeclareAlias2("hotWaterTank1.ambientBoundary.heatPorts[10].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[10]", 1,\
 5, 18150, 644)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.roundToInt",\
 "If true, then floating point values for e.g. nParallelTubes are rounded to integers [:#(type=Boolean)]",\
 9404, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.checkForIntegers",\
 "[:#(type=Boolean)]", 9405, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.floatOnInt",\
 "[:#(type=Boolean)]", 9406, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.innerDiameter",\
 "[m]", 13995, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.wallThickness",\
 "[m]", 13996, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.length",\
 "[m]", 13997, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.nParallelTubes",\
 "", 9407, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry._nParallelTubes",\
 "", 9408, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.crossSectionType",\
 "Tube Cross Section Type [:#(type=TIL.Internals.CrossSectionType)]", 9409, 1, \
1.0,2.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.innerCrossSectionalAreaNonCircular",\
 "[m2]", 9410, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.outerCrossSectionalAreaNonCircular",\
 "[m2]", 9411, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.innerPerimeterNonCircular",\
 "[m]", 9412, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.outerDiameter",\
 "[m]", 13998, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.innerCrossSectionalArea",\
 "[m2]", 13999, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.outerCrossSectionalArea",\
 "[m2]", 14000, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea",\
 "[m2]", 14001, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicDiameter",\
 "[m]", 14002, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.innerVolume",\
 "[m3]", 14003, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.outerVolume",\
 "[m3]", 14004, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.innerHeatTransferArea",\
 "[m2]", 14005, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.tubeIsCircular",\
 "true, if tube's cross section is circular [:#(type=Boolean)]", 9413, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9414, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9415,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidType.nc", \
"Number of components in Modelica models [:#(type=Integer)]", 9416, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9417,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9418, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidType.ID", \
"ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9419, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.simPortLiquid.liquidTypeID",\
 "[:#(type=Integer)]", 9420, 1, 0.0,0.0,0.0,0,2565)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.simPortLiquid.simConnector.liquidPort.liquidMass",\
 "Accumulated liquid mass [kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.cumulatedLiquidMass", 1,\
 5, 18278, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.simPortLiquid.simConnector.liquidPort.liquidVolume",\
 "Accumulated liquid volume [m3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.cumulatedLiquidVolume", 1,\
 5, 14150, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.simPortLiquid.simConnector.liquidPort.cumulatedLiquidMass",\
 "[kg]", "sim.liquidPort[1].liquidMass", -1, 5, 14414, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.simPortLiquid.simConnector.liquidPort.cumulatedLiquidVolume",\
 "[m3]", "sim.liquidPort[1].liquidVolume", -1, 5, 11329, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.simPortLiquid.liquidMass",\
 "", "hotWaterTank1.tubeInternalHX_a_sectionOne.cumulatedLiquidMass", 1, 5, 18278,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.simPortLiquid.liquidVolume",\
 "", "hotWaterTank1.tubeInternalHX_a_sectionOne.cumulatedLiquidVolume", 1, 5, 14150,\
 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9421, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9422,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9423, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9424,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9425, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9426, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portA.h_outflow", \
"Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortA.h_outflow", 1, 5, 17930,\
 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9427, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9428,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9429, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9430,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9431, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9432, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.m_flow", \
"Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portB.h_outflow", \
"Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortB.h_outflow", 1, 5, 17931,\
 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.nCells", \
"Discretization number of cells [:#(type=Integer)]", 9433, 16, 1.0,\
1.7976931348623157E+308,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[1]", \
"length portions of cells", 9434, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[2]", \
"length portions of cells", 9435, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[3]", \
"length portions of cells", 9436, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[4]", \
"length portions of cells", 9437, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[5]", \
"length portions of cells", 9438, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[6]", \
"length portions of cells", 9439, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[7]", \
"length portions of cells", 9440, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[8]", \
"length portions of cells", 9441, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[9]", \
"length portions of cells", 9442, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[10]", \
"length portions of cells", 9443, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[11]", \
"length portions of cells", 9444, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[12]", \
"length portions of cells", 9445, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[13]", \
"length portions of cells", 9446, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[14]", \
"length portions of cells", 9447, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[15]", \
"length portions of cells", 9448, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.dl[16]", \
"length portions of cells", 9449, 0.0625, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.steadyStateContinuity",\
 "Handling of the continuity equation for incompressible liquids [:#(type=Boolean)]",\
 9450, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9451, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9452,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9453, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9454,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9455, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9456, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].cellGeometry.length",\
 "[m]", 14006, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].cellGeometry.volume",\
 "[m3]", 14007, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].cellGeometry.heatTransferArea",\
 "[m2]", 14008, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9457, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9458, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9459, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9460,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9461, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9462,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9463, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9464, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portA.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortA.h_outflow", 1, 5, 17930,\
 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9465, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9466,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9467, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9468,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9469, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9470, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortA.h_outflow", 1, 5, 17930,\
 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatPort.T",\
 "Port temperature [K;degC]", 18152, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatPort.Q_flow",\
 "Heat flow rate [W]", 18153, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14009, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].TStart",\
 "Start value for specific temperature [K;degC]", 14010, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 9471, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 9472, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14011, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatPort.Q_flow", 1,\
 5, 18153, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatPort.T", 1,\
 5, 18152, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.d",\
 "Density [kg/m3|g/cm3]", 18154, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortA.h_outflow", 1, 5, 17930,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.s",\
 "Specific entropy [J/(kg.K)]", 9473, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].T", 1,\
 1, 131, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.q",\
 "Steam mass fraction (quality) [1]", 9474, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18155, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18156, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9475, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9476, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.crit.p",\
 "Critical pressure [Pa|bar]", 9477, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9478, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.crit.T",\
 "Critical temperature [K;degC]", 9479, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9480, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9481, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9482, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9483, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9484, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9485, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9486, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9487, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9488, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9489, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9490, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9491, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9492, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9493, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9494, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9495, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.transp.Pr",\
 "Prandtl number [1]", 9496, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9497, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9498, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.transp.sigma",\
 "Surface tension [N/m]", 9499, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].mass", \
"Mass of liquid in cell [kg]", 18157, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].computeTransportProperties",\
 "[:#(type=Boolean)]", 9500, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9501, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9502,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9503, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9504,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9505, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9506, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14012, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 9507, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.d", 1,\
 5, 18154, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortA.h_outflow", 1, 5, 17930,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18158, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].T", 1,\
 1, 131, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.cp", 1,\
 5, 18155, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].properties.beta", 1,\
 5, 18156, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.transp.Pr",\
 "Prandtl number [1]", 9508, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9509, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9510, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.transp.sigma",\
 "Surface tension [N/m]", 9511, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].liquid.computeFlags",\
 "[:#(type=Integer)]", 9512, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14013, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 9513, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 9514, false, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 804, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 9515, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 9516, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].mdotHydraulicStart",\
 "[kg/s]", 14014, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].T", \
"Temperature [K;degC]", 131, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].der(T)",\
 "der(Temperature) [K/s]", 131, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 9517, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9518, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9519,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9520, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9521,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9522, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9523, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].cellGeometry.length",\
 "[m]", 14015, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].cellGeometry.volume",\
 "[m3]", 14016, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].cellGeometry.heatTransferArea",\
 "[m2]", 14017, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9524, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9525, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9526, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9527,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9528, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9529,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9530, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9531, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18159, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9532, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9533,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9534, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9535,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9536, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9537, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.h_outflow", 1,\
 5, 18159, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatPort.T",\
 "Port temperature [K;degC]", 18160, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatPort.Q_flow",\
 "Heat flow rate [W]", 18161, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14018, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].TStart",\
 "Start value for specific temperature [K;degC]", 14019, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 9538, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 9539, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14020, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatPort.Q_flow", 1,\
 5, 18161, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatPort.T", 1,\
 5, 18160, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.d",\
 "Density [kg/m3|g/cm3]", 18162, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.h_outflow", 1,\
 5, 18159, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.s",\
 "Specific entropy [J/(kg.K)]", 9540, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].T", 1,\
 1, 132, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.q",\
 "Steam mass fraction (quality) [1]", 9541, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18163, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18164, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9542, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9543, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.crit.p",\
 "Critical pressure [Pa|bar]", 9544, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9545, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.crit.T",\
 "Critical temperature [K;degC]", 9546, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9547, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9548, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9549, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9550, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9551, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9552, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9553, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9554, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9555, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9556, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9557, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9558, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9559, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9560, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9561, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9562, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.transp.Pr",\
 "Prandtl number [1]", 9563, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9564, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9565, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.transp.sigma",\
 "Surface tension [N/m]", 9566, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].mass", \
"Mass of liquid in cell [kg]", 18165, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].computeTransportProperties",\
 "[:#(type=Boolean)]", 9567, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9568, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9569,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9570, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9571,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9572, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9573, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14021, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 9574, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.d", 1,\
 5, 18162, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].portA.h_outflow", 1,\
 5, 18159, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18166, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].T", 1,\
 1, 132, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.cp", 1,\
 5, 18163, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].properties.beta", 1,\
 5, 18164, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.transp.Pr",\
 "Prandtl number [1]", 9575, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9576, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9577, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.transp.sigma",\
 "Surface tension [N/m]", 9578, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].liquid.computeFlags",\
 "[:#(type=Integer)]", 9579, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14022, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 9580, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 9581, false, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 805, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 9582, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 9583, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].mdotHydraulicStart",\
 "[kg/s]", 14023, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].T", \
"Temperature [K;degC]", 132, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].der(T)",\
 "der(Temperature) [K/s]", 132, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 9584, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9585, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9586,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9587, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9588,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9589, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9590, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].cellGeometry.length",\
 "[m]", 14024, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].cellGeometry.volume",\
 "[m3]", 14025, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].cellGeometry.heatTransferArea",\
 "[m2]", 14026, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9591, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9592, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9593, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9594,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9595, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9596,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9597, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9598, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18167, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9599, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9600,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9601, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9602,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9603, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9604, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.h_outflow", 1,\
 5, 18167, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatPort.T",\
 "Port temperature [K;degC]", 18168, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatPort.Q_flow",\
 "Heat flow rate [W]", 18169, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14027, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].TStart",\
 "Start value for specific temperature [K;degC]", 14028, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 9605, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 9606, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14029, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatPort.Q_flow", 1,\
 5, 18169, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatPort.T", 1,\
 5, 18168, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.d",\
 "Density [kg/m3|g/cm3]", 18170, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.h_outflow", 1,\
 5, 18167, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.s",\
 "Specific entropy [J/(kg.K)]", 9607, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].T", 1,\
 1, 133, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.q",\
 "Steam mass fraction (quality) [1]", 9608, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18171, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18172, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9609, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9610, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.crit.p",\
 "Critical pressure [Pa|bar]", 9611, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9612, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.crit.T",\
 "Critical temperature [K;degC]", 9613, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9614, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9615, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9616, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9617, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9618, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9619, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9620, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9621, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9622, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9623, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9624, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9625, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9626, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9627, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9628, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9629, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.transp.Pr",\
 "Prandtl number [1]", 9630, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9631, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9632, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.transp.sigma",\
 "Surface tension [N/m]", 9633, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].mass", \
"Mass of liquid in cell [kg]", 18173, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].computeTransportProperties",\
 "[:#(type=Boolean)]", 9634, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9635, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9636,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9637, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9638,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9639, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9640, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14030, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 9641, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.d", 1,\
 5, 18170, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].portA.h_outflow", 1,\
 5, 18167, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18174, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].T", 1,\
 1, 133, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.cp", 1,\
 5, 18171, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].properties.beta", 1,\
 5, 18172, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.transp.Pr",\
 "Prandtl number [1]", 9642, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9643, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9644, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.transp.sigma",\
 "Surface tension [N/m]", 9645, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].liquid.computeFlags",\
 "[:#(type=Integer)]", 9646, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14031, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 9647, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 9648, false, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 806, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 9649, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 9650, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].mdotHydraulicStart",\
 "[kg/s]", 14032, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].T", \
"Temperature [K;degC]", 133, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].der(T)",\
 "der(Temperature) [K/s]", 133, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 9651, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9652, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9653,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9654, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9655,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9656, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9657, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].cellGeometry.length",\
 "[m]", 14033, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].cellGeometry.volume",\
 "[m3]", 14034, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].cellGeometry.heatTransferArea",\
 "[m2]", 14035, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9658, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9659, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9660, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9661,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9662, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9663,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9664, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9665, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18175, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9666, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9667,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9668, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9669,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9670, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9671, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.h_outflow", 1,\
 5, 18175, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatPort.T",\
 "Port temperature [K;degC]", 18176, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatPort.Q_flow",\
 "Heat flow rate [W]", 18177, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14036, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].TStart",\
 "Start value for specific temperature [K;degC]", 14037, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 9672, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 9673, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14038, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatPort.Q_flow", 1,\
 5, 18177, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatPort.T", 1,\
 5, 18176, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.d",\
 "Density [kg/m3|g/cm3]", 18178, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.h_outflow", 1,\
 5, 18175, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.s",\
 "Specific entropy [J/(kg.K)]", 9674, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].T", 1,\
 1, 134, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.q",\
 "Steam mass fraction (quality) [1]", 9675, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18179, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18180, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9676, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9677, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.crit.p",\
 "Critical pressure [Pa|bar]", 9678, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9679, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.crit.T",\
 "Critical temperature [K;degC]", 9680, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9681, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9682, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9683, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9684, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9685, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9686, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9687, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9688, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9689, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9690, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9691, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9692, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9693, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9694, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9695, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9696, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.transp.Pr",\
 "Prandtl number [1]", 9697, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9698, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9699, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.transp.sigma",\
 "Surface tension [N/m]", 9700, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].mass", \
"Mass of liquid in cell [kg]", 18181, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].computeTransportProperties",\
 "[:#(type=Boolean)]", 9701, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9702, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9703,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9704, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9705,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9706, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9707, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14039, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 9708, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.d", 1,\
 5, 18178, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].portA.h_outflow", 1,\
 5, 18175, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18182, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].T", 1,\
 1, 134, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.cp", 1,\
 5, 18179, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].properties.beta", 1,\
 5, 18180, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.transp.Pr",\
 "Prandtl number [1]", 9709, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9710, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9711, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.transp.sigma",\
 "Surface tension [N/m]", 9712, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].liquid.computeFlags",\
 "[:#(type=Integer)]", 9713, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14040, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 9714, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 9715, false, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 807, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 9716, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 9717, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].mdotHydraulicStart",\
 "[kg/s]", 14041, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].T", \
"Temperature [K;degC]", 134, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].der(T)",\
 "der(Temperature) [K/s]", 134, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 9718, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9719, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9720,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9721, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9722,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9723, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9724, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].cellGeometry.length",\
 "[m]", 14042, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].cellGeometry.volume",\
 "[m3]", 14043, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].cellGeometry.heatTransferArea",\
 "[m2]", 14044, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9725, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9726, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9727, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9728,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9729, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9730,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9731, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9732, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18183, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9733, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9734,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9735, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9736,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9737, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9738, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.h_outflow", 1,\
 5, 18183, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatPort.T",\
 "Port temperature [K;degC]", 18184, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatPort.Q_flow",\
 "Heat flow rate [W]", 18185, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14045, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].TStart",\
 "Start value for specific temperature [K;degC]", 14046, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 9739, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 9740, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14047, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatPort.Q_flow", 1,\
 5, 18185, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatPort.T", 1,\
 5, 18184, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.d",\
 "Density [kg/m3|g/cm3]", 18186, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.h_outflow", 1,\
 5, 18183, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.s",\
 "Specific entropy [J/(kg.K)]", 9741, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].T", 1,\
 1, 135, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.q",\
 "Steam mass fraction (quality) [1]", 9742, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18187, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18188, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9743, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9744, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.crit.p",\
 "Critical pressure [Pa|bar]", 9745, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9746, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.crit.T",\
 "Critical temperature [K;degC]", 9747, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9748, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9749, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9750, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9751, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9752, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9753, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9754, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9755, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9756, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9757, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9758, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9759, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9760, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9761, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9762, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9763, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.transp.Pr",\
 "Prandtl number [1]", 9764, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9765, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9766, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.transp.sigma",\
 "Surface tension [N/m]", 9767, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].mass", \
"Mass of liquid in cell [kg]", 18189, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].computeTransportProperties",\
 "[:#(type=Boolean)]", 9768, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9769, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9770,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9771, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9772,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9773, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9774, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14048, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 9775, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.d", 1,\
 5, 18186, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].portA.h_outflow", 1,\
 5, 18183, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18190, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].T", 1,\
 1, 135, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.cp", 1,\
 5, 18187, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].properties.beta", 1,\
 5, 18188, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.transp.Pr",\
 "Prandtl number [1]", 9776, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9777, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9778, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.transp.sigma",\
 "Surface tension [N/m]", 9779, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].liquid.computeFlags",\
 "[:#(type=Integer)]", 9780, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14049, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 9781, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 9782, false, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 808, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 9783, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 9784, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].mdotHydraulicStart",\
 "[kg/s]", 14050, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].T", \
"Temperature [K;degC]", 135, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].der(T)",\
 "der(Temperature) [K/s]", 135, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 9785, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9786, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9787,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9788, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9789,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9790, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9791, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].cellGeometry.length",\
 "[m]", 14051, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].cellGeometry.volume",\
 "[m3]", 14052, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].cellGeometry.heatTransferArea",\
 "[m2]", 14053, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9792, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9793, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9794, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9795,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9796, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9797,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9798, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9799, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18191, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9800, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9801,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9802, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9803,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9804, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9805, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.h_outflow", 1,\
 5, 18191, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatPort.T",\
 "Port temperature [K;degC]", 18192, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatPort.Q_flow",\
 "Heat flow rate [W]", 18193, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14054, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].TStart",\
 "Start value for specific temperature [K;degC]", 14055, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 9806, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 9807, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14056, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatPort.Q_flow", 1,\
 5, 18193, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatPort.T", 1,\
 5, 18192, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.d",\
 "Density [kg/m3|g/cm3]", 18194, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.h_outflow", 1,\
 5, 18191, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.s",\
 "Specific entropy [J/(kg.K)]", 9808, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].T", 1,\
 1, 136, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.q",\
 "Steam mass fraction (quality) [1]", 9809, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18195, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18196, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9810, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9811, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.crit.p",\
 "Critical pressure [Pa|bar]", 9812, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9813, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.crit.T",\
 "Critical temperature [K;degC]", 9814, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9815, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9816, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9817, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9818, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9819, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9820, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9821, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9822, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9823, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9824, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9825, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9826, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9827, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9828, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9829, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9830, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.transp.Pr",\
 "Prandtl number [1]", 9831, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9832, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9833, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.transp.sigma",\
 "Surface tension [N/m]", 9834, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].mass", \
"Mass of liquid in cell [kg]", 18197, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].computeTransportProperties",\
 "[:#(type=Boolean)]", 9835, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9836, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9837,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9838, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9839,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9840, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9841, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14057, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 9842, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.d", 1,\
 5, 18194, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].portA.h_outflow", 1,\
 5, 18191, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18198, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].T", 1,\
 1, 136, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.cp", 1,\
 5, 18195, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].properties.beta", 1,\
 5, 18196, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.transp.Pr",\
 "Prandtl number [1]", 9843, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9844, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9845, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.transp.sigma",\
 "Surface tension [N/m]", 9846, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].liquid.computeFlags",\
 "[:#(type=Integer)]", 9847, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14058, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 9848, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 9849, false, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 809, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 9850, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 9851, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].mdotHydraulicStart",\
 "[kg/s]", 14059, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].T", \
"Temperature [K;degC]", 136, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].der(T)",\
 "der(Temperature) [K/s]", 136, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 9852, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9853, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9854,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9855, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9856,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9857, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9858, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].cellGeometry.length",\
 "[m]", 14060, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].cellGeometry.volume",\
 "[m3]", 14061, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].cellGeometry.heatTransferArea",\
 "[m2]", 14062, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9859, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9860, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9861, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9862,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9863, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9864,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9865, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9866, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18199, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9867, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9868,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9869, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9870,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9871, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9872, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.h_outflow", 1,\
 5, 18199, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatPort.T",\
 "Port temperature [K;degC]", 18200, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatPort.Q_flow",\
 "Heat flow rate [W]", 18201, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14063, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].TStart",\
 "Start value for specific temperature [K;degC]", 14064, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 9873, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 9874, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14065, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatPort.Q_flow", 1,\
 5, 18201, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatPort.T", 1,\
 5, 18200, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.d",\
 "Density [kg/m3|g/cm3]", 18202, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.h_outflow", 1,\
 5, 18199, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.s",\
 "Specific entropy [J/(kg.K)]", 9875, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].T", 1,\
 1, 137, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.q",\
 "Steam mass fraction (quality) [1]", 9876, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18203, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18204, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9877, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9878, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.crit.p",\
 "Critical pressure [Pa|bar]", 9879, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9880, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.crit.T",\
 "Critical temperature [K;degC]", 9881, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9882, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9883, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9884, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9885, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9886, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9887, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9888, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9889, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9890, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9891, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9892, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9893, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9894, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9895, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9896, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9897, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.transp.Pr",\
 "Prandtl number [1]", 9898, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9899, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9900, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.transp.sigma",\
 "Surface tension [N/m]", 9901, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].mass", \
"Mass of liquid in cell [kg]", 18205, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].computeTransportProperties",\
 "[:#(type=Boolean)]", 9902, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9903, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9904,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9905, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9906,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9907, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9908, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14066, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 9909, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.d", 1,\
 5, 18202, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].portA.h_outflow", 1,\
 5, 18199, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18206, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].T", 1,\
 1, 137, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.cp", 1,\
 5, 18203, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].properties.beta", 1,\
 5, 18204, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.transp.Pr",\
 "Prandtl number [1]", 9910, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9911, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9912, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.transp.sigma",\
 "Surface tension [N/m]", 9913, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].liquid.computeFlags",\
 "[:#(type=Integer)]", 9914, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14067, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 9915, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 9916, false, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 810, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 9917, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 9918, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].mdotHydraulicStart",\
 "[kg/s]", 14068, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].T", \
"Temperature [K;degC]", 137, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].der(T)",\
 "der(Temperature) [K/s]", 137, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 9919, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9920, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9921,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9922, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9923,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9924, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9925, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].cellGeometry.length",\
 "[m]", 14069, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].cellGeometry.volume",\
 "[m3]", 14070, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].cellGeometry.heatTransferArea",\
 "[m2]", 14071, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9926, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9927, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9928, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9929,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9930, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9931,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9932, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9933, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18207, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9934, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9935,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9936, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9937,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9938, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9939, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.h_outflow", 1,\
 5, 18207, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatPort.T",\
 "Port temperature [K;degC]", 18208, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatPort.Q_flow",\
 "Heat flow rate [W]", 18209, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14072, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].TStart",\
 "Start value for specific temperature [K;degC]", 14073, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 9940, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 9941, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14074, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatPort.Q_flow", 1,\
 5, 18209, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatPort.T", 1,\
 5, 18208, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.d",\
 "Density [kg/m3|g/cm3]", 18210, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.h_outflow", 1,\
 5, 18207, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.s",\
 "Specific entropy [J/(kg.K)]", 9942, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].T", 1,\
 1, 138, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.q",\
 "Steam mass fraction (quality) [1]", 9943, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18211, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18212, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 9944, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 9945, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.crit.p",\
 "Critical pressure [Pa|bar]", 9946, 0.0, 0.0,1.7976931348623157E+308,100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 9947, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.crit.T",\
 "Critical temperature [K;degC]", 9948, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 9949, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 9950, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 9951, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 9952, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 9953, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 9954, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 9955, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 9956, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 9957, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 9958, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 9959, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 9960, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 9961, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 9962, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 9963, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 9964, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.transp.Pr",\
 "Prandtl number [1]", 9965, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9966, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9967, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.transp.sigma",\
 "Surface tension [N/m]", 9968, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].mass", \
"Mass of liquid in cell [kg]", 18213, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].computeTransportProperties",\
 "[:#(type=Boolean)]", 9969, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9970, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9971,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9972, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9973,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9974, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9975, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14075, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 9976, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.d", 1,\
 5, 18210, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].portA.h_outflow", 1,\
 5, 18207, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18214, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].T", 1,\
 1, 138, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.cp", 1,\
 5, 18211, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].properties.beta", 1,\
 5, 18212, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.transp.Pr",\
 "Prandtl number [1]", 9977, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 9978, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 9979, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.transp.sigma",\
 "Surface tension [N/m]", 9980, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].liquid.computeFlags",\
 "[:#(type=Integer)]", 9981, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14076, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 9982, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 9983, false, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 811, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 9984, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 9985, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].mdotHydraulicStart",\
 "[kg/s]", 14077, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].T", \
"Temperature [K;degC]", 138, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].der(T)",\
 "der(Temperature) [K/s]", 138, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 9986, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9987, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9988,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9989, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9990,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9991, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 9992, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].cellGeometry.length",\
 "[m]", 14078, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].cellGeometry.volume",\
 "[m3]", 14079, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].cellGeometry.heatTransferArea",\
 "[m2]", 14080, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 9993, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 9994, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 9995, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 9996,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 9997, 1, 0.0,0.0,\
0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 9998,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 9999, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10000, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18215, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10001, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10002,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10003, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10004,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10005,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10006, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.h_outflow", 1,\
 5, 18215, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatPort.T",\
 "Port temperature [K;degC]", 18216, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatPort.Q_flow",\
 "Heat flow rate [W]", 18217, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14081, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].TStart",\
 "Start value for specific temperature [K;degC]", 14082, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 10007, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 10008, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14083, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatPort.Q_flow", 1,\
 5, 18217, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatPort.T", 1,\
 5, 18216, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.d",\
 "Density [kg/m3|g/cm3]", 18218, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.h_outflow", 1,\
 5, 18215, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.s",\
 "Specific entropy [J/(kg.K)]", 10009, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].T", 1,\
 1, 139, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.q",\
 "Steam mass fraction (quality) [1]", 10010, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18219, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18220, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 10011, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 10012, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.crit.p",\
 "Critical pressure [Pa|bar]", 10013, 0.0, 0.0,1.7976931348623157E+308,100000.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 10014, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.crit.T",\
 "Critical temperature [K;degC]", 10015, 0.0, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 10016, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 10017, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 10018, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 10019, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 10020, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 10021, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 10022, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 10023, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 10024, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 10025, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 10026, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 10027, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 10028, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 10029, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 10030, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 10031, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.transp.Pr",\
 "Prandtl number [1]", 10032, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10033, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10034, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.transp.sigma",\
 "Surface tension [N/m]", 10035, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].mass", \
"Mass of liquid in cell [kg]", 18221, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].computeTransportProperties",\
 "[:#(type=Boolean)]", 10036, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10037, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10038,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10039, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10040,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10041,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10042, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14084, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10043, \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.d", 1,\
 5, 18218, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].portA.h_outflow", 1,\
 5, 18215, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18222, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].T", 1,\
 1, 139, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.cp", 1,\
 5, 18219, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].properties.beta", 1,\
 5, 18220, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.transp.Pr",\
 "Prandtl number [1]", 10044, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10045, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10046, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.transp.sigma",\
 "Surface tension [N/m]", 10047, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].liquid.computeFlags",\
 "[:#(type=Integer)]", 10048, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14085, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 10049, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 10050, false, 0.0,0.0,0.0,\
0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 812, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 10051, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 10052, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].mdotHydraulicStart",\
 "[kg/s]", 14086, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].T", \
"Temperature [K;degC]", 139, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].der(T)",\
 "der(Temperature) [K/s]", 139, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 10053, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10054, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10055,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10056, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10057,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10058,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10059, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].cellGeometry.length",\
 "[m]", 14087, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].cellGeometry.volume",\
 "[m3]", 14088, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].cellGeometry.heatTransferArea",\
 "[m2]", 14089, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 10060, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 10061, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10062, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10063,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10064, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10065,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10066,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10067, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18223, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10068, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10069,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10070, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10071,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10072,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10073, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.h_outflow", 1,\
 5, 18223, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatPort.T",\
 "Port temperature [K;degC]", 18224, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatPort.Q_flow",\
 "Heat flow rate [W]", 18225, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14090, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].TStart",\
 "Start value for specific temperature [K;degC]", 14091, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 10074, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 10075, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14092, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatPort.Q_flow", 1,\
 5, 18225, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatPort.T", 1,\
 5, 18224, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.d",\
 "Density [kg/m3|g/cm3]", 18226, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.h_outflow", 1,\
 5, 18223, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.s",\
 "Specific entropy [J/(kg.K)]", 10076, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].T", 1,\
 1, 140, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.q",\
 "Steam mass fraction (quality) [1]", 10077, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18227, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18228, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 10078, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 10079, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.crit.p",\
 "Critical pressure [Pa|bar]", 10080, 0.0, 0.0,1.7976931348623157E+308,100000.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 10081, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.crit.T",\
 "Critical temperature [K;degC]", 10082, 0.0, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 10083, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 10084, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 10085, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 10086, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 10087, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 10088, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 10089, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 10090, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 10091, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 10092, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 10093, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 10094, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 10095, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 10096, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 10097, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 10098, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.transp.Pr",\
 "Prandtl number [1]", 10099, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10100, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10101, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.transp.sigma",\
 "Surface tension [N/m]", 10102, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].mass",\
 "Mass of liquid in cell [kg]", 18229, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].computeTransportProperties",\
 "[:#(type=Boolean)]", 10103, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10104, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10105,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10106, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10107,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10108,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10109, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14093, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10110, \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.d", 1,\
 5, 18226, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].portA.h_outflow", 1,\
 5, 18223, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18230, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].T", 1,\
 1, 140, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.cp", 1,\
 5, 18227, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].properties.beta", 1,\
 5, 18228, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.transp.Pr",\
 "Prandtl number [1]", 10111, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10112, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10113, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.transp.sigma",\
 "Surface tension [N/m]", 10114, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].liquid.computeFlags",\
 "[:#(type=Integer)]", 10115, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14094, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 10116, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 10117, false, 0.0,0.0,0.0,\
0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 813, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 10118, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 10119, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].mdotHydraulicStart",\
 "[kg/s]", 14095, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].T", \
"Temperature [K;degC]", 140, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].der(T)",\
 "der(Temperature) [K/s]", 140, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 10120, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10121, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10122,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10123, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10124,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10125,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10126, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].cellGeometry.length",\
 "[m]", 14096, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].cellGeometry.volume",\
 "[m3]", 14097, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].cellGeometry.heatTransferArea",\
 "[m2]", 14098, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 10127, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 10128, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10129, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10130,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10131, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10132,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10133,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10134, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18231, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10135, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10136,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10137, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10138,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10139,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10140, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.h_outflow", 1,\
 5, 18231, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatPort.T",\
 "Port temperature [K;degC]", 18232, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatPort.Q_flow",\
 "Heat flow rate [W]", 18233, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14099, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].TStart",\
 "Start value for specific temperature [K;degC]", 14100, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 10141, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 10142, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14101, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatPort.Q_flow", 1,\
 5, 18233, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatPort.T", 1,\
 5, 18232, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.d",\
 "Density [kg/m3|g/cm3]", 18234, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.h_outflow", 1,\
 5, 18231, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.s",\
 "Specific entropy [J/(kg.K)]", 10143, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].T", 1,\
 1, 141, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.q",\
 "Steam mass fraction (quality) [1]", 10144, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18235, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18236, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 10145, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 10146, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.crit.p",\
 "Critical pressure [Pa|bar]", 10147, 0.0, 0.0,1.7976931348623157E+308,100000.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 10148, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.crit.T",\
 "Critical temperature [K;degC]", 10149, 0.0, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 10150, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 10151, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 10152, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 10153, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 10154, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 10155, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 10156, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 10157, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 10158, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 10159, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 10160, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 10161, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 10162, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 10163, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 10164, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 10165, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.transp.Pr",\
 "Prandtl number [1]", 10166, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10167, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10168, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.transp.sigma",\
 "Surface tension [N/m]", 10169, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].mass",\
 "Mass of liquid in cell [kg]", 18237, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].computeTransportProperties",\
 "[:#(type=Boolean)]", 10170, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10171, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10172,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10173, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10174,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10175,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10176, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14102, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10177, \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.d", 1,\
 5, 18234, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].portA.h_outflow", 1,\
 5, 18231, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18238, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].T", 1,\
 1, 141, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.cp", 1,\
 5, 18235, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].properties.beta", 1,\
 5, 18236, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.transp.Pr",\
 "Prandtl number [1]", 10178, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10179, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10180, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.transp.sigma",\
 "Surface tension [N/m]", 10181, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].liquid.computeFlags",\
 "[:#(type=Integer)]", 10182, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14103, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 10183, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 10184, false, 0.0,0.0,0.0,\
0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 814, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 10185, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 10186, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].mdotHydraulicStart",\
 "[kg/s]", 14104, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].T", \
"Temperature [K;degC]", 141, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].der(T)",\
 "der(Temperature) [K/s]", 141, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 10187, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10188, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10189,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10190, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10191,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10192,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10193, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].cellGeometry.length",\
 "[m]", 14105, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].cellGeometry.volume",\
 "[m3]", 14106, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].cellGeometry.heatTransferArea",\
 "[m2]", 14107, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 10194, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 10195, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10196, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10197,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10198, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10199,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10200,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10201, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18239, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10202, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10203,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10204, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10205,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10206,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10207, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.h_outflow", 1,\
 5, 18239, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatPort.T",\
 "Port temperature [K;degC]", 18240, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatPort.Q_flow",\
 "Heat flow rate [W]", 18241, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14108, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].TStart",\
 "Start value for specific temperature [K;degC]", 14109, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 10208, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 10209, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14110, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatPort.Q_flow", 1,\
 5, 18241, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatPort.T", 1,\
 5, 18240, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.d",\
 "Density [kg/m3|g/cm3]", 18242, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.h_outflow", 1,\
 5, 18239, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.s",\
 "Specific entropy [J/(kg.K)]", 10210, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].T", 1,\
 1, 142, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.q",\
 "Steam mass fraction (quality) [1]", 10211, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18243, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18244, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 10212, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 10213, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.crit.p",\
 "Critical pressure [Pa|bar]", 10214, 0.0, 0.0,1.7976931348623157E+308,100000.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 10215, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.crit.T",\
 "Critical temperature [K;degC]", 10216, 0.0, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 10217, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 10218, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 10219, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 10220, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 10221, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 10222, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 10223, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 10224, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 10225, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 10226, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 10227, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 10228, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 10229, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 10230, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 10231, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 10232, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.transp.Pr",\
 "Prandtl number [1]", 10233, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10234, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10235, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.transp.sigma",\
 "Surface tension [N/m]", 10236, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].mass",\
 "Mass of liquid in cell [kg]", 18245, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].computeTransportProperties",\
 "[:#(type=Boolean)]", 10237, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10238, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10239,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10240, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10241,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10242,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10243, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14111, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10244, \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.d", 1,\
 5, 18242, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].portA.h_outflow", 1,\
 5, 18239, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18246, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].T", 1,\
 1, 142, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.cp", 1,\
 5, 18243, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].properties.beta", 1,\
 5, 18244, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.transp.Pr",\
 "Prandtl number [1]", 10245, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10246, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10247, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.transp.sigma",\
 "Surface tension [N/m]", 10248, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].liquid.computeFlags",\
 "[:#(type=Integer)]", 10249, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14112, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 10250, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 10251, false, 0.0,0.0,0.0,\
0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 815, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 10252, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 10253, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].mdotHydraulicStart",\
 "[kg/s]", 14113, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].T", \
"Temperature [K;degC]", 142, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].der(T)",\
 "der(Temperature) [K/s]", 142, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 10254, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10255, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10256,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10257, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10258,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10259,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10260, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].cellGeometry.length",\
 "[m]", 14114, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].cellGeometry.volume",\
 "[m3]", 14115, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].cellGeometry.heatTransferArea",\
 "[m2]", 14116, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 10261, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 10262, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10263, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10264,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10265, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10266,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10267,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10268, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18247, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10269, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10270,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10271, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10272,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10273,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10274, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.h_outflow", 1,\
 5, 18247, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatPort.T",\
 "Port temperature [K;degC]", 18248, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatPort.Q_flow",\
 "Heat flow rate [W]", 18249, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14117, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].TStart",\
 "Start value for specific temperature [K;degC]", 14118, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 10275, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 10276, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14119, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatPort.Q_flow", 1,\
 5, 18249, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatPort.T", 1,\
 5, 18248, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.d",\
 "Density [kg/m3|g/cm3]", 18250, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.h_outflow", 1,\
 5, 18247, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.s",\
 "Specific entropy [J/(kg.K)]", 10277, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].T", 1,\
 1, 143, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.q",\
 "Steam mass fraction (quality) [1]", 10278, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18251, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18252, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 10279, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 10280, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.crit.p",\
 "Critical pressure [Pa|bar]", 10281, 0.0, 0.0,1.7976931348623157E+308,100000.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 10282, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.crit.T",\
 "Critical temperature [K;degC]", 10283, 0.0, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 10284, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 10285, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 10286, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 10287, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 10288, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 10289, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 10290, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 10291, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 10292, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 10293, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 10294, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 10295, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 10296, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 10297, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 10298, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 10299, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.transp.Pr",\
 "Prandtl number [1]", 10300, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10301, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10302, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.transp.sigma",\
 "Surface tension [N/m]", 10303, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].mass",\
 "Mass of liquid in cell [kg]", 18253, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].computeTransportProperties",\
 "[:#(type=Boolean)]", 10304, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10305, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10306,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10307, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10308,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10309,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10310, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14120, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10311, \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.d", 1,\
 5, 18250, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].portA.h_outflow", 1,\
 5, 18247, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18254, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].T", 1,\
 1, 143, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.cp", 1,\
 5, 18251, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].properties.beta", 1,\
 5, 18252, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.transp.Pr",\
 "Prandtl number [1]", 10312, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10313, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10314, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.transp.sigma",\
 "Surface tension [N/m]", 10315, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].liquid.computeFlags",\
 "[:#(type=Integer)]", 10316, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14121, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 10317, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 10318, false, 0.0,0.0,0.0,\
0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 816, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 10319, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 10320, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].mdotHydraulicStart",\
 "[kg/s]", 14122, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].T", \
"Temperature [K;degC]", 143, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].der(T)",\
 "der(Temperature) [K/s]", 143, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 10321, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10322, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10323,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10324, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10325,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10326,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10327, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].cellGeometry.length",\
 "[m]", 14123, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].cellGeometry.volume",\
 "[m3]", 14124, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].cellGeometry.heatTransferArea",\
 "[m2]", 14125, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 10328, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 10329, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10330, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10331,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10332, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10333,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10334,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10335, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18255, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10336, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10337,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10338, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10339,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10340,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10341, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.h_outflow", 1,\
 5, 18255, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatPort.T",\
 "Port temperature [K;degC]", 18256, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatPort.Q_flow",\
 "Heat flow rate [W]", 18257, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14126, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].TStart",\
 "Start value for specific temperature [K;degC]", 14127, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 10342, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 10343, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14128, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatPort.Q_flow", 1,\
 5, 18257, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatPort.T", 1,\
 5, 18256, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.d",\
 "Density [kg/m3|g/cm3]", 18258, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.h_outflow", 1,\
 5, 18255, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.s",\
 "Specific entropy [J/(kg.K)]", 10344, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].T", 1,\
 1, 144, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.q",\
 "Steam mass fraction (quality) [1]", 10345, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18259, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18260, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 10346, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 10347, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.crit.p",\
 "Critical pressure [Pa|bar]", 10348, 0.0, 0.0,1.7976931348623157E+308,100000.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 10349, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.crit.T",\
 "Critical temperature [K;degC]", 10350, 0.0, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 10351, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 10352, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 10353, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 10354, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 10355, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 10356, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 10357, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 10358, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 10359, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 10360, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 10361, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 10362, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 10363, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 10364, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 10365, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 10366, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.transp.Pr",\
 "Prandtl number [1]", 10367, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10368, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10369, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.transp.sigma",\
 "Surface tension [N/m]", 10370, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].mass",\
 "Mass of liquid in cell [kg]", 18261, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].computeTransportProperties",\
 "[:#(type=Boolean)]", 10371, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10372, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10373,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10374, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10375,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10376,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10377, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14129, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10378, \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.d", 1,\
 5, 18258, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].portA.h_outflow", 1,\
 5, 18255, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18262, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].T", 1,\
 1, 144, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.cp", 1,\
 5, 18259, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].properties.beta", 1,\
 5, 18260, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.transp.Pr",\
 "Prandtl number [1]", 10379, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10380, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10381, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.transp.sigma",\
 "Surface tension [N/m]", 10382, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].liquid.computeFlags",\
 "[:#(type=Integer)]", 10383, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14130, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 10384, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 10385, false, 0.0,0.0,0.0,\
0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 817, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 10386, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 10387, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].mdotHydraulicStart",\
 "[kg/s]", 14131, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].T", \
"Temperature [K;degC]", 144, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].der(T)",\
 "der(Temperature) [K/s]", 144, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 10388, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10389, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10390,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10391, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10392,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10393,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10394, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].cellGeometry.length",\
 "[m]", 14132, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].cellGeometry.volume",\
 "[m3]", 14133, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].cellGeometry.heatTransferArea",\
 "[m2]", 14134, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 10395, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 10396, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10397, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10398,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10399, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10400,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10401,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10402, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.h_outflow",\
 "Specific enthalpy [J/kg]", 18263, 0.0, 0.0,0.0,0.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10403, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10404,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10405, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10406,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10407,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10408, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.h_outflow", 1,\
 5, 18263, 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatPort.T",\
 "Port temperature [K;degC]", 18264, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatPort.Q_flow",\
 "Heat flow rate [W]", 18265, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14135, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].TStart",\
 "Start value for specific temperature [K;degC]", 14136, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 10409, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 10410, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14137, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatPort.Q_flow", 1,\
 5, 18265, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatPort.T", 1,\
 5, 18264, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.d",\
 "Density [kg/m3|g/cm3]", 18266, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.h_outflow", 1,\
 5, 18263, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.s",\
 "Specific entropy [J/(kg.K)]", 10411, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].T", 1,\
 1, 145, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.q",\
 "Steam mass fraction (quality) [1]", 10412, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18267, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18268, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 10413, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 10414, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.crit.p",\
 "Critical pressure [Pa|bar]", 10415, 0.0, 0.0,1.7976931348623157E+308,100000.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 10416, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.crit.T",\
 "Critical temperature [K;degC]", 10417, 0.0, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 10418, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 10419, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 10420, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 10421, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 10422, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 10423, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 10424, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 10425, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 10426, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 10427, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 10428, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 10429, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 10430, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 10431, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 10432, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 10433, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.transp.Pr",\
 "Prandtl number [1]", 10434, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10435, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10436, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.transp.sigma",\
 "Surface tension [N/m]", 10437, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].mass",\
 "Mass of liquid in cell [kg]", 18269, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].computeTransportProperties",\
 "[:#(type=Boolean)]", 10438, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10439, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10440,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10441, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10442,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10443,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10444, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14138, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10445, \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.d", 1,\
 5, 18266, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].portA.h_outflow", 1,\
 5, 18263, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18270, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].T", 1,\
 1, 145, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.cp", 1,\
 5, 18267, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].properties.beta", 1,\
 5, 18268, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.transp.Pr",\
 "Prandtl number [1]", 10446, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10447, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10448, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.transp.sigma",\
 "Surface tension [N/m]", 10449, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].liquid.computeFlags",\
 "[:#(type=Integer)]", 10450, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14139, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 10451, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 10452, false, 0.0,0.0,0.0,\
0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 818, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 10453, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 10454, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].mdotHydraulicStart",\
 "[kg/s]", 14140, 0.0, 0.0,0.0,0.0,0,2561)
EndNonAlias(15)
PreNonAliasNew(16)
StartNonAlias(16)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].T", \
"Temperature [K;degC]", 145, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].der(T)",\
 "der(Temperature) [K/s]", 145, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 10455, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10456, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10457,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10458, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10459,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10460,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10461, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].cellGeometry.length",\
 "[m]", 14141, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].cellGeometry.volume",\
 "[m3]", 14142, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].cellGeometry.heatTransferArea",\
 "[m2]", 14143, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].cellGeometry.finHeatTransferAreaRatio",\
 "Fraction of fins on fin side heat transfer area", 10462, 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].cellGeometry.hydraulicCrossSectionalArea",\
 "[m2]", "hotWaterTank1.tubeInternalHX_a_sectionOne.tubeGeometry.hydraulicCrossSectionalArea", 1,\
 5, 14001, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].cellGeometry.nParallelHydraulicFlows",\
 "Number of parallel flows", 10463, 1.0, 1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10464, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10465,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10466, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10467,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10468,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10469, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portA.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortB.h_outflow", 1, 5, 17931,\
 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10470, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10471,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10472, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10473,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10474,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10475, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.m_flow",\
 "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].portB.h_outflow",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortB.h_outflow", 1, 5, 17931,\
 1028)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatPort.T",\
 "Port temperature [K;degC]", 18271, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatPort.Q_flow",\
 "Heat flow rate [W]", 18272, 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].m_flowStart",\
 "Start value for mass flow rate [kg/s]", 14144, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].TStart",\
 "Start value for specific temperature [K;degC]", 14145, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].steadyStateContinuity",\
 "Handling of the continuity equation [:#(type=Boolean)]", 10476, true, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].useHeatFlowRateHomotopy",\
 "If true: heatFlowRateHomotopy is used in simplified equation [:#(type=Boolean)]",\
 10477, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatFlowRateHomotopy",\
 "Heat flow rate of simplified equation used during transition [W]", 14146, 0.0,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].mdotHydraulic",\
 "Hydraulic mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].QdotHydraulic",\
 "Hydraulic heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatPort.Q_flow", 1,\
 5, 18272, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].wallTemperature",\
 "Wall temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatPort.T", 1,\
 5, 18271, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.d",\
 "Density [kg/m3|g/cm3]", 18273, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortB.h_outflow", 1, 5, 17931,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.s",\
 "Specific entropy [J/(kg.K)]", 10478, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].T", 1,\
 1, 146, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.q",\
 "Steam mass fraction (quality) [1]", 10479, 0, 0.0,1.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.cp",\
 "Specific isobaric heat capacity cp [J/(kg.K)]", 18274, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.beta",\
 "Isobaric expansion coefficient [1/K]", 18275, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.crit.d",\
 "Critical density [kg/m3|g/cm3]", 10480, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.crit.h",\
 "Critical specific enthalpy [J/kg]", 10481, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.crit.p",\
 "Critical pressure [Pa|bar]", 10482, 0.0, 0.0,1.7976931348623157E+308,100000.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.crit.s",\
 "Critical specific entropy [J/(kg.K)]", 10483, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.crit.T",\
 "Critical temperature [K;degC]", 10484, 0.0, 0.0,1.7976931348623157E+308,300.0,\
0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.d_l",\
 "Density of liquid phase [kg/m3|g/cm3]", 10485, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.d_v",\
 "Density of vapour phase [kg/m3|g/cm3]", 10486, 0.0, 0.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.h_l",\
 "Specific enthalpy of liquid phase [J/kg]", 10487, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.h_v",\
 "Specific enthalpy of vapour phase [J/kg]", 10488, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.p_l",\
 "Pressure of liquid phase [Pa|bar]", 10489, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.p_v",\
 "Pressure of vapour phase [Pa|bar]", 10490, 0.0, 0.0,1.7976931348623157E+308,\
100000.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.s_l",\
 "Specific entropy of liquid phase [J/(kg.K)]", 10491, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.s_v",\
 "Specific entropy of vapour phase [J/(kg.K)]", 10492, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.T_l",\
 "Temperature of liquid phase [K;degC]", 10493, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLE.T_v",\
 "Temperature of vapour phase [K;degC]", 10494, 0.0, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLETransp.Pr_l",\
 "Prandtl number of liquid phase [1]", 10495, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLETransp.Pr_v",\
 "Prandtl number of vapour phase [1]", 10496, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLETransp.lambda_l",\
 "Thermal conductivity of liquid phase [W/(m.K)]", 10497, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLETransp.lambda_v",\
 "Thermal conductivity of vapour phase [W/(m.K)]", 10498, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLETransp.eta_l",\
 "Dynamic viscosity of liquid phase [Pa.s]", 10499, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.VLETransp.eta_v",\
 "Dynamic viscosity of vapour phase [Pa.s]", 10500, 0.0, -1.0,1.7976931348623157E+308,\
0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.transp.Pr",\
 "Prandtl number [1]", 10501, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10502, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10503, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.transp.sigma",\
 "Surface tension [N/m]", 10504, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].mass",\
 "Mass of liquid in cell [kg]", 18276, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].computeTransportProperties",\
 "[:#(type=Boolean)]", 10505, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10506, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10507,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10508, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10509,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10510,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10511, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.liquidPointer.id",\
 "[:#(type=Integer)]", 14147, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10512, \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.d",\
 "Density [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.d", 1,\
 5, 18273, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.h",\
 "Specific enthalpy [J/kg]", "hotWaterTank1.liquidFluidPortB.h_outflow", 1, 5, 17931,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.p",\
 "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.s",\
 "Specific entropy [J/(kg.K)]", 18277, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].T", 1,\
 1, 146, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.cp",\
 "Specific heat capacity [J/(kg.K)]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.cp", 1,\
 5, 18274, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.beta",\
 "Isobaric expansion coefficient [1/K]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].properties.beta", 1,\
 5, 18275, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.transp.Pr",\
 "Prandtl number [1]", 10513, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10514, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.transp.eta",\
 "Dynamic viscosity [Pa.s]", 10515, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.transp.sigma",\
 "Surface tension [N/m]", 10516, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].liquid.computeFlags",\
 "[:#(type=Integer)]", 10517, 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatTransfer.alphaA",\
 "Value for alphaA for one cell [W/K]", 14148, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatTransfer.computeTransportProperties",\
 "[:#(type=Boolean)]", 10518, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatTransfer.useAlphaAState",\
 "alphaA is a differential state [:#(type=Boolean)]", 10519, false, 0.0,0.0,0.0,\
0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatTransfer.constantAlpha",\
 "Constant value for alpha [W/(m2.K)]", 819, 4000, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].pressureDrop.pressureDrop",\
 "Pressure drop for one cell [Pa|bar]", 10520, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].pressureDrop.computeTransportProperties",\
 "[:#(type=Boolean)]", 10521, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].mdotHydraulicStart",\
 "[kg/s]", 14149, 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].T", \
"Temperature [K;degC]", 146, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].der(T)",\
 "der(Temperature) [K/s]", 146, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].steadyStateEnergyBalance",\
 "[:#(type=Boolean)]", 10522, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.cumulatedLiquidMass",\
 "Cumulated liquid mass [kg]", 18278, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.cumulatedLiquidVolume",\
 "Cumulated liquid volume [m3]", 14150, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.connectWallCells", \
"If true: wall cells should be connected W-E [:#(type=Boolean)]", 10523, false, \
0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].cellGeometry.length",\
 "[m]", 14151, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].cellGeometry.volume",\
 "[m3]", 14152, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallStateTemperature", 1,\
 1, 147, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[2].heatFlowRateArray_InternalHeatExchanger_a[1]", -1,\
 5, 17972, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatPort.T", 1,\
 5, 18152, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].heatPort.Q_flow", -1,\
 5, 18153, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].portW.T",\
 "Port temperature [K;degC]", 18279, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].portW.Q_flow",\
 "Heat flow rate [W]", 10524, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].portE.T",\
 "Port temperature [K;degC]", 18280, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].portE.Q_flow",\
 "Heat flow rate [W]", 10525, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].TInitialWall",\
 "Initial wall temperature [K;degC]", 14153, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10526,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].initSteadyState",\
 "[:#(type=Boolean)]", 10527, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].additionalHeatCapacity",\
 "[J/K]", 10528, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].properties.d",\
 "Density [kg/m3|g/cm3]", 10529, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallStateTemperature", 1,\
 1, 147, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10530, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10531, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallStateTemperature",\
 "[K;degC]", 147, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].der(wallStateTemperature)",\
 "[K/s]", 147, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10532, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallStateTemperature", 1,\
 1, 147, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10533, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10534, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10535, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10536, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10537, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10538, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10539, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallStateTemperature", 1,\
 1, 147, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10540, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10541, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14154, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14155, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10542, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14156, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14157, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].geometricMass",\
 "Geometric mass [kg]", 14158, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].SProd_dot",\
 "Produced entropy [W/K]", 18281, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].cellGeometry.length",\
 "[m]", 14159, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].cellGeometry.volume",\
 "[m3]", 14160, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallStateTemperature", 1,\
 1, 148, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[2].heatFlowRateArray_InternalHeatExchanger_a[2]", -1,\
 5, 17973, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatPort.T", 1,\
 5, 18160, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].heatPort.Q_flow", -1,\
 5, 18161, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].portW.T",\
 "Port temperature [K;degC]", 18282, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].portW.Q_flow",\
 "Heat flow rate [W]", 10543, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].portE.T",\
 "Port temperature [K;degC]", 18283, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].portE.Q_flow",\
 "Heat flow rate [W]", 10544, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].TInitialWall",\
 "Initial wall temperature [K;degC]", 14161, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10545,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].initSteadyState",\
 "[:#(type=Boolean)]", 10546, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].additionalHeatCapacity",\
 "[J/K]", 10547, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].properties.d",\
 "Density [kg/m3|g/cm3]", 10548, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallStateTemperature", 1,\
 1, 148, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10549, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10550, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallStateTemperature",\
 "[K;degC]", 148, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].der(wallStateTemperature)",\
 "[K/s]", 148, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10551, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallStateTemperature", 1,\
 1, 148, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10552, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10553, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10554, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10555, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10556, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10557, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10558, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallStateTemperature", 1,\
 1, 148, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10559, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10560, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14162, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14163, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10561, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14164, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14165, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].geometricMass",\
 "Geometric mass [kg]", 14166, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].SProd_dot",\
 "Produced entropy [W/K]", 18284, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].cellGeometry.length",\
 "[m]", 14167, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].cellGeometry.volume",\
 "[m3]", 14168, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallStateTemperature", 1,\
 1, 149, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[2].heatFlowRateArray_InternalHeatExchanger_a[3]", -1,\
 5, 17974, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatPort.T", 1,\
 5, 18168, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].heatPort.Q_flow", -1,\
 5, 18169, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].portW.T",\
 "Port temperature [K;degC]", 18285, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].portW.Q_flow",\
 "Heat flow rate [W]", 10562, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].portE.T",\
 "Port temperature [K;degC]", 18286, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].portE.Q_flow",\
 "Heat flow rate [W]", 10563, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].TInitialWall",\
 "Initial wall temperature [K;degC]", 14169, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10564,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].initSteadyState",\
 "[:#(type=Boolean)]", 10565, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].additionalHeatCapacity",\
 "[J/K]", 10566, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].properties.d",\
 "Density [kg/m3|g/cm3]", 10567, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallStateTemperature", 1,\
 1, 149, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10568, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10569, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallStateTemperature",\
 "[K;degC]", 149, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].der(wallStateTemperature)",\
 "[K/s]", 149, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10570, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallStateTemperature", 1,\
 1, 149, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10571, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10572, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10573, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10574, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10575, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10576, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10577, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallStateTemperature", 1,\
 1, 149, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10578, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10579, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14170, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14171, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10580, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14172, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14173, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].geometricMass",\
 "Geometric mass [kg]", 14174, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].SProd_dot",\
 "Produced entropy [W/K]", 18287, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].cellGeometry.length",\
 "[m]", 14175, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].cellGeometry.volume",\
 "[m3]", 14176, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallStateTemperature", 1,\
 1, 150, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[2].heatFlowRateArray_InternalHeatExchanger_a[4]", -1,\
 5, 17975, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatPort.T", 1,\
 5, 18176, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].heatPort.Q_flow", -1,\
 5, 18177, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].portW.T",\
 "Port temperature [K;degC]", 18288, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].portW.Q_flow",\
 "Heat flow rate [W]", 10581, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].portE.T",\
 "Port temperature [K;degC]", 18289, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].portE.Q_flow",\
 "Heat flow rate [W]", 10582, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].TInitialWall",\
 "Initial wall temperature [K;degC]", 14177, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10583,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].initSteadyState",\
 "[:#(type=Boolean)]", 10584, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].additionalHeatCapacity",\
 "[J/K]", 10585, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].properties.d",\
 "Density [kg/m3|g/cm3]", 10586, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallStateTemperature", 1,\
 1, 150, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10587, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10588, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallStateTemperature",\
 "[K;degC]", 150, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].der(wallStateTemperature)",\
 "[K/s]", 150, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10589, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallStateTemperature", 1,\
 1, 150, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10590, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10591, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10592, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10593, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10594, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10595, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10596, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallStateTemperature", 1,\
 1, 150, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10597, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10598, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14178, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14179, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10599, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14180, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14181, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].geometricMass",\
 "Geometric mass [kg]", 14182, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].SProd_dot",\
 "Produced entropy [W/K]", 18290, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].cellGeometry.length",\
 "[m]", 14183, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].cellGeometry.volume",\
 "[m3]", 14184, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallStateTemperature", 1,\
 1, 151, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[3].heatFlowRateArray_InternalHeatExchanger_a[1]", -1,\
 5, 17996, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatPort.T", 1,\
 5, 18184, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].heatPort.Q_flow", -1,\
 5, 18185, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].portW.T",\
 "Port temperature [K;degC]", 18291, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].portW.Q_flow",\
 "Heat flow rate [W]", 10600, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].portE.T",\
 "Port temperature [K;degC]", 18292, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].portE.Q_flow",\
 "Heat flow rate [W]", 10601, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].TInitialWall",\
 "Initial wall temperature [K;degC]", 14185, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10602,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].initSteadyState",\
 "[:#(type=Boolean)]", 10603, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].additionalHeatCapacity",\
 "[J/K]", 10604, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].properties.d",\
 "Density [kg/m3|g/cm3]", 10605, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallStateTemperature", 1,\
 1, 151, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10606, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10607, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallStateTemperature",\
 "[K;degC]", 151, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].der(wallStateTemperature)",\
 "[K/s]", 151, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10608, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallStateTemperature", 1,\
 1, 151, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10609, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10610, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10611, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10612, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10613, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10614, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10615, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallStateTemperature", 1,\
 1, 151, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10616, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10617, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14186, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14187, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10618, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14188, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14189, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].geometricMass",\
 "Geometric mass [kg]", 14190, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].SProd_dot",\
 "Produced entropy [W/K]", 18293, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].cellGeometry.length",\
 "[m]", 14191, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].cellGeometry.volume",\
 "[m3]", 14192, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallStateTemperature", 1,\
 1, 152, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[3].heatFlowRateArray_InternalHeatExchanger_a[2]", -1,\
 5, 17997, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatPort.T", 1,\
 5, 18192, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].heatPort.Q_flow", -1,\
 5, 18193, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].portW.T",\
 "Port temperature [K;degC]", 18294, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].portW.Q_flow",\
 "Heat flow rate [W]", 10619, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].portE.T",\
 "Port temperature [K;degC]", 18295, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].portE.Q_flow",\
 "Heat flow rate [W]", 10620, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].TInitialWall",\
 "Initial wall temperature [K;degC]", 14193, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10621,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].initSteadyState",\
 "[:#(type=Boolean)]", 10622, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].additionalHeatCapacity",\
 "[J/K]", 10623, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].properties.d",\
 "Density [kg/m3|g/cm3]", 10624, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallStateTemperature", 1,\
 1, 152, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10625, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10626, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallStateTemperature",\
 "[K;degC]", 152, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].der(wallStateTemperature)",\
 "[K/s]", 152, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10627, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallStateTemperature", 1,\
 1, 152, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10628, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10629, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10630, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10631, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10632, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10633, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10634, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallStateTemperature", 1,\
 1, 152, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10635, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10636, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14194, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14195, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10637, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14196, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14197, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].geometricMass",\
 "Geometric mass [kg]", 14198, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].SProd_dot",\
 "Produced entropy [W/K]", 18296, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].cellGeometry.length",\
 "[m]", 14199, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].cellGeometry.volume",\
 "[m3]", 14200, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallStateTemperature", 1,\
 1, 153, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[3].heatFlowRateArray_InternalHeatExchanger_a[3]", -1,\
 5, 17998, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatPort.T", 1,\
 5, 18200, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].heatPort.Q_flow", -1,\
 5, 18201, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].portW.T",\
 "Port temperature [K;degC]", 18297, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].portW.Q_flow",\
 "Heat flow rate [W]", 10638, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].portE.T",\
 "Port temperature [K;degC]", 18298, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].portE.Q_flow",\
 "Heat flow rate [W]", 10639, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].TInitialWall",\
 "Initial wall temperature [K;degC]", 14201, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10640,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].initSteadyState",\
 "[:#(type=Boolean)]", 10641, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].additionalHeatCapacity",\
 "[J/K]", 10642, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].properties.d",\
 "Density [kg/m3|g/cm3]", 10643, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallStateTemperature", 1,\
 1, 153, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10644, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10645, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallStateTemperature",\
 "[K;degC]", 153, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].der(wallStateTemperature)",\
 "[K/s]", 153, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10646, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallStateTemperature", 1,\
 1, 153, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10647, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10648, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10649, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10650, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10651, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10652, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10653, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallStateTemperature", 1,\
 1, 153, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10654, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10655, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14202, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14203, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10656, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14204, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14205, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].geometricMass",\
 "Geometric mass [kg]", 14206, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].SProd_dot",\
 "Produced entropy [W/K]", 18299, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].cellGeometry.length",\
 "[m]", 14207, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].cellGeometry.volume",\
 "[m3]", 14208, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallStateTemperature", 1,\
 1, 154, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[3].heatFlowRateArray_InternalHeatExchanger_a[4]", -1,\
 5, 17999, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatPort.T", 1,\
 5, 18208, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].heatPort.Q_flow", -1,\
 5, 18209, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].portW.T",\
 "Port temperature [K;degC]", 18300, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].portW.Q_flow",\
 "Heat flow rate [W]", 10657, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].portE.T",\
 "Port temperature [K;degC]", 18301, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].portE.Q_flow",\
 "Heat flow rate [W]", 10658, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].TInitialWall",\
 "Initial wall temperature [K;degC]", 14209, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10659,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].initSteadyState",\
 "[:#(type=Boolean)]", 10660, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].additionalHeatCapacity",\
 "[J/K]", 10661, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].properties.d",\
 "Density [kg/m3|g/cm3]", 10662, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallStateTemperature", 1,\
 1, 154, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10663, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10664, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallStateTemperature",\
 "[K;degC]", 154, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].der(wallStateTemperature)",\
 "[K/s]", 154, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10665, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallStateTemperature", 1,\
 1, 154, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10666, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10667, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10668, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10669, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10670, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10671, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10672, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallStateTemperature", 1,\
 1, 154, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10673, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10674, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14210, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14211, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10675, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14212, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14213, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].geometricMass",\
 "Geometric mass [kg]", 14214, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].SProd_dot",\
 "Produced entropy [W/K]", 18302, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].cellGeometry.length",\
 "[m]", 14215, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].cellGeometry.volume",\
 "[m3]", 14216, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallStateTemperature", 1,\
 1, 155, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[4].heatFlowRateArray_InternalHeatExchanger_a[1]", -1,\
 5, 18020, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatPort.T", 1,\
 5, 18216, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].heatPort.Q_flow", -1,\
 5, 18217, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].portW.T",\
 "Port temperature [K;degC]", 18303, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].portW.Q_flow",\
 "Heat flow rate [W]", 10676, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].portE.T",\
 "Port temperature [K;degC]", 18304, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].portE.Q_flow",\
 "Heat flow rate [W]", 10677, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].TInitialWall",\
 "Initial wall temperature [K;degC]", 14217, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10678,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].initSteadyState",\
 "[:#(type=Boolean)]", 10679, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].additionalHeatCapacity",\
 "[J/K]", 10680, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].properties.d",\
 "Density [kg/m3|g/cm3]", 10681, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallStateTemperature", 1,\
 1, 155, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10682, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10683, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallStateTemperature",\
 "[K;degC]", 155, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].der(wallStateTemperature)",\
 "[K/s]", 155, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10684, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallStateTemperature", 1,\
 1, 155, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10685, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10686, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10687, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10688, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10689, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10690, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10691, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallStateTemperature", 1,\
 1, 155, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10692, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10693, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14218, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14219, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10694, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14220, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14221, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].geometricMass",\
 "Geometric mass [kg]", 14222, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].SProd_dot",\
 "Produced entropy [W/K]", 18305, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].cellGeometry.length",\
 "[m]", 14223, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].cellGeometry.volume",\
 "[m3]", 14224, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallStateTemperature", 1,\
 1, 156, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[4].heatFlowRateArray_InternalHeatExchanger_a[2]", -1,\
 5, 18021, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatPort.T", 1,\
 5, 18224, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].heatPort.Q_flow", -1,\
 5, 18225, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].portW.T",\
 "Port temperature [K;degC]", 18306, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].portW.Q_flow",\
 "Heat flow rate [W]", 10695, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].portE.T",\
 "Port temperature [K;degC]", 18307, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].portE.Q_flow",\
 "Heat flow rate [W]", 10696, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].TInitialWall",\
 "Initial wall temperature [K;degC]", 14225, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10697,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].initSteadyState",\
 "[:#(type=Boolean)]", 10698, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].additionalHeatCapacity",\
 "[J/K]", 10699, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].properties.d",\
 "Density [kg/m3|g/cm3]", 10700, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallStateTemperature", 1,\
 1, 156, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10701, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10702, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallStateTemperature",\
 "[K;degC]", 156, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].der(wallStateTemperature)",\
 "[K/s]", 156, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10703, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallStateTemperature", 1,\
 1, 156, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10704, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10705, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10706, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10707, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10708, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10709, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10710, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallStateTemperature", 1,\
 1, 156, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10711, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10712, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14226, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14227, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10713, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14228, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14229, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].geometricMass",\
 "Geometric mass [kg]", 14230, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].SProd_dot",\
 "Produced entropy [W/K]", 18308, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].cellGeometry.length",\
 "[m]", 14231, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].cellGeometry.volume",\
 "[m3]", 14232, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallStateTemperature", 1,\
 1, 157, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[4].heatFlowRateArray_InternalHeatExchanger_a[3]", -1,\
 5, 18022, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatPort.T", 1,\
 5, 18232, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].heatPort.Q_flow", -1,\
 5, 18233, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].portW.T",\
 "Port temperature [K;degC]", 18309, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].portW.Q_flow",\
 "Heat flow rate [W]", 10714, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].portE.T",\
 "Port temperature [K;degC]", 18310, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].portE.Q_flow",\
 "Heat flow rate [W]", 10715, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].TInitialWall",\
 "Initial wall temperature [K;degC]", 14233, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10716,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].initSteadyState",\
 "[:#(type=Boolean)]", 10717, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].additionalHeatCapacity",\
 "[J/K]", 10718, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].properties.d",\
 "Density [kg/m3|g/cm3]", 10719, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallStateTemperature", 1,\
 1, 157, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10720, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10721, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallStateTemperature",\
 "[K;degC]", 157, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].der(wallStateTemperature)",\
 "[K/s]", 157, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10722, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallStateTemperature", 1,\
 1, 157, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10723, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10724, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10725, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10726, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10727, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10728, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10729, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallStateTemperature", 1,\
 1, 157, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10730, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10731, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14234, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14235, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10732, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14236, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14237, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].geometricMass",\
 "Geometric mass [kg]", 14238, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].SProd_dot",\
 "Produced entropy [W/K]", 18311, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].cellGeometry.length",\
 "[m]", 14239, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].cellGeometry.volume",\
 "[m3]", 14240, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallStateTemperature", 1,\
 1, 158, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[4].heatFlowRateArray_InternalHeatExchanger_a[4]", -1,\
 5, 18023, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatPort.T", 1,\
 5, 18240, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].heatPort.Q_flow", -1,\
 5, 18241, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].portW.T",\
 "Port temperature [K;degC]", 18312, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].portW.Q_flow",\
 "Heat flow rate [W]", 10733, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].portE.T",\
 "Port temperature [K;degC]", 18313, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].portE.Q_flow",\
 "Heat flow rate [W]", 10734, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].TInitialWall",\
 "Initial wall temperature [K;degC]", 14241, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10735,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].initSteadyState",\
 "[:#(type=Boolean)]", 10736, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].additionalHeatCapacity",\
 "[J/K]", 10737, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].properties.d",\
 "Density [kg/m3|g/cm3]", 10738, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallStateTemperature", 1,\
 1, 158, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10739, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10740, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallStateTemperature",\
 "[K;degC]", 158, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].der(wallStateTemperature)",\
 "[K/s]", 158, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10741, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallStateTemperature", 1,\
 1, 158, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10742, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10743, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10744, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10745, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10746, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10747, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10748, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallStateTemperature", 1,\
 1, 158, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10749, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10750, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14242, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14243, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10751, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14244, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14245, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].geometricMass",\
 "Geometric mass [kg]", 14246, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].SProd_dot",\
 "Produced entropy [W/K]", 18314, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].cellGeometry.length",\
 "[m]", 14247, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].cellGeometry.volume",\
 "[m3]", 14248, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallStateTemperature", 1,\
 1, 159, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[5].heatFlowRateArray_InternalHeatExchanger_a[1]", -1,\
 5, 18044, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatPort.T", 1,\
 5, 18248, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].heatPort.Q_flow", -1,\
 5, 18249, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].portW.T",\
 "Port temperature [K;degC]", 18315, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].portW.Q_flow",\
 "Heat flow rate [W]", 10752, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].portE.T",\
 "Port temperature [K;degC]", 18316, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].portE.Q_flow",\
 "Heat flow rate [W]", 10753, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].TInitialWall",\
 "Initial wall temperature [K;degC]", 14249, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10754,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].initSteadyState",\
 "[:#(type=Boolean)]", 10755, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].additionalHeatCapacity",\
 "[J/K]", 10756, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].properties.d",\
 "Density [kg/m3|g/cm3]", 10757, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallStateTemperature", 1,\
 1, 159, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10758, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10759, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallStateTemperature",\
 "[K;degC]", 159, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].der(wallStateTemperature)",\
 "[K/s]", 159, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10760, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallStateTemperature", 1,\
 1, 159, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10761, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10762, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10763, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10764, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10765, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10766, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10767, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallStateTemperature", 1,\
 1, 159, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10768, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10769, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14250, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14251, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10770, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14252, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14253, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].geometricMass",\
 "Geometric mass [kg]", 14254, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].SProd_dot",\
 "Produced entropy [W/K]", 18317, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].cellGeometry.length",\
 "[m]", 14255, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].cellGeometry.volume",\
 "[m3]", 14256, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallStateTemperature", 1,\
 1, 160, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[5].heatFlowRateArray_InternalHeatExchanger_a[2]", -1,\
 5, 18045, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatPort.T", 1,\
 5, 18256, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].heatPort.Q_flow", -1,\
 5, 18257, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].portW.T",\
 "Port temperature [K;degC]", 18318, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].portW.Q_flow",\
 "Heat flow rate [W]", 10771, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].portE.T",\
 "Port temperature [K;degC]", 18319, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].portE.Q_flow",\
 "Heat flow rate [W]", 10772, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].TInitialWall",\
 "Initial wall temperature [K;degC]", 14257, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10773,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].initSteadyState",\
 "[:#(type=Boolean)]", 10774, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].additionalHeatCapacity",\
 "[J/K]", 10775, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].properties.d",\
 "Density [kg/m3|g/cm3]", 10776, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallStateTemperature", 1,\
 1, 160, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10777, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10778, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallStateTemperature",\
 "[K;degC]", 160, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].der(wallStateTemperature)",\
 "[K/s]", 160, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10779, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallStateTemperature", 1,\
 1, 160, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10780, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10781, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10782, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10783, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10784, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10785, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10786, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallStateTemperature", 1,\
 1, 160, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10787, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10788, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14258, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14259, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10789, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14260, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14261, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].geometricMass",\
 "Geometric mass [kg]", 14262, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].SProd_dot",\
 "Produced entropy [W/K]", 18320, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].cellGeometry.length",\
 "[m]", 14263, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].cellGeometry.volume",\
 "[m3]", 14264, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallStateTemperature", 1,\
 1, 161, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[5].heatFlowRateArray_InternalHeatExchanger_a[3]", -1,\
 5, 18046, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatPort.T", 1,\
 5, 18264, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].heatPort.Q_flow", -1,\
 5, 18265, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].portW.T",\
 "Port temperature [K;degC]", 18321, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].portW.Q_flow",\
 "Heat flow rate [W]", 10790, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].portE.T",\
 "Port temperature [K;degC]", 18322, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].portE.Q_flow",\
 "Heat flow rate [W]", 10791, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].TInitialWall",\
 "Initial wall temperature [K;degC]", 14265, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10792,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].initSteadyState",\
 "[:#(type=Boolean)]", 10793, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].additionalHeatCapacity",\
 "[J/K]", 10794, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].properties.d",\
 "Density [kg/m3|g/cm3]", 10795, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallStateTemperature", 1,\
 1, 161, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10796, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10797, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallStateTemperature",\
 "[K;degC]", 161, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].der(wallStateTemperature)",\
 "[K/s]", 161, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10798, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallStateTemperature", 1,\
 1, 161, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10799, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10800, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10801, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10802, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10803, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10804, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10805, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallStateTemperature", 1,\
 1, 161, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10806, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10807, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14266, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14267, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10808, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14268, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14269, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].geometricMass",\
 "Geometric mass [kg]", 14270, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].SProd_dot",\
 "Produced entropy [W/K]", 18323, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].cellGeometry.length",\
 "[m]", 14271, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].cellGeometry.volume",\
 "[m3]", 14272, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].portN.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallStateTemperature", 1,\
 1, 162, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].portN.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tankCell[5].heatFlowRateArray_InternalHeatExchanger_a[4]", -1,\
 5, 18047, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].portS.T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatPort.T", 1,\
 5, 18271, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].portS.Q_flow",\
 "Heat flow rate [W]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].heatPort.Q_flow", -1,\
 5, 18272, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].portW.T",\
 "Port temperature [K;degC]", 18324, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].portW.Q_flow",\
 "Heat flow rate [W]", 10809, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].portE.T",\
 "Port temperature [K;degC]", 18325, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2568)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].portE.Q_flow",\
 "Heat flow rate [W]", 10810, 0.0, 0.0,0.0,0.0,0,2825)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].TInitialWall",\
 "Initial wall temperature [K;degC]", 14273, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].fixedTInitialWall",\
 "if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 10811,\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].initSteadyState",\
 "[:#(type=Boolean)]", 10812, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].additionalHeatCapacity",\
 "[J/K]", 10813, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].properties.d",\
 "Density [kg/m3|g/cm3]", 10814, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].properties.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallStateTemperature", 1,\
 1, 162, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].properties.cp",\
 "Heat capacity [J/(kg.K)]", 10815, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].properties.lambda",\
 "Thermal conductivity [W/(m.K)]", 10816, 40.0, 0.0,0.0,0.0,0,2561)
DeclareState("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallStateTemperature",\
 "[K;degC]", 162, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2592)
DeclareDerivative("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].der(wallStateTemperature)",\
 "[K/s]", 162, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.d",\
 "Density [kg/m3|g/cm3]", 10817, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallStateTemperature", 1,\
 1, 162, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.cp",\
 "Heat capacity [J/(kg.K)]", 10818, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.lambda",\
 "Thermal conductivity [W/(m.K)]", 10819, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10820, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10821, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.solid.cp_nominal",\
 "Specific heat capacity at standard reference point [J/(kg.K)]", 10822, 490.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.solid.lambda_nominal",\
 "Thermal conductivity at standard reference point [W/(m.K)]", 10823, 40.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.solid.d",\
 "Density [kg/m3|g/cm3]", 10824, 7800.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.solid.T",\
 "Temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallStateTemperature", 1,\
 1, 162, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.solid.cp",\
 "Heat capacity [J/(kg.K)]", 10825, 490.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallMaterial.solid.lambda",\
 "Thermal conductivity [W/(m.K)]", 10826, 40.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].heatTransfer.R_WE",\
 "Thermal resistance (W-E) for one cell [K/W]", 14274, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].heatTransfer.R_NS",\
 "Thermal resistance (N-S) for one cell [K/W]", 14275, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].heatTransfer.connectWallCells",\
 "[:#(type=Boolean)]", 10827, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].heatTransfer.R_NS_total",\
 "Thermal resistance (N-S) for total HX [K/W]", 14276, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].heatTransfer.R_WE_total",\
 "Thermal resistance (W-E) for total HX [K/W]", 14277, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].geometricMass",\
 "Geometric mass [kg]", 14278, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].SProd_dot",\
 "Produced entropy [W/K]", 18326, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10828, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10829,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10830, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10831,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10832,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10833, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.liquidPointer.id",\
 "[:#(type=Integer)]", 14279, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10834, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.d", \
"Density [kg/m3|g/cm3]", 18327, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.h", \
"Specific enthalpy [J/kg]", 18328, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.s", \
"Specific entropy [J/(kg.K)]", 18329, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.T", \
"Temperature [K;degC]", 18330, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.cp", \
"Specific heat capacity [J/(kg.K)]", 18331, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.beta", \
"Isobaric expansion coefficient [1/K]", 18332, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.transp.Pr", \
"Prandtl number [1]", 10835, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10836, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.transp.eta", \
"Dynamic viscosity [Pa.s]", 10837, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.transp.sigma",\
 "Surface tension [N/m]", 10838, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.computeFlags",\
 "[:#(type=Integer)]", 14280, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10839, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10840,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10841, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10842,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10843,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10844, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.liquidPointer.id",\
 "[:#(type=Integer)]", 14281, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10845, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.d", \
"Density [kg/m3|g/cm3]", 18333, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.h", \
"Specific enthalpy [J/kg]", 18334, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.s", \
"Specific entropy [J/(kg.K)]", 18335, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.T", \
"Temperature [K;degC]", 18336, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.cp", \
"Specific heat capacity [J/(kg.K)]", 18337, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.beta", \
"Isobaric expansion coefficient [1/K]", 18338, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.transp.Pr", \
"Prandtl number [1]", 10846, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10847, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.transp.eta", \
"Dynamic viscosity [Pa.s]", 10848, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.transp.sigma",\
 "Surface tension [N/m]", 10849, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.computeFlags",\
 "[:#(type=Integer)]", 14282, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10850, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10851,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10852, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10853,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10854,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10855, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].liquidPointer.id",\
 "[:#(type=Integer)]", 14283, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10856, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].d", \
"Density [kg/m3|g/cm3]", 18339, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].h", \
"Specific enthalpy [J/kg]", 18340, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].s", \
"Specific entropy [J/(kg.K)]", 18341, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].T", \
"Temperature [K;degC]", 18342, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].cp", \
"Specific heat capacity [J/(kg.K)]", 18343, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].beta", \
"Isobaric expansion coefficient [1/K]", 18344, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].transp.Pr",\
 "Prandtl number [1]", 10857, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10858, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10859, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].transp.sigma",\
 "Surface tension [N/m]", 10860, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].computeFlags",\
 "[:#(type=Integer)]", 14284, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10861, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10862,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10863, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10864,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10865,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10866, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].liquidPointer.id",\
 "[:#(type=Integer)]", 14285, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10867, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].d", \
"Density [kg/m3|g/cm3]", 18345, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].h", \
"Specific enthalpy [J/kg]", 18346, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].s", \
"Specific entropy [J/(kg.K)]", 18347, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].T", \
"Temperature [K;degC]", 18348, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].cp", \
"Specific heat capacity [J/(kg.K)]", 18349, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].beta", \
"Isobaric expansion coefficient [1/K]", 18350, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].transp.Pr",\
 "Prandtl number [1]", 10868, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10869, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10870, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].transp.sigma",\
 "Surface tension [N/m]", 10871, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].computeFlags",\
 "[:#(type=Integer)]", 14286, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10872, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10873,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10874, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10875,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10876,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10877, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].liquidPointer.id",\
 "[:#(type=Integer)]", 14287, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10878, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].d", \
"Density [kg/m3|g/cm3]", 18351, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].h", \
"Specific enthalpy [J/kg]", 18352, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].s", \
"Specific entropy [J/(kg.K)]", 18353, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].T", \
"Temperature [K;degC]", 18354, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].cp", \
"Specific heat capacity [J/(kg.K)]", 18355, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].beta", \
"Isobaric expansion coefficient [1/K]", 18356, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].transp.Pr",\
 "Prandtl number [1]", 10879, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10880, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10881, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].transp.sigma",\
 "Surface tension [N/m]", 10882, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].computeFlags",\
 "[:#(type=Integer)]", 14288, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10883, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10884,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10885, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10886,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10887,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10888, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].liquidPointer.id",\
 "[:#(type=Integer)]", 14289, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10889, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].d", \
"Density [kg/m3|g/cm3]", 18357, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].h", \
"Specific enthalpy [J/kg]", 18358, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].s", \
"Specific entropy [J/(kg.K)]", 18359, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].T", \
"Temperature [K;degC]", 18360, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].cp", \
"Specific heat capacity [J/(kg.K)]", 18361, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].beta", \
"Isobaric expansion coefficient [1/K]", 18362, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].transp.Pr",\
 "Prandtl number [1]", 10890, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10891, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10892, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].transp.sigma",\
 "Surface tension [N/m]", 10893, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].computeFlags",\
 "[:#(type=Integer)]", 14290, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10894, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10895,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10896, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10897,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10898,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10899, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].liquidPointer.id",\
 "[:#(type=Integer)]", 14291, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10900, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].d", \
"Density [kg/m3|g/cm3]", 18363, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].h", \
"Specific enthalpy [J/kg]", 18364, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].s", \
"Specific entropy [J/(kg.K)]", 18365, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].T", \
"Temperature [K;degC]", 18366, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].cp", \
"Specific heat capacity [J/(kg.K)]", 18367, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].beta", \
"Isobaric expansion coefficient [1/K]", 18368, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].transp.Pr",\
 "Prandtl number [1]", 10901, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10902, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10903, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].transp.sigma",\
 "Surface tension [N/m]", 10904, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].computeFlags",\
 "[:#(type=Integer)]", 14292, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10905, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10906,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10907, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10908,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10909,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10910, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].liquidPointer.id",\
 "[:#(type=Integer)]", 14293, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10911, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].d", \
"Density [kg/m3|g/cm3]", 18369, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].h", \
"Specific enthalpy [J/kg]", 18370, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].s", \
"Specific entropy [J/(kg.K)]", 18371, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].T", \
"Temperature [K;degC]", 18372, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].cp", \
"Specific heat capacity [J/(kg.K)]", 18373, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].beta", \
"Isobaric expansion coefficient [1/K]", 18374, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].transp.Pr",\
 "Prandtl number [1]", 10912, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10913, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10914, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].transp.sigma",\
 "Surface tension [N/m]", 10915, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].computeFlags",\
 "[:#(type=Integer)]", 14294, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10916, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10917,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10918, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10919,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10920,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10921, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].liquidPointer.id",\
 "[:#(type=Integer)]", 14295, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10922, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].d", \
"Density [kg/m3|g/cm3]", 18375, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].h", \
"Specific enthalpy [J/kg]", 18376, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].s", \
"Specific entropy [J/(kg.K)]", 18377, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].T", \
"Temperature [K;degC]", 18378, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].cp", \
"Specific heat capacity [J/(kg.K)]", 18379, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].beta", \
"Isobaric expansion coefficient [1/K]", 18380, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].transp.Pr",\
 "Prandtl number [1]", 10923, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10924, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10925, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].transp.sigma",\
 "Surface tension [N/m]", 10926, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].computeFlags",\
 "[:#(type=Integer)]", 14296, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10927, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10928,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10929, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10930,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10931,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10932, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].liquidPointer.id",\
 "[:#(type=Integer)]", 14297, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10933, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].d", \
"Density [kg/m3|g/cm3]", 18381, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].h", \
"Specific enthalpy [J/kg]", 18382, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].s", \
"Specific entropy [J/(kg.K)]", 18383, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].T", \
"Temperature [K;degC]", 18384, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].cp", \
"Specific heat capacity [J/(kg.K)]", 18385, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].beta", \
"Isobaric expansion coefficient [1/K]", 18386, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].transp.Pr",\
 "Prandtl number [1]", 10934, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10935, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10936, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].transp.sigma",\
 "Surface tension [N/m]", 10937, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].computeFlags",\
 "[:#(type=Integer)]", 14298, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10938, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10939,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10940, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10941,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10942,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10943, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].liquidPointer.id",\
 "[:#(type=Integer)]", 14299, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10944, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].d", \
"Density [kg/m3|g/cm3]", 18387, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].h", \
"Specific enthalpy [J/kg]", 18388, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].s", \
"Specific entropy [J/(kg.K)]", 18389, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].T", \
"Temperature [K;degC]", 18390, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].cp", \
"Specific heat capacity [J/(kg.K)]", 18391, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].beta", \
"Isobaric expansion coefficient [1/K]", 18392, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].transp.Pr",\
 "Prandtl number [1]", 10945, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10946, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10947, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].transp.sigma",\
 "Surface tension [N/m]", 10948, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].computeFlags",\
 "[:#(type=Integer)]", 14300, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10949, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10950,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10951, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10952,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10953,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10954, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].liquidPointer.id",\
 "[:#(type=Integer)]", 14301, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10955, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].d", \
"Density [kg/m3|g/cm3]", 18393, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].h", \
"Specific enthalpy [J/kg]", 18394, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].s", \
"Specific entropy [J/(kg.K)]", 18395, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].T", \
"Temperature [K;degC]", 18396, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].cp", \
"Specific heat capacity [J/(kg.K)]", 18397, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].beta",\
 "Isobaric expansion coefficient [1/K]", 18398, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].transp.Pr",\
 "Prandtl number [1]", 10956, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10957, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10958, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].transp.sigma",\
 "Surface tension [N/m]", 10959, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].computeFlags",\
 "[:#(type=Integer)]", 14302, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10960, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10961,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10962, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10963,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10964,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10965, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].liquidPointer.id",\
 "[:#(type=Integer)]", 14303, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10966, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].d", \
"Density [kg/m3|g/cm3]", 18399, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].h", \
"Specific enthalpy [J/kg]", 18400, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].s", \
"Specific entropy [J/(kg.K)]", 18401, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].T", \
"Temperature [K;degC]", 18402, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].cp", \
"Specific heat capacity [J/(kg.K)]", 18403, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].beta",\
 "Isobaric expansion coefficient [1/K]", 18404, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].transp.Pr",\
 "Prandtl number [1]", 10967, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10968, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10969, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].transp.sigma",\
 "Surface tension [N/m]", 10970, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].computeFlags",\
 "[:#(type=Integer)]", 14304, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10971, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10972,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10973, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10974,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10975,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10976, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].liquidPointer.id",\
 "[:#(type=Integer)]", 14305, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10977, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].d", \
"Density [kg/m3|g/cm3]", 18405, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].h", \
"Specific enthalpy [J/kg]", 18406, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].s", \
"Specific entropy [J/(kg.K)]", 18407, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].T", \
"Temperature [K;degC]", 18408, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].cp", \
"Specific heat capacity [J/(kg.K)]", 18409, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].beta",\
 "Isobaric expansion coefficient [1/K]", 18410, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].transp.Pr",\
 "Prandtl number [1]", 10978, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10979, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10980, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].transp.sigma",\
 "Surface tension [N/m]", 10981, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].computeFlags",\
 "[:#(type=Integer)]", 14306, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10982, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10983,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10984, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10985,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10986,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10987, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].liquidPointer.id",\
 "[:#(type=Integer)]", 14307, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10988, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].d", \
"Density [kg/m3|g/cm3]", 18411, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].h", \
"Specific enthalpy [J/kg]", 18412, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].s", \
"Specific entropy [J/(kg.K)]", 18413, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].T", \
"Temperature [K;degC]", 18414, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].cp", \
"Specific heat capacity [J/(kg.K)]", 18415, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].beta",\
 "Isobaric expansion coefficient [1/K]", 18416, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].transp.Pr",\
 "Prandtl number [1]", 10989, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 10990, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].transp.eta",\
 "Dynamic viscosity [Pa.s]", 10991, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].transp.sigma",\
 "Surface tension [N/m]", 10992, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].computeFlags",\
 "[:#(type=Integer)]", 14308, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 10993, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 10994,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 10995, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 10996,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 10997,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 10998, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].liquidPointer.id",\
 "[:#(type=Integer)]", 14309, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 10999, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].d", \
"Density [kg/m3|g/cm3]", 18417, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].h", \
"Specific enthalpy [J/kg]", 18418, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].s", \
"Specific entropy [J/(kg.K)]", 18419, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].T", \
"Temperature [K;degC]", 18420, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].cp", \
"Specific heat capacity [J/(kg.K)]", 18421, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].beta",\
 "Isobaric expansion coefficient [1/K]", 18422, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].transp.Pr",\
 "Prandtl number [1]", 11000, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 11001, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].transp.eta",\
 "Dynamic viscosity [Pa.s]", 11002, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].transp.sigma",\
 "Surface tension [N/m]", 11003, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].computeFlags",\
 "[:#(type=Integer)]", 14310, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11004, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 11005,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 11006, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11007,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 11008,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11009, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].liquidPointer.id",\
 "[:#(type=Integer)]", 14311, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 11010, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].d", \
"Density [kg/m3|g/cm3]", 18423, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].h", \
"Specific enthalpy [J/kg]", 18424, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].s", \
"Specific entropy [J/(kg.K)]", 18425, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].T", \
"Temperature [K;degC]", 18426, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].cp", \
"Specific heat capacity [J/(kg.K)]", 18427, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].beta",\
 "Isobaric expansion coefficient [1/K]", 18428, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].transp.Pr",\
 "Prandtl number [1]", 11011, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 11012, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].transp.eta",\
 "Dynamic viscosity [Pa.s]", 11013, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].transp.sigma",\
 "Surface tension [N/m]", 11014, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].computeFlags",\
 "[:#(type=Integer)]", 14312, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11015, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 11016,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 11017, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11018,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 11019,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11020, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].liquidPointer.id",\
 "[:#(type=Integer)]", 14313, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 11021, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].d", \
"Density [kg/m3|g/cm3]", 18429, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].h", \
"Specific enthalpy [J/kg]", 18430, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].s", \
"Specific entropy [J/(kg.K)]", 18431, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].T", \
"Temperature [K;degC]", 18432, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].cp", \
"Specific heat capacity [J/(kg.K)]", 18433, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].beta",\
 "Isobaric expansion coefficient [1/K]", 18434, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].transp.Pr",\
 "Prandtl number [1]", 11022, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 11023, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].transp.eta",\
 "Dynamic viscosity [Pa.s]", 11024, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].transp.sigma",\
 "Surface tension [N/m]", 11025, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].computeFlags",\
 "[:#(type=Integer)]", 14314, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].liquidType.fixedMixingRatio",\
 "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11026, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 11027,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].liquidType.nc",\
 "Number of components in Modelica models [:#(type=Integer)]", 11028, 1, \
0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11029,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 11030,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].liquidType.ID",\
 "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11031, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].liquidPointer.id",\
 "[:#(type=Integer)]", 14315, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].computeTransportProperties",\
 "=true, if transport properties are calculated [:#(type=Boolean)]", 11032, \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].d", \
"Density [kg/m3|g/cm3]", 18435, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].p", \
"Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].h", \
"Specific enthalpy [J/kg]", 18436, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].s", \
"Specific entropy [J/(kg.K)]", 18437, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].T", \
"Temperature [K;degC]", 18438, 0.0, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].cp", \
"Specific heat capacity [J/(kg.K)]", 18439, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].beta",\
 "Isobaric expansion coefficient [1/K]", 18440, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].transp.Pr",\
 "Prandtl number [1]", 11033, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].transp.lambda",\
 "Thermal conductivity [W/(m.K)]", 11034, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].transp.eta",\
 "Dynamic viscosity [Pa.s]", 11035, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].transp.sigma",\
 "Surface tension [N/m]", 11036, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].computeFlags",\
 "[:#(type=Integer)]", 14316, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.enableHeatPorts", \
"true, if heat ports are enabled [:#(type=Boolean)]", 11037, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[1].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallStateTemperature", 1,\
 1, 147, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[1].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[2].heatFlowRateArray_InternalHeatExchanger_a[1]", -1,\
 5, 17972, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[2].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallStateTemperature", 1,\
 1, 148, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[2].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[2].heatFlowRateArray_InternalHeatExchanger_a[2]", -1,\
 5, 17973, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[3].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallStateTemperature", 1,\
 1, 149, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[3].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[2].heatFlowRateArray_InternalHeatExchanger_a[3]", -1,\
 5, 17974, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[4].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallStateTemperature", 1,\
 1, 150, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[4].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[2].heatFlowRateArray_InternalHeatExchanger_a[4]", -1,\
 5, 17975, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[5].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallStateTemperature", 1,\
 1, 151, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[5].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[3].heatFlowRateArray_InternalHeatExchanger_a[1]", -1,\
 5, 17996, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[6].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallStateTemperature", 1,\
 1, 152, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[6].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[3].heatFlowRateArray_InternalHeatExchanger_a[2]", -1,\
 5, 17997, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[7].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallStateTemperature", 1,\
 1, 153, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[7].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[3].heatFlowRateArray_InternalHeatExchanger_a[3]", -1,\
 5, 17998, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[8].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallStateTemperature", 1,\
 1, 154, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[8].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[3].heatFlowRateArray_InternalHeatExchanger_a[4]", -1,\
 5, 17999, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[9].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallStateTemperature", 1,\
 1, 155, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[9].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[4].heatFlowRateArray_InternalHeatExchanger_a[1]", -1,\
 5, 18020, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[10].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallStateTemperature", 1,\
 1, 156, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[10].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[4].heatFlowRateArray_InternalHeatExchanger_a[2]", -1,\
 5, 18021, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[11].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallStateTemperature", 1,\
 1, 157, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[11].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[4].heatFlowRateArray_InternalHeatExchanger_a[3]", -1,\
 5, 18022, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[12].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallStateTemperature", 1,\
 1, 158, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[12].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[4].heatFlowRateArray_InternalHeatExchanger_a[4]", -1,\
 5, 18023, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[13].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallStateTemperature", 1,\
 1, 159, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[13].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[5].heatFlowRateArray_InternalHeatExchanger_a[1]", -1,\
 5, 18044, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[14].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallStateTemperature", 1,\
 1, 160, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[14].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[5].heatFlowRateArray_InternalHeatExchanger_a[2]", -1,\
 5, 18045, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[15].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallStateTemperature", 1,\
 1, 161, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[15].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[5].heatFlowRateArray_InternalHeatExchanger_a[3]", -1,\
 5, 18046, 1156)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[16].T", \
"Port temperature [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallStateTemperature", 1,\
 1, 162, 1028)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.heatPort[16].Q_flow", \
"Heat flow rate [W]", "hotWaterTank1.tankCell[5].heatFlowRateArray_InternalHeatExchanger_a[4]", -1,\
 5, 18047, 1156)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.TInitialLiquid", \
"Initial value for liquid temperature [K;degC]", 14317, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.TInitialWall", \
"Initial wall temperature [K;degC]", 14318, 288.15, 0.0,1.7976931348623157E+308,\
300.0,0,2561)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.TInitialLiquid_Cell1",\
 "Initial value for liquid temperature of cell 1 [K;degC]", 820, 283.15, 0.0,\
1.7976931348623157E+308,300.0,0,2608)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.TInitialLiquid_CellN",\
 "Initial value for liquid temperature of cell n [K;degC]", 821, 303.15, 0.0,\
1.7976931348623157E+308,300.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.mixingRatioInitialLiquid[1]",\
 "Initial value for mixing ratio", 11038, 1.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flowStart", \
"start value for total mass flow rate [kg/s]", 822, 0.0001, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.includeDefaultSummary",\
 "Include summary record in model results [:#(type=Boolean)]", 11039, true, \
0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.includeSummary", \
"Include summary record in model results [:#(type=Boolean)]", 11040, true, \
0.0,0.0,0.0,0,2563)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.p_liq_A", \
"Pressure at port A [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.p_liq_B", \
"Pressure at port B [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.T_liq_A", \
"Temperature at port A [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.T", 1,\
 5, 18330, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.T_liq_B", \
"Temperature at port B [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.T", 1,\
 5, 18336, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.T_degC_liq_A",\
 "Temperature at port A [degC;]", 18441, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.T_degC_liq_B",\
 "Temperature at port B [degC;]", 18442, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.h_liq_A", \
"Specific enthalpy at port A [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.h", 1,\
 5, 18328, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.h_liq_B", \
"Specific enthalpy at port B [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.h", 1,\
 5, 18334, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.d_liq_A", \
"Density at port A [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidA.d", 1,\
 5, 18327, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.d_liq_B", \
"Density at port B [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidB.d", 1,\
 5, 18333, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.m_flow_liq_A", \
"Mass flow rate at port A [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.m_flow_liq_B", \
"Mass flow rate at port B [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417,\
 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.V_flow_liq_A",\
 "Volume flow rate at port A [m3/s]", 18443, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.V_flow_liq_B",\
 "Volume flow rate at port B [m3/s]", 18444, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.V_flow_lmin_liq_A",\
 "Volume flow rate in liter per minute at port A [l/min]", 18445, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.V_flow_lmin_liq_B",\
 "Volume flow rate in liter per minute at port B [l/min]", 18446, 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.w_liq_A", \
"Flow velocity at port A [m/s]", 18447, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.w_liq_B", \
"Flow velocity at port B [m/s]", 18448, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.dp_liq", \
"Total pressure drop [Pa|bar]", 11041, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.Q_flow_liq", \
"Total heat flow rate [W]", 18449, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.mass_liq", \
"Total fluid mass [kg]", 18450, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.volume_liq", \
"Total fluid volume [m3]", 14319, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.alpha_average_liq",\
 "Average coefficient of heat transfer [W/(m2.K)]", 14320, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.mass_component",\
 "Total component mass [kg]", 14321, 0.0, 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.n", \
"[:#(type=Integer)]", 11042, 16, 0.0,0.0,0.0,0,2565)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[1]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].T", 1,\
 5, 18342, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[2]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].T", 1,\
 5, 18348, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[3]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].T", 1,\
 5, 18354, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[4]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].T", 1,\
 5, 18360, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[5]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].T", 1,\
 5, 18366, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[6]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].T", 1,\
 5, 18372, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[7]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].T", 1,\
 5, 18378, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[8]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].T", 1,\
 5, 18384, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[9]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].T", 1,\
 5, 18390, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[10]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].T", 1,\
 5, 18396, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[11]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].T", 1,\
 5, 18402, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[12]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].T", 1,\
 5, 18408, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[13]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].T", 1,\
 5, 18414, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[14]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].T", 1,\
 5, 18420, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[15]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].T", 1,\
 5, 18426, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[16]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].T", 1,\
 5, 18432, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_port[17]",\
 "Temperature at port [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].T", 1,\
 5, 18438, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[1]",\
 "Temperature at port [degC;]", 18451, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[2]",\
 "Temperature at port [degC;]", 18452, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[3]",\
 "Temperature at port [degC;]", 18453, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[4]",\
 "Temperature at port [degC;]", 18454, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[5]",\
 "Temperature at port [degC;]", 18455, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[6]",\
 "Temperature at port [degC;]", 18456, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[7]",\
 "Temperature at port [degC;]", 18457, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[8]",\
 "Temperature at port [degC;]", 18458, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[9]",\
 "Temperature at port [degC;]", 18459, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[10]",\
 "Temperature at port [degC;]", 18460, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[11]",\
 "Temperature at port [degC;]", 18461, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[12]",\
 "Temperature at port [degC;]", 18462, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[13]",\
 "Temperature at port [degC;]", 18463, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[14]",\
 "Temperature at port [degC;]", 18464, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[15]",\
 "Temperature at port [degC;]", 18465, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[16]",\
 "Temperature at port [degC;]", 18466, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_port[17]",\
 "Temperature at port [degC;]", 18467, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[1]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].T", 1,\
 1, 131, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[2]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].T", 1,\
 1, 132, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[3]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].T", 1,\
 1, 133, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[4]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].T", 1,\
 1, 134, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[5]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].T", 1,\
 1, 135, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[6]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].T", 1,\
 1, 136, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[7]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].T", 1,\
 1, 137, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[8]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].T", 1,\
 1, 138, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[9]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].T", 1,\
 1, 139, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[10]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].T", 1,\
 1, 140, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[11]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].T", 1,\
 1, 141, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[12]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].T", 1,\
 1, 142, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[13]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].T", 1,\
 1, 143, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[14]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].T", 1,\
 1, 144, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[15]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].T", 1,\
 1, 145, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_liq_cell[16]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].T", 1,\
 1, 146, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[1]",\
 "Temperature in cell [degC;]", 18468, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[2]",\
 "Temperature in cell [degC;]", 18469, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[3]",\
 "Temperature in cell [degC;]", 18470, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[4]",\
 "Temperature in cell [degC;]", 18471, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[5]",\
 "Temperature in cell [degC;]", 18472, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[6]",\
 "Temperature in cell [degC;]", 18473, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[7]",\
 "Temperature in cell [degC;]", 18474, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[8]",\
 "Temperature in cell [degC;]", 18475, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[9]",\
 "Temperature in cell [degC;]", 18476, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[10]",\
 "Temperature in cell [degC;]", 18477, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[11]",\
 "Temperature in cell [degC;]", 18478, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[12]",\
 "Temperature in cell [degC;]", 18479, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[13]",\
 "Temperature in cell [degC;]", 18480, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[14]",\
 "Temperature in cell [degC;]", 18481, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[15]",\
 "Temperature in cell [degC;]", 18482, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_liq_cell[16]",\
 "Temperature in cell [degC;]", 18483, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[1]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallStateTemperature", 1,\
 1, 147, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[2]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallStateTemperature", 1,\
 1, 148, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[3]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallStateTemperature", 1,\
 1, 149, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[4]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallStateTemperature", 1,\
 1, 150, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[5]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallStateTemperature", 1,\
 1, 151, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[6]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallStateTemperature", 1,\
 1, 152, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[7]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallStateTemperature", 1,\
 1, 153, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[8]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallStateTemperature", 1,\
 1, 154, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[9]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallStateTemperature", 1,\
 1, 155, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[10]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallStateTemperature", 1,\
 1, 156, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[11]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallStateTemperature", 1,\
 1, 157, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[12]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallStateTemperature", 1,\
 1, 158, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[13]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallStateTemperature", 1,\
 1, 159, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[14]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallStateTemperature", 1,\
 1, 160, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[15]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallStateTemperature", 1,\
 1, 161, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_wall_cell[16]",\
 "Temperature in cell [K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallStateTemperature", 1,\
 1, 162, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[1]",\
 "Temperature in cell [degC;]", 18484, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[2]",\
 "Temperature in cell [degC;]", 18485, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[3]",\
 "Temperature in cell [degC;]", 18486, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[4]",\
 "Temperature in cell [degC;]", 18487, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[5]",\
 "Temperature in cell [degC;]", 18488, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[6]",\
 "Temperature in cell [degC;]", 18489, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[7]",\
 "Temperature in cell [degC;]", 18490, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[8]",\
 "Temperature in cell [degC;]", 18491, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[9]",\
 "Temperature in cell [degC;]", 18492, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[10]",\
 "Temperature in cell [degC;]", 18493, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[11]",\
 "Temperature in cell [degC;]", 18494, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[12]",\
 "Temperature in cell [degC;]", 18495, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[13]",\
 "Temperature in cell [degC;]", 18496, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[14]",\
 "Temperature in cell [degC;]", 18497, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[15]",\
 "Temperature in cell [degC;]", 18498, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.T_degC_wall_cell[16]",\
 "Temperature in cell [degC;]", 18499, 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[1]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[2]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[3]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[4]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[5]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[6]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[7]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[8]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[9]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[10]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[11]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[12]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[13]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[14]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[15]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[16]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.p_liq_port[17]",\
 "Pressure at port [Pa|bar]", "boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[1]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].h", 1,\
 5, 18340, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[2]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].h", 1,\
 5, 18346, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[3]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].h", 1,\
 5, 18352, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[4]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].h", 1,\
 5, 18358, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[5]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].h", 1,\
 5, 18364, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[6]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].h", 1,\
 5, 18370, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[7]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].h", 1,\
 5, 18376, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[8]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].h", 1,\
 5, 18382, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[9]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].h", 1,\
 5, 18388, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[10]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].h", 1,\
 5, 18394, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[11]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].h", 1,\
 5, 18400, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[12]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].h", 1,\
 5, 18406, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[13]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].h", 1,\
 5, 18412, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[14]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].h", 1,\
 5, 18418, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[15]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].h", 1,\
 5, 18424, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[16]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].h", 1,\
 5, 18430, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.h_liq_port[17]",\
 "Specific enthalpy at port [J/kg]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].h", 1,\
 5, 18436, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[1]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[1].d", 1,\
 5, 18339, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[2]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[2].d", 1,\
 5, 18345, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[3]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[3].d", 1,\
 5, 18351, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[4]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[4].d", 1,\
 5, 18357, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[5]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[5].d", 1,\
 5, 18363, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[6]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[6].d", 1,\
 5, 18369, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[7]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[7].d", 1,\
 5, 18375, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[8]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[8].d", 1,\
 5, 18381, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[9]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[9].d", 1,\
 5, 18387, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[10]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[10].d", 1,\
 5, 18393, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[11]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[11].d", 1,\
 5, 18399, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[12]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[12].d", 1,\
 5, 18405, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[13]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[13].d", 1,\
 5, 18411, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[14]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[14].d", 1,\
 5, 18417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[15]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[15].d", 1,\
 5, 18423, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[16]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[16].d", 1,\
 5, 18429, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.d_liq_port[17]",\
 "Density at port [kg/m3|g/cm3]", "hotWaterTank1.tubeInternalHX_a_sectionOne.portLiquid[17].d", 1,\
 5, 18435, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[1]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[2]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[3]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[4]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[5]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[6]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[7]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[8]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[9]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[10]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[11]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[12]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[13]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[14]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[15]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[16]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.m_flow_liq_port[17]",\
 "Mass flow rate at port [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417,\
 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[1]",\
 "Flow velocity at port [m/s]", 18500, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[2]",\
 "Flow velocity at port [m/s]", 18501, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[3]",\
 "Flow velocity at port [m/s]", 18502, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[4]",\
 "Flow velocity at port [m/s]", 18503, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[5]",\
 "Flow velocity at port [m/s]", 18504, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[6]",\
 "Flow velocity at port [m/s]", 18505, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[7]",\
 "Flow velocity at port [m/s]", 18506, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[8]",\
 "Flow velocity at port [m/s]", 18507, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[9]",\
 "Flow velocity at port [m/s]", 18508, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[10]",\
 "Flow velocity at port [m/s]", 18509, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[11]",\
 "Flow velocity at port [m/s]", 18510, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[12]",\
 "Flow velocity at port [m/s]", 18511, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[13]",\
 "Flow velocity at port [m/s]", 18512, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[14]",\
 "Flow velocity at port [m/s]", 18513, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[15]",\
 "Flow velocity at port [m/s]", 18514, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[16]",\
 "Flow velocity at port [m/s]", 18515, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.w_liq_port[17]",\
 "Flow velocity at port [m/s]", 18516, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[1]",\
 "Heat transfer coefficient [W/(m2.K)]", 14322, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[2]",\
 "Heat transfer coefficient [W/(m2.K)]", 14323, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[3]",\
 "Heat transfer coefficient [W/(m2.K)]", 14324, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[4]",\
 "Heat transfer coefficient [W/(m2.K)]", 14325, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[5]",\
 "Heat transfer coefficient [W/(m2.K)]", 14326, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[6]",\
 "Heat transfer coefficient [W/(m2.K)]", 14327, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[7]",\
 "Heat transfer coefficient [W/(m2.K)]", 14328, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[8]",\
 "Heat transfer coefficient [W/(m2.K)]", 14329, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[9]",\
 "Heat transfer coefficient [W/(m2.K)]", 14330, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[10]",\
 "Heat transfer coefficient [W/(m2.K)]", 14331, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[11]",\
 "Heat transfer coefficient [W/(m2.K)]", 14332, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[12]",\
 "Heat transfer coefficient [W/(m2.K)]", 14333, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[13]",\
 "Heat transfer coefficient [W/(m2.K)]", 14334, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[14]",\
 "Heat transfer coefficient [W/(m2.K)]", 14335, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[15]",\
 "Heat transfer coefficient [W/(m2.K)]", 14336, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.summary.arrays.alpha_liq_cell[16]",\
 "Heat transfer coefficient [W/(m2.K)]", 14337, 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[1]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[1].T", 1, 1, 131,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[2]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[2].T", 1, 1, 132,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[3]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[3].T", 1, 1, 133,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[4]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[4].T", 1, 1, 134,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[5]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[5].T", 1, 1, 135,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[6]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[6].T", 1, 1, 136,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[7]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[7].T", 1, 1, 137,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[8]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[8].T", 1, 1, 138,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[9]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[9].T", 1, 1, 139,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[10]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[10].T", 1, 1, 140,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[11]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[11].T", 1, 1, 141,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[12]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[12].T", 1, 1, 142,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[13]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[13].T", 1, 1, 143,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[14]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[14].T", 1, 1, 144,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[15]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[15].T", 1, 1, 145,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_liq_cell_[16]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.liquidCell[16].T", 1, 1, 146,\
 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[1]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[1].wallStateTemperature", 1,\
 1, 147, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[2]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[2].wallStateTemperature", 1,\
 1, 148, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[3]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[3].wallStateTemperature", 1,\
 1, 149, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[4]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[4].wallStateTemperature", 1,\
 1, 150, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[5]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[5].wallStateTemperature", 1,\
 1, 151, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[6]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[6].wallStateTemperature", 1,\
 1, 152, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[7]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[7].wallStateTemperature", 1,\
 1, 153, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[8]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[8].wallStateTemperature", 1,\
 1, 154, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[9]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[9].wallStateTemperature", 1,\
 1, 155, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[10]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[10].wallStateTemperature", 1,\
 1, 156, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[11]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[11].wallStateTemperature", 1,\
 1, 157, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[12]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[12].wallStateTemperature", 1,\
 1, 158, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[13]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[13].wallStateTemperature", 1,\
 1, 159, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[14]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[14].wallStateTemperature", 1,\
 1, 160, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[15]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[15].wallStateTemperature", 1,\
 1, 161, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.T_wall_cell_[16]", \
"[K;degC]", "hotWaterTank1.tubeInternalHX_a_sectionOne.wallCell[16].wallStateTemperature", 1,\
 1, 162, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[1]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[2]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[3]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[4]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[5]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[6]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[7]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[8]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[9]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[10]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[11]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[12]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[13]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[14]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[15]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[16]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareAlias2("hotWaterTank1.tubeInternalHX_a_sectionOne.m_flow_liq_port_[17]", \
"[kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 1024)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.fixedTInitialWall", \
"if true, force usage of initial value TInitialWall [:#(type=Boolean)]", 11043, \
true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.tubeInternalHX_a_sectionOne.useHeatFlowRateHomotopy",\
 "If true: heatFlowRateLiquidHomotopy is used in simplified equation [:#(type=Boolean)]",\
 11044, true, 0.0,0.0,0.0,0,2563)
DeclareParameter("hotWaterTank1.tubeInternalHX_a_sectionOne.heatFlowRateLiquidHomotopy",\
 "Constant heat flow rate used in simplified equation (value>0 => into Liquid) [W]",\
 823, 0, 0.0,0.0,0.0,0,2608)
DeclareVariable("hotWaterTank1.includeDefaultSummary", "Include summary record in model results [:#(type=Boolean)]",\
 11045, true, 0.0,0.0,0.0,0,515)
DeclareVariable("hotWaterTank1.includeSummary", "Include summary record in model results [:#(type=Boolean)]",\
 11046, true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.geometryIsValid_a", "[:#(type=Boolean)]", 11047, \
true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.geometryIsValid_b", "[:#(type=Boolean)]", 11048, \
true, 0.0,0.0,0.0,0,2563)
DeclareVariable("hotWaterTank1.v_[1]", "[:#(type=Integer)]", 11049, 1, 0.0,0.0,\
0.0,0,2565)
DeclareVariable("hotWaterTank1.v_[2]", "[:#(type=Integer)]", 11050, 3, 0.0,0.0,\
0.0,0,2565)
DeclareVariable("hotWaterTank1.v_[3]", "[:#(type=Integer)]", 11051, 5, 0.0,0.0,\
0.0,0,2565)
DeclareVariable("hotWaterTank1.v_[4]", "[:#(type=Integer)]", 11052, 7, 0.0,0.0,\
0.0,0,2565)
DeclareVariable("hotWaterTank1.v_[5]", "[:#(type=Integer)]", 11053, 9, 0.0,0.0,\
0.0,0,2565)
DeclareVariable("hotWaterTank1.summary.nCells", "Number of tank cells [:#(type=Integer)]",\
 11054, 10, 0.0,0.0,0.0,0,517)
DeclareVariable("hotWaterTank1.summary.nTemperatureSensors", "Number of temperatur sensors [:#(type=Integer)]",\
 11055, 5, 0.0,0.0,0.0,0,517)
DeclareVariable("hotWaterTank1.summary.T_averageTemperature", "Average tank temperature [K;degC]",\
 18517, 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareAlias2("hotWaterTank1.summary.T_Sensors[1]", "Temperature sensor [K;degC]",\
 "hotWaterTank1.tankCell[1].T", 1, 1, 121, 0)
DeclareAlias2("hotWaterTank1.summary.T_Sensors[2]", "Temperature sensor [K;degC]",\
 "hotWaterTank1.tankCell[3].T", 1, 1, 123, 0)
DeclareAlias2("hotWaterTank1.summary.T_Sensors[3]", "Temperature sensor [K;degC]",\
 "hotWaterTank1.tankCell[5].T", 1, 1, 125, 0)
DeclareAlias2("hotWaterTank1.summary.T_Sensors[4]", "Temperature sensor [K;degC]",\
 "hotWaterTank1.tankCell[7].T", 1, 1, 127, 0)
DeclareAlias2("hotWaterTank1.summary.T_Sensors[5]", "Temperature sensor [K;degC]",\
 "hotWaterTank1.tankCell[9].T", 1, 1, 129, 0)
DeclareVariable("hotWaterTank1.summary.Q_flow_ambient", "Heat flow loss to ambient [W]",\
 18518, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[1]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[1].T", 1, 1, 121, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[2]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[2].T", 1, 1, 122, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[3]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[3].T", 1, 1, 123, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[4]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[4].T", 1, 1, 124, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[5]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[5].T", 1, 1, 125, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[6]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[6].T", 1, 1, 126, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[7]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[7].T", 1, 1, 127, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[8]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[8].T", 1, 1, 128, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[9]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[9].T", 1, 1, 129, 0)
DeclareAlias2("hotWaterTank1.summary.T_perTankCell[10]", "Temperature per tank cell [K;degC]",\
 "hotWaterTank1.tankCell[10].T", 1, 1, 130, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[1]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[1].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 17935, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[2]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[2].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 17955, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[3]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[3].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 17979, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[4]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[4].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 18003, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[5]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[5].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 18027, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[6]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[6].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 18051, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[7]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[7].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 18070, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[8]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[8].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 18089, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[9]", \
"Analogy heat flow due to buoyancy per tank cell [W]", "hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[2].Q_flow", 1,\
 5, 18108, 0)
DeclareVariable("hotWaterTank1.summary.Q_flow_buoyancyPerTankCell[10]", \
"Analogy heat flow due to buoyancy per tank cell [W]", 11056, 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[1]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[1].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 17934, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[2]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[2].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 17954, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[3]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[3].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 17978, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[4]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[4].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 18002, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[5]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[5].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 18026, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[6]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[6].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 18050, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[7]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[7].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 18069, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[8]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[8].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 18088, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[9]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 "hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", 1,\
 5, 18107, 0)
DeclareVariable("hotWaterTank1.summary.Q_flow_conductionTopPerTankCell[10]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell above [W]",\
 11057, 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[1]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 11058, 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[2]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[1].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 17934, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[3]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[2].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 17954, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[4]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[3].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 17978, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[5]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[4].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18002, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[6]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[5].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18026, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[7]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[6].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18050, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[8]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[7].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18069, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[9]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[8].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18088, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_conductionBottomPerTankCell[10]", \
"Heat flow rate per tank cell due to thermal conduction to tank cell below [W]",\
 "hotWaterTank1.tankCell[9].heatPortTop_thermalConductivityBuoyancy[1].Q_flow", -1,\
 5, 18107, 0)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[1]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11059, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[2]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11060, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[3]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11061, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[4]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11062, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[5]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11063, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[6]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11064, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[7]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11065, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[8]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11066, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[9]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11067, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_heatExchangerPerTankCell[10]", \
"Heat flow rate per tank cell due to mantle heat exchanger [W]", 11068, 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[1]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", 11069, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareAlias2("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[2]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", \
"hotWaterTank1.tankCell[2].heatFlowRate_SumHeatExchangerInternal_a", 1, 5, 17976,\
 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[3]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", \
"hotWaterTank1.tankCell[3].heatFlowRate_SumHeatExchangerInternal_a", 1, 5, 18000,\
 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[4]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", \
"hotWaterTank1.tankCell[4].heatFlowRate_SumHeatExchangerInternal_a", 1, 5, 18024,\
 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[5]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", \
"hotWaterTank1.tankCell[5].heatFlowRate_SumHeatExchangerInternal_a", 1, 5, 18048,\
 0)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[6]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", 11070, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[7]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", 11071, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[8]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", 11072, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[9]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", 11073, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_a[10]",\
 "Heat flow rate per tank cell due to internal heat exchanger a [W]", 11074, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[1]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11075, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[2]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11076, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[3]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11077, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[4]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11078, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[5]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11079, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[6]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11080, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[7]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11081, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[8]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11082, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[9]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11083, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("hotWaterTank1.summary.Q_flow_internalHeatExchangerPerTankCell_b[10]",\
 "Heat flow rate per tank cell due to internal heat exchanger b [W]", 11084, 0.0,\
 0.0,0.0,0.0,0,513)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[1]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[1]", -1,\
 5, 18141, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[2]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[2]", -1,\
 5, 18142, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[3]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[3]", -1,\
 5, 18143, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[4]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[4]", -1,\
 5, 18144, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[5]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[5]", -1,\
 5, 18145, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[6]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[6]", -1,\
 5, 18146, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[7]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[7]", -1,\
 5, 18147, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[8]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[8]", -1,\
 5, 18148, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[9]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[9]", -1,\
 5, 18149, 0)
DeclareAlias2("hotWaterTank1.summary.Q_flow_ambientPerTankCell[10]", \
"Heat flow rate per tank cell to ambient [W]", "hotWaterTank1.ambientBoundary.heatFlowRate_Ambient[10]", -1,\
 5, 18150, 0)
DeclareVariable("hotWaterTank1.inletPorts[1].liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11085, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.inletPorts[1].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 11086,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.inletPorts[1].liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11087, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.inletPorts[1].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11088,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.inletPorts[1].liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11089, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.inletPorts[1].liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11090, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.inletPorts[1].p", "Pressure [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 4)
DeclareAlias2("hotWaterTank1.inletPorts[1].m_flow", "Mass flow rate [kg/s]", \
"boundary.m_flow_in_.k", -1, 5, 14400, 132)
DeclareAlias2("hotWaterTank1.inletPorts[1].h_outflow", "Specific enthalpy [J/kg]",\
 "hotWaterTank1.globalData.tankCellsProperties[1].h", 1, 5, 17851, 4)
DeclareVariable("hotWaterTank1.outletPorts[1].liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11091, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("hotWaterTank1.outletPorts[1].liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 11092,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("hotWaterTank1.outletPorts[1].liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11093, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("hotWaterTank1.outletPorts[1].liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11094,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.outletPorts[1].liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 11095,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("hotWaterTank1.outletPorts[1].liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11096, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("hotWaterTank1.outletPorts[1].p", "Pressure [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 4)
DeclareAlias2("hotWaterTank1.outletPorts[1].m_flow", "Mass flow rate [kg/s]", \
"boundary.m_flow_in_.k", 1, 5, 14400, 132)
DeclareAlias2("hotWaterTank1.outletPorts[1].h_outflow", "Specific enthalpy [J/kg]",\
 "hotWaterTank1.globalData.tankCellsProperties[10].h", 1, 5, 17923, 4)
DeclareAlias2("hotWaterTank1.temperatureSensorsOutput[1]", "Temperature sensors output {T1, T2, ..., Tn}",\
 "hotWaterTank1.tankCell[1].T", 1, 1, 121, 0)
DeclareAlias2("hotWaterTank1.temperatureSensorsOutput[2]", "Temperature sensors output {T1, T2, ..., Tn}",\
 "hotWaterTank1.tankCell[3].T", 1, 1, 123, 0)
DeclareAlias2("hotWaterTank1.temperatureSensorsOutput[3]", "Temperature sensors output {T1, T2, ..., Tn}",\
 "hotWaterTank1.tankCell[5].T", 1, 1, 125, 0)
DeclareAlias2("hotWaterTank1.temperatureSensorsOutput[4]", "Temperature sensors output {T1, T2, ..., Tn}",\
 "hotWaterTank1.tankCell[7].T", 1, 1, 127, 0)
DeclareAlias2("hotWaterTank1.temperatureSensorsOutput[5]", "Temperature sensors output {T1, T2, ..., Tn}",\
 "hotWaterTank1.tankCell[9].T", 1, 1, 129, 0)
DeclareVariable("pump.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11097, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("pump.liquidType.nc_propertyCalculation", "Number of components for fluid property calculations [:#(type=Integer)]",\
 11098, 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("pump.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11099, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("pump.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11100,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.liquidType.defaultMixingRatio[1]", "Default composition for models in Modelica (={1} for pure components)",\
 11101, 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11102, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("pump.portA.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11103, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("pump.portA.liquidType.nc_propertyCalculation", "Number of components for fluid property calculations [:#(type=Integer)]",\
 11104, 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("pump.portA.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11105, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("pump.portA.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11106,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.portA.liquidType.defaultMixingRatio[1]", "Default composition for models in Modelica (={1} for pure components)",\
 11107, 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.portA.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11108, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("pump.portA.p", "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5,\
 14357, 4)
DeclareAlias2("pump.portA.m_flow", "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", 1,\
 5, 14417, 132)
DeclareVariable("pump.portA.h_outflow", "Specific enthalpy [J/kg]", 18519, 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("pump.portB.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11109, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("pump.portB.liquidType.nc_propertyCalculation", "Number of components for fluid property calculations [:#(type=Integer)]",\
 11110, 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("pump.portB.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11111, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("pump.portB.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11112,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.portB.liquidType.defaultMixingRatio[1]", "Default composition for models in Modelica (={1} for pure components)",\
 11113, 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.portB.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11114, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("pump.portB.p", "Pressure [Pa|bar]", "heatPumpCycle1.WaterInput.p", 1,\
 5, 14416, 4)
DeclareAlias2("pump.portB.m_flow", "Mass flow rate [kg/s]", "heatPumpCycle1.WaterInput.m_flow", -1,\
 5, 14417, 132)
DeclareVariable("pump.portB.h_outflow", "Specific enthalpy [J/kg]", 18520, 0.0, \
0.0,0.0,0.0,0,520)
DeclareParameter("pump.m_flowStart", "start value for mass flow rate [kg/s]", 824,\
 1E-06, 0.0,0.0,0.0,0,2608)
DeclareVariable("pump.includeDefaultSummary", "Include summary record in model results [:#(type=Boolean)]",\
 11115, true, 0.0,0.0,0.0,0,515)
DeclareVariable("pump.includeSummary", "Include summary record in model results [:#(type=Boolean)]",\
 11116, true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pump.summary.p_liq_A", "Pressure at port A [Pa|bar]", \
"boundaryWater.p_in_.k", 1, 5, 14357, 0)
DeclareAlias2("pump.summary.p_liq_B", "Pressure at port B [Pa|bar]", \
"heatPumpCycle1.WaterInput.p", 1, 5, 14416, 0)
DeclareVariable("pump.summary.T_liq_A", "Temperature at port A [K;degC]", 18521,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("pump.summary.T_liq_B", "Temperature at port B [K;degC]", 18522,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareVariable("pump.summary.T_degC_liq_A", "Temperature at port A [degC;]", 18523,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.summary.T_degC_liq_B", "Temperature at port B [degC;]", 18524,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.summary.h_liq_A", "Specific enthalpy at port A [J/kg]", 18525,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.summary.h_liq_B", "Specific enthalpy at port B [J/kg]", 18526,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.summary.d_liq_A", "Density at port A [kg/m3|g/cm3]", 18527,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("pump.summary.d_liq_B", "Density at port B [kg/m3|g/cm3]", 18528,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,512)
DeclareVariable("pump.summary.dp_liq", "Total pressure increase [Pa|bar]", 18529,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pump.summary.m_flow_liq_A", "Mass flow rate at port A [kg/s]", \
"heatPumpCycle1.WaterInput.m_flow", 1, 5, 14417, 0)
DeclareAlias2("pump.summary.m_flow_liq_B", "Mass flow rate at port B [kg/s]", \
"heatPumpCycle1.WaterInput.m_flow", -1, 5, 14417, 0)
DeclareVariable("pump.summary.mass_liq", "Total liquid mass [kg]", 11117, 0, 0.0,\
1.7976931348623157E+308,0.0,0,513)
DeclareVariable("pump.summary.volume_liq", "Total liquid volume [m3]", 11118, 0,\
 0.0,0.0,0.0,0,513)
DeclareAlias2("pump.summary.P_hyd", "Hydraulic power [W]", "pump.P_hyd", 1, 5, 18541,\
 0)
DeclareVariable("pump.summary.P_shaft", "Shaft power [W]", 18530, 0.0, 0.0,0.0,\
0.0,0,512)
DeclareAlias2("pump.summary.P_loss", "Power loss [W]", "pump.P_loss", 1, 5, 18543,\
 0)
DeclareAlias2("pump.summary.eta", "Efficiency: P_hyd/P_shaft [1]", "pump.eta", 1,\
 7, 829, 0)
DeclareVariable("pump.summary.V_flow_liq_A", "Volume flow rate at port A [m3/s]",\
 18531, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.summary.V_flow_liq_B", "Volume flow rate at port B [m3/s]",\
 18532, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.summary.V_flow_lmin_liq_A", "Volume flow rate in liter per minute at port A [l/min]",\
 18533, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.summary.V_flow_lmin_liq_B", "Volume flow rate in liter per minute at port B [l/min]",\
 18534, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.use_dpInput", "= true, if dp defined by input [:#(type=Boolean)]",\
 11119, false, 0.0,0.0,0.0,0,515)
DeclareParameter("pump.dpFixed", "Fixed value for pressure increase [Pa|bar]", 825,\
 10000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("pump.use_massFlowRateInput", "= true, if m_flow defined by input [:#(type=Boolean)]",\
 11120, false, 0.0,0.0,0.0,0,515)
DeclareParameter("pump.m_flowFixed", "Fixed value for liquid mass flow rate [kg/s]",\
 826, 0.03, 0.0,0.0,0.0,0,560)
DeclareVariable("pump.use_volumeFlowRateInput", "= true, if V_flow defined by input [:#(type=Boolean)]",\
 11121, false, 0.0,0.0,0.0,0,515)
DeclareParameter("pump.V_flowFixed", "Fixed value for liquid volume flow rate [m3/s]",\
 827, 0.00025, 0.0,0.0,0.0,0,560)
DeclareParameter("pump.TStart", "start value for outlet temperature  [K;degC]", 828,\
 293.15, 0.0,1.7976931348623157E+308,300.0,0,2608)
DeclareVariable("pump.h", "Specific liquid enthalpy [J/kg]", 18535, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("pump.liquid.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11122, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("pump.liquid.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11123,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("pump.liquid.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11124, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("pump.liquid.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11125,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.liquid.liquidType.defaultMixingRatio[1]", "Default composition for models in Modelica (={1} for pure components)",\
 11126, 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.liquid.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11127, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("pump.liquid.liquidPointer.id", "[:#(type=Integer)]", 14338, 0, \
0.0,0.0,0.0,0,2565)
DeclareVariable("pump.liquid.computeTransportProperties", "=true, if transport properties are calculated [:#(type=Boolean)]",\
 11128, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pump.liquid.d", "Density [kg/m3|g/cm3]", 18536, 0.0, 0.0,\
1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("pump.liquid.p", "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1, 5,\
 14357, 1024)
DeclareAlias2("pump.liquid.h", "Specific enthalpy [J/kg]", "pump.h", 1, 5, 18535,\
 1024)
DeclareVariable("pump.liquid.s", "Specific entropy [J/(kg.K)]", 18537, 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("pump.liquid.T", "Temperature [K;degC]", 18538, 288.15, 0.0,\
1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("pump.liquid.cp", "Specific heat capacity [J/(kg.K)]", 18539, \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pump.liquid.beta", "Isobaric expansion coefficient [1/K]", 18540,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pump.liquid.transp.Pr", "Prandtl number [1]", 11129, -1.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("pump.liquid.transp.lambda", "Thermal conductivity [W/(m.K)]", 11130,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pump.liquid.transp.eta", "Dynamic viscosity [Pa.s]", 11131, \
-1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("pump.liquid.transp.sigma", "Surface tension [N/m]", 11132, -1.0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("pump.liquid.computeFlags", "[:#(type=Integer)]", 14339, 0, \
0.0,0.0,0.0,0,2565)
DeclareVariable("pump.dp_in_", "", 11133, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pump.m_flow_in_", "", 11134, 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pump.V_flow_in_", "", 11135, 0, 0.0,0.0,0.0,0,2561)
DeclareParameter("pump.eta", "Pump efficiency (used to calculate Shaft Power, which is entirely added to Fluid's Energy Balance) [1]",\
 829, 0.4, 0.0,1.7976931348623157E+308,0.0,0,560)
DeclareParameter("pump.etaDrive", "Drive efficiency (used to calculate Drive Power; does not affect Fluid's Energy Balance) [1]",\
 830, 1.0, 0.0,1.7976931348623157E+308,0.0,0,560)
DeclareParameter("pump.densityHomotopy", "Nominal density for simplified equation system [kg/m3|g/cm3]",\
 831, 1000, 0.0,1.7976931348623157E+308,0.0,0,560)
DeclareVariable("pump.P_hyd", "Hydraulic power [W]", 18541, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.P_drive", "Drive power [W]", 18542, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.P_loss", "Power loss [W]", 18543, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pump.dp", "Pressure increase [Pa|bar]", 18544, 0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pump.volumeFlowRate", "[m3/s]", "pump.V_flowFixed", 1, 7, 827, 0)
DeclareVariable("pump.getInputs.m_flow_in", "Prescribed mass flow rate", 11136, 0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("pump.getInputs.V_flow_in", "Prescribed volume flow rate", 11137,\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pump.getInputs.dp_in", "Prescribed pressure increase", 11138, 0,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("pump.liquidOut.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11139, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("pump.liquidOut.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11140,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("pump.liquidOut.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11141, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("pump.liquidOut.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11142,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.liquidOut.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11143, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("pump.liquidOut.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11144, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("pump.liquidOut.liquidPointer.id", "[:#(type=Integer)]", 14340, 0,\
 0.0,0.0,0.0,0,2565)
DeclareParameter("pump.liquidOut.computeTransportProperties", "=true, if transport properties are calculated [:#(type=Boolean)]",\
 832, false, 0.0,0.0,0.0,0,2610)
DeclareVariable("boundaryWater.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11145, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundaryWater.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11146,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundaryWater.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11147, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11148,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11149, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11150, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.port.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11151, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundaryWater.port.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11152,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundaryWater.port.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11153, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.port.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11154,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.port.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11155, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.port.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11156, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("boundaryWater.port.p", "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1,\
 5, 14357, 4)
DeclareVariable("boundaryWater.port.m_flow", "Mass flow rate [kg/s]", 18545, 0.0,\
 0.0,0.0,0.0,0,776)
DeclareVariable("boundaryWater.port.h_outflow", "Specific enthalpy [J/kg]", 14341,\
 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("boundaryWater.liquid_ph.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11157, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundaryWater.liquid_ph.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11158,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_ph.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11159, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_ph.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11160,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.liquid_ph.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11161, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.liquid_ph.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11162, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_ph.liquidPointer.id", "[:#(type=Integer)]",\
 14342, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundaryWater.liquid_ph.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11163, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("boundaryWater.liquid_ph.d", "Density [kg/m3|g/cm3]", \
"boundaryWater.d", 1, 5, 14356, 1024)
DeclareAlias2("boundaryWater.liquid_ph.p", "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1,\
 5, 14357, 1024)
DeclareAlias2("boundaryWater.liquid_ph.h", "Specific enthalpy [J/kg]", \
"boundaryWater.port.h_outflow", 1, 5, 14341, 1024)
DeclareVariable("boundaryWater.liquid_ph.s", "Specific entropy [J/(kg.K)]", 14343,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_ph.T", "Temperature [K;degC]", 14344, \
288.15, 0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("boundaryWater.liquid_ph.cp", "Specific heat capacity [J/(kg.K)]",\
 14345, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_ph.beta", "Isobaric expansion coefficient [1/K]",\
 14346, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_ph.transp.Pr", "Prandtl number [1]", 11164,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_ph.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11165, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_ph.transp.eta", "Dynamic viscosity [Pa.s]",\
 11166, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_ph.transp.sigma", "Surface tension [N/m]",\
 11167, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_ph.computeFlags", "[:#(type=Integer)]", 14347,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundaryWater.liquid_pT.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11168, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundaryWater.liquid_pT.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11169,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_pT.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11170, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_pT.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11171,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.liquid_pT.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11172, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.liquid_pT.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11173, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_pT.liquidPointer.id", "[:#(type=Integer)]",\
 14348, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundaryWater.liquid_pT.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11174, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("boundaryWater.liquid_pT.d", "Density [kg/m3|g/cm3]", 14349, 0.0,\
 0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("boundaryWater.liquid_pT.h", "Specific enthalpy [J/kg]", \
"boundaryWater.port.h_outflow", 1, 5, 14341, 1024)
DeclareAlias2("boundaryWater.liquid_pT.p", "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1,\
 5, 14357, 1024)
DeclareVariable("boundaryWater.liquid_pT.s", "Specific entropy [J/(kg.K)]", 14350,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("boundaryWater.liquid_pT.T", "Temperature [K;degC]", \
"boundaryWater.T_in_.k", 1, 5, 14360, 1024)
DeclareVariable("boundaryWater.liquid_pT.cp", "Specific heat capacity [J/(kg.K)]",\
 14351, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_pT.beta", "Isobaric expansion coefficient [1/K]",\
 14352, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_pT.transp.Pr", "Prandtl number [1]", 11175,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_pT.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11176, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_pT.transp.eta", "Dynamic viscosity [Pa.s]",\
 11177, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_pT.transp.sigma", "Surface tension [N/m]",\
 11178, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_pT.computeFlags", "[:#(type=Integer)]", 14353,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundaryWater.liquid_inStream.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11179, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundaryWater.liquid_inStream.liquidType.nc_propertyCalculation",\
 "Number of components for fluid property calculations [:#(type=Integer)]", 11180,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_inStream.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11181, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_inStream.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11182,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.liquid_inStream.liquidType.defaultMixingRatio[1]",\
 "Default composition for models in Modelica (={1} for pure components)", 11183,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.liquid_inStream.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11184, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.liquid_inStream.liquidPointer.id", \
"[:#(type=Integer)]", 14354, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundaryWater.liquid_inStream.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11185, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("boundaryWater.liquid_inStream.d", "Density [kg/m3|g/cm3]", 18546,\
 0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("boundaryWater.liquid_inStream.p", "Pressure [Pa|bar]", \
"boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("boundaryWater.liquid_inStream.h", "Specific enthalpy [J/kg]", 18547,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundaryWater.liquid_inStream.s", "Specific entropy [J/(kg.K)]",\
 18548, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundaryWater.liquid_inStream.T", "Temperature [K;degC]", 18549,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("boundaryWater.liquid_inStream.cp", "Specific heat capacity [J/(kg.K)]",\
 18550, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundaryWater.liquid_inStream.beta", "Isobaric expansion coefficient [1/K]",\
 18551, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundaryWater.liquid_inStream.transp.Pr", "Prandtl number [1]",\
 11186, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_inStream.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11187, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_inStream.transp.eta", "Dynamic viscosity [Pa.s]",\
 11188, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_inStream.transp.sigma", "Surface tension [N/m]",\
 11189, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.liquid_inStream.computeFlags", "[:#(type=Integer)]",\
 14355, 0, 0.0,0.0,0.0,0,2565)
DeclareAlias2("boundaryWater.m_flow", "Mass flow rate [kg/s]", "boundaryWater.port.m_flow", 1,\
 5, 18545, 1024)
DeclareVariable("boundaryWater.d", "Density [kg/m3|g/cm3]", 14356, 0.0, 0.0,\
1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("boundaryWater.h", "Specific enthalpy [J/kg]", "boundaryWater.port.h_outflow", 1,\
 5, 14341, 1024)
DeclareAlias2("boundaryWater.p", "Pressure [Pa|bar]", "boundaryWater.p_in_.k", 1,\
 5, 14357, 1024)
DeclareAlias2("boundaryWater.T", "Temperature [K;degC]", "boundaryWater.T_in_.k", 1,\
 5, 14360, 1024)
DeclareAlias2("boundaryWater.summary.p_liq", "Pressure at port [Pa|bar]", \
"boundaryWater.p_in_.k", 1, 5, 14357, 0)
DeclareVariable("boundaryWater.summary.T_liq", "Temperature at port [K;degC]", 18552,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareAlias2("boundaryWater.summary.T_outflow_liq", "Outflowing temperature [K;degC]",\
 "boundaryWater.T_in_.k", 1, 5, 14360, 0)
DeclareVariable("boundaryWater.summary.h_liq", "Specific enthalpy at port [J/kg]",\
 18553, 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("boundaryWater.summary.m_flow_liq", "Mass flow rate at port [kg/s]",\
 "boundaryWater.port.m_flow", 1, 5, 18545, 0)
DeclareVariable("boundaryWater.summary.V_flow_liq", "Volume flow rate at port [m3/s]",\
 18554, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("boundaryWater.use_pressureInput", "= true, if p defined by input [:#(type=Boolean)]",\
 11190, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundaryWater.pFixed", "Fixed value for p [Pa|bar]", 833, \
101300.0, 0.0,0.0,0.0,0,560)
DeclareVariable("boundaryWater.use_massFlowRateInput", "= true, if m_flow defined by input [:#(type=Boolean)]",\
 11191, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundaryWater.m_flowFixed", "Fixed value for m_flow [kg/s]", 834,\
 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("boundaryWater.use_volumeFlowRateInput", "= true, if V_flow defined by input [:#(type=Boolean)]",\
 11192, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundaryWater.V_flowFixed", "Fixed value for V_flow [m3/s]", 835,\
 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("boundaryWater.use_specificEnthalpyInput", "= true if h defined by input [:#(type=Boolean)]",\
 11193, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundaryWater.hFixed", "Fixed value for h [J/kg]", 836, \
350000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("boundaryWater.use_temperatureInput", "= true, if T defined by input [:#(type=Boolean)]",\
 11194, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundaryWater.TFixed", "Fixed value for T [K;degC]", 837, \
298.15, 0.0,1.7976931348623157E+308,300.0,0,560)
DeclareVariable("boundaryWater.use_mixingRatioInput", "= true, if xi defined by input [:#(type=Boolean)]",\
 11195, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("boundaryWater.mixingRatioFixed[1]", "Fixed value xi", 11196, \
1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.p_in_.k", "Constant output value", 14357, 1, 0.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareAlias2("boundaryWater.p_in_.y", "Connector of Real output signal", \
"boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareVariable("boundaryWater.m_flow_in_.k", "Constant output value", 14358, 1,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("boundaryWater.m_flow_in_.y", "Connector of Real output signal", \
"boundaryWater.m_flow_in_.k", 1, 5, 14358, 1024)
DeclareVariable("boundaryWater.V_flow_in_.k", "Constant output value", 14359, 1,\
 0.0,0.0,0.0,0,2561)
DeclareAlias2("boundaryWater.V_flow_in_.y", "Connector of Real output signal", \
"boundaryWater.V_flow_in_.k", 1, 5, 14359, 1024)
DeclareVariable("boundaryWater.T_in_.k", "Constant output value", 14360, 1, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareAlias2("boundaryWater.T_in_.y", "Connector of Real output signal", \
"boundaryWater.T_in_.k", 1, 5, 14360, 1024)
DeclareVariable("boundaryWater.h_in_.k", "Constant output value", 14361, 1, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("boundaryWater.h_in_.y", "Connector of Real output signal", \
"boundaryWater.h_in_.k", 1, 5, 14361, 1024)
DeclareVariable("boundaryWater.getInputs.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11197, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundaryWater.getInputs.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11198,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundaryWater.getInputs.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11199, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundaryWater.getInputs.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11200,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.getInputs.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11201, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundaryWater.getInputs.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11202, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("boundaryWater.getInputs.p_in", "Prescribed boundary pressure", \
"boundaryWater.p_in_.k", 1, 5, 14357, 1024)
DeclareAlias2("boundaryWater.getInputs.h_in", "Prescribed boundary specific enthalpy",\
 "boundaryWater.h_in_.k", 1, 5, 14361, 1024)
DeclareAlias2("boundaryWater.getInputs.T_in", "Prescribed boundary temperature",\
 "boundaryWater.T_in_.k", 1, 5, 14360, 1024)
DeclareAlias2("boundaryWater.getInputs.m_flow_in", "Prescribed boundary mass flow rate",\
 "boundaryWater.m_flow_in_.k", 1, 5, 14358, 1024)
DeclareAlias2("boundaryWater.getInputs.V_flow_in", "Prescribed boundary volume flow rate",\
 "boundaryWater.V_flow_in_.k", 1, 5, 14359, 1024)
DeclareVariable("boundaryWater.getInputs.mixingRatio_in[1]", "Prescribed boundary mass fraction",\
 11203, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.mixingRatio_in_[1].k", "Constant output value", 11204,\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundaryWater.mixingRatio_in_[1].y", "Connector of Real output signal",\
 11205, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11206, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary1.liquidType.nc_propertyCalculation", "Number of components for fluid property calculations [:#(type=Integer)]",\
 11207, 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary1.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11208, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11209,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.liquidType.defaultMixingRatio[1]", "Default composition for models in Modelica (={1} for pure components)",\
 11210, 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11211, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.port.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11212, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary1.port.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11213,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary1.port.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11214, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.port.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11215,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.port.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11216, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.port.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11217, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("boundary1.port.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5,\
 14378, 4)
DeclareAlias2("boundary1.port.m_flow", "Mass flow rate [kg/s]", "boundary.m_flow_in_.k", -1,\
 5, 14400, 132)
DeclareVariable("boundary1.port.h_outflow", "Specific enthalpy [J/kg]", 14362, \
0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("boundary1.liquid_ph.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11218, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary1.liquid_ph.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11219,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary1.liquid_ph.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11220, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.liquid_ph.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11221,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.liquid_ph.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11222, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.liquid_ph.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11223, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.liquid_ph.liquidPointer.id", "[:#(type=Integer)]", 14363,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary1.liquid_ph.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11224, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("boundary1.liquid_ph.d", "Density [kg/m3|g/cm3]", "boundary1.d", 1,\
 5, 14377, 1024)
DeclareAlias2("boundary1.liquid_ph.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1,\
 5, 14378, 1024)
DeclareAlias2("boundary1.liquid_ph.h", "Specific enthalpy [J/kg]", \
"boundary1.port.h_outflow", 1, 5, 14362, 1024)
DeclareVariable("boundary1.liquid_ph.s", "Specific entropy [J/(kg.K)]", 14364, \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_ph.T", "Temperature [K;degC]", 14365, 288.15, \
0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("boundary1.liquid_ph.cp", "Specific heat capacity [J/(kg.K)]", 14366,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_ph.beta", "Isobaric expansion coefficient [1/K]",\
 14367, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_ph.transp.Pr", "Prandtl number [1]", 11225, \
-1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_ph.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11226, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_ph.transp.eta", "Dynamic viscosity [Pa.s]", 11227,\
 -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundary1.liquid_ph.transp.sigma", "Surface tension [N/m]", 11228,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_ph.computeFlags", "[:#(type=Integer)]", 14368,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary1.liquid_pT.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11229, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary1.liquid_pT.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11230,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary1.liquid_pT.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11231, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.liquid_pT.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11232,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.liquid_pT.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11233, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.liquid_pT.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11234, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.liquid_pT.liquidPointer.id", "[:#(type=Integer)]", 14369,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary1.liquid_pT.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11235, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("boundary1.liquid_pT.d", "Density [kg/m3|g/cm3]", 14370, 0.0, \
0.0,1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("boundary1.liquid_pT.h", "Specific enthalpy [J/kg]", \
"boundary1.port.h_outflow", 1, 5, 14362, 1024)
DeclareAlias2("boundary1.liquid_pT.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1,\
 5, 14378, 1024)
DeclareVariable("boundary1.liquid_pT.s", "Specific entropy [J/(kg.K)]", 14371, \
0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("boundary1.liquid_pT.T", "Temperature [K;degC]", "boundary1.T_in_.k", 1,\
 5, 14381, 1024)
DeclareVariable("boundary1.liquid_pT.cp", "Specific heat capacity [J/(kg.K)]", 14372,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_pT.beta", "Isobaric expansion coefficient [1/K]",\
 14373, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_pT.transp.Pr", "Prandtl number [1]", 11236, \
-1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_pT.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11237, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_pT.transp.eta", "Dynamic viscosity [Pa.s]", 11238,\
 -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundary1.liquid_pT.transp.sigma", "Surface tension [N/m]", 11239,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_pT.computeFlags", "[:#(type=Integer)]", 14374,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary1.liquid_inStream.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11240, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary1.liquid_inStream.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11241,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary1.liquid_inStream.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11242, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.liquid_inStream.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11243,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.liquid_inStream.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11244, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.liquid_inStream.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11245, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.liquid_inStream.liquidPointer.id", "[:#(type=Integer)]",\
 14375, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary1.liquid_inStream.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11246, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("boundary1.liquid_inStream.d", "Density [kg/m3|g/cm3]", 18555, \
0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("boundary1.liquid_inStream.p", "Pressure [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareAlias2("boundary1.liquid_inStream.h", "Specific enthalpy [J/kg]", \
"hotWaterTank1.globalData.tankCellsProperties[10].h", 1, 5, 17923, 1024)
DeclareVariable("boundary1.liquid_inStream.s", "Specific entropy [J/(kg.K)]", 18556,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundary1.liquid_inStream.T", "Temperature [K;degC]", 18557, \
288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("boundary1.liquid_inStream.cp", "Specific heat capacity [J/(kg.K)]",\
 18558, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundary1.liquid_inStream.beta", "Isobaric expansion coefficient [1/K]",\
 18559, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundary1.liquid_inStream.transp.Pr", "Prandtl number [1]", 11247,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_inStream.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11248, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_inStream.transp.eta", "Dynamic viscosity [Pa.s]",\
 11249, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundary1.liquid_inStream.transp.sigma", "Surface tension [N/m]",\
 11250, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.liquid_inStream.computeFlags", "[:#(type=Integer)]", 14376,\
 0, 0.0,0.0,0.0,0,2565)
DeclareAlias2("boundary1.m_flow", "Mass flow rate [kg/s]", "boundary.m_flow_in_.k", -1,\
 5, 14400, 1024)
DeclareVariable("boundary1.d", "Density [kg/m3|g/cm3]", 14377, 0.0, 0.0,\
1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("boundary1.h", "Specific enthalpy [J/kg]", "boundary1.port.h_outflow", 1,\
 5, 14362, 1024)
DeclareAlias2("boundary1.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5, 14378,\
 1024)
DeclareAlias2("boundary1.T", "Temperature [K;degC]", "boundary1.T_in_.k", 1, 5, 14381,\
 1024)
DeclareAlias2("boundary1.summary.p_liq", "Pressure at port [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 0)
DeclareVariable("boundary1.summary.T_liq", "Temperature at port [K;degC]", 18560,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareAlias2("boundary1.summary.T_outflow_liq", "Outflowing temperature [K;degC]",\
 "boundary1.T_in_.k", 1, 5, 14381, 0)
DeclareVariable("boundary1.summary.h_liq", "Specific enthalpy at port [J/kg]", 18561,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("boundary1.summary.m_flow_liq", "Mass flow rate at port [kg/s]", \
"boundary.m_flow_in_.k", -1, 5, 14400, 0)
DeclareVariable("boundary1.summary.V_flow_liq", "Volume flow rate at port [m3/s]",\
 18562, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("boundary1.use_pressureInput", "= true, if p defined by input [:#(type=Boolean)]",\
 11251, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary1.pFixed", "Fixed value for p [Pa|bar]", 838, 101300.0,\
 0.0,0.0,0.0,0,560)
DeclareVariable("boundary1.use_massFlowRateInput", "= true, if m_flow defined by input [:#(type=Boolean)]",\
 11252, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary1.m_flowFixed", "Fixed value for m_flow [kg/s]", 839, \
0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("boundary1.use_volumeFlowRateInput", "= true, if V_flow defined by input [:#(type=Boolean)]",\
 11253, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary1.V_flowFixed", "Fixed value for V_flow [m3/s]", 840, \
0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("boundary1.use_specificEnthalpyInput", "= true if h defined by input [:#(type=Boolean)]",\
 11254, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary1.hFixed", "Fixed value for h [J/kg]", 841, 350000.0, \
0.0,0.0,0.0,0,560)
DeclareVariable("boundary1.use_temperatureInput", "= true, if T defined by input [:#(type=Boolean)]",\
 11255, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary1.TFixed", "Fixed value for T [K;degC]", 842, 298.15, \
0.0,1.7976931348623157E+308,300.0,0,560)
DeclareVariable("boundary1.use_mixingRatioInput", "= true, if xi defined by input [:#(type=Boolean)]",\
 11256, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("boundary1.mixingRatioFixed[1]", "Fixed value xi", 11257, 1.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.p_in_.k", "Constant output value", 14378, 1, 0.0,\
1.7976931348623157E+308,100000.0,0,2561)
DeclareAlias2("boundary1.p_in_.y", "Connector of Real output signal", \
"boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareVariable("boundary1.m_flow_in_.k", "Constant output value", 14379, 1, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("boundary1.m_flow_in_.y", "Connector of Real output signal", \
"boundary1.m_flow_in_.k", 1, 5, 14379, 1024)
DeclareVariable("boundary1.V_flow_in_.k", "Constant output value", 14380, 1, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("boundary1.V_flow_in_.y", "Connector of Real output signal", \
"boundary1.V_flow_in_.k", 1, 5, 14380, 1024)
DeclareVariable("boundary1.T_in_.k", "Constant output value", 14381, 1, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareAlias2("boundary1.T_in_.y", "Connector of Real output signal", \
"boundary1.T_in_.k", 1, 5, 14381, 1024)
DeclareVariable("boundary1.h_in_.k", "Constant output value", 14382, 1, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("boundary1.h_in_.y", "Connector of Real output signal", \
"boundary1.h_in_.k", 1, 5, 14382, 1024)
DeclareVariable("boundary1.getInputs.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11258, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary1.getInputs.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11259,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary1.getInputs.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11260, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary1.getInputs.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11261,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.getInputs.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11262, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary1.getInputs.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11263, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("boundary1.getInputs.p_in", "Prescribed boundary pressure", \
"boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareAlias2("boundary1.getInputs.h_in", "Prescribed boundary specific enthalpy",\
 "boundary1.h_in_.k", 1, 5, 14382, 1024)
DeclareAlias2("boundary1.getInputs.T_in", "Prescribed boundary temperature", \
"boundary1.T_in_.k", 1, 5, 14381, 1024)
DeclareAlias2("boundary1.getInputs.m_flow_in", "Prescribed boundary mass flow rate",\
 "boundary1.m_flow_in_.k", 1, 5, 14379, 1024)
DeclareAlias2("boundary1.getInputs.V_flow_in", "Prescribed boundary volume flow rate",\
 "boundary1.V_flow_in_.k", 1, 5, 14380, 1024)
DeclareVariable("boundary1.getInputs.mixingRatio_in[1]", "Prescribed boundary mass fraction",\
 11264, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.mixingRatio_in_[1].k", "Constant output value", 11265,\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary1.mixingRatio_in_[1].y", "Connector of Real output signal",\
 11266, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11267, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.liquidType.nc_propertyCalculation", "Number of components for fluid property calculations [:#(type=Integer)]",\
 11268, 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11269, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11270,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.liquidType.defaultMixingRatio[1]", "Default composition for models in Modelica (={1} for pure components)",\
 11271, 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11272, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.port.liquidType.fixedMixingRatio", "Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11273, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.port.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11274,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary.port.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11275, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.port.liquidType.mixingRatio_propertyCalculation[1]", \
"Mixing ratio for fluid property calculation (={1} for pure components)", 11276,\
 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.port.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11277, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.port.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11278, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("boundary.port.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5,\
 14378, 4)
DeclareAlias2("boundary.port.m_flow", "Mass flow rate [kg/s]", "boundary.m_flow_in_.k", 1,\
 5, 14400, 132)
DeclareVariable("boundary.port.h_outflow", "Specific enthalpy [J/kg]", 14383, \
0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("boundary.liquid_ph.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11279, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.liquid_ph.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11280,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary.liquid_ph.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11281, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.liquid_ph.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11282,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.liquid_ph.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11283, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.liquid_ph.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11284, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.liquid_ph.liquidPointer.id", "[:#(type=Integer)]", 14384,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary.liquid_ph.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11285, false,\
 0.0,0.0,0.0,0,2563)
DeclareAlias2("boundary.liquid_ph.d", "Density [kg/m3|g/cm3]", "boundary.d", 1, 5,\
 14398, 1024)
DeclareAlias2("boundary.liquid_ph.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1,\
 5, 14378, 1024)
DeclareAlias2("boundary.liquid_ph.h", "Specific enthalpy [J/kg]", \
"boundary.port.h_outflow", 1, 5, 14383, 1024)
DeclareVariable("boundary.liquid_ph.s", "Specific entropy [J/(kg.K)]", 14385, \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_ph.T", "Temperature [K;degC]", 14386, 288.15, \
0.0,1.7976931348623157E+308,300.0,0,2561)
DeclareVariable("boundary.liquid_ph.cp", "Specific heat capacity [J/(kg.K)]", 14387,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_ph.beta", "Isobaric expansion coefficient [1/K]",\
 14388, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_ph.transp.Pr", "Prandtl number [1]", 11286, \
-1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_ph.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11287, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_ph.transp.eta", "Dynamic viscosity [Pa.s]", 11288,\
 -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundary.liquid_ph.transp.sigma", "Surface tension [N/m]", 11289,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_ph.computeFlags", "[:#(type=Integer)]", 14389, 0,\
 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary.liquid_pT.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11290, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.liquid_pT.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11291,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary.liquid_pT.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11292, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.liquid_pT.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11293,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.liquid_pT.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11294, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.liquid_pT.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11295, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.liquid_pT.liquidPointer.id", "[:#(type=Integer)]", 14390,\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary.liquid_pT.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11296, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("boundary.liquid_pT.d", "Density [kg/m3|g/cm3]", 14391, 0.0, 0.0,\
1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("boundary.liquid_pT.h", "Specific enthalpy [J/kg]", \
"boundary.port.h_outflow", 1, 5, 14383, 1024)
DeclareAlias2("boundary.liquid_pT.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1,\
 5, 14378, 1024)
DeclareVariable("boundary.liquid_pT.s", "Specific entropy [J/(kg.K)]", 14392, \
0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("boundary.liquid_pT.T", "Temperature [K;degC]", "boundary.T_in_.k", 1,\
 5, 14402, 1024)
DeclareVariable("boundary.liquid_pT.cp", "Specific heat capacity [J/(kg.K)]", 14393,\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_pT.beta", "Isobaric expansion coefficient [1/K]",\
 14394, 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_pT.transp.Pr", "Prandtl number [1]", 11297, \
-1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_pT.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11298, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_pT.transp.eta", "Dynamic viscosity [Pa.s]", 11299,\
 -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundary.liquid_pT.transp.sigma", "Surface tension [N/m]", 11300,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_pT.computeFlags", "[:#(type=Integer)]", 14395, 0,\
 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary.liquid_inStream.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11301, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.liquid_inStream.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11302,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary.liquid_inStream.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11303, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.liquid_inStream.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11304,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.liquid_inStream.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11305, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.liquid_inStream.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11306, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.liquid_inStream.liquidPointer.id", "[:#(type=Integer)]",\
 14396, 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("boundary.liquid_inStream.computeTransportProperties", \
"=true, if transport properties are calculated [:#(type=Boolean)]", 11307, false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("boundary.liquid_inStream.d", "Density [kg/m3|g/cm3]", 18563, \
0.0, 0.0,1.7976931348623157E+308,0.0,0,2560)
DeclareAlias2("boundary.liquid_inStream.p", "Pressure [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 1024)
DeclareAlias2("boundary.liquid_inStream.h", "Specific enthalpy [J/kg]", \
"hotWaterTank1.globalData.tankCellsProperties[1].h", 1, 5, 17851, 1024)
DeclareVariable("boundary.liquid_inStream.s", "Specific entropy [J/(kg.K)]", 18564,\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundary.liquid_inStream.T", "Temperature [K;degC]", 18565, \
288.15, 0.0,1.7976931348623157E+308,300.0,0,2560)
DeclareVariable("boundary.liquid_inStream.cp", "Specific heat capacity [J/(kg.K)]",\
 18566, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundary.liquid_inStream.beta", "Isobaric expansion coefficient [1/K]",\
 18567, 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("boundary.liquid_inStream.transp.Pr", "Prandtl number [1]", 11308,\
 -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_inStream.transp.lambda", "Thermal conductivity [W/(m.K)]",\
 11309, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_inStream.transp.eta", "Dynamic viscosity [Pa.s]",\
 11310, -1.0, -1.0,1.7976931348623157E+308,0.0,0,2561)
DeclareVariable("boundary.liquid_inStream.transp.sigma", "Surface tension [N/m]",\
 11311, -1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.liquid_inStream.computeFlags", "[:#(type=Integer)]", 14397,\
 0, 0.0,0.0,0.0,0,2565)
DeclareAlias2("boundary.m_flow", "Mass flow rate [kg/s]", "boundary.m_flow_in_.k", 1,\
 5, 14400, 1024)
DeclareVariable("boundary.d", "Density [kg/m3|g/cm3]", 14398, 0.0, 0.0,\
1.7976931348623157E+308,0.0,0,2561)
DeclareAlias2("boundary.h", "Specific enthalpy [J/kg]", "boundary.port.h_outflow", 1,\
 5, 14383, 1024)
DeclareAlias2("boundary.p", "Pressure [Pa|bar]", "boundary1.p_in_.k", 1, 5, 14378,\
 1024)
DeclareAlias2("boundary.T", "Temperature [K;degC]", "boundary.T_in_.k", 1, 5, 14402,\
 1024)
DeclareAlias2("boundary.summary.p_liq", "Pressure at port [Pa|bar]", \
"boundary1.p_in_.k", 1, 5, 14378, 0)
DeclareVariable("boundary.summary.T_liq", "Temperature at port [K;degC]", 18568,\
 288.15, 0.0,1.7976931348623157E+308,300.0,0,512)
DeclareAlias2("boundary.summary.T_outflow_liq", "Outflowing temperature [K;degC]",\
 "boundary.T_in_.k", 1, 5, 14402, 0)
DeclareVariable("boundary.summary.h_liq", "Specific enthalpy at port [J/kg]", 18569,\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("boundary.summary.m_flow_liq", "Mass flow rate at port [kg/s]", \
"boundary.m_flow_in_.k", 1, 5, 14400, 0)
DeclareVariable("boundary.summary.V_flow_liq", "Volume flow rate at port [m3/s]",\
 18570, 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("boundary.use_pressureInput", "= true, if p defined by input [:#(type=Boolean)]",\
 11312, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary.pFixed", "Fixed value for p [Pa|bar]", 843, 101300.0,\
 0.0,0.0,0.0,0,560)
DeclareVariable("boundary.use_massFlowRateInput", "= true, if m_flow defined by input [:#(type=Boolean)]",\
 11313, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary.m_flowFixed", "Fixed value for m_flow [kg/s]", 844, 0,\
 0.0,0.0,0.0,0,560)
DeclareVariable("boundary.use_volumeFlowRateInput", "= true, if V_flow defined by input [:#(type=Boolean)]",\
 11314, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary.V_flowFixed", "Fixed value for V_flow [m3/s]", 845, \
0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("boundary.use_specificEnthalpyInput", "= true if h defined by input [:#(type=Boolean)]",\
 11315, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary.hFixed", "Fixed value for h [J/kg]", 846, 350000.0, \
0.0,0.0,0.0,0,560)
DeclareVariable("boundary.use_temperatureInput", "= true, if T defined by input [:#(type=Boolean)]",\
 11316, false, 0.0,0.0,0.0,0,515)
DeclareParameter("boundary.TFixed", "Fixed value for T [K;degC]", 847, 303.15, \
0.0,1.7976931348623157E+308,300.0,0,560)
DeclareVariable("boundary.use_mixingRatioInput", "= true, if xi defined by input [:#(type=Boolean)]",\
 11317, false, 0.0,0.0,0.0,0,2563)
DeclareVariable("boundary.mixingRatioFixed[1]", "Fixed value xi", 11318, 1.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.p_in_.k", "Constant output value", 14399, 1, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("boundary.p_in_.y", "Connector of Real output signal", \
"boundary.p_in_.k", 1, 5, 14399, 1024)
DeclareVariable("boundary.m_flow_in_.k", "Constant output value", 14400, 1, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("boundary.m_flow_in_.y", "Connector of Real output signal", \
"boundary.m_flow_in_.k", 1, 5, 14400, 1024)
DeclareVariable("boundary.V_flow_in_.k", "Constant output value", 14401, 1, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("boundary.V_flow_in_.y", "Connector of Real output signal", \
"boundary.V_flow_in_.k", 1, 5, 14401, 1024)
EndNonAlias(16)
PreNonAliasNew(17)
StartNonAlias(17)
DeclareVariable("boundary.T_in_.k", "Constant output value", 14402, 1, 0.0,\
1.7976931348623157E+308,300.0,0,2561)
DeclareAlias2("boundary.T_in_.y", "Connector of Real output signal", \
"boundary.T_in_.k", 1, 5, 14402, 1024)
DeclareVariable("boundary.h_in_.k", "Constant output value", 14403, 1, 0.0,0.0,\
0.0,0,2561)
DeclareAlias2("boundary.h_in_.y", "Connector of Real output signal", \
"boundary.h_in_.k", 1, 5, 14403, 1024)
DeclareVariable("boundary.getInputs.liquidType.fixedMixingRatio", \
"Treat medium as pseudo pure in Modelica if it is a mixture [:#(type=Boolean)]",\
 11319, false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.getInputs.liquidType.nc_propertyCalculation", \
"Number of components for fluid property calculations [:#(type=Integer)]", 11320,\
 1, 1.0,1.7976931348623157E+308,0.0,0,1541)
DeclareVariable("boundary.getInputs.liquidType.nc", "Number of components in Modelica models [:#(type=Integer)]",\
 11321, 1, 0.0,0.0,0.0,0,1541)
DeclareVariable("boundary.getInputs.liquidType.mixingRatio_propertyCalculation[1]",\
 "Mixing ratio for fluid property calculation (={1} for pure components)", 11322,\
 1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.getInputs.liquidType.defaultMixingRatio[1]", \
"Default composition for models in Modelica (={1} for pure components)", 11323, \
1.0, 0.0,0.0,0.0,0,1537)
DeclareVariable("boundary.getInputs.liquidType.ID", "ID is used to map the selected Liquid to the sim.cumulatedLiquidMass array item [:#(type=Integer)]",\
 11324, 1, 0.0,0.0,0.0,0,1541)
DeclareAlias2("boundary.getInputs.p_in", "Prescribed boundary pressure", \
"boundary.p_in_.k", 1, 5, 14399, 1024)
DeclareAlias2("boundary.getInputs.h_in", "Prescribed boundary specific enthalpy",\
 "boundary.h_in_.k", 1, 5, 14403, 1024)
DeclareAlias2("boundary.getInputs.T_in", "Prescribed boundary temperature", \
"boundary.T_in_.k", 1, 5, 14402, 1024)
DeclareAlias2("boundary.getInputs.m_flow_in", "Prescribed boundary mass flow rate",\
 "boundary.m_flow_in_.k", 1, 5, 14400, 1024)
DeclareAlias2("boundary.getInputs.V_flow_in", "Prescribed boundary volume flow rate",\
 "boundary.V_flow_in_.k", 1, 5, 14401, 1024)
DeclareVariable("boundary.getInputs.mixingRatio_in[1]", "Prescribed boundary mass fraction",\
 11325, 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.mixingRatio_in_[1].k", "Constant output value", 11326,\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("boundary.mixingRatio_in_[1].y", "Connector of Real output signal",\
 11327, 1.0, 0.0,0.0,0.0,0,2561)
EndNonAlias(17)
PreNonAliasNew(18)
