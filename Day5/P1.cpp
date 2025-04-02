// Pattersn using Funtion

#include <iostream>
using namespace std;

// function to print a pattern
void pattern1(int n)
{
    // step: 1: focus on the number of rows nd outer loop: n rows
    for (int i = 0; i < n; i++)
    {
        // step:02: Focus on the number of columns (inner loop): n columns
        for (int j = 0; j < n; j++)
        {
            // step 03: Printing '*' in the inner loop
            cout << "*";
        }
        cout << endl;
    }
    // step 4: observing symmetry : NOT reuired
}

void pattern11(int n)
{
    char data = 65; // ASCII values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << data << " ";
        }
        cout << endl;
    }
}
void pattern111(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5; // You can change the value of number to print the size of the pattern
    cout << "\n\n";
    pattern1(n);
    cout << "\n\n";
    pattern11(n);
    cout << "\n\n";
    pattern111(n);
    cout << "\n\n";
    return 0;
}