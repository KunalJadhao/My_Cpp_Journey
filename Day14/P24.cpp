#include<iostream>
using namespace std;

class Student {
public:
    int *marks;

    // Corrected constructor name
    Student(int m) {
        marks = new int(m);
    }

    Student(const Student &s) {
        marks = new int(*s.marks);
    }

    // Destructor
    ~Student() {
        delete marks;
    }

    void display() {
        cout << " Marks: " << *marks << endl;
    }
};

int main() {
    Student s1(90);
    Student s2 = s1;
    *s1.marks = 100;
    s2.display(); // will show 90 if deep copy is done correctly
    return 0;
}
