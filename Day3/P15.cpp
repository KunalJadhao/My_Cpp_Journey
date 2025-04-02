// To make a simple Calculator

#include <iostream>
using namespace std;

int main()
{
    char Operation;
    float Number1, Number2;

    cout << "Enter the First Number: " << endl;
    cin >> Number1;

    cout << "Enter the Second Number: " << endl;
    cin >> Number2;

    cout << "What Opearation needs to be performed (+,-,*,%,/): " << Operation << endl;
    cin >> Operation;

    if (Operation == '+')
    {
        cout << "Result: " << (Number1 + Number2) << endl;
    }
    else if (Operation == '-')
    {
        cout << "Result: " << (Number1 - Number2) << endl;
    }
    else if (Operation == '*')
    {
        cout << "Result: " << (Number1 * Number2) << endl;
    }
    else if (Operation == '/')
    {
        if (Number2 != 0)
        {
            cout << "Result: " << (Number1 / Number2) << endl;
        }
        else
        {
            cout << "Error: Division by Zero!" << endl;
        }
    }
    else
    {
        cout << "Invalid Operator!" << endl;
    }
    return 0;
}