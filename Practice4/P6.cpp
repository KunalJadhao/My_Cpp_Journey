// Sum of N natural Numbers

#include<iostream>

using namespace std;

int main(){

    int number, sum=0;
    cout<<"Enter a Postive Value: " <<endl;
    cin>>number;


    for (int i = 1; i <=number; ++i)
    {
       sum +=i;
    }
    cout<<" Sum of first " <<number << " Natural Numbers" << "is " <<sum <<endl;
    return 0;

}