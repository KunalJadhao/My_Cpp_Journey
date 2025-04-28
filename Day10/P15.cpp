//4. Contact Management System

#include <iostream>
#include <vector>

class Contact {
public:
    std::string name;
    std::string phoneNumber;

    Contact(std::string n, std::string p) : name(n), phoneNumber(p) {}
};

class ContactManager {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const Contact& contact) {
        contacts.push_back(contact);
    }

    void searchContact(const std::string& name) const {
        for (const auto& contact : contacts) {
            if (contact.name == name) {
                std::cout << "Contact found: " << contact.name << ", Phone: " << contact.phoneNumber << "\n";
                return;
            }
        }
        std::cout << "Contact not found.\n";
    }
};

int main() {
    ContactManager manager;
    int choice;

    do {
        std::cout << "\n--- Contact Management System ---\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Search Contact\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string name, phone;
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter phone number: ";
            std::cin >> phone;
            manager.addContact(Contact(name, phone));
            std::cout << "Contact added successfully.\n";
        }
        else if (choice == 2) {
            std::string name;
            std::cout << "Enter name to search: ";
            std::cin >> name;
            manager.searchContact(name);
        }
        else if (choice == 3) {
            std::cout << "Exiting program.\n";
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}
