// Program that converts stings into number digits

#include <iostream>

int main()
{
    std::string number_string;
    while (std::cin >> number_string)
    {
        if (number_string == "zero")
        {
            std::cout << "0\n";
        }
        else if (number_string == "one")
        {
            std::cout << "1\n";
        }
        else if (number_string == "two")
        {
            std::cout << "2\n";
        }
        else if (number_string == "three")
        {
            std::cout << "3\n";
        }
        else if (number_string == "four")
        {
            std::cout << "4\n";
        }
        else if (number_string == "exit")
        {
            std::cout << "Exitted the program\n";
            return 0;
        }
        else
        {
            std::cout << "Not a number I know\n";
        }
    }
}
