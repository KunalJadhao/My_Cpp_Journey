#include<iostream>
using namespace std;

enum Day{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){
    Day today = Wednesday;
    cout<<"Day number: "<<today<<endl; //output has to be 3
    return 0;
}