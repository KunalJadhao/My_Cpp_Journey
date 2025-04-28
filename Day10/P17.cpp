#include <iostream>
#include <vector>
using namespace std;

class Room {
public:
    int roomNumber;
    bool isAvailable;

    Room(int num) : roomNumber(num), isAvailable(true) {}
};

class Customer {
public:
    string name;
    int id;

    Customer(string n, int i) : name(n), id(i) {}
};

class Booking {
private:
    vector<Room> rooms;
    vector<Customer> customers;

public:
    void addRoom(const Room& room) {
        rooms.push_back(room);
    }

    void addCustomer(const Customer& customer) {
        customers.push_back(customer);
    }

    void bookRoom(int roomNumber, const Customer& customer) {
        for (auto& room : rooms) {
            if (room.roomNumber == roomNumber && room.isAvailable) {
                room.isAvailable = false;
                cout << "Room " << roomNumber << " booked for " << customer.name << ".\n";
                return;
            }
        }
        cout << "Room not available.\n";
    }
};

int main() {
    Booking hotel;

    // Add sample rooms
    hotel.addRoom(Room(101));
    hotel.addRoom(Room(102));
    hotel.addRoom(Room(103));

    // Add a customer
    Customer customer1("Alice", 1);
    hotel.addCustomer(customer1);

    // Try to book a room
    hotel.bookRoom(101, customer1); // Success
    hotel.bookRoom(101, customer1); // Already booked

    return 0;
}
