/*
* Objectives:
*   1. Create a class Line.
*   2. Implement a protected attribute length in class Line.
*   3. Create a derived class Circle that inherits from class Line,
        with 2 function declarations getArea() and setRadius() using the attribute length from class Line 
        to represent the circle radius (area of a circle = πr^2)
*   4. Create a const pi to be used throughout the lab, outside of main() 
        and all classes (to hold the value of π=3.14159...)
*   5. Call in main() the functions for setRadius() and getArea().
*/

#include <iostream>

constexpr float PI = 3.1415;

class Line
{
    protected:
        float length;
    
    public:
        float getLength() const;
};

class Circle : public Line
{
    public:
       void setRadius(float);
       float getRadius() const;
       float getArea() const;
};

float Line::getLength() const { return Line::length; }

void Circle::setRadius(float r) { Circle::length = r; }
float Circle::getRadius() const { return Circle::length; }
float Circle::getArea() const { return PI*Circle::length*Circle::length; }

int main() {
    Circle c;
    c.setRadius(3);
    std::cout << "Area of circle with radius " << c.getRadius() << " : " << c.getArea() << "\n";
}