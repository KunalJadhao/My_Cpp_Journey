//Sorting an Array using Bubble sort
#include<iostream>
using namespace std;

int main(){
    int numbers[10] = { 10,20,30,40,50,60,70,80,90,100};
    int n=10;

    //Bubble sorting
    for (int i = 0; i <n-1; i++)
    {
        for (int k = 0; k < n-1; k++)
        {
            if (numbers[k]>numbers[k+1])
            {
                //swap

                int temp = numbers[k];
                numbers[k]= numbers[k+1];
                numbers[k+1]=temp;

            }
            
        }
        
    }
    cout<<"Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<numbers[i]<< " ";

    }
    cout<<endl;
    return 0;
    
    
}