// 6. Count the vowels in the string

#include <iostream>
#include <string>
using namespace std;

int countvowels(const string &str)
{
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : str)
    {
        if (vowels.find(c) != string::npos)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;
    cout << " Enter a string: ";
    getline(cin, str);
    cout << "Number of vowels: " << countvowels(str) << endl;
    return 0;
}