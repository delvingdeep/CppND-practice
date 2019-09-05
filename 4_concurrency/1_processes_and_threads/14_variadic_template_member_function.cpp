#include <iostream>
#include <thread>

class Vehicle
{
  public:
    Vehicle() : _id(0) {}
    void addID(int id) { _id = id; }
    void printID() { std::cout << "Vehicle ID : " << _id << std::endl; }

  private:
    int _id;
};

int main() {

    // create thread
    Vehicle v1, v2;
    std::thread t1 = std::thread(&Vehicle::addID, v1, 1);    // call member function on object v1
    std::thread t2 = std::thread(&Vehicle::addID, &v2, 2);   // call member function on object v2

    // wait for thread to finish
    t1.join();
    t2.join();

    // print Vehicle ID
    v1.printID();
    v2.printID();
    
    return 0;
}

/*
OUTPUT:
  Vehicle ID : 0
  Vehicle ID : 2

NOTE:
  The first Vehicle object v1 is passed to the thread function by value, 
  thus a copy is made which does not affect the original living in the main thread. 
  Changes to its member variable _id will thus not show when printing calling printID() later in main. 
  
  The second Vehicle object v2 is instead passed by reference. 
  Therefore, changes to its _id variable will also be visible in the main thread.
*/
