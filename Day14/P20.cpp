#include <iostream>
using namespace std;

class Test {
public:
    int* data;

    // Constructor
    Test(int val) {
        data = new int(val);
    }

    // Deep copy constructor
    Test(const Test &t) {
        data = new int(*t.data);
    }

    void show() {
        cout << "Data: " << *data << endl;  // Fixed: print the value, not the pointer address
    }
};

int main() {
    Test a(5), b = a;
    *a.data = 10;
    b.show(); // Will show 5
    return 0;
}
