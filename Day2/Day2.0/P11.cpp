// creating a Program to find the minimun of two numbers

#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << "Enter the Number1: ";
    cin >> number1;

    cout << "Emter the Number2 :";
    cin >> number2;

    int min = (number1 < number2) ? number1 : number2;
    cout << "Minimum Numbers:" << min << endl;
    return 0;
}