//ATM WITHDRAWL SYSTEM USING C++

#include<iostream>
using namespace std;

int main(){

    double Balance = 20000.00;
    double Withdrawl;


    cout<<"Welcome to the ATM!" <<endl;

    while (true)
    {
        cout<<"Current Balance is: SGD " <<Balance <<endl;
        cout<<"Enter the amount you wish to withdraw: " <<endl;
        cin>>Withdrawl;

        if (Withdrawl ==-1)
        {
           cout<<"Thank you for using the ATM!" <<endl;
           break;
        } else if (Withdrawl>Balance)
        {
           cout<<"Insufficient Balance." <<endl;
        } else {
            Balance -= Withdrawl;
            cout<<"You have withdrawn: SGD" <<Withdrawl <<endl;
        }
        }
    return 0;
}