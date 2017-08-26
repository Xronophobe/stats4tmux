#include "battery.hpp"
#include <iostream>
#include <string>
#include <fstream>

std::string Battery::getOneRowFileContent(std::string filepath)
{
    std::ifstream file_stream(filepath);
    std::string content;
    if (file_stream.is_open())
    {
        file_stream >> content;
        file_stream.close();
    }

    return content;
}

int Battery::getChargePct()
{
    std::cout << getOneRowFileContent(_energy_now) << std::endl;
    return 0;
}
