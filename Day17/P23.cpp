#include <iostream>
using namespace std;
class Person {
public:
    void show() { cout << "I am a Person" << endl; }
};
class Employee : public Person {
public:
    void show() { cout << "I am an Employee" << endl; }
};
int main() {
    Employee e;
    e.show();
    return 0;
}