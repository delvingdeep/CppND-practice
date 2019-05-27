/*
* Second type of Polymorphism utilized with Function Overiding
* Overiding occurs when multiple definition of a function have same signature (same name and same arguments)
* Usually observed in Base and Derived class where definition in base class can be overidden by the one from derived class
* 
* Virtual is a the keyword which determines which definition stays
* If Virtual is used in base class, then function definition from the derived class stays
* Else definition from the base class stays
*
* Virtual function is bined at runtime, so called Runtime Polymorphism
* Non-virtual function is bined at complie time.
*/

// C++ program for function overriding
#include<iostream>

class Base_Class 
{
    public:
        virtual void PrintVirtual () {
          std::cout << "This is a message from the base class!!" << "\n";
        }

        void Print () {
          std::cout << "This displays the base class." << "\n";
        }
};

class Derived_Class : public Base_Class 
{
  public:
      //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
      void PrintVirtual ()  {
        std::cout << "This is a message from the derived class!!" << "\n";
      }

      void Print () {
        std::cout << "This displays the derived class." << "\n";
      }
};


int main()  
{
    Base_Class *base_pointer;
    Derived_Class der;
    base_pointer = &der;

    //virtual function, binded at runtime (Runtime polymorphism)
    base_pointer->PrintVirtual();  // OUTPUT: print derived class

    // Non-virtual function, binded at compile time
    base_pointer->Print(); // OUTPUT: print base class

}