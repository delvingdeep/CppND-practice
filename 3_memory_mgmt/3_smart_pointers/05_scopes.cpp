#include <iostream>

int var = 5;        // global varible

namespace test
{
    int var = 3;    // namespace variable
}

void func() {
    int var = 7;    // function variable
    std::cout << "Function variable : " << var << std::endl;
}

int main() {
    int var = 10;   // local variable

    std::cout << "Global variable : " << ::var << std::endl;
    std::cout << "Namesapce variable : " << test::var << std::endl;
    func();     // function call, which uses variable from within function scope
    std::cout << "Local variable : " << var << std::endl;

    return 0;
}

