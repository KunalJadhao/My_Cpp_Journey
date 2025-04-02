// Patterns

#include <iostream>
using namespace std;

// Function to print a pattern
void pattern7(int n)
{
    // Step: 01 Number of rows: n
    for (int i = 0; i < n; i++)
    {
        // Step 2: Spaces - Number of columns: n-1, e.g if n =4, Step: 1 3, step2: 2, Step3: 1, Step
        for (int k = 0; k < n - i - 1; k++)
        {
            // Step: 3 Printing Spaces n-i+1 times
            cout << " ";
        }
        // Step 2.2 Stars - Numbers if columns: 2*i, e.g step1:, step2: 3, step, step: 5, step4:7
        for (int k = 0; k < 2 * i + 1; k++)
        {
            // Step 3.1: Printing Stars 2*i+1 times
            cout << "* ";
        }
        cout << endl;
        // Step 4: Observing Symmetry: Not required
    }
}
int main()
{
    int n = 5; // number can be changed later
    pattern7(n);
    return 0;
}