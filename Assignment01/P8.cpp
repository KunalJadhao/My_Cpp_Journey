// C++ Program to Create an Inventory Tracker
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Product {
    string name;
    int quantity;
    float price;
};

void displayInventory(const vector<Product>& products) {
    cout << "\nProduct Name\tQuantity\tPrice\n";
    for (const auto& product : products) {
        cout << product.name << "\t\t" << product.quantity << "\t\t" << product.price << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    cin.ignore(); // clear the input buffer

    vector<Product> products(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for product " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, products[i].name); // for names with spaces
        cout << "Quantity: ";
        cin >> products[i].quantity;
        cout << "Price: ";
        cin >> products[i].price;
        cin.ignore(); // clear newline character from buffer
    }

    displayInventory(products);
    return 0;
}
