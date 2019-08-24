#include <iostream>
#include <thread>

void threadFunction() {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in thread \n";
}

int main() {
    // create a thread object
    std::thread t(threadFunction);
    
    // detach thread object from the main
    t.detach();

    // main thread
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished work in main \n";

    return 0;
}

/*
Side note:
    In some situations, it might make sense to not wait for a thread to finish its work. 
    This can be achieved by "detaching" the thread, by which the internal state variable "joinable" is set to "false".
    This can be done by calling detach() method on a thread object.
    The destructor of a detached thread does nothing: It neither blocks nor does it terminate the thread.
    A detached thread can not be joined ever again.
*/