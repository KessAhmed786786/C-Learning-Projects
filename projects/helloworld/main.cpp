#include <iostream>

int main()
{
    std::cout << "__cplusplus = " << __cplusplus << "\n";

#if __cplusplus == 202302L
    std::cout << "✅ Using final C++23 standard!\n";
#elif __cplusplus > 202002L
    std::cout << "⚠️ Likely using a draft/pre-release of C++23.\n";
#else
    std::cout << "❌ Not using C++23.\n";
#endif

    return 0;
}
