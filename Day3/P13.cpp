// Code to Find out the Grades of Kunal
#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "The enter number of Marks/Percentage: " << endl;
    cin>>score;
    if (score >= 90)
    {
        cout << "A Grade." << endl;
    }
    else if (score >= 80)
    {
        cout << "B Grade." << endl;
    }
    else if (score >= 70)
    {
        cout << "C Grade" << endl;
    }
    else if (score > 60)
    {
        cout << "D Grade" << endl;
    }
    else
    {
        cout << "F grade (Fail)" << endl;
    }
    return 0;
}