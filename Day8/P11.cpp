// Revese a string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word = "Hello";
    reverse(word.begin(), word.end());
    cout << " Reversed: " << word << endl;
    return 0;
}