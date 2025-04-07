// Additon using array
#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10,20,30,40,50};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i]; // Add each element to the sum
    }
    cout << "Sum of Array Elements: " << sum << endl;
    return 0;
}
