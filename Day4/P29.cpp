//Temperature control sytem

#include<iostream>
using namespace std;

int main(){
    float temperature;

    cout<<"Enter the Current Temperature (in clesius): ";
    cin>>temperature;

    if (temperature>70.0)
    {
        cout<<"Temperature is too high! Activating cooling system" <<endl;

    } else{
        cout<<"Temperature is normal. No action neded." <<endl;

    }
    return 0;
    
    
}