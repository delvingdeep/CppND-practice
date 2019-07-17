#include <iostream>

int main() {

    int *ptr = nullptr;

    // assign memory on heap
    ptr = new int(10);

    std::cout << "Address of the pointer: " << ptr << "\n";
    std::cout << "Value stored at this address: " << *ptr << "\n";

    // delete memory on heap
    delete ptr;

}