// Program that...

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Please enter a floating-point value: \n";
    int n = 0;
    int b = 0;
    std::cin >> n >> b;
    std::cout << "n == " << n
              << "\nn+1 == " << n + 1
              << "\nn*3 == " << n * 3
              << "\nn twice == " << n + n
              << "\nn squared == " << n * n
              << "\nn halved == " << n / 2
              << "\nn sqrt == " << std::sqrt(n)
              << "\nn modulo == " << n % 2
              << "\nb == " << b
              << "\nn guarantee == " << n / b * b + n % b
              << "\n";
}
