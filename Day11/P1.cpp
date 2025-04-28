/* TOPICS:

1. Structure
2. Enumeration
3. Scoped Enumerations
4. Classes
5. Constructor
6. Destructor
7. This and static keywords
8. Math function
9. Inheritence
10. Acess Specifier


Strtucture: 
 
A sturcturem in c++ is user defined data type that allows you to group
variables of diffrernt types under a single name. It is similar to a class, but by default, all memebrs of a struct are public

Syntax: 
struct structName{
       datatype member 1;
       datatype member 2;
       //...
};
*/
#include<iostream>
#include<string>

using namespace std;

struct Person
{
    string name;
    int age;
    float height;
};
int main(){
    Person person;
    Person.person1;
    Person.name = "Divya";
    Person.age = 22;
    Person.height = 5.10;

    cout<<" Name: " <<Person.name<< endl;
    cout<<"Age: " <<Person.age<<endl;
    cout<<" Height: "<<Person.height<<endl;
    return 0;

}