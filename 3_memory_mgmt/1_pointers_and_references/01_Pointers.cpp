#include <iostream>

int main() {

    int val = 20;

    // Declare pointer variable
    int *ptr = nullptr;

    // NOTE: Data type of pointer and variable must be same
    ptr = &val; // assign address of the variable to a pointer

    std::cout << "Address of the variable: " << &val << "\n";
    std::cout << "Value at pointer (Address): " << ptr << "\n";
    
    std::cout << "Value of the variable: " << val << "\n";
    std::cout << "Dereferencing the pointer (Value): " << *ptr << "\n";
}