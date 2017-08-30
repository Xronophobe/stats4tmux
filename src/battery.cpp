#include "utils.hpp"
#include "battery.hpp"

Battery::Battery() :
        _battery_path("/sys/class/power_supply/BAT0/"),
        _capacity(_battery_path + "capacity"),
        _status(_battery_path + "status")
{}

Battery::~Battery() {}

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
