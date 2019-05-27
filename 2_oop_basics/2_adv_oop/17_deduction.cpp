/*
* Deduction occurs when an object is instantiated without explicitly identifying the types. 
* Instead, the compiler "deduces" the types. 
* This can be helpful for writing code that is generic and can handle a variety of inputs.
*
* OBJECTIVES
*   1. Declare a generic conditional function
*   2. Use it in conditional sorting
*   3. Declare another function which is used for processing generic types (this case is print())
*/

#include <iostream>
#include <vector>

// template function comparison of two numbers
template <typename T>
bool func(T x, T y) {
    return (x < y);
}

// template for printing
template <typename T>
void print(std::vector<T> v) {
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<float> v1 = {3, 2, 15.5, 57.6, 9, 12.9, 47.3};
    std::vector<char> v2 = {'a', 'D', 'm', 'N', 'X', 'Y', 'z'};

    // deducing function return type
    std::sort(v1.begin(), v1.end(), func<float>);
    print(v1);

    // for input parameters as PrintVector we have total deduction,without specification
    print(v2);

    // this will support any type of that which has defined support for (in this case) < operator
    std::sort(v2.begin(), v2.end(), func<char>);
    print(v2);
}