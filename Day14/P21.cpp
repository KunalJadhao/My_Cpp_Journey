#include <iostream>
using namespace std;

class Safe {
public:
    int *p;

    // Constructor
    Safe(int val) {
        p = new int(val);
    }

    // Deep copy constructor
    Safe(const Safe &a) {          // Fixed: 'safe' → 'Safe'
        p = new int(*a.p);         // Fixed: 's.p' → 'a.p'
    }

    // Destructor
    ~Safe() {
        delete p;
    }

    void print() {
        cout << "Value: " << *p << endl;
    }
};

int main() {
    Safe obj1(50), obj2 = obj1;    // Fixed: 'safe' → 'Safe'
    obj1.print();
    obj2.print();
    return 0;
}
