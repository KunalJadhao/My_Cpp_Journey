// Bus Tickiting System

#include <iostream>

using namespace std;

int main()
{

    int age;
    cout << "ENTER THE AGE OF THE CUSTOMER: " << endl;
    cin >> age;

    if (age <= 5)
    {
        cout << "CUSTOMER CAN TRAVEL FOR FREE." << endl;
    }
    else if (age <= 20)
    {
        cout << "CUSTOMER HAS TO PAY 50 RUPEES." << endl;
    }
    else if (age >= 60)
    {
        cout << "CUSTOMER HAS TO PAY 30 RUPEES. " << endl;
    }
    return 0;
}