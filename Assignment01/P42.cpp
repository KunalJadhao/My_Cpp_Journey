//C++ Program to create a pointer array maze
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptrs[5];

    for (int i = 0; i < 5; ++i) {
        ptrs[i] = &arr[i];
        *ptrs[i] *= 2; // Modify value
    }

    cout << "Modified array: ";
    for (int i = 0; i < 5; ++i) cout << arr[i] << " ";
    cout << endl;

    return 0;
}