//Average of using For loop

#include<iostream>

using namespace std;

int main(){

    int number;
    double sum = 0.0;
    cout<<"Enter the number of Elements: ";
    cin>>number;

    for (int i = 1; i <=number; ++i)
    {
        double number;
        cout<<"Enter the Number: " <<i <<": ";
        cin>>number;
        sum += number;

    }
    cout<<"Average: " <<sum /number <<endl;
    return 0;
}