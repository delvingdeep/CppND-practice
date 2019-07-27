#include <iostream>
#include <memory>
#include <vector>

class testUnique {
  // No need to explicitly disable value-copying with this approach. 
  // Now, here we have unique_ptr preventing this behavior
   std::unique_ptr<int> ptr;
public:
   /*
   without unique_ptr we would do something like:
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

    // here we can see that we are trying to make container object for shared pointer
    // we are using share pointers for our unique Class
    // using this we can insure that we have multiple pointers point to totally unique object in application
    // which doesn't have any copies
    std::vector<std::shared_ptr<testUnique> > container;
    // we are adding couple objects to our object container (vector):
    container.push_back(std::make_shared<testUnique> (testUnique(2)));
    container.push_back(std::make_shared<testUnique> (testUnique(52)));
    // Printing results:
    for( int i = 0; i < container.size(); i++)
        std::cout << &container[i] << " "
        << (*container[i]).getAttr() << std::endl;
    return 0;
}