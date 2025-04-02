// 1. Factorial of a number

#include <iostream>
using namespace std;

unsigned long long factorial(int n)
{
    if (n < 0)
        return 0; // here unsigned long long is used because is can hold non negative numbers
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {

        result *= i;
    }
    return result;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}