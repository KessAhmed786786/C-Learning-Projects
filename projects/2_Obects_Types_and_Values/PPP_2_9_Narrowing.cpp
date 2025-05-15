// Program to demonstrate information narrowing

#include <iostream>

int main()
{
    double d = 0;

    // Four Notations
    int x0 = 7.8;
    int x1{7.8};
    int x2 = {7.8};
    int x3(7.8);

    while (std::cin >> d)
    {
        int i = d;
        char c = i;
        std::cout << "d== " << d
                  << " i== " << i
                  << " c==" << c
                  << " char(" << c << ")\n";
    }
}
