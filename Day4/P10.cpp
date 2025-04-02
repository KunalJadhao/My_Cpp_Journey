//for loop

//factorial calculator using loop

#include<iostream>
using namespace std;

int main(){
    int number;
    unsigned long long factorial=1; //use unsigend long long to handle large results

    //Ask the user to put the value
    if (number<0)
    {
        cout<<"Factorial is not defined for neggative numbers." <<endl;

    }else{
        //calculate factorial using a loop
        for (int i = 1; i <= number; ++i)
        {
            factorial*=i; //Multiply factorial by the current number
        }
        //output the result
        cout<<"Factorial of " <<number << " = " <<factorial <<endl;

        
    }
    return 0;

    
}