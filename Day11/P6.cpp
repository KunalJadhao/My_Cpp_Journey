#include<iostream>
using namespace std;

enum class TrafficLights
{
    Red,
    Yellow,
    Green
};

int main(){
    TrafficLights light = TrafficLights::Green;
    if (light == TrafficLights::Green)
    {
        cout<<" Go!" <<endl;
    }
    
    return 0;
}