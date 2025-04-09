#include<iostream>
#include<string>
using namespace std;

int main(){
    //(a) Updating C-style String
    char cstr[] = "Hello";
    cstr[0] = 'M';
    cout<<"Updated C-style String: " <<endl;
    // (b) Updating String
    string str = " Hello"; //Declare string variable
    //using index oprator []
    str[0] ='M';
    cout<<" After Modifying using []: "<<endl;
    //Using .at() method (safe version of indexing)
    str.at(1) = 'a';
    cout<<"After modifying using at(): " <<endl;
    return 0;

}