// Calculator using C++ Language

#include <iostream>

using namespace std;

int main()
{

    char Operation;
    int Number1,Number2;

    cout << "Enter the first Value: " << endl;
    cin >> Number1;
    cout << "Operation (+,-,*,/):";
    cin >> Operation;
    cout << "Enter the Second Value: " << endl;
    cin >> Number2;

    switch (Operation)
    {
    case "+":
        cout << "Result: " << Number1+Number2 << endl break;
    case "-":
        cout << "Result: " << Number1 -Number2 << endl;
        break;
    case "*":
        cout << "Result: " << Number1 * Number2 << endl break;
    case "/":
         if (number2 !=0)
         
            cout<<"Result: " <<Number1/Number2 <<endl;
         
         else
         cout<<" Invalid! Divison by zero."
         break;
         
        default:
        cout<<"Invalid Opeator Assigned!" <<endl;
        break;
    }
    return 0;
}