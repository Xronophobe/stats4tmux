#pragma once
#include <iostream>

class Battery
{
public:
// static Battery* Instance();
    Battery() { std::cout << "works"; }
    int getChargePct();
private:

};
