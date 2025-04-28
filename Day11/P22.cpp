#include <iostream>
using namespace std;

// Base Class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape!" << endl;
    }
};

// Derived Class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle!" << endl;
    }
};

// Derived Class 2
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square!" << endl;
    }
};

int main() {
    Circle mycircle;
    Square mysquare;
    mycircle.draw();
    mysquare.draw();
    return 0;
}
