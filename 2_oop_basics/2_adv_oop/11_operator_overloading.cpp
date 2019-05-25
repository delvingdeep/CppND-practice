/*
* OBJECTIVES
*   1. Create Point class.
*   2. Define its constructor.
*   3. Define its methods and interface.
*   4. Declare prototype of overload method for + operator.
*   5. Implement logic.
*   6. Write main() function test.
*/

#include <iostream>

class Point
{
    private:
        float x;
        float y;

    public:
        Point(float a=0, float b=0) : x(a), y(b) {}

        // The following will be automatically called when '+' is used with between two Complex objects
        Point operator + (Point const &obj) 
        {
            Point res;
            res.x = Point::x + obj.x;
            res.y = Point::y + obj.y;
            return res;
        }

        void print_points();
};

void Point::print_points() {
    std::cout << "Point: (" << Point::x << ", " << Point::y << ")" << "\n";
}

int main() {
    Point p1(2.5, 4);
    Point p2(2, 4.5);
    std::cout << "First ";
    p1.print_points();
    
    std::cout << "Second ";
    p2.print_points();

    Point p = p1 + p2;  // operator overloaded for user defined data: Point
    std::cout << "Resultant ";
    p.print_points();
}