// Converting characters into integers floating points and other types

#include <iostream>

int main()
{
    char c = 'x';
    int i1 = c;
    int i2 = c + 1000;
    double d = i2 + 7.3;
    std::cout << c << "\n"
              << i1 << "\n"
              << i2 << "\n"
              << d << "\n";
}
