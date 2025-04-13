//Passing the pointer to functions

#include<iostream>
using namespace std;

void increament(int* ptr){
    (*ptr)++; //Increament the value pointed by ptr

}
int main(){
    int var = 5;
    cout<<" Before increament: "<<var<<endl; //5
    increament(&var); //pass the address of var
    cout<<" After increment: "<<var <<endl; //6

    return 0;
}