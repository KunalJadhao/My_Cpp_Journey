#include <iostream>
using namespace std;
struct Student {
    string name;
    int age;
    float marks;
};
int main() {
    Student s;
    cin >> s.name >> s.age >> s.marks;
    cout << s.name << " " << s.age << " " << s.marks;
    return 0;
}