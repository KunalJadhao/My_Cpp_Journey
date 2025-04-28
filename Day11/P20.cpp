/*
Inheritence is a fundamental concept in Object-oriented programming (oop) that allows a class(known as dervied or child class) to inherit properties (data members) and behaviours
(member functions) from another class (known as base class or parent class). This mechanism romtoes code reusability, reduces, redundancy and establishes a hierarchical relationship between classes.

Syntax:

class Baseclass{
     //BaseClass members (Parent/Super Class)
};

class Derivedclass: public Baseclass{
//Derived class members (child/sublcass)
};

Key Concept of Inheritence
1. Base Class: The class whose Properties and Methids are inherited.
2. Derieved class: The class that inherits from the base class. It can add new properties and methods or override exiting ones
3. Acess Specifiers:  Inheritennce can be public, procted, or private, which determines the accessiblity of the baser class members in the derived class.alignas

Types of Inheritance: 
1. Single Ingeritancne: A derived class inherits from a single base class.
2. Multiple Inheritence: A derived class inherits from multipl base classes. 
3. Multilevel Inheritance: A derived class inherit from another dervied class.
4. Hierarchical Inheritance:  Multiple derived class inhert from a single base class
5. Hybrid Inheritnace: A combination of two or more  types of inheritance.alignas

Acess specifier in INHERITANCE -->


1. Public Inheritance: 
Public members of the base class remain public in the derived class, and protected memebers remain protected.alignas
2. Protected Inheritnce: 
Public and Protected memebrs of the base class become protected in the derived class. 
3. Private Inheritance: 
Public and Projcted memebrs of the base class become privatein the derived class.
*/

#include<iostream>
using namespace std;

//Base class
class Animal{
public: 
void speak(){
    cout<<"Animal Speaks."<<endl;
}
};

//Derieved class
class Dog :public Animal {
public: 
void bark(){
    cout<<"Dog barks!"<<endl;

}
};

int main(){
    Dog mydog;
    mydog.speak();
    mydog.bark();
    return 0;
}