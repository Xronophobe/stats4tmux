#include "utils.hpp"
#include <fstream>
#include <vector>

namespace utils
{
    std::vector<std::string> fgColors
    {
        std::string("31"),  // red
        std::string("33"),  // yellow
        std::string("37"),  // white
        std::string("32"),  // green
        std::string("36")   // cyan
    };

    std::string printInOneDigit(int number)
    {
        int tens = number / 10;
        int ones = number % 10;

        std::string result(
                "\033[" +
                fgColors[ones/2] +
                'm' +
                std::to_string(tens) +
                "\033[0m"
        );
        return result;
    }

    std::string getOneRowFileContent(std::string filepath)
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
}
