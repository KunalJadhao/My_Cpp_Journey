#include <iostream>  
using namespace std;  

int main()  
{  
    int number = 30;    
    int *p;     // Corrected the asterisk here      
    p = &number; // stores the address of number variable    

    cout << "Address of number variable is: " << &number << endl;    
    cout << "Address stored in p (address of number) is: " << p << endl;    
    cout << "Value pointed to by p (value of number) is: " << *p << endl;    

    return 0;  
}
