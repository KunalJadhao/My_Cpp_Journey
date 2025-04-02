// creating a Atm withdrawl system using whileloop
#include <iostream>
using namespace std;

int main()
{
    double Balance = 50000.00;
    double withdrawl;

    cout << "WELCOME TO THE ATM!" << endl;
    while (true)
    {
        cout << "Current Balance is : Rs" << Balance << endl;
        cout << "ENTER THE AMOUNT: " << endl;
        cin >> withdrawl;
        if (withdrawl == -1)
        {
            cout << "Thank you ! for using the ATM." << endl;
            break;
        }
        else if (withdrawl > Balance)
        {
            cout << "Insufficeint Balance." << endl;
        }
        else
        {
            Balance -= withdrawl;
            cout << "You have withdrawn around: RS " << withdrawl << endl;
        }
        return 0;
    }
}