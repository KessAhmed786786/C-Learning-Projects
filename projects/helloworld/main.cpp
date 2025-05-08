#include <iostream>

int main()
{
    std::cout << "__cplusplus = " << __cplusplus << "\n";

#if __cplusplus == 199711L
    std::cout << "Standard: C++98 or C++03\n";
#elif __cplusplus == 201103L
    std::cout << "Standard: C++11\n";
#elif __cplusplus == 201402L
    std::cout << "Standard: C++14\n";
#elif __cplusplus == 201703L
    std::cout << "Standard: C++17\n";
#elif __cplusplus == 202002L
    std::cout << "Standard: C++20\n";
#elif __cplusplus == 202100L
    std::cout << "Standard: Pre-release or draft C++23 (2021 draft)\n";
#elif __cplusplus == 202302L
    std::cout << "Standard: Final C++23\n";
#elif __cplusplus > 202302L
    std::cout << "Standard: Future or experimental standard (C++26+?)\n";
#else
    std::cout << "Standard: Unknown or non-standard value\n";
#endif

    return 0;
}
