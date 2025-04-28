// Enumeration:
// An enum in C++ is a user-defined type that consists of a set of named integral constants.
// It is used to define variables that can hold a set of predefined values, making the code more
// readable and maintainable.

/* Syntax:
enum enumName {
    Value1,
    Value2,
    // ...
};
*/

#include <iostream>
using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE
};  

int main() {
    Color mycolor = RED;

    if (mycolor == RED) {
        cout << "The color is RED." << endl;
    }

    return 0;
}
