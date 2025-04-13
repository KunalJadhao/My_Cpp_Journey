// Code to swap 2 numbers without using 3rd variable using pointers
#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 10;
    int *p1 = &a, *p2 = &b;

    cout << "Before swap: *p1=" << *p1 << " *p2=" << *p2 << endl;

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    cout << "After swap: *p1=" << *p1 << " *p2=" << *p2 << endl;

    return 0;
}
