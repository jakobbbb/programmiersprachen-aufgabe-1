#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

// 1.13

/**
 * Returns n! or -1 for invalid input
 */
int factorial(int n) {
  if (n < 0) {
    std::cerr << n << " must be a positive integer!\n";
    return -1;
  }
  int f = 1;
  for (int i = 1; i <= n; i++) {
    f *= i;
  }
  return f;
}

TEST_CASE("describe_factorial", "[factorial]") {
  REQUIRE(factorial(-1) == -1);
  REQUIRE(factorial(0) == 1);
  REQUIRE(factorial(1) == 1);
  REQUIRE(factorial(2) == 1 * 2);
  REQUIRE(factorial(5) == 1 * 2 * 3 * 4 * 5);
  REQUIRE(factorial(10) == 3628800);
}

int main(int argc, char *argv[]) { return Catch::Session().run(argc, argv); }
