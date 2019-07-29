#include <iostream>
#include <memory>

class A
{
    public:
        void print() { std::cout << "Printing from the class" << "\n"; }
};

int main() {

    std::shared_ptr<A> ptr_1(new A);
    ptr_1->print();
    std::cout << "ptr_1 : " << ptr_1.get() << "\n";
    std::cout << "ptr_1 count : " << ptr_1.use_count() << "\n\n";

    // declare second shared pointer
    std::shared_ptr<A> ptr_2(ptr_1);
    std::cout << "Create shared ptr_2 \n";
    ptr_2->print();
    std::cout << "ptr_1 : " << ptr_1.get() << " and count : " << ptr_1.use_count() << "\n";
    std::cout << "ptr_2 : " << ptr_2.get() << " and  count : " << ptr_2.use_count() << "\n\n";

    // relinquish the ownership of ptr_1 on the object, so ptr_1 becomes NULL
    ptr_1.reset();
    std::cout << "Reset ptr_1 \n";
    std::cout << "ptr_1 : " << ptr_1.get() << "\n";
    std::cout << "ptr_2 : " << ptr_2.get() << " and count : " << ptr_2.use_count() << "\n";
 
    return 0;
}