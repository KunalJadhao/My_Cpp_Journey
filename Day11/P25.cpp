#include <iostream>
using namespace std;

// Base class 1
class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

// Base class 2
class B {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

// Derived Class
class C : public A, public B {
public:
    void display() {
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    obj.display();
    return 0;
}
