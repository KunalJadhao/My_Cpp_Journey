// Dynamic Array

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    // Create a Dynamic Array
    int *dynamicarray = new int[size];

    // Input values
    cout << "Enter" << size << "Integer: \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Elements: "<<(i+1)<<": ";
        cin>>dynamicarray[i];
    }
    //Display values
    cout<<"You've entered: \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Element: "<<(i+1)<<": "<<dynamicarray[i]<<endl;

    }
    //freeing the allocated array
    delete[] dynamicarray;
    return 0;
    
    

}