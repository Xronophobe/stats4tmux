#include "utils.hpp"
#include <fstream>
#include <string>

namespace utils
{
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
