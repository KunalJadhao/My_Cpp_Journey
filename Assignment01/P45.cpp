// C++ Program to create a strlen using pointer
#include <iostream>
using namespace std;

int myStrLen(const char* str) {
    const char* temp = str;
    while (*temp) ++temp;
    return temp - str;
}

int main() {
    const char *s = "Pointers";
    cout << "Length: " << myStrLen(s) << endl;
    return 0;
}