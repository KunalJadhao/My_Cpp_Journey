#include<iostream>
using namespace std;

enum Day{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};

int main(){
    Day today = Tuesday;
    cout<<"Day Number: " <<today<<endl; //Output: 3
    return 0;
}