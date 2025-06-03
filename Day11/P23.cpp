#include<iostream>
using namespace std;

//Base class
class vehicle{
public:
void start(){
    cout<<" vechicle started"<<endl;
}
};

//Derived class
class car :public vehicle{
    public:
    void drive(){
        cout<<"Car is driving"<<endl;
    }
};

//Furthur derived class
class sportscar: public car{
    public: 
    void accelrate(){
        cout<<"Sports car is accelerating."<<endl;
    }
};

int main(){
    sportscar mySportsCar;
    mySportsCar.start();
    mySportsCar.start();
    mySportsCar.accelrate();
    return 0;

}