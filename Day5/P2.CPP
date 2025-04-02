//right angle triangle


#include<iostream>
using namespace std;

//Function to print a pattern
void pattern2(int n){
    //Step1: Focus on the number of rows(): n rows
    for (int i = 0; i <n; i++)
    {
        //Step: Focus on the number of columns: K columns
       for (int k = 0; k < n; k++)
       {
        //Step3: Prting'*' in the inner loop 'i' number if times
        cout<<" * ";
       }
       cout<<endl;
        
    }  
}

int main(){
    int n=5; //Can change the values of n to print the different size of patternn 
    cout<<"\n\n";
    pattern2(n);
    cout<<"\n\n";
    return 0;
}