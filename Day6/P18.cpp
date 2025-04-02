// 3. Using <string> for string Manupilation

#include <iostream>
#include <string> //For string Manipluation
using namespace std;

int main()
{
    string str1, str2;
    cout << " Enter the first String: ";
    getline(cin, str1);
    cout << " Enter the Second String: ";
    getline(cin, str2);
    cout << "Concatenated String: " << str1 + str2 << endl;
    cout << "Length of first string: " << str1.length() << endl;
    cout << "First string in uppercase: " << str1;
    for (char &c : str1) c = toupper(c);
    char a='b'
    a = toupper(a);
    cout<<"First in uppercase: " <<a;
    cout<<" First string in uppercaseL " <<str1;
    cout << endl;
    return 0;
}

/*
#include <iostream>
#include <string> // For string manipulation
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    cout << "Concatenated String: " << str1 + str2 << endl;
    cout << "Length of first string: " << str1.length() << endl;

    // Convert str1 to uppercase before printing
    for (char &c : str1) c = toupper(c);

    cout << "First string in uppercase: " << str1 << endl;

    // Fixing char variable
    char a = 'b';
    a = toupper(a);
    cout << "Character 'b' in uppercase: " << a << endl;

    return 0;
}
*/