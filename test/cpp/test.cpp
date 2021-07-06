#include "../../src/cpp/functions.h"

// Catch-related settings. Do not repeat define.
#define CATCH_CONFIG_MAIN

// Each test file requires the following import.
#include "catch.hpp"

TEST_CASE("Vector sum is computed correctly", "[vector]") {
    REQUIRE(1 + 1 == 2);
}