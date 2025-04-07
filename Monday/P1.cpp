#include<iostream>
using namespace std;

int main(){

    int myarray[10] = {24,34,56,23,66,45,78,79,56,45};
    //Print the array Elements
    for (int i = 0; i <10; i++)
    {
        cout<<"Enter the Number of Elements in an Array: " <<i<<": "<<myarray[i] <<endl;
        //Modify the element
        myarray[5] = 100;
        //Print the modified array
        cout<<"After Modification: "<<endl;
        for (int i = 0; i < 10; i++)
        {
            cout<<"Element at Index: "<<i<<": "<<myarray[i]<<endl;

        }
        

    }
    return 0;
    
}