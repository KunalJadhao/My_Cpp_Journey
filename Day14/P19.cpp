/* Deep copy creates a new object and also creates a new memory for pointer members.
   It copies actual data, not just memory address.
   Safe and preferred when the object has pointer members. */

#include <iostream>
using namespace std;

class Sample {
public:
    int* ptr;

    // Constructor
    Sample(int val) {
        ptr = new int(val);
    }

    // Deep copy constructor
    Sample(const Sample &e) {
        ptr = new int(*e.ptr); // Fixed: 'mew' → 'new', 's.ptr' → 'e.ptr'
    }

    void display() {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {
    Sample obj1(10);
    Sample obj2 = obj1; // Deep copy

    *obj1.ptr = 20;      // Fixed: 'obj' → 'obj1'
    obj2.display();      // Shows 10, as obj2 has its own copy

    return 0;
}
