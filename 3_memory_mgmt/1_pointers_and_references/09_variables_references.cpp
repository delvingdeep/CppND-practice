#include <iostream>

int main() {
    int var1 = 8;
    double var2 = 8.2;

    int &ref1 = var1;
    double &ref2 = var2;

    std::cout << ref1 << "\n";
    std::cout << ref2 << "\n";

    // modify variables
    var1 = 3;
    var2 = 9.5;

    std::cout << ref1 << "\n";
    std::cout << ref2 << "\n";
}