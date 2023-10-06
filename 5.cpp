#include <iostream>

int main() {
    unsigned int x;
    
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if (x & 1) {
        std::cout << x << " is an odd number." << std::endl;
    }
    else {
        std::cout << x << " is an even number." << std::endl;
    }

    return 0;
}
