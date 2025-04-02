// Creating a grid pattern using C++

#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Enter the number of  rows for the pattern: ";
    cin >> number;

    for (int i = 1; i <= number; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

