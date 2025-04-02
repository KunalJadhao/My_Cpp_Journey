// to get the average of the  numbers of 7 numbers
#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3, number4, number5, number6, number7, average;
    cout << "Enter the Seven numbers:";
    cin >> number1 >> number2 >> number3 >> number4 >> number5 >> number6 >> number7;

    average = (number1 + number2 + number3 + number4 + number5 + number6 + number7) / 7;
    cout << "Average of" << number1 << "," << number2 << "," << number3 << "," << number4 << "," << number5 << "," << number6 << "," << number7 << "is: " << average << endl;
    return 0;
}