#include <iostream>

template <typename T>
void swap(T &var1, T &var2) {
    var1 += var2;           // add variable2 to variable1
    var2 = var1 - var2;     // subtract variable2 from variable1 to get new variable2
    var1 -= var2;           // subtract new variable2 from new variable1 to get newest variable1
}


int main() {
    float first_var = 18.10;
    float second_var = 20.22;

    // print initial values of the variables
    std::cout << "Variable1 : " << first_var << "\n";
    std::cout << "Variable2 : " << second_var << "\n";

    // apply function
    std::cout << "Calling function swap() ----->" << "\n";
    swap(first_var, second_var);

    // print values of the variables after calling function swap
    std::cout << "Variable1 : " << first_var << "\n";
    std::cout << "Variable2 : " << second_var << "\n";
}