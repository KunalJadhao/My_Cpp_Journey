// using the vector library for dynamic arrays

#include <iostream>
#include <vector> //for vector
using namespace std;

int main()
{
    vector<int> numbers;
    int number, input;
    cout << "How many numbers do you wish to enter?: ";
    cin >> number;
    cout << "Enter " << number << " numbers: ";
    for (int i = 0; i < number; ++i)
    {
        cin >> input;
        numbers.push_back(input); // add to vector
    }
    cout << " You've entered: ";
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}