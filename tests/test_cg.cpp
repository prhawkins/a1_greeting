#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "greeting.hpp"
#include <stdexcept>

TEST_CASE("CreateGreeting valid", "[CreateGreeting][valid]") {
    REQUIRE(CreateGreeting("Alice") == "Hello, Alice!");
    REQUIRE(CreateGreeting("1") == "Hello, 1!");
}
TEST_CASE("CreateGreeting invalid", "[CreateGreeting][invalid]") {
    REQUIRE_THROWS(CreateGreeting(""));
}