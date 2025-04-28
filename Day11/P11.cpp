// Real-world Book class with constructors

#include <iostream>
using namespace std;

class Book {
public:
    string title;

    // Constructor
    Book(string t) : title(t) {}

    // Copy constructor
    Book(const Book &b) : title(b.title) {
        cout << "Copy constructor called!" << endl;
    }
};

int main() {
    Book book1("To the Girl I Saw That Day!");
    Book book2 = book1; // Calls the copy constructor
    cout << "Book title: " << book2.title << endl;
    return 0;
}
