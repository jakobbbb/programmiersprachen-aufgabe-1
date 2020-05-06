#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

// 1.10

/**
 * Sum up all integers in {1, ..., n} that are divisible by 3 or 5.
 * Returns -1 for invalid input.
 */
int sum_multiples(int n) {
  if (n < 1) {
    std::cerr << n << " must be a positive integer!\n";
    return -1;
  }
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

// default: sum up to and incl. 1000
int sum_multiples() {
  return sum_multiples(1000);
}

TEST_CASE("describe_sum_multiples", "[sum_multiples]") {
  REQUIRE(sum_multiples(-1) == -1);
  REQUIRE(sum_multiples(0) == -1);
  REQUIRE(sum_multiples(1) == 0);
  REQUIRE(sum_multiples(2) == 0);
  REQUIRE(sum_multiples(3) == 3);
  REQUIRE(sum_multiples(19) == 3+5+6+9+10+12+15+18);
  REQUIRE(sum_multiples(20) == 3+5+6+9+10+12+15+18+20);
  REQUIRE(sum_multiples(30) == 3+5+6+9+10+12+15+18+20+21+24+25+27+30);
  REQUIRE(sum_multiples(1000) == sum_multiples());
}

int main(int argc, char *argv[]) { return Catch::Session().run(argc, argv); }
