/*
Classes, Object, Functions:

A class is a blueprint for creating objects. It encapulates data and functions that operates on the data.


Members can include:
Data members: Variables that hold the state of the object.
Member Functions: Functions that define the behaviour of the object.


Access Specifiers:

Access sppecifiers control the visibilty fo a class members:
Public: Members are accesible from outside the class.
Private: Memebrs are accesible within the class.
Procotored: Members are accesible within the class and by  derived classes.
*/

#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    void honk(){
        cout<<"Beep! Beep"<<endl;
    }
};

int main(){
    Car mycar;
    mycar.brand = "BMW";
    mycar.honk();
    cout<<"Car Brand: "<<mycar.brand<<endl;
    return 0;
}