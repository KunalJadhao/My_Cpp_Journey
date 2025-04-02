// A C++ Program to check wether a Letter is a vowel or a consonant

#include <iostream>
using namespace std;

int main()
{

    char Letter;
    cout << "Enter the Letter: ";
    cin >> Letter;

    if (Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u' ||
        Letter == 'A' || Letter == 'E' || Letter == 'I' || Letter == 'O' || Letter == 'U')
    {
        cout << Letter << "is a Vowel." << endl;
    }
    else
    {
        cout << Letter << "is a Consonant." << endl;
        return 0;
    }
}