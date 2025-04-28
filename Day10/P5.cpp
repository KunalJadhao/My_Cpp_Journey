#include<iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    Book(string t, string a, int p) {  // Fixed: 'sting' to 'string'
        title = t;
        author = a;
        pages = p;
    }

    void displayinfo() {
        cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }
};

int main() {
    Book book1("1984", "George orwell", 328);
    Book book2(" To the Girl I saw that day", " Kunal Jadhav", 93);
    Book book3(" Game of thrones", "GRRM", 890);

    book1.displayinfo();
    book2.displayinfo();
    book3.displayinfo();

    return 0;
}
