/*
* Objectives
*   1. Create a class Animal.
*   2. Create 3 attributes as "protected": color, name, age.
*   3. Create a derived class Snake that will inherit the base class Animal.
*   4. Create attribute length for the Snake class.
*   5. Create a derived class Cat with attribute height that will inherit the base class Animal.
*   6. Create getters and setters for all attributes in all classes.
*   7. In the main() function instantiate classes Snake and Cat and initialize their specific attributes 
        and their common attributes that are in the base class.
*/

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string color;
        std::string name;
        int age;

    public:
        std::string getColor() const;
        std::string getName() const;
        int getAge() const;

        void setColor(std::string);
        void setName(std::string);
        void setAge(int);
};

class Snake : public Animal
{
    private:
        float length;
    
    public:
        float getLength() const;
        void setLength(float);
};

class Cat : public Animal
{
    private:
        float height;

    public:
        float getHeight() const;
        void setHeight(float);
};


std::string Animal::getColor() const { return Animal::color; }
std::string Animal::getName() const { return Animal::name; }
int Animal::getAge() const { return Animal::age; }
void Animal::setColor(std::string colr) { Animal::color = colr; }
void Animal::setName(std::string name) { Animal::name = name; }
void Animal::setAge(int age) { Animal::age = age; }

float Snake::getLength() const { return Snake::length; }
void Snake::setLength(float len) { Snake::length = len; }

float Cat::getHeight() const { return Cat::height; }
void Cat::setHeight(float h) { Cat::height = h; }

int main() {
    Snake sn;
    Cat c;

    sn.setName("Python");
    sn.setColor("Black");
    sn.setAge(5);
    sn.setLength(4.5);

    c.setName("Tom");
    c.setColor("Persian Blue");
    c.setAge(2);
    c.setHeight(0.8);

    std::cout << "Snake's name: " << sn.getName() << "\n";
    std::cout << "Snake's color: " << sn.getColor() << "\n";
    std::cout << "Snake's age: " << sn.getAge() << "\n";
    std::cout << "Snake's length: " << sn.getLength() << "\n";
    std::cout << "\n";
    std::cout << "Cat's name: " << c.getName() << "\n";
    std::cout << "Cats's color: " << c.getColor() << "\n";
    std::cout << "Cat's age: " << c.getAge() << "\n";
    std::cout << "Cats's height: " << c.getHeight() << "\n";
}