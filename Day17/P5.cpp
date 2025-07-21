#include <iostream>
using namespace std;
int main() {
    char op;
    float a, b;
    cin >> a >> op >> b;
    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator";
    }
    return 0;
}