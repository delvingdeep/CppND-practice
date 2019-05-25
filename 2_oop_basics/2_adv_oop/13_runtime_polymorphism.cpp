/*
* Runtime polymorphism is accomplished by performing function overriding.
*
* Function overriding occurs when a derived class function calls its own definition of a method, 
  instead of the base class's implementation. In this case, the base class's method has been "overridden."
*
*
* OBJECTIVES
*   1. Declare Base and Derived class.
*   2. Override some method.
*   3. Leave other methods as inherited.
*   4. Try to invoke them in main().
*/


#include <iostream>

// Define class Base
class Base
{
    public:
        // Declare an empty public constructor
        Base() {}
    
        // Define virtual print() function
        virtual void print() {
            std::cout << "Print from Base class" << "\n";
        }
    
        // Define non-virtual calc() function
        void calc() {
            std::cout << "Calc from Base class" << "\n";
        }
};



// Define subclass Derived that publicly inherits from Base
class Derived : public Base
{
    public:
        // Declare an empty public constructor
        Derived() {}
    
        // Define print() function
        void print() {
            std::cout << "Print from Derived class" << "\n";
        }
    
        // Define calc() function
        void calc() {
            std::cout << "Calc from Derived class" << "\n";
        }
};


int main() {
    Base *base_ptr;
    Derived derived;
    
    base_ptr = &derived;
    
    //virtual function, binded at runtime (Runtime polymorphism)
    base_ptr->print();
    
    // Non-virtual function, binded at compile time
    base_ptr->calc();
}


/*
* ---------------------------------------
* OUPUT:
*   Print from Derived class
*   Calc from Base class
* ---------------------------------------
*/