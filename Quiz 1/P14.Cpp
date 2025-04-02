//ATM Pin Verification

#include<iostream>

using namespace std;

int main(){
    int PIN;
    PIN=1234;

    cout<<"input the user pin: "<<endl;
    cin>>PIN;
    if (PIN==1234)
    {
       cout<<"THE ENTERED PIN IS CORRECT." <<endl;
    }
    else {
    cout<<"THE ENTERED PIN IN INCORRECT." <<endl;
    }
    return 0;
    
}