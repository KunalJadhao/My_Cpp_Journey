// find the largest number within three numbers
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the Two numbers:"; // via user prompt
    cin >> num1 >> num2;
    // determine the largest number from two numbers
    int largest1 = (num1 > num2) ? num1 : num2;
    cout << "\n The lrgest number is:" << largest1 << "\n\n"; // output display

    int a, b, c;                         // Declaring the variables
    cout << "Enter the Three numbers: "; // Prompt via user
    cin >> a >> b >> c;                  // reading the interger values

    // Determine the largest number
    int largest2 = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << "The largest number is  :" << largest2 << endl; // output of the second value or the Prompt
    return 0;
}