#include <iostream>
#include <vector>
using namespace std;

class Destination {
public:
    string name;
    double price;

    Destination(string n, double p) : name(n), price(p) {}
};

class Traveler {
public:
    string name;

    Traveler(string n) : name(n) {}
};

class Booking {
private:
    vector<Destination> destinations;

public:
    void addDestination(const Destination& destination) {
        destinations.push_back(destination);
    }

    void bookDestination(const Traveler& traveler, const string& destinationName) {
        for (const auto& destination : destinations) {
            if (destination.name == destinationName) {
                cout << traveler.name << " booked a trip to " << destination.name << " for $" << destination.price << ".\n";
                return;
            }
        }
        cout << "Destination not found.\n";
    }

    void displayDestinations() const {
        if (destinations.empty()) {
            cout << "No destinations available.\n";
        } else {
            cout << "\n--- Available Destinations ---\n";
            for (const auto& destination : destinations) {
                cout << destination.name << " - Price: $" << destination.price << "\n";
            }
        }
    }
};

int main() {
    Booking booking;
    int choice;

    while (true) {
        cout << "\n--- Travel Booking System ---\n";
        cout << "1. Add Destination\n";
        cout << "2. View Destinations\n";
        cout << "3. Book a Destination\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string destinationName;
            double price;

            cout << "Enter destination name: ";
            cin.ignore();  // To handle getline properly after cin
            getline(cin, destinationName);

            cout << "Enter price for the destination: ";
            cin >> price;

            booking.addDestination(Destination(destinationName, price));
            cout << "Destination added successfully.\n";
        }
        else if (choice == 2) {
            booking.displayDestinations();
        }
        else if (choice == 3) {
            string travelerName, destinationName;

            cout << "Enter traveler's name: ";
            cin.ignore();
            getline(cin, travelerName);

            Traveler traveler(travelerName);

            cout << "Enter destination name: ";
            getline(cin, destinationName);

            booking.bookDestination(traveler, destinationName);
        }
        else if (choice == 4) {
            cout << "Thank you for using the Travel Booking System.\n";
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
