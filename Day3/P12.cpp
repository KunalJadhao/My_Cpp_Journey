// Write a Program to find out if a Number is Even or Odd
#include <iostream>
using namespace std;

int main() {
    int Number;
    
    cout << "Enter the Number: "; //Entering the Number via User Input
    cin >> Number;  // Taking user input properly

    if (Number / 2 == 0) {
        cout << "The number you entered is Even." << endl;
    } else {
        cout << "The Number is Odd." << endl;
    }

    return 0;
}
