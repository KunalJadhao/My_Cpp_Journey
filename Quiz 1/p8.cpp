//Program to calculate the electricity bill and all

#include<iostream>

using namespace std;

int main(){

    int units;
    cout<<"ENTER THE UNITS: " <<endl;
    cin>>units;

    if (units ==100)
    {
        cout<<"THE COST WILL BE AROUND 5  RUPEES PER UNIT." <<endl;
    }
    else if (units==200)
    {
        cout<<"THE COST WILL BE AROUND 7  RUPEES PER UNIT." <<endl;
    }
    else if (units==300)
    {
        cout<<"THE COST WILL BE AROUND 10  RUPEES PER UNIT." <<endl;
    }
    return 0;
    
    
}