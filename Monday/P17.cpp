// Building an inventory system
#include<iostream>
#include<string>
using namespace std;

int main() {
    const int numProducts = 5;
    string Products[numProducts];
    float Prices[numProducts];

    // Input Product names and Prices
    for (int i = 0; i < numProducts; i++) {
        cout << "Enter Product name " << (i + 1) << ": ";
        cin >> Products[i];
        cout << "Enter Price for " << Products[i] << ": ";
        cin >> Prices[i];
    }

    // Display Inventory
    cout << "\nInventory:\n";
    for (int i = 0; i < numProducts; i++) {
        cout << "Product: " << Products[i] << ", Price: Rs " << Prices[i] << endl;
    }

    return 0;
}
