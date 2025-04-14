//C++ Program to create pointer memory mapping vizulization
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    for (int i = 0; i < n; ++i) {
        cout << "Address: " << (arr + i) << " -> Value: " << *(arr + i) << endl;
    }

    delete[] arr;
    return 0;
}