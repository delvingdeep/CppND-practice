/*
* OBJECTIVES
*   1. Create class Point
*   2. Create coordinates for the point x and y as two variables of type double and a constructor to initialise them.
*   3. Use print() function to implement overload.
*   4. Overload function with zero, one, and two parameters.
*   5. Check that when p.print() is invoked without any parameters, the original function is called. 
       After that it can be invoked with parameters and the overloaded function will be called instead.
*/

#include <iostream>

class Point
{
    private:
        double x;
        double y;

    public:
        Point(double a, double b) : x(a), y(b) {}

        // function overload
        void print();
        void print(double);
        void print(double, double);
};

void Point::print() {
    std::cout << "Point: (" << Point::x << ", " << Point::y << ")" << "\n";
}

void Point::print(double a) {
    std::cout << "Point: (" << a << ", " << Point::y << ")" << "\n";
}

void Point::print(double a, double b) {
    std::cout << "Point: (" << a << ", " << b << ")" << "\n";
}

int main() {
    Point p1(2.3, 4);

    // function overloading
    p1.print();
    p1.print(4);
    p1.print(3, 7.8);
}