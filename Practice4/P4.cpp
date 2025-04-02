// Swtich

// Case and switch

#include <iostream>
using namespace std;

int main()
{

    int day;
    // Asking the user to day the correspoing value for the day
    cout << "ENTER THE NUMBER OF (1-7): " << endl;
    cin >> day;

    // TAKING THE INPUT VIA USER

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << " Tuesday" << endl;
        break;
    case 3:
        cout <<  "Wednesday" << endl;
        break;
    case 4:
        cout << "Thrusday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl; 
        break;
    case 7:
        cout << "Sunday" << endl;
        break;

    default: cout<<"Invalid Input Please enter the value: " <<endl;
        break;
    }
    return 0;
}