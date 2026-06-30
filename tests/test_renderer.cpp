#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "renderer.h"

TEST_CASE("Renderer initialization", "[renderer]") {
    Renderer renderer;
    REQUIRE(renderer.init() == true);
}