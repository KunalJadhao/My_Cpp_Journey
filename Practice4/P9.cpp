// FIBONACCI SERIES

#include <iostream>
using namespace std;

int main()
{

    int number, t1 = 0, t2 = 1, nexterm = 0;
    cout << "Enter the numbers of terms: " << endl;
    cin >> number;

    cout << "Fibonacci Series: " << t1 << "," << t2 << ",";
    for (int i = 3; i <= number; ++i)
    {
        nexterm = t1 + t2;
        cout << nexterm << ",";
        t1 = t2;
        t2 = nexterm;
    }
    cout << endl;
    return 0;
}