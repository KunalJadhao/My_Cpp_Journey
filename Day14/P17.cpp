#include <iostream>
using namespace std;

class Share {
public:
    int* ptr;

    // Constructor
    Share(int val) {
        ptr = new int(val);
    }

    // Shallow copy constructor
    Share(const Share &s) {  // Fixed: 'share' → 'Share'
        ptr = s.ptr;
    }

    void print() {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {
    Share obj(10), obj2 = obj;
    *obj2.ptr = 50;
    obj2.print();  // Outputs: Value: 50
    return 0;
}
