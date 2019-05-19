/*
*  In classical inheritance, a derived class can only access public and protected members of the base.
*
* The main difference between classical inheritance and friend inheritance 
    is that a friend class can access private members of the base class, 
    which isn't the case for classical inheritance.
*
*/

/*
* Objectives:
*   1. Declare a class Rectangle.
*   2. Create a class Square.
*   3. Add class Rectangle as a friend to the class Square.
*   4. Add a private attribute squ_side to class Square.
*   5. Create a public constructor in class Square that will initialize the squ_side attribute with a value.
*   6. Implement class Rectangle
*   7. Add private members rec_width and rec_height to class Rectangle
*   8. Add two public functions to class Rectangle: Rec_Area() and Convert_SquToRec().
*   9. Define Convert_SquToRec() function to take an object of type Square as a parameter 
        and use it to get the private attribute side directly and initialize rec_width and rec_height.
*   10. Implement Rec_Area() function to calculate the area of the rectangle.
*
*/

#include <iostream>

// class declaration
class Rectangle;

// class implementation
class Square
{
    // define Sqaure as firend class of Rectangle
    friend class Rectangle;

    private:
        int squ_side;
    
    public:
        Square(int side) : squ_side(side) {}
};

class Rectangle
{
    private:
        int rec_width;
        int rec_height;

    public:
        int Rec_Area();
        void Convert_SquToRec(Square s);
        int getWidth() const;
        int getHeight() const;
};

void Rectangle::Convert_SquToRec(Square s) {
    Rectangle::rec_width  = s.squ_side;
    Rectangle::rec_height = s.squ_side + 1;
}

int Rectangle::Rec_Area() {
    return Rectangle::rec_height*Rectangle::rec_width;
}

int Rectangle::getWidth() const { return Rectangle::rec_width; }
int Rectangle::getHeight() const { return Rectangle::rec_height; }

int main() {
    Square s(5);
    Rectangle r;

    r.Convert_SquToRec(s);
    std::cout << "Area of rectangle with sides " << r.getHeight() << " & " << r.getWidth() << " is " << r.Rec_Area() << "\n";
}
