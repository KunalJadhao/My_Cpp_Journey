/*
Function Parameters:
1. Pass by Value:
In pass by value a copy of actual parameter is passed to the function.
it means any modifications made inside the dunction do not affect the original
variable
2. Pass by reference;
In pass by reference, a function recevies the actual memory address of the arugemnt
instead of a copt. it means any changes made inside the function
directly affect the original variable.alignas
3. Pass by pointers:

In pass by pointers, we pass the memory address of a variable using a pointer
the function modifies the value stores at the given address.alignas

*/
// Pass by value:

#include <iostream>
using namespace std;
int square(int num)
{
    num = num * num;
    return num;
}
int main()
{
    int x = 7;
    int result = square(x);
    cout << result; // Output: 7(unchanged)
}
