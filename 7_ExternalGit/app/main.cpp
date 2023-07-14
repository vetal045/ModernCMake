#include <iostream>

#include "nlohmann/json.hpp"

#include "MyLib.h"
#include "config.h"

int main()
{
    std::cout << project_name << ": "<< project_version << std::endl;
    std::cout << "Json Version: " << NLOHMANN_JSON_VERSION_MAJOR << "."
                                  << NLOHMANN_JSON_VERSION_MINOR << "."
                                  << NLOHMANN_JSON_VERSION_PATCH << std::endl;
    print();
    return 0;
}
