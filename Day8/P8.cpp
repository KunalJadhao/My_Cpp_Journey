// Substring from a string
// the substring() method returns a subset of charcater from a string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "I love you Sakshi and Why don't you love me back!";
    string sub = sentence.substr(10,7); // Sakshi
    cout << "Substring: " << sub << endl;
    return 0;
}