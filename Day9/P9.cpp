//Null Pointer

#include<iostream>
using namespace std;

int main(){
    int* ptr = nullptr; //Initialie a null pointer

    if (ptr==nullptr)
    {
        cout<<"Pointer is null, cannot deferences." <<endl; //check if pointer is null
    } else{
        cout<<"Pointer Value: " <<*ptr<<endl; //this line won't execute
    }
    return 0;
    
}