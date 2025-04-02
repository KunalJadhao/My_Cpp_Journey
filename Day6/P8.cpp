//8. Find the largest number in an Array

#include<iostream>
using namespace std;

int findlargest(int  arr[], int size){
    int largest = arr[0];
    for (int i=1; i< size; ++i){
        if (arr[i]>largest){
            largest = arr[i];
        }
    } 
    return largest;

} 
int main(){
    int size;
    cout<<"Enter the size  of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the arry: ";
    for (int i = 0; i < size; ++i)
    {
        cin>>arr[i];
    }
    cout<<"Largest Element: "<<  findlargest(arr, size)<<endl;
    return 0;
}