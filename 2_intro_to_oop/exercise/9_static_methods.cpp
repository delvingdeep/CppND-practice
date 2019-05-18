/*
* Static methods are functions that are a part of the class interface, but they are instance independent.
* The scope of static methods is much larger in the sens that it don't require any object to initialize it.
*/

#include <iostream>

class Abstraction
{
    private:
        int number;
        char character;

    public:
        void static PrintCharAsNumber(char c);
};

void Abstraction::PrintCharAsNumber(char c) {
    int result = 'c';
    std::cout << result << "\n";
}

int main() {
    char c = 'A';
    Abstraction::PrintCharAsNumber(c);  // calling class method without creating class instance
}