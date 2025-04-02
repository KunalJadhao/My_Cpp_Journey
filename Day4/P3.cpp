// Driving licencse Checker
// Nested if-else

#include <iostream>
using namespace std;

int main()
{

    int age;
    bool passedtest;

    cout << "Please Enter age: ";
    cin >> age;

    // Check is the user isold enoughto drive annd apply for license
    if (age >= 16)
    {
        cout << "You're old enough to Drive and apply fora license." << endl;

        // Akf id user has passed the driving test or not
        cout << "Have you passed the Driving Test? (1 for yes and 0 for no): ";
        cin >> passedtest;

        // Nested if-else to ckeck if the user can get a lincense
        if (passedtest)
        {
            cout << "Congratualtion! You're eligiblel for a driver's License." <<endl;
        }
        else
            {
                cout << "You need to pass the driving test to get the  driver'license." <<endl;
            }
    } else
    {
        cout << "You're not old enough to apply for Dirver's license." << endl;
    }

    return 0;
}