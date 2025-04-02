// Program to find out the wether the value is EVEN or odd
#include <iostream>
using namespace std;

int main()
{

    int Number;
    cout << "ENTER THE NUMBER: " << endl;
    cin >> Number;
    if (Number %2 == 0)
    {

        cout << "THE GIVEN NUMBER IS EVEN."  << endl;
    }
    else
    {
        cout << "THE GIVEN NUMBER IS ODD."  << endl;
    }
    return 0;
}