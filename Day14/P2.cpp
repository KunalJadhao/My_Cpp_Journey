//Program to use Encapsulation in Banking

#include<iostream>
using namespace std;

class BankAccount{
    private:
    int balance;

    public:
    void deposit(int amount){
        if (amount>0)
        {
            balance += amount;
        }
        
    }
    void showBlance(){
        cout<<" Current Balance: "<< balance <<endl;
    }
};

int main(){
    BankAccount b;
    b.deposit(10000);
    b.showBlance();
    return 0;
}