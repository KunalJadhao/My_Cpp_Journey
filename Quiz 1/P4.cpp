// Program to find out the greater number between two numbers
#include <iostream>
using namespace std;

int main()
{
    int Number1, Number2;
    cout << "ENTER THE NUMBER1: " << endl;
    cin >> Number1;
    cout << "ENTER THE NUMBER2: " << endl;
    cin >> Number2;

    int greater;
    if (Number1 > Number2)
    {
        cout << "THE GREATER NUMBER IS NUMBER 1." << endl;
    }
    else if (Number2 > Number1)
    {
        cout << "THE GREATER NUMBER IS NUMBER 2." << endl;
    }
    return 0;
}