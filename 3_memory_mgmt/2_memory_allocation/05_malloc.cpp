/*
* function is to allocate a block of specific size, measured in bytes of memory,
* where result of this operation (function) is pointer to the beginning of the block.
* In case of failed allocation return value is null pointer.
* Data stored in this memory block is not initialized.
**/

#include <iostream>
#include <cstring>      // Included library for memset
#include <cstdlib>      // included library for malloc

int main() {
    
    int *ptr = NULL;
    // Notice how pointer is allocated to single int memory space but later is redicerted to show to memory block
    ptr = new(std::nothrow) int;
    
    //  We can initialize memory block using malloc declaring memory space for array of 4 integers
    ptr = (int*)std::malloc(4*sizeof(int));
    for (int i = 0; i < 4; i++){
        std::cout << "Address: " << &ptr[i] << " Value: "<< ptr[i] << std::endl;
    }

    // every memory place is used for initialization of specific value here we are using letters for values, but casted to ints
    for( int i=0; i<4; i++) {
        // sending address by reference
        std::memset(&ptr[i],('A' + i), sizeof(int));
    }

    // Printing state of our array we are converting int values to char to see what is happening with our values
    for (int i=0; i<4; i++) {
        std::cout << "Address: " << &ptr[i] << " Value: "<< char(ptr[i]) << std::endl;
    }

    delete[] ptr;   // free up the allocated space

    return 0;
}