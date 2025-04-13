#include<iostream>
using namespace std;

int main(){

    int var = 42;
    int* ptr = &var; //Pointer to var
    

    cout<<"Value of Var: " <<var<<endl; //42
    cout<<"Address of var: "<<&var<<endl; //Address of var
    cout<<" Value of ptr: "<< ptr<< endl; //Addres of ptr
    cout<<"Value pointed by ptr: "<<ptr<<endl; //42

    return 0;

}