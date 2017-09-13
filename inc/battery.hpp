#pragma once
#include <string>

class Battery
{
private:
    std::string _battery_path;
    std::string _capacity;
    std::string _status;
public:
    Battery();
    ~Battery();
    int getChargePct();
    std::string getChargingStatus();
};
