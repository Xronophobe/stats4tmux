#include <utils.hpp>
#include <fstream>
#include <vector>

namespace utils
{
    std::vector<std::string> ansiFgColors
    {
        std::string("31"),  // red
        std::string("33"),  // yellow
        std::string("37"),  // white
        std::string("32"),  // green
        std::string("36")   // cyan
    };

    std::vector<std::string> tmuxFgColors
    {
        std::string("red"),
        std::string("yellow"),
        std::string("white"),
        std::string("green"),
        std::string("cyan")
    };

    std::string printInOneDigit(int number, std::string format)
    {
        int tens = number / 10;
        int ones = number % 10;

        if (format == "ansi")
        {
            return (
                "\033[40;" +
                ansiFgColors[ones/2] +
                'm' +
                std::to_string(tens) +
                "\033[0m"
            );
        }

        return (
            "#[bg=black]#[fg=" +
            tmuxFgColors[ones/2] +
            "]" +
            std::to_string(tens)
        );

    }

    std::string getOneRowFileContent(std::string filepath)
    {
        std::ifstream file_stream {filepath};
        std::string content;
        if (file_stream.is_open())
        {
            file_stream >> content;
            file_stream.close();
        }

        return content;
    }
}
