// Progmram will produce a simple form letter based on user input.

#include <iostream>
#include <stdexcept>

int main()
{
    // Program welcome input
    std::cout << "Please enter your first name:\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hello and welcome, " << first_name << "\n";

    // Program recipiment name input
    std::cout << "Enter the name of the person you want to write to:\n";
    std::string recipient_name;
    std::cin >> recipient_name;
    std::cout << "Dear " << recipient_name << ",\n";

    // Program letter
    std::cout << "  How are you?\n";
    std::cout << "  How are you?\n";
    std::cout << "  How are you?\n";

    // Friend prompt
    std::cout << "Enter the name of another friend you want to mention:\n";
    std::string friend_name;
    std::cin >> friend_name;
    std::cout << "Have you seen " << friend_name << " lately?\n";

    // Birthday check
    std::cout << "Enter the recipient age:\n";
    int recipient_age;
    std::cin >> recipient_age;
    if (recipient_age <= 0 || recipient_age >= 110)
    {
        std::cerr << "You are kidding!\n";
        return 1;
    }
    std::cout << "I hear you just had a birthday and you are " << recipient_age << " years old.\n";

    // Other age checks
    if (recipient_age < 12)
    {
        std::cout << "Next year you will be " << ++recipient_age << ".\n";
    }
    if (recipient_age == 17)
    {
        std::cout << "Next year you will be able to vote.\n";
    }
    if (recipient_age > 70)
    {
        std::cout << "Are you retired yet?\n";
    }

    // Yours sincerely
    std::cout << "\nYours sincerely, \n"
              << "\n"
              << first_name << ".\n";

    return 0;
}
