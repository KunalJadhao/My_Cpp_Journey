//Login System
#include<iostream>
#include<string>
using namespace std;

int main(){
    string username, password;
    cout<<"Enter Username: ";
    cin>>username;
    cout<<" Enter the Password: ";
    cin>> password;

    //Simple login check
    //wuindows + for emojis

    if (username=="admin" && password =="98765")
    {
        cout<<"\nLogin Sucessful ✨\n";

    } else{
        cout<<"\nLogin Failed ©";

    }
    return 0;

}