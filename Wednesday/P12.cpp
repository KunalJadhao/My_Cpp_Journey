#include<iostream>
class MyClass {
    public:
        const int value;
    
        MyClass(int v) : value(v) { // Initialization list
            std::cout << "Constructor called with value: " << value << std::endl;
        }
    };
    
    int main() {
        MyClass obj(10); // Calls the constructor
        return 0;
    }