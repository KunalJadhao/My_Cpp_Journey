#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int words = 1;
    for(char c : str) if(c == ' ') words++;
    cout << "Words: " << words;
    return 0;
}