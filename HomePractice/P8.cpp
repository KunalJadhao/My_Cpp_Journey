// figure out which one is the  largest number among the one another

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;                   // defining the variables
    cout << "Enter the Number a:"; // Prompt Via User input
    cin >> a;
    cout << "Enter the Number b:"; // Prompt Via User input
    cin >> b;
    cout << "Enter the Number c:"; // Prompt Via User input
    cin >> c;

    // determine the largest number from the 3 numbers provided
    int Result = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout<<"The largest Number is:" << Result <<endl;
    return 0;
}