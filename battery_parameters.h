#pragma once
#include <vector>


class BMSParameters
{

public:

    std::vector<int> getBatteryTempValuesInRange(int minTempVal, int maxTempVal);
    std::vector<int> getBatterySOCValuesInRange(int minSOCVal, int maxSOCVal);
    std::vector<int> generateRandomPrameters(int minVal, int maxVal);
    bool sendParameterValuesToConsole(std::string parameterName, int minVal, int maxVal);
};
