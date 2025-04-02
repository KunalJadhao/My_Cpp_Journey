// calculator using c++ as a language

#include <iostream>

using namespace std;

int main()
{
    char Operation;
    double Number1, Number2;

    cout << "Enter the Number1: ";
    cin >> Number1;
    cout << "Choose the operator(+,-,*,/): ";
    cin>>Operation;
    cout << "Enter the Number2: ";
    cin >> Number2;

    switch (Operation)
    {
    case '+':
        cout << "Result: " << Number1 + Number2 << endl;
        break;
    case '-':
        cout << "Result: " << Number1 - Number2 << endl;
        break;
    case '*':
        cout << "Result: " << Number1 * Number2 << endl;
        break;
    case '/':
        if (Number2 != 0)
            cout << "Result: " << Number1 / Number2 << endl;
        else
            cout << "Error! Division by zero" << endl;
        break;

    default:
        cout << "Invalid Operator Assigned!" << endl;
        break;
    }
    return 0;
}