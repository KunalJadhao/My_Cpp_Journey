/*
Constructor Initilization List:

You can use an initilization list to initilize data memebrs before the constructor body executes.
This is particularly useful for inilializing const members or refernce memebrs.
*/
#include<iostream>
class Myclass{
    public:
    const int value;

    Myclass(int v): value(v) { //Initialization list
        std::cout<<"Constructor called with value: "<<value<<std::endl;
    }
};

int main(){
    Myclass obj(10); //calls the constructor
    return 0;

}