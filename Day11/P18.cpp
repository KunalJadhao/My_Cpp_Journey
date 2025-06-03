/*
Static Local Variables:
1. Static local variables retain thier value between functon calls
2. They are initizlized only once and exit for the lifetime of the Program.
*/

#include<iostream>

void counterfunction(){
    static int count = 0; //static local variables
    count++;
    std::cout<<" Count: "<<count <<std::endl;
}

int main(){
    counterfunction();
    counterfunction();
    counterfunction();
    counterfunction();
    
    
    return 0;
}