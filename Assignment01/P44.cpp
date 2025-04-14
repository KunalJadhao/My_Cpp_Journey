//C++ Program to create a XOR swap
#include <iostream>
using namespace std;

void xorSwap(int *a, int *b) {
    if (a != b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int a = 10, b = 20;
    xorSwap(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}