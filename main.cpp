#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Open input text (adjust path if needed)
    std::ifstream file("input.txt");
    if (!file.is_open())
    {
        std::cerr << "File not open!" << std::endl;
        return 1;
    }

    // Read text
    std::string line;
    while (std::getline(file, line))
    {
        // Process each line of text here...
        std::cout << "Line: '" << line << "'\n";
    }

    return 0;
}
