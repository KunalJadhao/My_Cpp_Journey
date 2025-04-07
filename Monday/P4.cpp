//Reversing an Array

#include<iostream>
using namespace std;

int main(){
    int numbers[10] = {10,20,30,40,50,60,70,80,90,100};
    int Temprary;

    //Reversing an Array
    for (int i = 0; i < 10/2; i++)
    {
        Temprary=numbers[i];
        numbers[i] = numbers[10-1-i];
        numbers[10-1-i] = Temprary;

    }
    cout<<"Reversed Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout<<numbers[i]<<" ";

    }
    cout<<endl;
    return 0;
    
    
    
}