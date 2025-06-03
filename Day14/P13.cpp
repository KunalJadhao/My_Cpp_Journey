//Shallow copt
// Shallow caoy createa a new object and copies the values of the original object's data as it is;
//n=inclusing pointers. it shares the same memory location for pointer members.

//Problem: 
//if the original or copied is deleted, the other one might
//crash (double delete error)
//becasue they share the same memory.

#include <iostream>
using namespace std;

class Sample {
public:
    int *ptr;

    // Constructor
    Sample(int val) {
        ptr = new int(val);
    }

    // Shallow copy constructor
    Sample(const Sample &s) {
        ptr = s.ptr; // only copying the pointer address
    }

    void display() {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {
    Sample obj1(10);         // Fixed: class name should be "Sample", not "sample"
    Sample obj2 = obj1;      // Copy constructor will be used here
    *obj1.ptr = 20;          // Fixed: "obj" → "obj1"
    obj2.display();          // Will output 20 due to shallow copy
    return 0;
}
