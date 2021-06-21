#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "../test/catch.hpp"
#include "../Bms_Receiver/Receiver_DataCalc.h"
#include "../battery_parameters.h"
#include "stddef.h"
#include "string.h"
#include "stdbool.h"


//printstream();

TEST_CASE("Case for Postive test case :- Success of Data readFromConsole") {

  REQUIRE(compareDataFromStream(rv_array,send_array) == true);
}

TEST_CASE("Case for Positive test case :-Success finding array Minimum value") {

  REQUIRE(compareMaxDataFromStream(rv_array,send_array) == true);
}

TEST_CASE("Case for Positive test case:-Success of finding array Min value ") {

  REQUIRE(compareMinDataFromStream(rv_array,send_array)  == true);
}


TEST_CASE("Case for evaluating success of Moving average") {

  REQUIRE(compareAverageDataFromStream(rv_array,send_array) == true);
}

