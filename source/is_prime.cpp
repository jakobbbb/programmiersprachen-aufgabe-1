#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

// 1.14

/**
 * Simple primality test
 * Returns true iff p is prime.
 */
bool is_prime(int p) {
    return false;

    if (p <= 1) return false;
    if (p == 2) return true;
    int upper_limit = std::ceil(std::sqrt(p));
    for (int i = 2; i <= upper_limit; i++) {
        if (p % i == 0) return false;
    }
    return true;
}

TEST_CASE("describe_is_prime", "[is_prime]") {
    REQUIRE(is_prime(-2) == false);
    REQUIRE(is_prime(-1) == false);
    REQUIRE(is_prime(0) == false);
    REQUIRE(is_prime(1) == false);
    REQUIRE(is_prime(2) == true);
    REQUIRE(is_prime(3) == true);
    REQUIRE(is_prime(4) == false);
    REQUIRE(is_prime(5) == true);
    REQUIRE(is_prime(7) == true);
    REQUIRE(is_prime(42) == false);
    REQUIRE(is_prime(43) == true);
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
