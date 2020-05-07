#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

// 1.15

#ifndef KILOMETERS_PER_MILE
#define KILOMETERS_PER_MILE 1.609344  // definition of international mile
#endif

double mile_to_kilometer(double miles) {
  return KILOMETERS_PER_MILE * miles;
}

int main() {
  std::cout << "How many miles would you like to convert?  ";
  double miles;
  std::cin >> miles;
  double km = mile_to_kilometer(miles);
  std::cout << "That's " << km << " kilometers!\n";
  return 0;
}
