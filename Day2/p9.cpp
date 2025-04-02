//to get the average of the  numbers
#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,average;
    cout<<"Enter the Three numbers:"; 
    cin>>num1>>num2>>num3;

    average = (num1+num2+num3)/3;
    cout<<"Average of" << num1 << "," << num2 << "and" << num3 << "is: " << average <<endl;
    return 0;


}