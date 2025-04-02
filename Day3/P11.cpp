// Comma Operator
//The comma Operator is a binary operator that evaluates both expressions on
//either side of the the comma and returns the value of the second expression

#include<iostream>
using namespace std;

int main(){
    int a=1, b=2, c;
    c= (a+=1,b+=2, a+b); //Comma Opeator 
    cout<<" value of C: " <<c <<endl; //C will be 6 (2+4)
    return 0;
    
}