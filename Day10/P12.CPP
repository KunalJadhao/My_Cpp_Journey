//Library Management System
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Book{
    
    public: 
    string title;
    string author;
    bool isAvailable;

    Book(string t, string a): title(t), author(a), isAvailable(true){}

};
class Member {
    public:
        std::string name;
        int memberId;
    
        Member(std::string n, int id) : name(n), memberId(id) {}
    };

    class Library {
        private:
            std::vector<Book> books;
            std::vector<Member> members;
        
        public:
            void addBook(const Book& book) {
                books.push_back(book);
            }
        
            void addMember(const Member& member) {
                members.push_back(member);
            }
        
            void searchBook(const std::string& title) {
                for (const auto& book : books) {
                    if (book.title == title) {
                        std::cout << "Book found: " << book.title << " by " << book.author << "\n";
                        return;
                    }
                }
                std::cout << "Book not found.\n";
            }
        };

int main() {
    Library myLibrary;
        
    Book book1("The Alchemist", "Paulo Coelho");
    Book book2("1984", "George Orwell");
        
    Member member1("Alice", 1);
    Member member2("Bob", 2);
        
    myLibrary.addBook(book1);
    myLibrary.addBook(book2);
        
    myLibrary.addMember(member1);
    myLibrary.addMember(member2);
        
    myLibrary.searchBook("1984");      // Should find the book
    myLibrary.searchBook("Inferno");   // Should say "Book not found."
        
    return 0;
        
}
        