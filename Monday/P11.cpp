//Merging two arrays
#include<iostream>
using namespace std;

int main(){
    int array1[3] = {10,20,30};
    int array2[3] = {40,50,60};
    int merged[6];


    //Merging arrays
    for (int i = 0; i < 3; i++)
    {
        merged[i] = array1[i];
        merged[i+3] =array2[i];

    }
    cout<<"Merged Array: ";
    for (int i = 0; i <6; i++)
    {
        cout<<merged[i]<<" ";

    }
    cout<<endl;
    return 0;
    
}