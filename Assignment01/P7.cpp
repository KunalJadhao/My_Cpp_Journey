// C++ Program to create a portal for employee management
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

void displayEmployee(const Employee& emp) {
    cout << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: " << emp.salary << endl;
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();  // Clear newline from buffer

    vector<Employee> employees(n);
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> employees[i].id;
        cin.ignore();  // Clear newline
        cout << "Name: ";
        getline(cin, employees[i].name);  // Read full name
        cout << "Salary: ";
        cin >> employees[i].salary;
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        displayEmployee(employees[i]);
    }

    return 0;
}
