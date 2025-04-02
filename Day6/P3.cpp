//3. Fibonaaci series

#include<iostream>
using namespace std;

void fibonaaci(int n){
    int a=0, b=1, c;
    cout<<"Fibonaaci series : " <<a <<" "<< b<<" ";
    for (int i = 1; i <n; ++i)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    cout<<endl;
    
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    fibonaaci(n);
    return 0;


}