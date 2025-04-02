// this is a C++ Program to calculate the marks of 10 Students in a class

#include <iostream>

using namespace std;

int main()
{
    // declaring the variables here by the names
    int Kunal, Sakshi, Anjali, Abhilash, Vicky, Harry, Loki, Manisha, Pari, Divya;
    int totalmarks = 0;

    // Taking the marks of the user via user input
    cout << "Enter the Marks of Kunal:";
    cin >> Kunal;
    cout << "Enter the Marks of Sakshi:";
    cin >> Sakshi;
    cout << "Enter the Marks of Anjali:";
    cin >> Anjali;
    cout << "Enter the Marks of Abhilash:";
    cin >> Abhilash;
    cout << "Enter the Marks of Vicky:";
    cin >> Vicky;
    cout << "Enter the Marks of Harry:";
    cin >> Harry;
    cout << "Enter the Marks of Loki:";
    cin >> Loki;
    cout << "Enter the Marks of Manisha:";
    cin >> Manisha;
    cout << "Enter the Marks of Pari:";
    cin >> Pari;
    cout << "Enter the Marks of Divya:";
    cin >> Divya;

    // Counting the total marks of all the students combines

    totalmarks = Kunal + Sakshi + Anjali + Abhilash + Vicky + Harry + Loki + Manisha + Pari + Divya;

    // Display thier total marks
    cout << "Result is:" << totalmarks << endl;
    return 0;
}