#include <iostream>
#include <cmath>

void function(double *_sin, double *_cos, double angle);

int main() {
    double angle;
    double sine, cosine;

    std::cout << "Enter the value for angle: ";
    std::cin >> angle;

    function(&sine, &cosine, angle);

    std::cout << "Sine of the angle: " << sine << "\n";
    std::cout <<"Cosine of the angle: " << cosine << "\n";
}

void function(double *_sin, double *_cos, double angle) {
    *_sin = std::sin(angle);
    *_cos = std::cos(angle);
}