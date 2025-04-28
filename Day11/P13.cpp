/*
Destructor -->
A destructor is a special member function that is called when an object goes out of scope or is explicitly deleted
. while constructors are used to initizlize objects, destructors are used to clean up when ann ibject
goes out of scope. A destructor has the same name as the class but us pre-fixed with a tilde(~).\

Syntax: 
class Classname{
public:
     ~classname(); //Destructor
     
};
*/

#include<iostream>
class Myclass{
    public:
    Myclass(){
        std::cout<<"Constructor called!" <<std::endl;

    }
    ~Myclass(){ //Destructor
        std::cout<<"Destructor called!" <<std::endl;
    }
};
int main(){
    Myclass obj; // Constructor is called
    //destructor will be called autoomoatically when obj goes out of scope
    return 0;
    
}