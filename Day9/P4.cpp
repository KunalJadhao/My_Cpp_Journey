//Pointer to pointers
#include<iostream>
using namespace std;

int main(){
    int var = 100; 
    int* ptr = &var; //pointer to variable
    int** ptr2 = &ptr; ////pointer to pointer

    cout<<" Value of var: " <<var<<endl;
    cout<<" Value pointed by ptr: " <<*ptr<< endl; //100
    cout<<" Value pointed by ptr2: "<< *ptr2 <<endl; //100

    return 0;
}