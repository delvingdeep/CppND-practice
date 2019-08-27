#include <iostream>

int main() {
    int id = 0;  // declare integer variable

    // capture by reference (immutable)
    auto f0 = [&id]() { std::cout << "a) ID in Lambda = " << id << std::endl; };

    // capture by value (mutable)
    auto f1 = [id]() mutable { std::cout << "b) ID in Lambda = " << ++id << std::endl; };
    f1();   // call the closure and execute the code within lambda
    std::cout << "c) ID in main = " << id << std::endl;

    // capture by reference (mutable)
    auto f2 = [&id]() mutable { std::cout << "d) ID in Lamda = " << ++id << std::endl; };
    f2();
    std::cout << "e) ID in main = " << id << std::endl;

    // pass parameter
    auto f3 = [](const int id) { std::cout << "f) ID in Lambda = " << id << std::endl; };
    f3(++id);
    std::cout << "g) ID in main = " << id << std::endl;

    // calling the initial closure, capture by reference one
    f0();

    return 0;
}

/*
** OUTPUT:
    b) ID in Lambda = 1
    c) ID in main = 0
    d) ID in Lamda = 1
    e) ID in main = 1
    f) ID in Lambda = 2
    g) ID in main = 2
    a) ID in Lambda = 2
*/