//to check wether a person is eligible for voting for not

#include<iostream>
using namespace std;

int main(){

    int age;

    cout<<"ENTER THE AGE OF THE PERSON: " <<endl;
    cin>>age;

    if (age>=18)
    {
        cout<<"THE PERSON IS ELIGIBLE TO VOTE." <<endl;
    }
    else{
        cout<<"THE PERSON IS NOT ELIGIBLE TO VOTE."<< endl;

    }
    return 0;
}