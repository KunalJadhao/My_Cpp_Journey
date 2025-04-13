//Functions returning a pointer

#include<iostream>
using namespace std;

int* createarray(int size) {
    return new int[size]; //Return a pointer to a dynamically allocated array


}
int main(){
    int size = 3;
    int* arr = createarray(size); //got the pointer to the array

    for (int i = 0; i < size; i++)
    {
        arr[i] = i+1; //Assign values
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] = " <<arr[i] <<endl; //print values
    }
    delete[] arr; //freeing the allocated array
    return 0;
    
    
    
}