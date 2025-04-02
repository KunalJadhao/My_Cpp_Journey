// creating a grid pattern

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER OF ROWS: " << endl;
    cin >> number;

    for (int i = 1; i <= number; ++i)
    {
        for (int j = 1; j <= number; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}