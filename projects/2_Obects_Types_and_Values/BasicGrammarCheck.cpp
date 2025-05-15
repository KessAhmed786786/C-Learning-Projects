// Program that cehcks if a word is the same as the last

#include <iostream>

int main()
{
    std::string previous = "Hi";
    std::string current;
    while (std::cin >> current)
    {
        if (previous == current)
            std::cout << "Repeated word: " << current << "\n";
        previous = current;
    }
}
