// average of a number using for loop

#include <iostream>
using namespace std;

int main()
{
    int number;
    double sum = 0.0;
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> number;
    for (int i = 1; i <= number; ++i)
    {
        double number;
        cout << "ENTER THE NUMBER: " << i << " : ";
        cin >> number;
        sum += number;
    }
    cout<<"Average: " <<sum/number <<endl;
    return 0;

}