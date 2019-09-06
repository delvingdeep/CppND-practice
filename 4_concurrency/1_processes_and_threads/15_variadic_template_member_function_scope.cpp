#include <iostream>
#include <thread>

class Vehicle
{
  private:
    int _id;

  public:
    Vehicle() : _id(0) {}
    void addID(int id) { _id = id; }
    void printID() { std::cout << "Vehicle ID : " << _id << std::endl; }
};

int main() {
    // create thread
    std::shared_ptr<Vehicle> v(new Vehicle);
    std::thread t = std::thread(&Vehicle::addID, v, 1);     // call member function on object v

    // wait for thread to finish
    t.join();

    // print Vehicle ID
    v->printID();

    return 0;
}

/*
OUTPUT: 
    Vehicle ID : 1

NOTE:
    The existence of v outlives the completion of the thread t.
    Otherwise there will be an attempt to access an invalidated memory address.

    An alternative is to use a heap-allocated object and a reference-counted pointer 
    such as std::shared_ptr<Vehicle> to ensure that the object lives as long as it takes the thread to finish its work.
*/
