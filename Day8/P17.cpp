#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Initialize a string
    string str = " Hello";
    // Using .append() to add a word at the end
    str.append("World");
    cout << "After append(): " << str << endl;
    // Using += Operator to add more text
    str += "!!!";
    cout << "After += operator: " << str << endl;
    return 0;
}