/*
* Initialization lists are part of class constructors. 
* These lists ensure that class members are automatically initialized.
*
*
* OBJECTIVES
*   1. Declare class with attributes
*   2. Use default C++ types for class attributes
*   3. Add an initialization list
*   4. Create class object
*/

#include <iostream>

class base1
{
    private:
        int attr1;
        float attr2;

    public:
        // constructor without initialization list
        base1(int a, float b) {
            attr1 = a;
            attr2 = b;
            std::cout << "From constructor 1" << "\n";
        }

        void print() const {
            std::cout << "Attribute 1: " << attr1 << " and Attribute 2: " << "\n";
        }
};

class base2
{
    private:
        int attr3;
        float attr4;
        char attr5;

    public:
        base2(int a, float b, char c) : attr3(a), attr4(b), attr5(c) {
            std::cout << "From constructor 2" << "\n";
        }

    void print() const {
        std::cout << "Attribute 3: " << attr3 << ", Attribute 4: " << attr4 << " and Attribute 5: " << attr5 << "\n";
    }
};

int main() {
    base1 b1(3, 4.5);
    b1.print();

    base2 b2(5, 6.7, 'c');
    b2.print();
    
}
