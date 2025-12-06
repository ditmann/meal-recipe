#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;

    //dette holder terminalen på åpen etter at programmet er ferdig
    #ifdef _WIN32
        std::cout << "Press Enter to continue...";
        std::cin.get();
    #endif

}

