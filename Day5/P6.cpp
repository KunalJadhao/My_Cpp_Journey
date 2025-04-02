//Patterns
#include<iostream>
using namespace std;

//Functions to print a pattern
void patter6( int n){
    for (int i = 1; i <= n; i++)
    {
        for (int k= 1; k <= n-i+1; k++)
        {
            cout<<k<<" ";
        } cout<<endl;
        
    }
    
}
int main(){
    int n=8;
    cout<<"\n\n";
    patter6(n);
    cout<<"\n\n";
    return 0;
}