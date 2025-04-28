/*
Copy Constructor:
A constructor that creates a new object as a copy of an existing object.
It takes a reference to an object of the same class as a parameter.
*/
#include <iostream>

class Myclass {
public:
    int value;

    // Parameterized constructor
    Myclass(int v) : value(v) {}

    // Copy constructor
    Myclass(const Myclass &obj) {
        value = obj.value;
        std::cout << "Copy constructor called!" << std::endl;
    }
};

int main() {
    Myclass obj1(10);              // Calls the parameterized constructor
    Myclass obj2 = obj1;           // Calls the copy constructor
    std::cout << "Value of obj2: " << obj2.value << std::endl;
    return 0;
}
