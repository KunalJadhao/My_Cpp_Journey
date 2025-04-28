// Library Class

#include<iostream>
#include<vector>
using namespace std;

class Library{
    private:
    vector<string> books;

    public:
    void addbook(string book){
        books.push_back(book);
        cout<<" Added: " <<book <<endl;
    }
    void displaybooks(){
        cout<<"Books in the library: " <<endl;
        for (const auto& book: books)
        {
            cout<< book<<endl;
        }
        
    }
};

int main(){
    Library mylibrary;
    mylibrary.addbook("The Game of Thrones");
    mylibrary.addbook("The lean Startup");
    mylibrary.displaybooks();
    return 0;
}