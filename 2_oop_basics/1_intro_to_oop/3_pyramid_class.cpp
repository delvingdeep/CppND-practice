/*
* Objectives:
*    1. Create a class: Pyramid.
*    2. Create 3 attributes: base_length, base_width, height (this is a square pyramid).
*    3. Create a constructor to initialize all the attributes.
*    4. Create getters and setters for all attributes.
*    5. Create a member function to calculate the volume of the pyramid.
*    6. Optional: create a member function to calculate the surface area of the pyramid.
*    7. Optional: create a member function to check if the attribute values are less than or equal to zero and return an error if they are.
*
* Volume : (bl x bw × h)/3
* Area : (bl*bw + bl*sqrt((bw/2)*(bw/2) + h*h) + bw*sqrt((bl/2)*(bl/2) + h*h))
*       where, bw = base_width
*              bl = base_length
*               h = height
*/

#include <iostream>
#include <cmath>

class Pyramid 
{
    private:
        float base_length;
        float base_width;
        float height;

    public:
        // Constructor with intializer list
        Pyramid(float bl, float bw, float h) : base_length(bl), base_width(bw), height(h) {};
        
        // setters
        void SetBaseLength(float bl) { base_length = bl; }
        void SetBaseWidth(float bw) { base_width = bw; }
        void SetHeight(float h) { height = h; }

        // getters
        float GetBaseLength() const { return base_length; }
        float GetBaseWidth() const { return base_width; }
        float GetHeight() const { return height; }

        // other member function
        void validator() {
            if (base_length <= 0 || base_width <= 0 || height <= 0) {
                throw std::domain_error("Pyramid attributes should be positive.");
            }
        }

        float volume() {
            return (base_length * base_width * height)/3;
        }

        float area() {
            float first_term = base_length * base_width;
            float second_term = base_length * std::sqrt(std::pow((base_width/2), 2) + std::pow(height, 2));
            float thrid_term = base_width * std::sqrt(std::pow((base_length/2), 2) + std::pow(height, 2));

            return first_term + second_term + thrid_term;
        }
};


int main() {
    Pyramid py(5.0, 5.0, -3.0);

    std::cout << "Length of base of Pyramid : " << py.GetBaseLength() << "\n";
    std::cout << "Width of base of Pyramid : " << py.GetBaseWidth() << "\n";
    std::cout << "Height of Pyramid : " << py.GetHeight() << "\n";
    std::cout << "-------------------------------" << "\n";
    py.validator();
    std::cout << "Area of Pyramid : " << py.area() << "\n";
    std::cout << "Volume of Pyramid : " << py.volume() << "\n";

    return  0;
}