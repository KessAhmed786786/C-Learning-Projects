// Program that user enters three string values, ordering the strings alpabetically

#include <iostream>

int main()
{
    // General output testing
    std::cout << "Input Name 1: \n";
    std::string name1;
    std::cin >> name1;
    std::cout << "Input Name 2: \n";
    std::string name2;
    std::cin >> name2;
    std::cout << "Input Name 3: \n";
    std::string name3;
    std::cin >> name3;
    std::cout << "The ORIGINAL order you typed in is " << name1 << ", " << name2 << ", " << name3 << ". \n";

    // Logical for ordering
    std::string ord1;
    std::string ord2;
    std::string ord3;
    if (name1 < name2 && name1 < name3)
    {
        ord1 = name1;
        if (name2 <= name3)
        {
            ord2 = name2;
            ord3 = name3;
        }
        else
        {
            ord2 = name3;
            ord3 = name2;
        }
    }
    else if (name1 > name2 && name1 > name3)
    {
        ord3 = name1;
        if (name2 >= name3)
        {
            ord1 = name3;
            ord2 = name2;
        }
        else
        {
            ord1 = name2;
            ord2 = name3;
        }
    }
    else
    {
        ord2 = name1;
        if (name2 <= name3)
        {
            ord1 = name2;
            ord3 = name3;
        }
        else
        {
            ord1 = name3;
            ord3 = name2;
        }
    }

    std::cout << "The SEQUENCE order you typed in is " << ord1 << ", " << ord2 << ", " << ord3 << ". \n";
}
