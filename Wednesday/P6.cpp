#include<iostream>
using namespace std;

enum class trafficlight{
    RED,
    GREEN,
    YELLOW
};

int main(){
    trafficlight light = trafficlight::GREEN;
    if (light == trafficlight:: GREEN)
    {
    
        cout<<"Go!"<<endl;

    }
    return 0;
}