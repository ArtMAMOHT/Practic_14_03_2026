#include "config.hpp"
#include <iostream>

int main() {
    std::cout << Config::kMax << "\n";
    const int* p = &Config::kMax;             // ODR-use - требует определения!
    std::cout << *p << "\n";
}
