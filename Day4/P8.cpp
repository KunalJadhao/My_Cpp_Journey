// 3. Finding Prime Numbers

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    std::cout << "Prime numbers up to " << number << " are: ";
    for (int num = 2; num <= number; ++num)
    {
        bool isPrime = true;
        for (int i = 2; i <= number / 2; ++i)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}