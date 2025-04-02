// Sum Of Natural Numbers (using While Loop)
#include<iostream>
using namespace std;
int main(){
    int number, sum = 0, i=1;
    cout<<"Enter the Positive Number: ";
    cin>> number;

    while (i<=number)
    {
        sum += i; //Add i to the sum
        i++;      //Increament 
    }
       
    cout<<"Sum of First " <<number <<" Natural Numbers = " <<sum <<endl;
    return 0;  
}