#include <iostream>
#include <vector>
#include <cstring>

#define LOG(x) std::cout << x << std::endl

std::vector<std::string> split(std::string text, char divider)
{
    std::vector<std::string> response;
    std::vector<int> identifiers;
    for (size_t i = 0; i < sizeof(text); i++)
    {
        if (text[i] == divider)
        {
            identifiers.push_back(i);
        }
    }

    for (size_t i = 0; i < identifiers.size()+1; i++)
    {
        if (i == 0)
        {
            response.push_back(text.substr(0, identifiers[i]));
        }
        else
        {
            int char_length;
            char_length = ((identifiers[i]) - (identifiers[i - 1] + 1));
            response.push_back(text.substr(identifiers[i - 1] + 1, char_length));
        }
    }
    
    return response;
}

int main()
{
    std::vector<std::string> x = split("Hello, I am a string!", ' ');
    for (size_t i = 0; i < x.size(); i++)
    {
        std::cout << x[i] << std::endl;
    }
}
