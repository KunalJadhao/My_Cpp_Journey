// C++ Program to create a student database
#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    Student s[3];
    Student *ptr = s;

    for (int i = 0; i < 3; ++i) {
        cout << "Enter name, roll, and marks of student " << i + 1 << ": ";
        cin >> ptr[i].name >> ptr[i].roll >> ptr[i].marks;
    }

    for (int i = 0; i < 3; ++i) {
        cout << "\nStudent " << i + 1 << ": " << ptr[i].name << ", Roll: " << ptr[i].roll << ", Marks: " << ptr[i].marks;
    }
    cout << endl;

    return 0;
}