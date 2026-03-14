#include "config_a.hpp"
#include <iostream>

int main() {
    std::cout << Config::kMax << "\n";
    const int* p = &Config::kMax;             // работает
    std::cout << *p << "\n";
}
