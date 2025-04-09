//Acessing a particular chartater in a string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string word = "Hello";
    cout<<"First Character: "<<word[0] <<endl;
    cout<<"Last Character: " <<word[word.length() -1] <<endl;
    return 0;

}