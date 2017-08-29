#include "battery.hpp"
#include "utils.hpp"
#include <iostream>

int main()
{
    Battery battery;
    std::cout <<
        utils::printInOneDigit(battery.getChargePct(), "tmux") <<
        std::endl;
    //std::cout << "#[fg=red]#[bg=black] helo" <<std::endl;
}

