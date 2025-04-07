//Code for temperature Conversion
#include<iostream>
using namespace std;

int main(){
    const int numdays = 7;
    float celsius[numdays], fahrenheit[numdays];

    //Input for temperature in Degree Celsius
    cout<<" Enter Temperature for "<<numdays<<"day in celsius:\n";
    for (int i = 0; i < numdays; i++)
    {
        cout<<" Day "<<(i+1)<< ": ";
        cin>>celsius[i];
    }

    //Conversion to Fahrenheit
    for (int i = 0; i < numdays; i++)
    {
        fahrenheit[i] = (celsius[i] *9.0/5.0)+32;
    }
    //Display Results
    cout<<"\n Temperature in Fahrenheit: \n";
    for (int i = 0; i < numdays; i++)
    {
        cout<<"Day"<<(i+1)<<": "<<fahrenheit[i]<< "°F \n";

    }
    return 0;
    
    
}