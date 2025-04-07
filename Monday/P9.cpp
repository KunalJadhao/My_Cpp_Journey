//Copying the array element
#include<iostream>
using namespace std;

int main(){
    int source[10]= {10,20,30,40,50,60,70,80,90,100};
    int destination[10];

    //Copying the Elemenet from an Array
    for (int i = 0; i < 10; i++)
    {
        destination[i]=source[i];

    }
    cout<<"Copied Array Elements; ";
    for (int i = 0; i < 10; i++)
    {
        cout<<destination[i]<<" ";
        
    } cout<<endl;
    return 0;

}