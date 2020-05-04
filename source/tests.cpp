#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

/** 1.8:  Euclidean Algorithm */
int gcd(int a, int b) {
    int r = a % b;
    if (r == 0)
        return b;
    return gcd(b, r);
}

TEST_CASE("describe_gcd", "[gcd]") {
    REQUIRE(gcd(2,4) == 2);
    REQUIRE(gcd(3,7) == 1);
    REQUIRE(gcd(7,3) == 1);
    REQUIRE(gcd(9,6) == 3);
    REQUIRE(gcd(41*42,42*43) == 42);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
