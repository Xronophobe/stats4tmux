#include <battery.hpp>
#include <utils.hpp>
#include <iostream>

int main(int ac, char* av[])
{
    Battery battery;
    std::cout <<
        utils::printInOneDigit(battery.getChargePct(), "tmux") <<
        std::endl;
}

