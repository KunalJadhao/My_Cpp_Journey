// An ATM withdrawl System using C++

#include <iostream>

using namespace std;

int main()
{
    int withdrawlamount;
    cout << "Enter the withdrawl amoumnt: " << endl;
    cin >> withdrawlamount;
    if (withdrawlamount * 100)
    {
        cout << "THE WITHDRAWL AMOUNT IS SUFFICIENT "  << endl;
    }
    else{
        cout<<"THE USER DOSENT HAVE SUFFICIENT AMOUNT"  <<endl;
    }

    return 0;
}