#include <iostream>
using namespace std;

int main() {
    int size = -5;
    try {
        if (size == -5) {
            throw "Array size cannot be negative!";
        }
        int arr[size]; // This line won't be reached if exception is thrown
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}
