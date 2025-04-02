// Tempearture conversion

#include <iostream>
using namespace std;

int main()
{
    char choice;
    double celsius, fahrenheit;

    do
    {
        cout << "ENTER TEMPERATURE IN CELSIUS: ";
        cin >> celsius;
        fahrenheit = (celsius * 9 / 15) + 32;
        cout << "Temperature in fahrenheit: " << fahrenheit << endl;
        cout << "Do you want to convert another temperature? (Y/N): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'y'); // continue if the user wants to convert more
    return 0;
}