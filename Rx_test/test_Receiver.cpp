#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "../test/catch.hpp"
#include "../Bms_Receiver/Receiver_DataCalc.h"
#include "stddef.h"
#include "string.h"


//printstream();

TEST_CASE("Case for Postive test case :- Success of Data readFromConsole") {

  REQUIRE(readfromconsole() == Success);
}
/*Positive test case */
TEST_CASE("Case for Positive test case :-Success of finding temperature array Minimum value") {
	UserRequestOperation Operator= ToFindMinValue;
  REQUIRE(FindMinandMaxValue(Temperature,Operator) == Success);
}

/*Positive test case */
TEST_CASE("Case for Positive test case :-Success of finding SOC array Minimum value") {
  UserRequestOperation Operator= ToFindMinValue;
  REQUIRE(FindMinandMaxValue(SOC,Operator) == Success);
}

/*Positive test case */
TEST_CASE("Case for Positive test case:-Success of finding SOC array Maximum value value") {
  UserRequestOperation Operator= ToFindMaxValue;
  REQUIRE(FindMinandMaxValue(SOC,Operator)  == Success);
}

TEST_CASE("Case for evaluating success of Moving average of temperature") {

  REQUIRE(FindMovingAverage(Temperature,lengthOfInputData) == Success);
}

TEST_CASE("Case for evaluating success of Moving average of SOC") {

  REQUIRE(FindMovingAverage(SOC,lengthOfInputData) == Success);
}
