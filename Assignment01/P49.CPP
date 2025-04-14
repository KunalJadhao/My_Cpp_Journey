//C++ program to create array of pointers to string
#include <iostream>
using namespace std;

int main() {
    const char* arr[5] = {"Apple", "Banana", "Mango", "Grapes", "Orange"};
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << endl;
    }
    return 0;
}