//Reverse the number

#include<iostream>

using namespace  std;

int main(){

    int number, reversednumber=0;
    cout<<"Enter the Value : ";
    cin>>number;

    for (; number != 0; number/=10)
    {
        reversednumber = reversednumber*10 +number%10;

    }
    cout<<"Reversed Number: "<< reversednumber
    <<endl;
    return 0;

    

}