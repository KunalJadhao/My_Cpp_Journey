// Fibonacci Series

#include <iostream>
using namespace std;

int main(){
    int Number, t1 = 0, t2 = 1, nextterm=0;
    cout<<"Enter the number of Terms: ";
    cin>>Number;


    cout<<"Fibonaaci Series: " <<t1<<" ," << t2 <<" ,";
    for (int i = 3; i <= Number; ++i)
    {
        nextterm = t1+t2;
        cout<<nextterm<<",";
        t1 =t2;
        t2=nextterm;

    }
    cout<<endl;

return 0;
}
