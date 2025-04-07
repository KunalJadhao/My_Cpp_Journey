// Storing and Displaying the employee salaries 
#include <iostream>
#include <string>
#include <iomanip> // for fixed and setprecision
using namespace std;

int main() {
    const int numEmployees = 2;
    string names[numEmployees];
    float salaries[numEmployees];

    // Input employee names and salaries
    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter name of employee " << (i + 1) << ": ";
        cin.ignore(); // clear input buffer
        getline(cin, names[i]); // allows multi-word names

        cout << "Enter salary for " << names[i] << ": $";
        cin >> salaries[i];
    }

    // Display employee details
    cout << "\nEmployee Salaries:\n";
    cout << fixed << setprecision(2); // format salary to 2 decimal places
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee: " << names[i] << ", Salary: $" << salaries[i] << endl;
    }

    return 0;
}
