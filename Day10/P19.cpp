#include <iostream>
#include <vector>
using namespace std;

class Expense {
public:
    string description;
    double amount;

    Expense(string desc, double amt) : description(desc), amount(amt) {}
};

class ExpenseTracker {
private:
    vector<Expense> expenses;

public:
    void addExpense(const Expense& expense) {
        expenses.push_back(expense);
    }

    void displayExpenses() const {
        if (expenses.empty()) {
            cout << "No expenses recorded.\n";
        } else {
            cout << "\n--- Expenses ---\n";
            for (const auto& expense : expenses) {
                cout << "Expense: " << expense.description << ", Amount: " << expense.amount << "\n";
            }
        }
    }
};

int main() {
    ExpenseTracker tracker;
    int choice;

    while (true) {
        cout << "\n--- Expense Tracker ---\n";
        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string desc;
            double amt;

            cout << "Enter expense description: ";
            cin.ignore(); // To handle getline properly after cin
            getline(cin, desc);

            cout << "Enter amount: ";
            cin >> amt;

            tracker.addExpense(Expense(desc, amt));
            cout << "Expense added successfully.\n";
        } 
        else if (choice == 2) {
            tracker.displayExpenses();
        } 
        else if (choice == 3) {
            cout << "Thank you for using the Expense Tracker.\n";
            break;
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
