// count the vowels in a string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count = 0;
    cout<<"ENTER A STRING: ";
    getline(cin, str);

    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }

        cout << "Number of vowels: " << count << endl;
        return 0;
    }
}