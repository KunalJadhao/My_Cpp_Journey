//Factorial of a Number Using Loop (using Loop)
#include<iostream>
using namespace std;

int main(){
    int number;
    unsigned long long factorial =1 ;

    cout<<"Enter the Positive Number: ";
    cin >> number;
    if (number<0)
    {
        cout<<"Factorial is not defined fro negative Number" <<endl;    
    } else {
        for (int i=1; i<=number; ++i)
        {
            factorial*= i; //Multiply the factorial by i

        }
        cout<<"Factorial of" <<number <<" = " <<factorial <<endl;
    }
    return 0;


}