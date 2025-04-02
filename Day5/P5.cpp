//Patterns

#include<iostream>
using namespace std;

//Function to Print a pattern
void pattern5(int n){
    //Step: 01 Focus on the number of rows: n rows
    for (int i = 0; i < n; i++)
    {
        //Step:02 Focus on the number of columns : I columns 

       for (int k = 0; k < n-i; k++)
       {
        //Step 03: Printing i in the inner loop till Kis less tha or equald to i
        cout<<"*";
       } cout<<endl;
       //Step4: Observing Symmetry : Not Required
        
    }
    
}
int main(){
    int n=8; //Values can be chnaged later
    cout<<"\n\n";
    pattern5(n);
    cout<<"\n\n";
    return 0;

}