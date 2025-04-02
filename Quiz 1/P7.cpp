// C++ Program to Display the Grades of A Pesron

#include <iostream>

using namespace std;

int main()
{
    int ResultMarks;
    cout << "ENTER THE MARKS OF THE PERSON: " << endl;
    cin >> ResultMarks;

    if (ResultMarks >= 90)
    {
        cout << "THE STUDENT IS AWARDED IS GRADE A" << endl;
    }
    else if (ResultMarks >= 80)
    {
        cout << "THE STUDENT IS AWARDED IS GRADE B" << endl;
    }
    else if (ResultMarks >= 70)
    {
        cout << "THE STUDENT IS AWARDED WITH GRADE C" << endl;
    }
    else if (ResultMarks >= 60)
    {
        cout << "THE STUDENT IS AWARDED WITH GRADE D" << endl;
    }
    else if (ResultMarks < 60)
    {
        cout << "THE STUDENT IS AWARDED WITH F GRADE THAT IS THE STUDENT HAS FAILED." << endl;
    }
    
    return 0;
}