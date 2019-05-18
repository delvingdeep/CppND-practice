/*
* Abstraction means the user is unaware of the implementation, and
  only thing available with the user is interface.
*/

/*
* Objectives
*   1. Create a class Abstraction.
*   2. The class needs two private attributes var1 and var2.
*   3. Create one single function to set both values.
*   4. Create one function to print both values.
*/

// --------- First implementation ----------

#include <iostream>

class Abstraction
{
    private:
       float var1 = 0;
       float var2 = 0;

    public:
        void SetVar(float v1, float v2) { var1 = v1; var2 = v2; }
        void printVar() const {
            std::cout << "First Variable : " << var1 << "\n";
            std::cout << "Second Variable : " << var2 << "\n";
        }
};


// -------- Second implementation -----------

#include <iostream>
#include <vector>

class Abstraction
{
    private:
        std::vector<float> var = {0, 0};

    public:
        void SetVar(float v1, float v2) {
            var[0] = v1;
            var[1] = v2;
        }

        void printVar() const {
            std::cout << "First Variable : " << var[0] << "\n";
            std::cout << "Second Variable : " << var[1] << "\n";
        }
};

// Object interface
int main() {
    Abstraction ab;
    ab.SetVar(2.3, -4);
    ab.printVar();
}