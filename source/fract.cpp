#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

// 1.11

/**
 * Get fractional part of a float.  Result will be negative for negative input.
 */
double fract(double d) {
  return d - (int)d;
}

TEST_CASE("describe_fract", "[fract]") {
  REQUIRE(fract(0) == Approx(0));
  REQUIRE(fract(0.12345) == Approx(0.12345));
  REQUIRE(fract(3.141592653589793) == Approx(0.141592653589793));
  REQUIRE(fract(42) == Approx(0));
  REQUIRE(fract(-3.141592653589793) == Approx(-0.141592653589793));
  REQUIRE(fract(21 + 10e-5) == Approx(10e-5));
}

int main(int argc, char *argv[]) { return Catch::Session().run(argc, argv); }
