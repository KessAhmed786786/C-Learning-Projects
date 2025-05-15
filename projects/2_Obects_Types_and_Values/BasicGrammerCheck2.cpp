// Program that checks number of words checked and if the word was repeated across the previously

#include <iostream>

int main()
{
    int number_of_words = 0;
    std::string previous;
    std::string current;
    while (std::cin >> current)
    {
        ++number_of_words;
        if (previous == current)
            std::cout << "Word number " << number_of_words << " repeated:" << current << "\n";
        previous = current;
    }
}
