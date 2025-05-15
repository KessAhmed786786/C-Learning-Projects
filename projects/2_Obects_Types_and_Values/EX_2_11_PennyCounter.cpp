// Program that counts all types of pennies and sums the total amount in cents

#include <iostream>

int main()
{
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int half_dollars;
    int dollars;
    int cents;

    // Inputting all user data
    std::cout << "How many pennies do you have?\n";
    std::cin >> pennies;
    std::cout << "How many nickels do you have?\n"; //*5
    std::cin >> nickels;
    std::cout << "How many dimes do you have?\n"; //*10
    std::cin >> dimes;
    std::cout << "How many quarters do you have?\n"; //*25
    std::cin >> quarters;
    std::cout << "How many half dollars do you have?\n"; //*50
    std::cin >> half_dollars;
    std::cout << "How many dollars do you have?\n"; //*100
    std::cin >> dollars;
    std::cout << "The value of all of your coins is\n";

    // Output senteneces
    std::cout << "You have " << pennies << " pennies.\n";
    std::cout << "You have " << nickels << " nickels.\n";
    std::cout << "You have " << dimes << " dimes.\n";
    std::cout << "You have " << quarters << " quarters.\n";
    std::cout << "You have " << half_dollars << " half-dollars.\n";
    std::cout << "You have " << dollars << " dollars.\n";

    // Totalling cent value
    cents = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + dollars * 100;

    std::cout << "The value of all of your coins is " << cents << " cents.";
}
