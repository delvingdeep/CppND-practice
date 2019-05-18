/*
* Objectives:
*   1. Create a class called Car.
*   2. Create 3 member variables: horsepower, weight and brand. The brand attribute must be a character array.
*   3. Create getter and setter functions for all attributes. The setter function for brand must accept a C++ string as a parameter 
*      and convert that string into a C-style string (a character array ending in null character) to set the value of brand.
*   4. The getter function for the brand must return a string, so in this function you first will need to convert brand to a std::string, and then return it.
*/

#include <string>
#include <cstring>
#include <iostream>

class Car {
    // Declare private attributes
    private:
        int horsePower;
        float weight;
        char *Brand;
        
    // Declare getter and setter for brand
    public:
        void SetHorsePower(int hp);
        void SetWeight(float w);
        void SetBrand(std::string b);
    
        int GetHorsePower() const;
        float GetWeight() const;
        std::string GetBrand() const;
        
};

// Define setters
void Car::SetHorsePower(int hp) {
    Car::horsePower = hp;
}

void Car::SetWeight(float w) {
    Car::weight = w;
}

void Car::SetBrand(std::string b) {
    Car::Brand = new char[b.length() + 1];
    strcpy(Car::Brand, b.c_str());
}

// Define getters
int Car::GetHorsePower() const {
    return horsePower;
}

float Car::GetWeight() const {
    return weight;
}

std::string Car::GetBrand() const {
    return Brand;
}

// Test in main()
int main() 
{
    Car car;
    car.SetBrand("Peugeot");
    std::cout << car.GetBrand() << "\n";   
}