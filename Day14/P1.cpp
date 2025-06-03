// Encapsulation
// Multithreading
// Shallow copy and deep copy
// Templates
// Signal Hnedling 
// Exception handeling 

/*Encapsulation: 
Encapsulation is a fundamental concept in object oriented programing (OOP) that binds together that data and code(Methods) into a single unit, like a capsule.
It helps to protect from directr access -we use private variables and give access via public methords.

Think of a mobile phone:

You press a button to call (you don't know internal wiring).

The details (data) are hidden inside and accessed using buttons(methods).
That is called Encapsulation.

Benefits of Encapsulation -->
Protects data(hides internal details)

improves code security

make code easy to use and maintain
*/

#include<iostream>
using namespace std;

//Encapsulated class 
class Student{
    private:
    string name;
    int age;

    public: 
    //Setter methord to set data(write)
    void setData(string StudentName, int studentAge){
        name = StudentName;
        age = studentAge;
    }
    //Getter method to get data(read)
    void displayData(){
        cout<<"Student Name: "<<name<<endl;
        cout<<" Student Age: "<<age <<endl;
    }
};

int main(){
    Student s1;
    //Setter data using method
    s1.setData("Kunal", 23);

    //Get data using method
    s1.displayData();

    return 0;
}

/* name and age are private cannot be accessed directly 
setData() and DisplayData are public -used to set and get data.
This is Encapsulation --Keeping data safe and controlling access.*/