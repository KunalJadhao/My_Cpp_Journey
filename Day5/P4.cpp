//patterns

#include<iostream>
using namespace std;

//Functions tp print a pattern
void pattern4(int n){
    int num =1;
    //Step 1: Focus on the rows
    for (int i = 1; i <=n; i++)
    {
        //Step 2: Focus on the number of columns:
        for (int k = 1; k <= i; k++)
        {
        //Step: 03 Pringting i in the inner loop K is less than or equal to 1
        cout<<num<<" ";
        num++;
        } cout<<endl;
        //Step:04 Observing symmetry not required

    }
    
}
int main(){
    int n=7; //Values can be changed to n protect
    cout<<"\n\n";
    pattern4(n);
    cout<<"\n\n";
    return 0;
}