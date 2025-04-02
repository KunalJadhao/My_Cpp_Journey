// Finding the Reverse of Number
#include <iostream>
using namespace std;

int main()
{
    int number, reversednumber = 0;

    cout << "Enter a Value: ";
    cin >> number;

    do
    {
        reversednumber = reversednumber * 10 + number % 10; // Build the Reverse of a Number
        number /= 10;                                       // Remove the last Digit
    } while (number != 0);
    
        cout << "Reversed Number = " << reversednumber << endl;
        return 0;
    
}