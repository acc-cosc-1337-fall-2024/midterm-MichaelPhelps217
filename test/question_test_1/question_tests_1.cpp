#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_fib_sequence test1")
{
	REQUIRE(get_fib_sequence(6) == "0 1 1 2 3 5");
}
TEST_CASE("get_fib_sequence test2")
{
	REQUIRE(get_fib_sequence(8) == "0 1 1 2 3 5 8 13");
}
TEST_CASE("get_fib_sequence test3")
{
	REQUIRE(get_fib_sequence(11) == "0 1 1 2 3 5 8 13 21 34 55");
}
TEST_CASE("get_fib_sequence test4")
{
	REQUIRE(get_fib_sequence(13) == "0 1 1 2 3 5 8 13 21 34 55 89 144");
}
