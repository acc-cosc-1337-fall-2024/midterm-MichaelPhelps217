#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("decimal_to_binary test1")
{
	REQUIRE(decimal_to_binary(10) == "00001010");
}
TEST_CASE("decimal_to_binary test2")
{
	REQUIRE(decimal_to_binary(170) == "10101010");
}
TEST_CASE("decimal_to_binary test3")
{
	REQUIRE(decimal_to_binary(255) == "11111111");
}
