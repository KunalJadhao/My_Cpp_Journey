// Program to find the sum of first N natural Numbers

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;

    cout << "Enter a Positive Number : ";
    cin >> n;

    for (int i = 0; i <=n; ++i)

    {
        sum += i;
    }

    cout << "Sum of  First" << n << " Natural Numbers :" << sum << endl;

    return 0;
}