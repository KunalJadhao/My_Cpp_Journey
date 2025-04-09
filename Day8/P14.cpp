#include<iostream>
#include<string>
using namespace std;

int main(){
    //(a)  Initialzing C-style strings
    char str1[] = "Hello";
    char str2[] = {'H', 'e', 'l', 'l', 'o'};
    char str3[] = "Hello";
    cout<<"C-style Strings:"<<endl;
    cout<<"str-1"<<str1<<endl;
    cout<<"str-2"<<str2<<endl;
    cout<<"str-3"<<str3 <<endl;

    //(b) Initialzing C++ ways
    string s1= "Hello";
    string s2("World");
    string s3(5,'A'); //Create "AAAAAA"
    string s4 = s1+" " + s2; // concatination of s2 and s2
    cout<<" \n Initilization:" <<endl;
    cout<<"s1" <<s1 <<endl;
    cout<<"s1"<<s2<<endl;
    cout<<"s3"<<s3<<endl;
    cout<<"s4"<<s4<<endl;
    return 0;


}