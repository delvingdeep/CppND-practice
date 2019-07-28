#include <iostream>
#include <memory>
#include <vector>

class testUnique {
  // No need to explicitly disable value-copying with this approach. 
  // Now, here unique_ptr prevents this behavior
   std::unique_ptr<int> ptr;
public:
   /*
   without unique_ptr it can be done by something like:
        testUnique(const testUnique&);
        testUnique& operator=(const testUnique&);
   */
   testUnique(int val): ptr(new int(val)){}
   testUnique():ptr(new int(0)) { }
   //getter:
   int getAttr() const {
       return *ptr;
   }
};
int main() {

    // here a container object for shared pointer is made
    // share pointers is used for own unique Class
    // using this it can be insured that multiple pointers point to totally unique object in application
    // which doesn't have any copies
    std::vector<std::shared_ptr<testUnique> > container;
    // adding couple objects to object container (vector):
    container.push_back(std::make_shared<testUnique> (testUnique(2)));
    container.push_back(std::make_shared<testUnique> (testUnique(52)));
    // Printing results:
    for( int i = 0; i < container.size(); i++)
        std::cout << &container[i] << " "
        << (*container[i]).getAttr() << std::endl;
    return 0;
}