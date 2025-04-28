// Student class

#include<iostream>
using namespace std;

class Student {
private: 
    string Name;
    int age;
    float grade;

public: 
    Student(string n, int a, float g){
        Name = n;  // Corrected from 'name' to 'Name'
        age = a;
        grade = g;
    }

    void displayinfo(){
        cout << "Name: " << Name << ", Age: " << age << ", Grade: " << grade << endl; // Added colon and space after 'Grade'
    }
}; 

int main(){
    Student student1("Sakshi", 22, 98.7);
    student1.displayinfo();
    return 0;
}
