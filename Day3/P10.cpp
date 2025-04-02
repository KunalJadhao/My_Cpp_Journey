//Poinnter operator

#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* ptr =&a; //pointer to a
    cout<<"Value of a: " <<a << endl;
    cout<<"Address of a: "<<&a <<endl;
    cout<<"Value at ptr: " <<*ptr <<endl; //DEreferencing pointer
    return 0;

}