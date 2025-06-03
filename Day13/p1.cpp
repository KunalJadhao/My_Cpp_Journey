/* Polymorphism:

--> Polymorphism allows methods to be used to dofferent ways on based on the oject type.
--> Compile-time polymorphism is achieved through function and operator overloading
--> Run-time polymorphism is achived through inheritence and virtual functions.
Its enhances code flexibility, resuability and maintainability.

2., virtual Function:
virtual function allows for dynamic bindign and polymoirphism in C++.
--> They are declare with the virtual keyword in the base class
Pure virtual function makea class abrtract and require proper cleanup nad derived class object
Always use a virtual destrucotr in base classes to ensure porper cleanup of desrived class objects.

3. Abstraction:

-- Abstraction in C++ allow you to hide complex implementation details and expose only necessat features 
-- it is achived through abstract classes and pure virtual function
-- Abstraction simplifies code, enhances resuailibity and improves maintainiblity.

4. Encapsulation
5. Multithreading
6. Shallow copy and deep copy
7. Templates
8. Signal Hnedling 
9. Exception handeling 
10. Asseigbnment- 3
*/

//OOPS (C++ Programming concept)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class: Person
class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Member
class Member : public Person {
private:
    int memberId;

public:
    Member(string n, int a, int id) : Person(n, a), memberId(id) {}

    void displayMemberInfo() const {
        displayInfo();
        cout << "Member ID: " << memberId << endl;
    }
};

// Book class
class Book {
    string title;
    string author;
    bool isAvailable;

public:
    Book(string t, string a) : title(t), author(a), isAvailable(true) {}

    void displayBookInfo() const {
        cout << "Title: " << title << ", Author: " << author << " ";
        cout << (isAvailable ? "(Available)" : "(Checked out)") << endl;
    }

    void checkout() {
        if (isAvailable) {
            isAvailable = false;
            cout << "You have checked out \"" << title << "\"" << endl;
        } else {
            cout << "Sorry, \"" << title << "\" is currently checked out." << endl;
        }
    }

    void returnBook() {
        isAvailable = true;
        cout << "You have returned \"" << title << "\"" << endl;
    }
};

// Library class
class Library {
    vector<Book> books;
    vector<Member> members;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void addMember(const Member& member) {
        members.push_back(member);
    }

    void displayBooks() const {
        cout << "\nBooks in the library:\n";
        for (const auto& book : books) {
            book.displayBookInfo();
        }
    }

    void displayMembers() const {
        cout << "\nLibrary Members:\n";
        for (const auto& member : members) {
            member.displayMemberInfo();
        }
    }

    // Add public methods to access books
    Book& getBook(int index) {
        return books.at(index);  // Use .at() for bounds-checking
    }
};

// Main function
int main() {
    Library library;

    // Add books
    library.addBook(Book("1984", "George Orwell"));
    library.addBook(Book("The Alchemist", "Paulo Coelho"));

    // Add members
    library.addMember(Member("Kunal", 23, 1));
    library.addMember(Member("Sakshi", 23, 2));

    // Display all books and members
    library.displayBooks();
    library.displayMembers();

    // Check out and return a book
    library.getBook(0).checkout();
    library.getBook(0).checkout();
    library.getBook(0).returnBook();

    return 0;
}

