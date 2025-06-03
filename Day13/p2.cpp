/*Polymorphism: 

Polymorphism is a core concept in object oriendted programing (OOP) that allows methord to do different things based on the object it is 
acting upon, In C++, Ploymorpshim enables a single interface to reprsent different underlying forms(data types)

Types of Polymorphism -->
1. Compile time Polymorphism (Static Binding)
-- > Achiived through function overloading and operator overloading.
--> the method to be invoked is determined at compile time.

2. Run time polymorphism(Dynamic Binding)
-- >Achieved throguh inheritnece and virtual function.
--> The method to be invoked is determingin at run time.


Purpose of Polymorphism:
1. Code Reusablity: Write code that can work with different data types
2. Flexibility and maintainiblity : Esaier to extend and main code.
3. Dynamic and method Resolution: Allows for dynamic behaviour in programs.alignas
*/

//Function overloading  Example:

#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void show(int t) {
        cout << "Integer: " << t << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print obj;
    obj.show(5);          // Integer
    obj.show(6,6);         // Double
    obj.show("Hello");     // String
    return 0;
}
