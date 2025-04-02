// Days of the Week

#include <iostream>
using namespace std;

int main()
{
    int days;
    cout << "Enter the Number Between(1-7): ";
    cin >> days;

    switch (days)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wenesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
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
    default:
        cout << "Invalid Number Given!" << endl;
    }
    return 0;
}