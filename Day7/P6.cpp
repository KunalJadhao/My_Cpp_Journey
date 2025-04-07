// Sorting an array using (Bubble sort)
#include<iostream>
using namespace std;

int main(){
    int numbers[5] = { 5,4,3,2,1};
    int n=5;

    //Bubble sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                //swap

                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;

            }
            
        }
        
    }
    cout<<"Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<numbers[i] <<" ";
    } 
    cout<< endl;

    return 0;
    
}