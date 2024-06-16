#include <iostream>

int main() {
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double that number is: " << 2 * x << std::endl;
    return 0;
}