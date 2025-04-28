#include<iostream>
class Myclass{
    public:
    int value;

    Myclass(int n) : value(n){} //Parameterized Constructor

    //Copy constructor
    Myclass(const Myclass &obj){
        value = obj.value;
        std::cout<<"copy constructor called!"<<std::endl;

        
    }
};

int main(){
    Myclass obj1(10); // Calls paramterizes construtor
    Myclass obj2 = obj1; // This will call the coopy constructor
    std::cout<<"Value of obj2: " <<obj2.value<<std::endl;
    return
     0;
}