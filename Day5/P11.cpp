// Patterns

#include <iostream>
using namespace std;

void Pattern11(int n)
{
    int Start;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            Start = 1; // when i is even
        else
            Start = 0; // when i is odd

        // Step:02 focus on numbers of columns
        for (int k = 0; k <= i; k++)
        {
            // Printing
            cout << Start << " ";
            // Flipping start from 0-1 and vice versa
            Start = 1 - Start;
        }

        cout << endl;
        // Step:04 Observing symmetry not required
    }
}

void Pattern111(int n)
{
    char Name;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            Name = 'K'; // when i is even
        else
            Name = 'J'; // when i is odd

        // Step:02 focus on numbers of columns
        for (int k = 0; k <= i; k++)
        {
            // Printing
            cout << Name << ' ';
        }

        cout << endl;
        // Step:04 Observing symmetry not required
    }
}

int main()
{
    int n = 7;
    cout << "\n\n";
    Pattern11(n);
    cout << "\n\n";
    Pattern111(n); // Corrected function call
    cout << "\n\n";
    return 0;
}
