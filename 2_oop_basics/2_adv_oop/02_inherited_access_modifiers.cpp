// code implementation to show multiple level of privacy in inheritance

#include <iostream>

class ParentClass
{
    public:
        int var1;

    protected:
        int var2;
    
    private:
        int var3;
};

class ChildClass_1 : public ParentClass
{
    // var1 is public for this class
    // var2 is protected for this class
    // var3 cannot be accessed from this class
};

class ChildClass_2 : protected ParentClass
{
    // var1 is protected for this class
    // var2 is protected for this class
    // var3 cannot be accessed from this class
};

class ChildClass_3 : private ParentClass
{
    // var1 is private for this class
    // var2 is private for this class
    // var3 cannot be accessed from this class
};

int main() {
    ChildClass_1 c1;
    ChildClass_2 c2;
    ChildClass_3 c3;

    c1.var1 = 4;
    std::cout << c1.var1 << "\n";   // output = 4

    // error: cannot cast 'ChildClass_2' to its protected base class 'ParentClass'
    // c2.var1 = 5;                    // Error
    // std::cout << c2.var1 << "\n";

    // error: cannot cast 'ChildClass_3' to its private base class 'ParentClass'
    // c3.var1 = 6;                     // Error
    // std::cout << c3.var1 << "\n";
}