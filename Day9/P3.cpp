//pointer and arrays
#include<iostream>
using namespace std;

int main(){
    int arr[3] = {1,2,3};
    int* ptr = arr; //pointre to the first element of thr array

    for (int i = 0; i < 3; i++)
    {
        cout<<"arr["<<i<<"] = " <<ptr[i] <<endl; //Accesing the array element using the pointer
    }
    return 0;
}