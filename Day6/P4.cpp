// 4. Sum of digits
#include <iostream>
using namespace std;

int sumofdigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits: " << sumofdigits(number) << endl;
    return 0;
}