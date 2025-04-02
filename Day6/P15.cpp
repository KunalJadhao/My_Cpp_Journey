// Pass by pointers
#include<iostream>
using namespace std;

void updatevalue(int *ptr){
    *ptr = 8; // Modifies the value of the variable

}
int main(){
    int num = 7;
    cout<<"Before: " <<num<<endl;
    updatevalue(&num); //Passing address of num here to bekept in mind pointers value used with the & so it canm store the updated value in the same adress
    cout<<"After: "<<num<<endl;
    return 0;
}