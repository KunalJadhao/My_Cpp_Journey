#include<iostream>
using namespace std;

class Book{
    public:
     string title;
     Book(string t): title(t){} //constructor
     Book(const Book &b) : title(b.title){//Copy Constructor
        cout<<"Copy constructor called!" <<endl;
    }
};

int main(){
    Book book1("C++ Programming");
    Book book2 = book1; //calls copy constructor
    cout<<" Book title: "<<book2.title<<endl;
    return 0;

}