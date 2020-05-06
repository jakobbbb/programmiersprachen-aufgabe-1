#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <iostream>

// 1.9

/**
 * Digit sum of a positive number.
 * Returns -1 if `n` is negative.
 */
int checksum(int n) {
  if (n < 0)
    return -1;
  int sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

TEST_CASE("describe_checksum", "[checksum]") {
  REQUIRE(checksum(-42) == -1);
  REQUIRE(checksum(-1) == -1);
  REQUIRE(checksum(0) == 0);
  REQUIRE(checksum(1) == 1);
  REQUIRE(checksum(42) == 4 + 2);
  REQUIRE(checksum(120858) == 1 + 2 + 0 + 8 + 5 + 8);
  REQUIRE(checksum(31415926) == 3 + 1 + 4 + 1 + 5 + 9 + 2 + 6);
}

int main(int argc, char *argv[]) { return Catch::Session().run(argc, argv); }
