#include<iostream>
using namespace std;

int main(){
    int size;

    //Asking the user for the number of elements in an array
    cout<<" Enter the number of elements: ";
    cin>> size;

    //Create a dynamic array
    int *dyanamicarray =new int[size];

    //input vaoues into the dynamic array
    cout<<"Enter "<< size << "integers: \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Element: " <<(i+1) <<": ";
        cin>>dyanamicarray[i];
    }


    //Display the values
    cout<< "\n You've entered: \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Element "<< (i+1)<<": " <<dyanamicarray[i] <<endl;

    }
    //freethe allocated memory
    delete[] dyanamicarray;

return 0;    
    
}