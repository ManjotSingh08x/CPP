#include <iostream>
#include <string>

std::string decimalToBinary(int n) {
    std::string binary = "";
    while (n > 0) {
        binary = std::to_string(n % 2) + binary;
        n /= 2;
    }
    return binary.empty() ? "0" : binary; // Handle the case for n = 0
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    std::string binary = decimalToBinary(decimal);
    std::cout << "Binary equivalent: " << binary << std::endl;

    return 0;
}
