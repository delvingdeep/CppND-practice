#include <iostream>
#include <string>

// base class 1
class Animal 
{
    public:
        double weight;
        double size;
};

// base class 2
class Pet
{
    public:
        std::string name;
        std::string owner_name;
};

// derived class 1 - Case of multiple inheritance
class Dog : public Animal, public Pet
{
    public:
        bool has_long_fur;
        bool has_short_fur; 
};

// derived class 2
class Cat : public Animal, public Pet
{
    public:
        std::string eye_color;
        int age;
};

int main() {
    Dog d;
    d.has_long_fur = true;
    d.weight = 10;
    d.size = 43;
    d.owner_name = "Deep";
    std::cout << "Dog's Owner name: " << d.owner_name << "\n";
    std::cout << "Dog's weight: " << d.weight << "\n";

    Cat c;
    c.eye_color = "Green";
    c.age = 2;
    c.name = "Tom";
    c.weight = 5;
    std::cout << "Cat's name: " << c.name << "\n";
    std::cout << "Cat's weight: " << c.weight << "\n";
}