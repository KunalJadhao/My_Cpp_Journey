//C++ Program to create a maths game
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr + 4;
    for (int i = 4; i >= 0; --i) {
        cout << *(p--) << " ";
    }
    cout << endl;
    return 0;
}