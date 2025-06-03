/*Exception Handeling:

Exception handeling is a mechanim to handle runtime errors in a program so that the normal flow of 
execution is maintatined.


Common Runtime Error:
File not found
Memory overflow
Invalid input
Division by zero

Keywords used:
try:
catch:
throw: 


syntax:

try{
//code that may throw any exception
throw exception_type
}
catch(exception_type e){
//code to handle exception

};
*/

//Program : Divide by zero

#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0;
    try {
        if (b == 0) {
            throw "Cannot divide by zero!";
        }
        cout << "Result: " << a / b << endl;
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
