#include <iostream>

int main() {

    // integer type pointer
    int *ptr = nullptr;

    // set-up memory on heap for the pointer
    ptr = new int;

    *ptr = 8;

    std::cout << "Memory address of pointer: " << ptr << "\n";
    std::cout << "Memory address value: " << *ptr << "\n";

    // free-up heap memory
    delete ptr;

    return 0;
}