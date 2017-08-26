#include <iostream>
#include "battery.hpp"

int main()
{
    Battery battery;
    std::cout << battery.getChargePct() << std::endl;
    std::cout << battery.getChargingStatus() << std::endl;
}
