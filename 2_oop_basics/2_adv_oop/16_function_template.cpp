/*
* OBJECTIVES
*   1. Using template arguments, form generic functions using templates
*   2. Define average function for calculating numbers and number look alike
*   3. Print all results in console
*/

#include <iostream>

// template for average function
template<typename T>
T average(T a, T b) {
    return ((a+b)/2);
}

int main() {
    int a=45, b=50;
    float c=32.8, d=47.3;

    std::cout << "Average of ints: " << average(a, b) << "\n";
    std::cout << "Average of floats: " << average(c, d) << "\n";
    std::cout << "Average of doubles: " << average(34.3, 73.8) << "\n";
    std::cout << "Average of doubles: " << average<double>(34.3, 73.8) << "\n";

}