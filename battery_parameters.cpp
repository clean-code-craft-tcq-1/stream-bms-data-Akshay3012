#include<iostream>
#include<algorithm>
#include"battery_parameters.h"

std::vector<int> BMSParameters::generateRandomPrameters(int minVal, int maxVal)
{
	std::vector<int> generatedParameters;
	generatedParameters.push_back(rand() % (maxVal - minVal + 1) + minVal);
    return generatedParameters;        
}

std::vector<int> BMSParameters::getBatteryTempValuesInRange(int minTempVal, int maxTempVal)
{
    generateRandomPrameters(minTempVal, maxTempVal);         
}

std::vector<int> BMSParameters::getBatterySOCValuesInRange(int minSOCVal, int maxSOCVal)
{
    generateRandomPrameters(minSOCVal, maxSOCVal);         
}

bool BMSParameters::sendParameterValuesToConsole(std::string parameterName, int minVal, int maxVal)
{
	int numberOfValues = maxVal-minVal+1;
	if(parameterName == "Temperature")
	{
		printf("The values for parameter: Temperature");
		std::cout << "------------------------------------------------------\n";
		for (int paramValue = 0; paramValue < numberOfValues; ++paramValue) 
		{
            		printf("%d \n", getBatteryTempValuesInRange(minVal,maxVal)[paramValue]);
		}
		std::cout << "---------------------------------------------------------\n";
		return true;
	}
	else if(parameterName == "SOC")
	{
		printf("The values for parameter: SOC");
		std::cout << "------------------------------------------------------\n";
		for (int paramValue = 0; paramValue < numberOfValues; ++paramValue) 
		{
			printf("%d \n", getBatterySOCValuesInRange(minVal,maxVal)[paramValue]);
		}
		std::cout << "---------------------------------------------------------\n";
		return true;
	}
		
	else
	{
		return false;
	}

}
