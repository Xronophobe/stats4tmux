#include "battery.hpp"
#include "utils.hpp"
#include <iostream>

int main()
{
    Battery battery;
    std::cout << battery.getChargingStatus() << std::endl;
    std::cout << utils::printInOneDigit(battery.getChargePct()) << std::endl;
}

