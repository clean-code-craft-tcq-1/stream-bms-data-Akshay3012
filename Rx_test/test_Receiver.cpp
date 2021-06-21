#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "../test/catch.hpp"
#include "../Bms_Receiver/Receiver_DataCalc.h"
#include "../battery_parameters.h"
#include "stddef.h"
#include "string.h"
#include "stdbool.h"


TEST_CASE("Case for Postive test case :- Success of Data readFromConsole Temperature") {

  REQUIRE(compareDataFromStream(rv_array_temp,send_array_temp) == true);
}


TEST_CASE("Case for Postive test case :- Success of Data readFromConsole Soc") {

  REQUIRE(compareDataFromStream(rv_array_soc,send_array_soc) == true);
}

TEST_CASE("Case for Positive test case :-Success finding array Max value Temperature") {

  REQUIRE(compareMaxDataFromStream(rv_array_temp,send_array_temp) == true);
}

TEST_CASE("Case for Positive test case :-Success finding array Max value Soc") {

  REQUIRE(compareMaxDataFromStream(rv_array_soc,send_array_soc) == true);
}

TEST_CASE("Case for Positive test case:-Success of finding array Min value Temperature") {

  REQUIRE(compareMinDataFromStream(rv_array_temp,send_array_temp)  == true);
}

TEST_CASE("Case for Positive test case:-Success of finding array Min value Soc") {

  REQUIRE(compareMinDataFromStream(rv_array_soc,send_array_soc)  == true);
}


TEST_CASE("Case for evaluating success of Moving average Temperature") {

  REQUIRE(compareAverageDataFromStream(rv_array_temp,send_array_temp) == true);
}

TEST_CASE("Case for evaluating success of Moving average Soc") {

  REQUIRE(compareAverageDataFromStream(rv_array_soc,send_array_soc) == true);
}

