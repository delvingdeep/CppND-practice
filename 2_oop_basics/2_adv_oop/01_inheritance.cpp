/*
* The capability of a class to derive properties and characteristics from another class is called Inheritance.
*
* Inheritance saves from writing class attributes from base class to derived class.
* Inheritance saves from writing same code over and over again.
*/

#include <iostream>

// base class
class Vehicle
{
    private:
        int mileage;
        int fuel_capacity;

    public:
        void get_info() {
            std::cout << "This is a vehicle" << "\n";
        }
};

// derived class 1
class Car : public Vehicle 
{
    public:
        bool is_cabriolet;
};

// derived class 2
class Truck : public Vehicle
{
    public:
        bool is_sleeping_cabin;
};

int main() {

    Car c;
    c.is_cabriolet = true;
    std::cout << c.is_cabriolet << "\n";
    c.get_info();
}