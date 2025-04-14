//C++ Prgram to create a reverse string
#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "Kunal";
    reverseString(str);
    cout << "Reversed String: " << str << endl;
    return 0;
}