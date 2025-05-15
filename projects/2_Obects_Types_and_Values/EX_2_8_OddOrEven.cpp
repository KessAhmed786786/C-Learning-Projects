// Program that determines if the number inputted is odd or even

#include <iostream>

int main()
{
    // Enter the initial number prompt
    std::cout << "Enter an integer to determine if it is ODD or EVEN: \n";
    int number;
    std::cin >> number;

    // Logic to determine if the number is odd or even
    std::string type;
    if (number % 2 != 0)
    {
        type = "ODD";
    }
    else
    {
        type = "EVEN";
    }

    std::cout << "The value " << number << " is an " << type << " number.\n";
}
