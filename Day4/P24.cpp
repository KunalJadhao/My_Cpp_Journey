/*
Here are 5 unique real-world simplified C++ programs that incorporate basic C++ concepts, 
operators, and conditional statements, specifically tailored to robotics logic.
*/


#include<iostream>
using namespace std;

int main(){

    float distance;
    cout<<"Enter the distance of the obstracle: ";
    cin>>distance;

    if (distance<0.5)
    {
        cout<<"Obstracle Detected stop the Robot!" <<endl;

    }else{
        cout<<"Path is clear, Keep Moving forward!" <<endl;
    }
    return 0;
    
}