#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayDetails() {
        cout << "This is a vehicle." << endl;
    }
    
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void displayDetails() override {
        cout << "Car: 4 wheels, used for personal travel." << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayDetails() override {
        cout << "Bike: 2 wheels, used for short distance travel." << endl;
    }
};

class Truck : public Vehicle {
public:
    void displayDetails() override {
        cout << "Truck: Heavy vehicle used for transporting goods." << endl;
    }
};

int main() {
    Vehicle* vehicles[3];

    vehicles[0] = new Car();
    vehicles[1] = new Bike();
    vehicles[2] = new Truck();

    for (int i = 0; i < 3; i++) {
        vehicles[0]->displayDetails();
    }

    for (int i = 0; i < 3; i++) {
        delete vehicles[i];
    }

    return 0;
}
