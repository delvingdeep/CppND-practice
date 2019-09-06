#include <iostream>
#include <thread>
#include <string>

class Vehicle
{
  public:
    Vehicle() : _id(0), _name("Unknown") {}
    void addID(int id) { _id = id; }
    void setName(std::string name) { _name = name; }
    void printID() { std::cout << "Vehicle ID : " << _id << std::endl; }
    void printName() { std::cout << "Vehicle Name : " << _name << std::endl; }

  private:
    int _id;
    std::string _name;
};

int main() {

    std::string name = "Stanley";

    // create thread
    std::shared_ptr<Vehicle> v(new Vehicle);
    std::thread t_id = std::thread(&Vehicle::addID, v, 1);
    std::thread t_name = std::thread(&Vehicle::setName, v, std::ref(name));

    // wait for thread to finish
    t_id.join();
    t_name.join();

    // print ID and name
    v->printID();
    v->printName();

    return 0;
}
