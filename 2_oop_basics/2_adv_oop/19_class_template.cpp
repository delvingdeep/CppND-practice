/*
* OBJECTIVES
*   1. Declare class
*   2. Declare generic attributes
*   3. Declare generic methods which are deduced to the same type
*   4. Initialize the program
*/

#include <iostream>
#include <vector>

// generic class definition type T
template <class T>
class Container
{
    private:
        std::vector<T> arr;
        int s;

    public:
        Container() : s(0) { arr.clear(); }
        int size(void) const { return Container::s; }
        void add(T el) {
            Container::s++;
            arr.push_back(el);
        }
        void print(void) {
            for (T i : arr) {
                std::cout << i << " ";
            }
            std::cout << " : " << "Container size: " << Container::s << "\n";
        }
};


int main() {
    Container<float> obj;   // Partial deduction: element type is specified
    obj.add(2.98);
    obj.print();

    obj.add(58.8);
    obj.print();
}