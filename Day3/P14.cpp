// To Largest of the Three Numbers
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the number A: " << endl;
    cin >> a;

    cout << "Enter the number B: " << endl;
    cin >> b;

    cout << "Enter the Number C: " << endl;
    cin >> c;

    if (a >= b && a >= c)
    {
        cout << "The Largest Number from the Given Number: "<<a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "The Largest Number from the Given Number: " <<b << endl;
    }
    else
    {
        cout << "The Largest Number from the given Number: " <<c << endl;
    }
    return 0;
}