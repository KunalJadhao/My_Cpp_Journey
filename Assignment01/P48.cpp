//C++ Program to create a function returing a pointer
#include <iostream>
using namespace std;

int* findMax(int *arr, int size) {
    int *max = arr;
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > *max)
            max = arr + i;
    }
    return max;
}

int main() {
    int arr[] = {2, 9, 1, 5, 8};
    int *maxPtr = findMax(arr, 5);
    cout << "Max value: " << *maxPtr << endl;
    return 0;
}