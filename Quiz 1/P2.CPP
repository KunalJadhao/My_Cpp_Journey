// Cwapping the values of the variable

#include <iostream>

using namespace std;

int main()
{

    int A = 7, B = 2, C;

    C = A;
    A = B;
    B = C;
    
    cout<< "The Swappeed values are: " << B << "  and  " << A<< endl;
    return 0;

}