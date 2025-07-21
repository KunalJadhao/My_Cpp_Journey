#include <iostream>
using namespace std;
class BankAccount {
    double balance;
public:
    BankAccount() { balance = 0; }
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) { if(balance >= amt) balance -= amt; }
    void display() { cout << "Balance: " << balance << endl; }
};
int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(200);
    acc.display();
    return 0;
}
