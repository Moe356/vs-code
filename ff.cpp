#include <iostream>
int main() {
    int number, reversed = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;
    int x = number;
    int digitCounter = 0;
    
    while (x != 0) {
        x /= 10;
        digitCounter++;
    }

    x = number;
    while (x != 0) {
        int mod = x % 10;
        reversed = reversed * 10 + mod;
        x /= 10;
    }

    std::cout << "Reversed number: " << reversed << std::endl;
    std::cout << "Digit count: " << digitCounter << std::endl;

return 0;
}