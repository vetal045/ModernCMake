#include <iostream>

#include <nlohmann/json.hpp>

#include "MyLib.h"

#include <cstdint>

std::uint32_t factorial(std::uint32_t number)
{
    return number <= 1 ? number : factorial(number-1) * number;
}

void print()
{
    std::cout << "Hello World\n";

    std::cout << "Json Version: " << NLOHMANN_JSON_VERSION_MAJOR << "."
                                  << NLOHMANN_JSON_VERSION_MINOR << "."
                                  << NLOHMANN_JSON_VERSION_PATCH << std::endl;
}
