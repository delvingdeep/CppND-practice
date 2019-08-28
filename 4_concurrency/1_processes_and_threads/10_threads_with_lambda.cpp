#include <iostream>
#include <thread>

int main() {
    int id = 0;

    // starting a first thread (by reference)
    auto f0 = [&id]() {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << "a) ID in thread (call-by-reference) = " << id << std::endl;
    };
    std::thread t1(f0);

    // starting a second thread (by value)
    std::thread t2([id]() mutable {
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        std::cout << "b) ID in thread (call-by-value) = " << id << std::endl;
    });
    
    // increment and print id in main
    ++id;
    std::cout << "c) ID in main (call-by-value) = " << id << std::endl;

    // wait for threads to finish work before returning to main
    t1.join();
    t2.join();

    return 0;
}

/*
** OUTPUT:
    c) ID in main (call-by-value) = 1
    b) ID in thread (call-by-value) = 0
    a) ID in thread (call-by-reference) = 1
*/