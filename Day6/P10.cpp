// 10. Sum of first N natural Numbers

#include <iostream>
using namespace std;

int sumofnaturalnumbers(int number)
{
    return (number * (number + 1)) / 2;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " Natural Numbers: " << sumofnaturalnumbers(n) << endl;
    return 0;
}