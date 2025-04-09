// Simple contact book

#include<iostream>
#include<string>
using namespace std;

int main() {
    string names[3], phones[3];

    cout << "Enter 3 Contacts:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Name: ";
        getline(cin, names[i]);
        cout << "Phone: ";
        getline(cin, phones[i]);  // fixed: consistent variable name
    }

    cout << "\nContact List:\n";
    for (int i = 0; i < 3; i++) {
        cout << names[i] << " - " << phones[i] << endl;  // fixed: correct variable
    }

    return 0;
}
