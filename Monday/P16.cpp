//Code to count the vowels in a string using an array
#include<iostream>
#include<cstring> // for strlen
#include<cctype>  // for tolower
using namespace std;

int main() {
    const int length = 100;
    char str[length];
    int vowelCount = 0;

    // Input the string
    cout << "Enter a string: ";
    cin.getline(str, length);

    // Count vowels
    int len = strlen(str); // calculate string length once
    for (int i = 0; i < len; i++) {
        char ch = tolower(str[i]); // convert to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    // Output the result
    cout << "Number of vowels: " << vowelCount << endl;
    return 0;
}
