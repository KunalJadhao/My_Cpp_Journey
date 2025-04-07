//code to find the Minimum number of array
#include<iostream>
using namespace std;

int main(){
    int numbers[10] = { 10,20,30,40,50,60,70,80,90,100};
    int min = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i]>min)
        {
            min = numbers[i];

        }
        
    }
    cout<<"Minimun numbers:"<< min<<endl;
    return 0;
    
}