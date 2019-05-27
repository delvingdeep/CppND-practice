/*
* Initialization lists are particularly helpful for user-defined class members
* If access to the default constructor of attributes is not provided, it's a perfect use case for initialization lists
*
*
*
* OBJECTIVES
*   1. Create base class
*   2. Create another class which implements base class as an attribute
*   3. Use the initialization list
*   4. Observe constructor linkage from base class to implementation class
*/

#include <iostream>
#include <string>

class Base1
{
    int attr1;
    float attr2;
    char attr3;

    public:
        Base1(int a, float b, char c) : attr1(a), attr2(b), attr3(c) {
            std::cout << "From Base 1 constructor" << "\n";
        }

        void print() const {
            std::cout << "Attributes of Base1: " << attr1 << " " << attr2 << " " << attr3 << "\n";
        }
};

class Base2
{
    int attr4;
    Base1 attr5;

    public:
        Base2(int a, int b, float c, char d) : attr4(a), attr5(b, c, d) {}

        void print() const {
            std::cout << "Attributes of this class: " << attr4 << "\n";
            attr5.print();
        }
};

int main() {

    Base2 b2(3, 4, 4.5, 'b');
    b2.print();
}
