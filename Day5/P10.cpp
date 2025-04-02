//Char

#include<iostream>
using namespace std;

void pattern12(int n){

    char data =99; //ASCII Values
    for (int i = 0; i <n ; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            cout<<data<<" ";
        } cout<<endl;
        
    }
    
}
int main(){
    int n=7;
    cout<<"\n\n";
    pattern12(n);
    cout<<"\n\n";
    return 0;
}