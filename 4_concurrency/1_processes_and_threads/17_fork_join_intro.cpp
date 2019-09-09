#include <iostream>
#include <thread>
#include <vector>

void printHello() {
    // perform some work
    std::cout << "Hello from the worker thread #" << std::this_thread::get_id() << std::endl;
}

int main() {

    // create threads
    std::vector<std::thread> threads;
    for(size_t i = 0; i < 5; ++i) {
        // copying a thread object causes complie error
        /*
            std::thread t(printHello);
            threads.push_back(t);
        */
       threads.emplace_back(std::thread(printHello));
    }

    // do something in main();
    std::cout << "Hello from the Main thread #" << std::this_thread::get_id() << std::endl;

    // call on all the threads using a range based for loop
    for(auto &t : threads) { t.join(); }

    return 0;
}