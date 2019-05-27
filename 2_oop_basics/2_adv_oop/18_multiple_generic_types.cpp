/*
* OBJECTIVES
*   1. Create a generic function that accepts two generic arguments of potentially different types
*   2. Use it for specific logic where these two groups are compatible (Multiplying)
*   3. Use the same function with different arguments
*/

#include <iostream>
#include <vector>

// helper generic function with generic vector<T> parameter
template <typename T>
void print(std::vector<T> v) {
    for (T i : v)
        std::cout << i << " ";
    std::cout << "\n";
}

// multiple use of type parameters for unique types
// T1 supports basic operation, but T2 can be used as indexed container 
// and object which contains method size()
template <typename T1, typename T2>
void scale(T1 num, T2 &container) {
    for (auto &i : container) {
        i *= num;
    }
}

int main() {
    std::vector<int> container = {3, 4, 8, 27, 47, 83, 94};
    print(container);

    scale(2, container);
    print(container);

    scale('Z', container); // Z will convert to 90 and used as an integer
    print(container);
}