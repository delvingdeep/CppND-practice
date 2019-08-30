/*
** The thread constructor may be called with a function and all its arguments. 
** That is possible because the thread constructor is a variadic template that takes multiple arguments.
** With variadic templates it is possible to include any number of arguments of any type.
*/

#include <iostream>
#include <thread>
#include <string>

void printID(int id) {
    std::this_thread::sleep_for(std::chrono::microseconds(50));
    std::cout << "ID = " << id << std::endl;
}

void printIDAndName(int id, std::string name) {
    std::this_thread::sleep_for(std::chrono::microseconds(100));
    std::cout << "ID = " << id << " --> Name = " << name << std::endl;
}

int main() {
    int id = 0;     // declare an integer variable

    // starting threads using variadic templates
    std::thread t1(printID, id);
    std::thread t2(printIDAndName, ++id, "MyString");
    // std::thread t3(printIDAndName, ++id);   // ERROR : complie time error

    // wait for threads to finish work
    t1.join();
    t2.join();

    return 0;
}