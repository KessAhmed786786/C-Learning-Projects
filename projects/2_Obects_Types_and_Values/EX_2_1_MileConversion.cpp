// Program that converts miles to kilotemeters

#include <iostream>

int main()
{
    std::cout << "Enter the number of miles to be converted: \n";
    // Illegal variable names
    // int double = 0;
    // int string = 0;
    // int 2x = 0;
    // int _thunder = 0;

    // Program input and output
    int miles;
    std::cin >> miles;
    std::cout << "Miles: " << miles << "\nKilometers: " << miles * 1.609 << "\n";
}
