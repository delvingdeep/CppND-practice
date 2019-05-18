/*
* Objectives
*   1. Create a class called Abstraction
*   2. Create two private attributes and one private function:
        - number
        - character
        - ProcessAttributes()
*   3. Create a setter function that will set both attributes.
*   4. Create a getter that will run the ProcessAttributes() method and just print the resulting values, not actually return them.
*   5. Write the ProcessAttributes() function so that it multiplies the number by 6 and adds 1 to the character.
*   6. Set values of attributes in main()
*   7. Call the getter function in main() to print the values out.
*/

#include <iostream>

class Abstract
{
    private:
        int number;
        char character;
        void ProcessAttributes();

        public:
            void SetVariables(int num, char chr); 
            void GetMethod();
};

void Abstract::ProcessAttributes() {
    Abstract::number *= 6;
    Abstract::character++;
    }

void Abstract::SetVariables(int num, char chr) { 
    Abstract::number = num; Abstract::character = chr; 
    }

void Abstract::GetMethod() {
    Abstract::ProcessAttributes();
    std::cout << "Modified value of number : " << Abstract::number << "\n";
    std::cout << "Modififed value of character : " << Abstract::character << "\n";
    }

int main() {
    Abstract ab;
    ab.SetVariables(3, 'a');
    ab.GetMethod();
    ab.GetMethod();
}