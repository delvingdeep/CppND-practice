#include <iostream>
#include <memory>

class A
{
    public:
        void print() { std::cout << "Printing from class A" << "\n"; }    
};

int main() {
    std::unique_ptr<A> ptr (new A);
    ptr->print();

    // get memory address
    std::cout << "ptr : " << ptr.get() << "\n" << "\n";

    // move ptr to another pointer
    std::unique_ptr<A>  new_ptr = std::move(ptr);
    new_ptr->print();
    std::cout << "ptr : " << ptr.get() << "\n";
    std::cout << "new_ptr : " << new_ptr.get() << "\n" << "\n";

    // move new_ptr to another pointer
    std::unique_ptr<A>  latest_ptr = std::move(new_ptr);
    latest_ptr->print();
    std::cout << "ptr : " << ptr.get() << "\n";
    std::cout << "new_ptr : " << new_ptr.get() << "\n";
    std::cout << "latest_ptr : " << latest_ptr.get() << "\n";

    return 0;
}