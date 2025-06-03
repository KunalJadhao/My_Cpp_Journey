#include <iostream>
using namespace std;

class Test {
public:
    int x;

    Test(int val) {
        x = val;
    }

    void show() {
        cout << "X: " << x << endl;
    }
};

int main() {
    Test a(10);     // Fixed: "Testa" → "Test a"
    Test b = a;     // Copy constructor is used here
    b.show();       // Outputs: X: 10
    return 0;
}
