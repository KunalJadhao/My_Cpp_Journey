// Bank account

#include<iostream>
using namespace std;

class BankAccount {
private:
    string accoutnumber;
    double balance;

public:
    BankAccount(string accNum) {
        accoutnumber = accNum;
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: Rs. " << amount << ". New balance: Rs. " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << " withdraw: Rs. " << amount << ". New balance: Rs." << balance << endl;
        }
    }

    void displaybalance() {
        cout << "Account Number: " << accoutnumber << ", Balance:  Rs. " << balance << endl;
    }
};

int main() {
    BankAccount myAccount("123456789");
    myAccount.deposit(500);
    myAccount.withdraw(250);
    myAccount.displaybalance();
    return 0;
}
