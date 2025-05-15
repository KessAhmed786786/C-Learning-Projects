// Program that inputs 2 integers and perfroms actions and outputs the result

#include <iostream>

int main()
{
    std::cout << "Enter floating point value 1: \n";
    double val1;
    std::cin >> val1;
    std::cout << "Enter floating point value 2: \n";
    double val2;
    std::cin >> val2;
    if (val1 > val2)
    {
        std::cout << val1 << " is GREATER than " << val2 << "\n";
    }
    else if (val2 > val1)
    {
        std::cout << val1 << " is SMALLER than " << val2 << "\n";
    }
    else
    {
        std::cout << "They are the same number\n";
    }
    std::cout << "The SUM of " << val1 << " and " << val2 << " is " << val1 + val2 << "\n";
    std::cout << "The DIFF of " << val1 << " and " << val2 << " is " << val1 - val2 << "\n";
    std::cout << "The PRODUCT of " << val1 << " and " << val2 << " is " << val1 * val2 << "\n";
    std::cout << "The RATIO of " << val1 << " and " << val2 << " is " << val1 / val2 << ":1\n";
}
