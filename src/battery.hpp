#pragma once
#include <iostream>

class Battery
{
public:
// static Battery* Instance();
    Battery() :
        _battery_path("/sys/class/power_supply/BAT0/"),
        _capacity(_battery_path + "capacity"),
        _status(_battery_path + "status")
    {}
    ~Battery() {}
    int getChargePct();
    std::string getChargingStatus();
private:
    std::string _battery_path;
    std::string _capacity;
    std::string _status;

    std::string getOneRowFileContent(std::string filepath);
};
