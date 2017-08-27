#include "utils.hpp"
#include "battery.hpp"
#include <iostream>
#include <string>
#include <fstream>

int Battery::getChargePct()
{
    return stoi(utils::getOneRowFileContent(Battery::_capacity));
}

std::string Battery::getChargingStatus()
{
    std::string status = utils::getOneRowFileContent(Battery::_status);
    if (status == "Unknown")
    {
        return "Charging";
    }
    else
    {
        return status;
    }
}
