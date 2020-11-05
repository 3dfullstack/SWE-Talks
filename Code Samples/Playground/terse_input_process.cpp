#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <utility>

int main(void)
{

    std::cin.tie(0);
    std::string str = "", temp = "";
    std::vector<std::string> intermediate;

    // "1:sandeep" -> "1" -> "sandeep" (k, v) pairs stored.
    std::map<int, std::string> inputs;
    int last_number = 0;

    // Splits into spaces automatically
    while (std::getline(std::cin, str, ' '))
    {
        // Process and store the individual inputs.
        auto colon_pos = str.find(":", 0);
        if (colon_pos != std::string::npos)
        {
            // Convert "1:sandeep" to 1 -> "sandeep" add to (k, v) map.
            std::stringstream ss(str);
            std::vector<std::string> intermediate;
            while (std::getline(ss, temp, ':'))
            {
                intermediate.emplace_back(temp);
                temp = "";
            }
            inputs.insert(std::make_pair(atoi(intermediate[0].c_str()), intermediate[1]));
            intermediate.clear();
        }
        else
        {
            last_number = atoi(str.c_str());
        }
        str = "";
    }

    // Check if processing is correct.
    for (const auto elems : inputs)
    {
        std::cout << elems.first << "->" << elems.second << std::endl;
    }
    std::cout << "Last Number : " << last_number << std::endl;
    return 0;
}