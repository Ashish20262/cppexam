#include <iostream>
using namespace std;

class Shape {
public:
    virtual float calculateArea() = 0;   
    virtual void draw() = 0;           
    virtual ~Shape() {}                  
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}

    float calculateArea() override {
        return 3.14f * radius * radius;
    }

    void draw() override {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};
class Rectangle : public Shape {
    float width, height;
public:
    Rectangle(float w, float h) : width(w), height(h) {}

    float calculateArea() override {
        return width * height;
    }

    void draw() override {
        cout << "Drawing a Rectangle " 
             << "(width = " << width << ", height = " << height << ")" << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);


    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->calculateArea() << "\n\n";
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}


