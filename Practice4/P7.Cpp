//creating tables using loop

#include<iostream>

using namespace std;

int main(){

    int number;
    cout<<"ENTER A NUMBER TO DISPLAY MULTIPLCATION TABLE: " <<endl;
    cin>>number;


    for (int i = 1; i <= 10; ++i)
    {
        cout<<number <<"x" << i << " = " <<number*i <<endl;

    }
    return 0;
}