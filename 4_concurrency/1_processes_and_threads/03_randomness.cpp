#include <iostream>
#include <thread>

// important trait of concurrent programs is their non-deterministic behavior
void threadFunction() {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in thread 1 \n";

    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in thread 2 \n";
}

int main() {
    // create thread
    std::thread t(threadFunction);

    // do something in main
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in main 1 \n";

    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finsihed work in main 2 \n";
    
    // wait for thread to finish
    t.join();

    return 0;
}