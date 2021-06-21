#define CATCH_CONFIG_MAIN
#include "test/catch.hpp"
#include"battery_parameters.h"

TEST_CASE(" Parameter values"){
 
	int minTempVal = 0;   
	int maxTempVal = 10;
	int minSOCVal = 0;   
	int maxSOCVal = 10;
  std::string parameterName1 = "Temperature";
  std::string parameterName2 = "SOC";
  std::string wrongParameterName = "Charging Rate";
  
	BMSParameters obj_BMSParameters;
  
  REQUIRE(obj_BMSParameters.sendParameterValuesToConsole(parameterName1, minTempVal, maxTempVal) == true);
  REQUIRE(obj_BMSParameters.sendParameterValuesToConsole(parameterName2, minSOCVal, maxSOCVal) == true);
  REQUIRE(obj_BMSParameters.sendParameterValuesToConsole(wrongParameterName, minTempVal, maxTempVal) == false);	
}
