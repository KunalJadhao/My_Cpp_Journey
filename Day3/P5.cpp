// bITWISE Opeartors
#include <iostream>
using namespace std;

int main()
{
    int a = 5;                            
    int b = 3;                            
    cout << "a&b: " << (a & b) << endl;          
    cout << "a|b: " << (a | b) << endl;          
    cout << "a^b: " << (a ^ b) << endl;          
    cout << "~a: " << (~a) << endl;              
    cout << "a<<1: " << (a << 1) << endl;          
    cout << "a>>1: " << (a >> 1) << endl;           
    cout << "a<<5: " << (a << 5) << endl;          
    cout << "a>>5: " << (a >> 5) << endl;        
    return 0;
}