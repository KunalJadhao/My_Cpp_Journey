// Dynamic array allocation

#include<iostream>
using namespace std;

int main(){
    int size = 5;
    int* arr = new int[size]; //dynamically allocate an array

    for (int i = 0; i <size; i++)
    {
        arr[i] = i *10; //assign value

    }
    for (int i = 0; i <size; i++)
    {
        cout<<"arr["<<i<<"] = " <<arr[i] <<endl; //print values

    }
    delete[] arr;
    return 0;  
}