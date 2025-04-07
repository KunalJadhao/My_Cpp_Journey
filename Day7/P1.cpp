//Array

#include<iostream>
using namespace std;

int main(){
    int myarray[5] = { 1,2,3,4,5};

    //Print the array elements
    for (int i = 0; i<5; i++)
    {
        cout<<"Element at Index: " << i <<": " <<myarray[i] <<endl;

        //Modify an element
        myarray[2] =10;

        //Print the modified array
        cout<<"After modification: " <<endl;
        for (int i = 0; i < 5; i++){
        
            cout<<"Element at index: "<<i <<": "<< myarray[i] <<endl;

        }
        
    }
    return 0;
    
}