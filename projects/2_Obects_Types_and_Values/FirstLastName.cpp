// Program that inputs first and second name and outputs to screen

#include <iostream>

int main()
{
    std::cout << "Please enter your first name and second name\n";
    std::string first;
    std::string second;
    std::cin >> first >> second;
    std::string name = first + " " + second;
    std::cout << "Hello, " << name << "\n";
}
