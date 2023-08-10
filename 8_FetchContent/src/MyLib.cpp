#include <iostream>

#include <nlohmann/json.hpp>

#include "MyLib.h"

void print()
{
    std::cout << "Hello World\n";

    std::cout << "Json Version: " << NLOHMANN_JSON_VERSION_MAJOR << "."
                                  << NLOHMANN_JSON_VERSION_MINOR << "."
                                  << NLOHMANN_JSON_VERSION_PATCH << std::endl;
}
