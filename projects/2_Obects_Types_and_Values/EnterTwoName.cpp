// Program should enter 1st and 2nd name and output to screen

#include <iostream>

int main()
{
    std::cout << "Enter your first name and second name:\n";
    std::string first_name;
    std::string second_name;
    std::cin >> first_name >> second_name;
    std::cout << "Your first name is: " << first_name << " and your second name is " << second_name << "\n";
}
