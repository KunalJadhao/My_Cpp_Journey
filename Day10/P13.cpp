//2. Inventory Management System

#include <iostream>
#include <vector>

class Item {
public:
    std::string name;
    int quantity;
    double price;

    Item(std::string n, int q, double p) : name(n), quantity(q), price(p) {}
};

class Inventory {
private:
    std::vector<Item> items;

public:
    void addItem(const Item& item) {
        items.push_back(item);
    }

    void displayItems() const {
        for (const auto& item : items) {
            std::cout << "Item: " << item.name << ", Quantity: " << item.quantity << ", Price: " << item.price << "\n";
        }
    }
};
int main() {
    Inventory inventory;
    int choice;

    do {
        std::cout << "\n--- Inventory Management System ---\n";
        std::cout << "1. Add Item\n";
        std::cout << "2. Display Items\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name;
                int quantity;
                double price;

                std::cout << "Enter item name: ";
                std::cin >> name;
                std::cout << "Enter quantity: ";
                std::cin >> quantity;
                std::cout << "Enter price: ";
                std::cin >> price;

                Item newItem(name, quantity, price);
                inventory.addItem(newItem);
                std::cout << "Item added successfully.\n";
                break;
            }
            case 2:
                std::cout << "\nInventory:\n";
                inventory.displayItems();
                break;

            case 3:
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
