// Light Bulb Class

#include<iostream>
using namespace std;

class Lightbulb{
    private: 
    bool isOn;

    public:
    Lightbulb(){
        isOn = false;
    }

    void turnOn(){
        isOn = true;
        cout<< "Light Bulb is ON" <<endl;
    }

    void turnoff(){
        isOn = false;
        cout<<" Light Bulb is OFF" <<endl;
    }

    void displaystatus(){
        cout<<"Light Bulb is Currently " <<(isOn ?" ON" : "OFF")<<endl;
    }
};

int main(){
    Lightbulb bulb;
    bulb.displaystatus();
    bulb.turnOn();
    bulb.displaystatus();
    bulb.turnoff();
    bulb.displaystatus();
    return 0;

}