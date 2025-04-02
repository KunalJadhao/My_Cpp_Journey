//9. Count the digits in Number

#include<iostream>
using namespace std;

int countdigits(int n){
    if (n==0)
    return 1;
    
    int count = 0;
    while (n!= 0)
    {
        n/= 10;
        count++;
        
    }
    return count;
    
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<" Number of Digits: " << countdigits(number)<<endl;
}