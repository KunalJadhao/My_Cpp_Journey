// creating tables using For loop

#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Enter a Number to Display its Multiplication Table: ";
    cin >> number;

    for (int i = 1; i <= 10; ++i)
    {
        cout << number << "x" << i << " = " << number * i << endl;
    }
    return 0;
}