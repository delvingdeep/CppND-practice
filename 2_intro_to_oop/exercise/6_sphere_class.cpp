/*
* Objectives
*   1. Create a class called Sphere.
*   2. Add one member variable: radius.
*   3. Create a member function to return the volume of the sphere.
*   4. Create a constructor to initialize the variable.
*   5. Write a main() function to initialize an object of type Sphere and print the volume.
*/

#include <iostream>
#include <math.h>

class Sphere
{
    private:
        // member variables
        float radius;

    public:
        // Constructor with initializer list
        Sphere(float r) : radius(r) {}
        float GetRadius() const { return radius; }
        // static constexpr pi = 3.14;
        float volume() const {
            return ((4.0/3) * M_PI * pow(radius, 3));
        }
};

// main function to test the class
int main() {
    Sphere s(3);
    std::cout << "Volume of Sphere with radius " << s.GetRadius() << " : " << s.volume() << "\n";
}