#include <iostream>
using namespace std;

class Vehicle {
private:
    string model;
    float speed; 

public:
    void setModel(string m) {
        model = m;
    }

    void setSpeed(float s) {
        speed = s;
    }

    string getModel() {
        return model;
    }

    float getSpeed() {
        return speed;
    }

    virtual float timeForDistance(float distance) = 0; 
};

class Car : public Vehicle {
public:
    float timeForDistance(float distance) override {
        return distance / getSpeed();
    }
};

class Bike : public Vehicle {
public:
    float timeForDistance(float distance) override {
        return distance / getSpeed();
    }
};

int main() {
    Car c;
    c.setModel("Honda City");
    c.setSpeed(80);

    Bike b;
    b.setModel("Yamaha");
    b.setSpeed(40); 

    float distance = 160; 

    Vehicle* v;

    v = &c;
    cout << "Car Time: " << v->timeForDistance(distance) << " hours" << endl;

    v = &b;
    cout << "Bike Time: " << v->timeForDistance(distance) << " hours" << endl;

    return 0;
}
