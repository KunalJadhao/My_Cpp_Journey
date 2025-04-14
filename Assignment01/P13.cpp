// C++ Program to manage a store

#include <iostream>
#include <string>
using namespace std;

struct Store {
    string name;
    float revenue;
};

void displayStores(Store* stores, int count) {
    cout << "\nStore Name\tRevenue\n";
    for (int i = 0; i < count; i++) {
        cout << stores[i].name << "\t\t" << stores[i].revenue << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of stores: ";
    cin >> n;
    cin.ignore(); // To handle the newline character after reading n

    // Dynamically allocate memory for stores
    Store* stores = new Store[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter store name: ";
        getline(cin, stores[i].name);
        cout << "Enter revenue for " << stores[i].name << ": ";
        cin >> stores[i].revenue;
        cin.ignore(); // To handle the newline after revenue
    }

    displayStores(stores, n);

    // Free up dynamically allocated memory
    delete[] stores;

    return 0;
}
