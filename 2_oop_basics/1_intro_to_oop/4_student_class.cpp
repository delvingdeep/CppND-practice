#include <iostream>
#include <string>

// TODO: Define your "Student" class below with constructor
// and getter/setter methods
class Student {
     
     // define private attributes
     private:
         // student name
         // years of study
         // GPA
        std::string student_name;
        int years_to_study;
        float gpa;

     public:     
         // write a public constructor for Student
         // that takes name, grade, and GPA
         // and initializes the private attributes
         Student(std::string name, int grade, float gpa): student_name(name), years_to_study(grade), gpa(gpa) {}

         // getter for student name
         std::string GetName() const { return student_name; }
         // getter for years of study
         int GetGrade() const { return years_to_study; }
         // getter for student's GPA
         float GetGpa() const { return gpa; }

         // setter for student's name
         void SetName(std::string name) { student_name = name; }
         // setter for years of study
         void SetGrade(int grade) { years_to_study = grade; }
         // setter for GPA
         void SetGpa(float gpa) { gpa = gpa; }
};

int main()
{
  // Test instantiation and getters / setters
    Student st("Deep", 12, 3.8);
    
    std::cout << "Student name : " << st.GetName() << "\n";
    std::cout << "Student Grade : " << st.GetGrade() << "\n";
    std::cout << "Student GPA : " << st.GetGpa() << "\n";
}