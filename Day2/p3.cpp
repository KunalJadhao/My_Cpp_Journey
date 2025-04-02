//display the information of the person from taking the input from the user using different data types and variables
#include<iostream>
using namespace  std;

int main(){
    string name;
    int age;
    float marks;
    char grade;
    bool isMarried;

    //initialize the values of variables via user input
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your Marks:";
    cin>>marks;
    cout<<"Enter wether you're married or not ?:";
    cin>>isMarried;

    //Display the  data 
    //using the escape sequence 
    cout<<"\n -------------Display the data of the given Person------------ \n";
    cout<<"\n name: " <<name;
    cout<<"\n age: " <<age;
    cout<<"\n marks: " <<marks;
    cout<<"\n grade:  "<<grade;
    cout<<"\n is Married:" <<isMarried << "\n" <<endl;
    return 0;

    

}