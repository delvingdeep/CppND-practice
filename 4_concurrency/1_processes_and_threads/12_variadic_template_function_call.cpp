/*
** There is one more difference between calling a function directly and passing it to a thread: 
        With the former, arguments may be 
            - passed by value
            - by reference or 
            - by using move semantics - depending on the signature of the function
        When calling a function using a variadic template, 
            the arguments are by default either moved or copied - depending on wether they are rvalues or lvalues
*/

#include <iostream>
#include <thread>
#include <string>

void printName(std::string name, int waitTime) {
    std::this_thread::sleep_for(std::chrono::milliseconds(waitTime));
    std::cout << "Name (from Thread) = " << name << std::endl;
}

int main() {
    std::string name1 = "Random name";
    std::string name2 = "Some name";
    
    // starting thread using value-copy and move semantics
    std::thread t1(printName, name1, 50);
    std::thread t2(printName, std::move(name2), 100);
    
    // merging the threads into the main
    // move semantics won't function after calling join()
    t1.join();
    t2.join();

    std::cout << "Name (from main) = " << name1 << std::endl;
    std::cout << "Name (from main) = " << name2 << std::endl;
    
    return 0;
}