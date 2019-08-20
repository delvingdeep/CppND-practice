#include <iostream>
#include <thread>

int main() {

    std::cout << "Hello Concurrent world !!! \n";
    std::cout << "Main thread id = " << std::this_thread::get_id() << std::endl;

    return 0; 
}