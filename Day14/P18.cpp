#include <iostream>
using namespace std;

class Check {
public:
    int* p;

    // Constructor
    Check(int val) {
        p = new int(val);
    }

    // Shallow copy constructor
    Check(const Check &e) {  // Fixed: 'check' → 'Check'
        p = e.p;             // Fixed: 'c.p' → 'e.p'
    }

    void compare(Check &e) {
        if (p == e.p) {      // Fixed: 'c.p' → 'e.p'
            cout << "Pointers are shared!" << endl;
        } else {
            cout << "Pointers are different!" << endl;
        }
    }
};

int main() {
    Check obj1(11), obj2 = obj1;
    obj1.compare(obj2);
    return 0;
}
