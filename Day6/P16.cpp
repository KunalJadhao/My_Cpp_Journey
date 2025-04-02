/* There are two types of functions in C++ Programming: 
1. Library Functions: 
library functions are the functions, which are declrared in the C++ header files,
such as ceil(x), cos(x), exp(x), etc.alignas
ceil(x): It returns the smallest interger greater than or equal to x
cos(x): It computes the cosine of x
exp(x): The function exp(x) calculates the value of er when its powered by x.alignas



2. User-defined Functions: 
User-defined functons are the functions, wich are created bny the C++ Programmer so that
the developer cann use them many times. It reduces thge complixity of a big
program and optiize the code
*/
//1. Using the <math> for Mathematical  Functions

#include<iostream>
#include<cmath> //for math functions
using namespace std;
int main(){
    double num;
    cout<<"Enter the number: ";
    cin>> num;
    cout<<"Square root: " <<sqrt(num) <<endl;
    cout<<"Power (Number^2)L " <<pow(num,2) <<endl;
    cout<<"Sine: " <<sin(num)<<endl;
    cout<<"Cosine: "<<cos(num)<<endl;
    cout<<"Tangent: " <<tan(num)<<endl;
    return 0;






}