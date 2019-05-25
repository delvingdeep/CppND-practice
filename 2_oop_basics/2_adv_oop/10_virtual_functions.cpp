/*
* OBJECTIVES
*   1. Create base class called Shape.
*   2. Chose mutual characteristics of every shape in geometry.
*   3. Divide it in individual logical responsibilities.
*   4. Design methods for base class and make them pure virtual functions const = 0.
*   5. Write the derived classes.
*   6. Inherit parent Shape class.
*   7. Write derived implementation of overridden base methods.
*   8. Test in main()
*/

#include <iostream>

const float PI = 3.1415;

// strictly base class because its interface is pure virtual methods
class Shape
{
    public:
        // empty constructor
        Shape() {};

        //const = 0 specifier in interface notifies compiler that this method must be implemented in one of the derived classes
        virtual float area() const = 0; 
        virtual float perimeter() const = 0;
};

class Rectangle : public Shape
{
    private:
        float length;
        float width;

    public:
        Rectangle() : length(5), width(3) {}

        // Overriding base class methods

        virtual float area() const override {
            return length * width;
        }

        virtual float perimeter() const override {
            return 2*(Rectangle::length + Rectangle::width);
        }
};

class Circle : public Shape
{
    private:
       float radius;

    public:
        Circle() : radius(3) {}
        
        virtual float area() const override {
            return PI * radius * radius;
        }
        
        virtual float perimeter() const override {
            return 2 * PI * radius;
        }
};

int main() {
    Rectangle r;
    Circle c;

    std::cout << "Area of Rectangle: " << r.area() << "\n";
    std::cout << "Area of Circle: " << c.area() << "\n";
}