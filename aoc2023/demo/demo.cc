#include <iostream>

import input;
import part_one;
import part_two;

int main() {
  std::cout << "The elevator will end up on floor: "
    << part_one::floor(input::day01) << "\n";
  std::cout << "The elevator will enter the basement for the first time at: "
    << part_two::first_time_basement(input::day01) << "\n";
}