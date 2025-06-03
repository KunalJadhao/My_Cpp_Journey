// Deep copy with function

#include <iostream>
using namespace std; // ✅ Fixed: 'st' → 'std'

class Copy {
public:
    int* data; // ✅ Added missing member declaration

    // Constructor
    Copy(int val) {
        data = new int(val);
    }

    // Deep copy constructor
    Copy(const Copy &e) {        // ✅ Fixed: 'copy' → 'Copy'
        data = new int(*e.data); // ✅ Fixed: 'c.data' → 'e.data'
    }

    void modify() {
        *data = 100;
    }

    void show() {
        cout << "Data: " << *data << endl;
    }

    ~Copy() {
        delete data; // ✅ Proper memory cleanup
    }
};

int main() {
    Copy a(10), b = a; // ✅ Fixed: 'copy' → 'Copy'
    a.modify();        // Modify only 'a'
    b.show();          // Should show 10 because 'b' is a deep copy
    return 0;
}
