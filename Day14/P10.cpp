#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if (age < 18) {
            throw age;
        } else {
            cout << "Age " << age << " is eligible to vote." << endl;
        }
    }
    catch (int x) {
        cout << "Exception: Age " << x << " is too young to vote." << endl;
    }
    catch (...) {
        cout << "Unknown exception occurred!" << endl;
    }
    return 0;
}
