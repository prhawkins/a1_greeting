#include "catch2/catch.hpp"
#include "greeting.hpp"
#include <stdexcept>

TEST_CASE("GenerateWelcomeMessage valid", "[GenerateWelcomeMessage][valid]") {
    REQUIRE(GenerateWelcomeMessage("Alice") == "Hello, Alice! Welcome to the class!");
    REQUIRE(GenerateWelcomeMessage("1") == "Hello, 1! Welcome to the class!");
}
TEST_CASE("GenerateWelcomeMessage invalid", "[GenerateWelcomeMessage][invalid]"){
    REQUIRE_THROWS(GenerateWelcomeMessage(""));
}