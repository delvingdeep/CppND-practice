#include <iostream>
#include <thread>

void threadFunction() {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in thread 1 \n";

    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in thread 2 \n";
}

int main() {
    // create thread object
    std::thread t(threadFunction);

    // wait for thread to finish work
    t.join();

    // start main now
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in main thread 1 \n";

    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in main thread 2 \n";

    return 0;
}

// note: join() is used to regulate the flow of the program