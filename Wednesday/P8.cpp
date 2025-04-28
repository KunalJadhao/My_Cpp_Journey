#include<iostream>

class Myclass{
    public:
    Myclass(){
        std::cout<<"Default Constructor Called!"<<std::endl;
    }
};

int main(){
    Myclass obj; //Calls the default constructor
    return 0;
}