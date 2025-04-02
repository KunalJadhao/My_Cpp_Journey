#include <iostream>
#include <cmath> // Include cmath for sqrt
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;                  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= sqrt(n); ++i) // Check divisibility up to the square root of n
    {
        if (n % i == 0) // If n is divisible by i, it's not prime
            return false;
    }
    return true; // If no divisors were found, n is prime
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;       // Input the number to check
    if (isprime(number)) // Check if the number is prime
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0; // End of the program
}