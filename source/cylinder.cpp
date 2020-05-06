#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#define _USE_MATH_DEFINES
#include <cmath>

#ifndef M_PI
#define M_PI 3.141592653589793
#endif

// 1.12

/**
 * Volume of a cylinder.  Returns NAN if height or radius is negative.
 */
double cylinder_volume(double radius, double height) {
  if (radius < 0 || height < 0) {
    std::cerr << "Radius and height must be non-negative.\n";
    return NAN;
  }
  return height * (M_PI * radius * radius);
}

/**
 * Surface area of a cylinder.  Returns NAN if height or radius is negative.
 */
double cylinder_surface(double radius, double height) {
  if (radius < 0 || height < 0) {
    std::cerr << "Radius and height must be non-negative.\n";
    return NAN;
  }
  return (2 * M_PI * radius * height) + (2 * M_PI * radius * radius);
}

TEST_CASE("describe_cylinder_volume", "[cylinder_volume]") {
  REQUIRE(cylinder_volume(42, 42) == Approx(232754));
  REQUIRE(cylinder_volume(1.23456, 0.54321) == Approx(2.60101));
  REQUIRE(cylinder_volume(0, 42) == Approx(0));
  REQUIRE(cylinder_volume(42, 0) == Approx(0));
  REQUIRE(cylinder_volume(0, 0) == Approx(0));
  REQUIRE(std::isnan(cylinder_volume(-1, -1)));
  REQUIRE(std::isnan(cylinder_volume(-1, 1)));
  REQUIRE(std::isnan(cylinder_volume(1, -1)));
}

TEST_CASE("describe_cylinder_surface", "[cylinder_surface]") {
  REQUIRE(cylinder_surface(42, 42) == Approx(22167));
  REQUIRE(cylinder_surface(1.23456, 0.54321) == Approx(13.7901));
  REQUIRE(cylinder_surface(0, 42) == Approx(0));
  REQUIRE(cylinder_surface(42, 0) == Approx(11083.5));
  REQUIRE(cylinder_surface(0, 0) == Approx(0));
  REQUIRE(std::isnan(cylinder_surface(-1, -1)));
  REQUIRE(std::isnan(cylinder_surface(-1, 1)));
  REQUIRE(std::isnan(cylinder_surface(1, -1)));
}

int main(int argc, char *argv[]) { return Catch::Session().run(argc, argv); }
