#include<iostream>
using namespace std;

class Dog {
    string name;
    string breed;

public:
    Dog(string n, string b) {
        name = n;
        breed = b;
    }

    void bark() {
        cout << name << " says Woof!" << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog mydog("Buddy", "Siberian Husky");
    mydog.displayInfo();
    mydog.bark();
    return 0;
}
