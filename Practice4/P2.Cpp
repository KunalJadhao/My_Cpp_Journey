// to calculate the marks using C++ as a programming language

#include <iostream>
using namespace std;

int main()
{

    int Percentage;
    cout << "ENTER THE PERCENTAGE THE STUDENT HAS RECIEVED: " << endl;
    cin >> Percentage;

    if (Percentage>=90 && Percentage <=100)
    {
        cout << "Grade A";
    }
    else if (Percentage >= 80 && Percentage <90)
    {
        cout << "Grade B";
    }
    else if (Percentage >= 70 && Percentage < 80)
    {
        cout << "Grade C";
    }
    else if (Percentage >= 60 && Percentage < 70)
    {
        cout << "Grade D";
    }
    else if (Percentage < 60)
    {
        cout << "Grade F";
    }
    return 0;
}