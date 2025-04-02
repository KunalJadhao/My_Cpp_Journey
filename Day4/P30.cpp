//Continue

#include<iostream>

using namespace std;

int main(){
    cout<<"Even numbers from 1 to 10:" <<endl;

    for (int i= 1; i <=10; ++i)
    {
        if (i%2 !=0)
        {
            continue; //Skip the current  iteration  if thr number if dd
        }
        cout<<i <<" ";  //Print the even numbers
    }
    cout<<endl;
    return 0;
}