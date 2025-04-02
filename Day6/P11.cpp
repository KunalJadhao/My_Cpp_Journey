//Parameterzied Function
/* Functions

The function in C++ Laanguage is also known as a proceudre or subrouit in ohteer programming, Language. A program implements functions as independent blocks of code that complete single tassks, 
which developers can call repeaditely. Programming efficency and orginzation improve 
through the use of function because they make code
reusable between different modules

In C++ Programming Lanugage we can create function to 
perform any task A function can be called many times. It provides modularity and code reusability.

Syntax of C++ Function:

return type function_nmae(data_type paramtrer..)
{
//code to executed
}

there are main two types  of functions:
1.Parameterized Function
2. Non-Parameterized Function

*/

#include<iostream>
using namespace std;

//Function that adds two intergers and terutsn ther result
int add( int x, int y){
    return x+y;
}
int main(){
    int sum = add(7,8); //Functions call witgh arguments
    cout<<" : " <<sum <<endl;
    return 0;
}