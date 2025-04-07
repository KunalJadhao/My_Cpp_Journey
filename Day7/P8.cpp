// dynami array
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << " Enter the number of elements: ";
    cin >> size;

    // Create a dynamic array
    int *dynamicarray = new int[size];

    // input values
    cout << " Enter " << size << " Intergers: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element: " <<(i + 1) << ": ";
        cin >> dynamicarray[i];
    }
    // Display values
    cout << "You've eneterd: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element: " << (i + 1) << ": " << dynamicarray[i] << endl;
    }
    // free the allocated array
    delete[] dynamicarray;
    return 0;
}