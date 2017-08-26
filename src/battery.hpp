#pragma once
#include <iostream>

class Battery
{
public:
// static Battery* Instance();
    Battery() :
        _battery_path("/sys/class/power_supply/BAT0/"),
        _energy_now(_battery_path + "energy_now"),
        _power_now(_battery_path + "power_now")
    {}
    ~Battery() {}
    int getChargePct();
private:
    std::string _battery_path;
    std::string _energy_now;
    std::string _power_now;

    std::string getOneRowFileContent(std::string filepath);
};
