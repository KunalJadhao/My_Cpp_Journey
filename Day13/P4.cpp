//Run time polymorphism
//using inhheritence and virtual functions:

#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){ //virtual function
        cout<<"Base class show function called."<<endl;
    }
};

class Derieved :public Base{
    public:
    void show() override{ //override the base class function 
           cout<<"Derieved class show function called. " <<endl;
    }
};

int main(){
    Base* b;
    Derieved d;
    b = &d;

    b->show();
    return 0;
}