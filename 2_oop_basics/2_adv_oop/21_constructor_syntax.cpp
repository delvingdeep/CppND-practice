/*
* Reasons behind using Initialization List:
*   - The compiler can optimize initialization faster than if the members were initialized from within the constructor
*       The code directly assigns to the class attributes
*   - If there is a constant class attribute, that can only be initialized using an Initialization list
*       Otherwise, it would only violate the const keyword simply by initializing the member in the constructor
*   - The attributes defined as references must use initialization lists
*
*
* OBJECTIVES
*   1. Create class with constant and reference attributes
*   2. Instantiate an object of that class
*   3. Test specific attributes
*/

#include <iostream>

class InitList
{
    int &ref;   // reference
    const char c;   // constant

    public:
        InitList(int &_ref, char _c) : ref(_ref), c(_c) {}
        void print() {
            std::cout << "Class attributes: " << ref << " " << c << "\n";
        }
};

int main() {
    int var = 10;

    InitList obj(var, 'A');
    obj.print();

    // Referenced variable:
    var += 10;
    obj.print();
}



