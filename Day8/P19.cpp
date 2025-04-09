#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char key[] ="Mango"; //Define the correct answer as C-string
    char buffer[50]; //Buffer to store user input
    do
    {
        cout<<"What is my favourite fruit?";
        cin>>buffer;
    } while (strcmp(key, buffer) != 0); //Compare input with keys;
    cout<<"Answer is Correct !!" <<endl;
    return 0;
    
}