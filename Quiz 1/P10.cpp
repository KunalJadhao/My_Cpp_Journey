// TO CHECK WETHER THE GIVEN LETTER IS A VOWEL OR A CONSONENT

#include <iostream>

using namespace std;

int main()
{
    char Letter;
    cout << "Enter the Letter: ";
    cin >> Letter;

    if (Letter == 'A' || Letter == 'E' || Letter == 'I' || Letter == 'O' || Letter == 'U' ||
        Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u')
    {
        cout << Letter << " IS A VOWEL" << endl;
    }
    else
    {
        cout << Letter << " IS A CONSONENT" << endl;
        return 0;
    }
    return 0;
}