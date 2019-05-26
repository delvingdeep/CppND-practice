/*
* Templates: specifies generic programming
* Tempaltes can be parameterized with types or values
* "typename" or "class" keyword to indicate what mark is used to which type to pass in function prototype
* ( template <typename T>) or ( template <class T>), both are valid
* "typename" keyword is preffered more
* Like normal parameters, default arguments can be specified to templates
*/

#include <iostream>

template<class T, class U = char>
class A
{
    public:
        T x;
        U y;
        A() { std::cout << "Constructor called" << "\n"; }
};

int main() {
    A<char> a; // This will call A<char, char>
}