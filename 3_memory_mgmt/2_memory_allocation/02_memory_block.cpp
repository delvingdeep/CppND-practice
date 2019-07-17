#include <iostream>

int main() {

    int *ptr = nullptr;

    // assign 5 blocks of memory
    ptr = new int[5];

    // set user input data on this memory block
    for(int j = 0; j < 5; j++) {
        std::cout << "Enter a number to store at " << j << " : ";
        std::cin >> ptr[j];
    }

    for(int i = 0; i < 5; i++) {
        std::cout << "Memory block address : " << ptr + i << " contains value: " << ptr[i] << "\n";
    }

    // deallocate memory block
    delete[] ptr;

    return 0;
}