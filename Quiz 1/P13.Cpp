//Discount

#include<iostream>

using namespace std;

int main(){
    int Amount;
    cout<<"ENTER THE AMOUNT OF PURCHASE: " <<endl;
    cin>>Amount;
    if (Amount>5000)
    {
        cout<<"THE CUSTOMER GETS A 10 PERCENTAGE DISCOUNT." <<endl;
    }
    else{
        cout<<"THE PERSON WON'T GET A DISCOUNT." <<endl;
    }
    return 0;
    
}