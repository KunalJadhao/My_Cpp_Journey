// C++ code to generate Average Marks of Studnets using array
#include <iostream>
using namespace std;

int main()
{
    const int numstudents = 10;
    float grades[numstudents];
    float sum = 0.0;

    // Input grades
    cout << "Enter the grades for" << numstudents << "students: \n";
    for (int i = 0; i < numstudents; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i];
    }
    // Calculating Average
    float average = sum / numstudents;
    cout << "Average grade: " << average << endl;
    return 0;
}