// Dirving Licencse checker
// Netsed if-else statement

#include <iostream>

using namespace std;

int main()
{

    int age;
    bool passedtest;

    cout << "PLEASE ENTER THE AGE: ";
    cin >> age;

    // Check wether the person is eligile for driving licence or not
    if (age >= 18)
    {
        cout << "You're old enough to learn and apply for a driver licence." << endl;

        // ask if the user has the passed the driving exam
        cout << "Have you passed the Passed driving test(1 for yes and 0 for no)";
        cin >> passedtest;

        if (passedtest)
        {
            cout << "Congratulations! You're eligible for the dirving licence" << endl;
        }
        else
        {
            cout << "You're old enough to apply for a driving licence." << endl;
        }
    
    }
}