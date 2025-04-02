//Increamnet and Decreamenrt Operators
#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<"Initial Value: " <<a <<"\n";
    //Post Increament (assign the value then increase)
    cout<<"Post-increament: " <<a++ <<"\n";    //a has a increamented value after this line
    cout<<"After post-increment: " <<a <<"\n";
    //Pre Increament (Increase then Assign value)
    cout<<"Pre-increament: " <<++a <<"\n";     //a is increamented before this line
    cout<<"After Pre-increment: " <<a <<"\n";
    cout<<"Post-Decerement: " <<a-- <<"\n";   //a is decremeneted after this line
    cout<<"After Post-Decerement: " <<a <<"\n";
    cout<<"Pre-Decerement: " <<--a <<"\n";    //a is deceremeneted after this line
    cout<<"After Pre-Decrement: " <<a <<endl;
    return 0;
    



}