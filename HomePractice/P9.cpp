// to figureout te smallest number fromt the given three numbers
#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cout << "Enter the value of a:";
    cin >> a;

    cout << "Enter the value of b:";
    cin >> b;

    cout << "Enter the value of a:";
    cin >> c;


// smallest number from the all given three number to be dermined 

    int Result = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    cout<<"The smallest number from the given number is:" <<Result <<endl;
    return 0;

}