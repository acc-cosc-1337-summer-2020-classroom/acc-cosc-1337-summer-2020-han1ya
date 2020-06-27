#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification")
{
  REQUIRE(true == true)
}

TEST_CASE("Test get_gc_content function")
{
  REQUIRE(get_gc_content("AGCTATAG") == 37.5);
  REQUIRE(get_gc_content("CGCTATAG") == 50);
}

TEST_CASE("Test get_reverse_string function")
{
  REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
  REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}