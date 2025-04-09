//replace part of a string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string message = " I like YOU";
    message.replace(7,3, " Saksh"); //Replace "You with Sakshi"
    cout<<"and the replaced word is: "<<message <<endl;
    return 0;
}