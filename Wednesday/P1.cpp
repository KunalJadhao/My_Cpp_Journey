#include<iostream>
#include<string>
using namespace std;
 struct Pesron
 {
    string name;
    int age;
    float height;
 };
 
 int main(){
    Pesron person1;
    person1.name = "Kunal";
    person1.age =23;
    person1.height = 5.10;

    cout<<"Who's this handsome young man:  "<<person1.name<<endl;
    cout<<" What's his age? : "<<person1.age<<endl;
    cout<<"What is his height?: "<<person1.height<<endl;
    return 0;
 }
