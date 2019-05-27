/*
* Simple comparison between two variables of unknown type can work using templates.
*/

#include <iostream>

// template
template<typename T>
T ReturnMax(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1 = 50, num2 = 100;
    float num3 = 35.5, num4 = 23.5;

    // return larger of two integers
    std::cout << "Larger of two ints " << num1 << " & " << num2 << " : " << ReturnMax(num1, num2) << "\n";

    // return larger of two floats
    std::cout << "Larger of two floats " << num3 << " & " << num4 << " : " << ReturnMax(num3, num4) << "\n";
 }