//Votinig Program to check wether the person is eligible or not

#include<iostream>

using namespace std;

int main(){

    int age;

    cout<<"ENTER THE  AGE OF A PERSON: " <<endl;
    cin>>age;

    //if-else 
    if (age>=18)
    {
       cout<<"YOU'RE ELIGIBLE TO VOTE." <<endl;
    } else{
        cout<<"YOU'RE NOT ELIGIBEL TO VOTE. " <<endl;
    }
    return 0;
    
}