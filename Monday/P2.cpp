#include<iostream>
using namespace std;

int main(){
    int size;

    //Asking the user for the number of Elements in an array
    cout << "Enter the number of Elements: ";
    cin >> size;

    //Create a dynamic array
    int *dynamicarray = new int[size];

    //Input values into the dynamic array
    cout << "Enter " << size << " Integers:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << (i+1) << ": ";
        cin >> dynamicarray[i];  // ✅ Corrected
    }

    //Display the values
    cout << "\nYou've Entered the values:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << (i+1) << ": " << dynamicarray[i] << endl;
    }

    //Free the allocated memory
    delete[] dynamicarray;
    return 0;
}
