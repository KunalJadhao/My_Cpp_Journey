// Numerical value pattern right angle triangle
#include <iostream>
using namespace std;

// Function tp print a pattern
void pattern3(int n)
{
    // Step01: Focus on the number of rows: n rows
    for (int i = 1; i <= n; i++)
    {
        // STEP02: FOCUS ON THE NUMBER OF COLUMNS : I columns
        for (int K = 1; K <= i; K++)
        {
            // Step03: Pritning K in the inner loop till K is less than or equal to 1
            cout << i << " ";
        }cout<<endl;
        // Step04: Observing Symmetry : Not Required
    }
}
int main()
{
    int n = 6; // You can change the value later
    cout << "\n\n";
    pattern3(n);
    cout << "\n\n";
    return 0;
}