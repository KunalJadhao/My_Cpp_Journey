// indicating wether a number is Positive or Negative or not any of them
#include <iostream>
using namespace std;

int main()
{
    int number;                  // declaring the variable
    cout << "Enter the number:"; // via user
    cin >> number;               // via user input

    // check wether the number is postive, negative or none of the above
    if (number > 0)
    {
        cout << "The number is positive" << endl; // output if the number is positive
    }
    else if (number < 0)
    {
        cout << "The number is negative" << endl; // output if the number is Negative
    }
    else
    {
        cout << "The number is Zero" << endl; // if the output is zero
    }
    return 0;
}