// Program that inputs 3 integers and orders them from lowest to hightest

#include <iostream>

int main()
{
    // General output testing and integer defining
    std::cout << "Input integer 1: \n";
    int int1;
    std::cin >> int1;
    std::cout << "Input integer 2: \n";
    int int2;
    std::cin >> int2;
    std::cout << "Input integer 3: \n";
    int int3;
    std::cin >> int3;
    std::cout << "The ORIGINAL order you typed in is " << int1 << ", " << int2 << ", " << int3 << ". \n";

    // Logical for ordering
    int ord1;
    int ord2;
    int ord3;
    if (int1 < int2 && int1 < int3)
    {
        ord1 = int1;
        if (int2 <= int3)
        {
            ord2 = int2;
            ord3 = int3;
        }
        else
        {
            ord2 = int3;
            ord3 = int2;
        }
    }
    else if (int1 > int2 && int1 > int3)
    {
        ord3 = int1;
        if (int2 >= int3)
        {
            ord1 = int3;
            ord2 = int2;
        }
        else
        {
            ord1 = int2;
            ord2 = int3;
        }
    }
    else
    {
        ord2 = int1;
        if (int2 <= int3)
        {
            ord1 = int2;
            ord3 = int3;
        }
        else
        {
            ord1 = int3;
            ord3 = int2;
        }
    }

    std::cout << "The SEQUENCE order you typed in is " << ord1 << ", " << ord2 << ", " << ord3 << ". \n";
}
