//Calculation of a factorial using an array
#include<iostream>
using namespace std;

int main(){
    const int size =10;
    int factorials[size];

    //Calculate Factorials
    for (int i = 1; i <= size; i++)
    {
        factorials[i-1] =1;
        for (int k = 1; i <= i; k++)
        {
            factorials[i-1] *= k;
        }
        
    }
    //Display Factorials
    cout<<"Factorial from 1 to " <<size <<": \n";
    for (int i = 0; i < size; i++)
    {
        cout << i+1 << "! = " <<factorials[i]<<endl;

    }
    return 0;
    
}