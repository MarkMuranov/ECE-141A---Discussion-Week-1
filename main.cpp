#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Open input text (adjust path if needed)
    std::ifstream file("../input.txt");
    if (!file.is_open())
    {
        std::cerr << "File not open!" << std::endl;
        return 1;
    }

    const std::string digits = "0123456789";
    int sum = 0;

    std::string line;
    while (std::getline(file, line))
    {
        const char firstDigit = line[line.find_first_of(digits)];
        const char lastDigit  = line[line.find_last_of (digits)];
        sum += (int)(firstDigit - '0') * 10;
        sum += (int)(lastDigit  - '0');
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
