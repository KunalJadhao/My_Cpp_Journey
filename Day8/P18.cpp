#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Initialize a string
    string str = "Hello World";
    // Using .replace() to replace "World" with "C++"
    str.replace(6, 5, "C++");
    cout << "After replace(): " << str << endl;
    return 0;
}