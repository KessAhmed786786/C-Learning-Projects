// Program that inputs name and age, converts age into months and into a double type, then outputs to screen.

#include <iostream>

int main()
{
    std::cout << "What is your name and age? (We will convert your age into months):\n";
    std::string first_name;
    double age;
    std::cin >> first_name >> age;
    std::cout << "Hi " << first_name << " your age in months is " << age * 12 << "\n";
}
