#include<iostream>
class Myclass{
    public:
    Myclass(){
        std::cout<<"Constructor called!"<<std::endl;
    }
    ~Myclass(){ //Destructor

        std::cout<<"Destructor called!" <<std::endl;

    }
};

int main(){
    Myclass obj; //constructor is called
    //Destructor will be called automatically when obj goes out of scope
    return 0;
}