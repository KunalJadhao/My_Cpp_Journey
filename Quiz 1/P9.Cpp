// C++ Program to find out the Smallest Number between the three numbers

#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    cout << "ENTER THE FIRST NUMBER: " << endl;
    cin >> a;
    cout << "ENTER THE SECOND NUMBER: " << endl;
    cin >> b;
    cout << "ENTER THE THIRD NUMBER: " << endl;
    cin >> c;

    if (a<=b && a<=c)
    {
        cout<<"THE SMALLEST NUMBER IS: " <<(a) <<endl;

    }
    else if (b<=c && b<=c)
    {
        cout<<"THE SMALLEST NUMBER IS: " <<(b) <<endl;
    }
    else{
        cout<<"THE SMALLEST NUMBER IS: "<<(c) <<endl;
    }
    return 0;
}