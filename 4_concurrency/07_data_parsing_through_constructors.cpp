#include <iostream>
#include <thread>

class Vehicle
{
  public:
    Vehicle(int id) : _id(id) {}
    void operator()() {
        std::cout << "Vehicle #" << _id << " has been created. \n";
    }

  private:
    int _id;
};

int main() {

    // create thread
    std::thread t1 = std::thread(Vehicle(1));    // first thread
    std::thread t2 = std::thread(Vehicle(2));   // seconds thread
    /*
        Passing data to the thread function as a constructor argument and store it as a data member
    */

    // do something in the main
    std::cout << "Finished work in main \n";

    // wait for thread to finish work
    t1.join();
    t2.join();

    return 0;
}