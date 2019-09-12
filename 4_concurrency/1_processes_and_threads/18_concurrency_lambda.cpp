#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <random>

int main() {
    // create threads
    std::vector<std::thread> threads;
    for (size_t i = 0; i < 10; ++i) {
        
        // create new thread from lambda
        threads.emplace_back([i]() {
            
            // wait for certain amount of time
            std::this_thread::sleep_for(std::chrono::microseconds(10 * i));

            // perform some work
            std::cout << "Hello from the thread #" << i << std::endl;
        });
    }

    // do some work in the Main
    std::cout << "Hello from the Main thread" << std::endl;

    // wait for all the threads to finish
    for(auto &t : threads) { t.join(); }

    return 0;
}