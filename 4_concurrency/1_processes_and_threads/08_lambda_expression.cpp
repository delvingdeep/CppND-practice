#include <iostream>

int main() {
    // create lambdas
    int id = 0;     // define integer variable

    // auto f0 = []() { std::cout << "ID = " << id << std::endl; }; // ERROR : 'id' cannot be accessed

    ++id;
    auto f1 = [id]() { std::cout << "ID = " << id << std::endl; }; // OK : 'id' is captured by value

    ++id;
    auto f2 = [&id]() { std::cout << "ID = " << id << std::endl; }; // OK : 'id' is captured by reference

    // auto f3 = [id]() { std::cout << "ID = " << ++id << std::endl; }; // ERROR: 'id' may not be modified

    auto f4 = [id]() mutable { std::cout << "ID = " << ++id << std::endl; }; // OK : 'id' may be modified
    
    // lambda does not exist at runtime, but the runtime effect of a lambda is generation of an object, called closure 
    // execute lambdas
    f1();
    f2();
    f4();   // f1, f2, f4 are closures : resultant objects of the lambdas

    return 0;
}