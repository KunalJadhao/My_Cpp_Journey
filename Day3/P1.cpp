#include <iostream>
#include <string>
#include <vector>

using namespace std;

// user-defined data type (Struct)
struct Person
{
    string name;
    int age;
};

// Function to display Person Details
void displayperson(const Person &p)
{
    cout << "Name: " << p.name << ", Age: " << p.age << endl;
}

int main(){
    //Fundamental data types
    int integerVar = 42; //Interger
    float floatVar = 3.14f;   //Floting Point
    double doubleVaar = 2.718281828459; //Double Precision Floating Point
    char charVar = 'A';   //Character
    bool boolVar = true;     //Boolean

    //output fundamental data types
    cout<<"Integer: " <<integerVar<<endl;
    cout<<"Float: " <<floatVar <<endl;
    cout<<"Double: " <<doubleVaar <<endl;
    cout<<"Character: "<< charVar <<endl;
    cout <<"Boolean: " <<(boolVar? "true": "false") <<endl;

    //Derived Data types
    int arrayVar[5] = {1,2,3,4,5}; //Array
    vector<int> vectorVar = {6,7,8,9,10}; //Vector(from STL)

    //output array
    cout<<"Array: ";
    for(int i=0; i<5; i++){
        cout<<arrayVar[i]<<" ";
    }
    cout<<endl;

    //Output Vector
    cout<<"Vector: ";
    for (int num: vectorVar){
        cout<< num<<" ";
    }
    cout<<endl;

    //user-defined data type
    Person Person1;
    Person1.name = "Kunal";
    Person1.age = 23;

    Person Person2;
    Person2.name = "Abhilash";
    Person2.age = 23;

    //Display Pesron Details
    cout <<"Person 1: ";
    displayperson(Person1);
    cout<<"Person 2: ";
    displayperson(Person2);

    return 0;
}