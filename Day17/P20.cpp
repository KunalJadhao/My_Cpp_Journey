#include <iostream>
using namespace std;
int& getElement(int arr[], int index) {
    return arr[index];
}
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    getElement(a, 2) = 99;
    for(int i = 0; i < 5; ++i) cout << a[i] << " ";
    return 0;
}