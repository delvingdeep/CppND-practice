/*
* Polymorphism means taking many forms
* There are two types of polymorphism:
*   - Complie Time Polymorphism (static or early binding)
*        '-> Achieved by function overloading, operator overloading
*   - Runtime Polymorphism (dynamic or late binding)
*        '-> Achived by Function overriding: 
*               '-> that is when deried class has defination for one of the member function of base class
*
*/

#include <iostream>
#include <string>

class Date
{
    private:
        int day;
        int month;
        std::string month_name;
        int year;

    public:
        void SetDate(int day, int month, int year);
        int GetDay();
        int GetMonth();
        std::string GetMonthName();
        int GetYear();
        
        // function overloading
        std::string PrintDate(int day, int month, int year);
        std::string PrintDate(int day, std::string month_name, int year);
};

void Date::SetDate(int day, int month, int year) {
    int day_numbers[]{31, 28, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string month_name[]{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    if((year%4 == 0 && year%100 != 0) || year%400 == 0) {
        day_numbers[1]++;
    }

    if(year < 1 || day < 1 || month < 1 || month > 12 || day > day_numbers[month - 1]) {
        throw std::domain_error("Invalid date!");
    }

    Date::day = day;
    Date::month = month;
    Date::month_name = month_name[month - 1];
    Date::year = year;
}

int Date::GetDay() { return Date::day; }
int Date::GetMonth() { return Date::month; }
int Date::GetYear() { return Date::year; }
std::string Date::GetMonthName() { return Date::month_name; }

// overloaded function definition
std::string Date::PrintDate(int day, int month, int year) {
    std::string result  = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
    std::cout << "Using int version of the function : ";
    return result;
}

std::string Date::PrintDate(int day, std::string month_name, int year) {
    std::string result = month_name + " " + std::to_string(day) + ", " + std::to_string(year);
    std::cout << "Using string version of the function : ";
    return result;
}

int main() {
    Date date;
    date.SetDate(21,5,2019);
    std::cout << date.PrintDate(21,5,2019) << "\n";
    std::cout << date.PrintDate(21,"May",2019) << "\n";
}