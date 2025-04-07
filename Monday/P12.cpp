//Counting an occurance of elements in an array
#include<iostream>
using namespace std;

int main(){
    int numbers[10] = {10,20,30,40,50,60,70,80,90,100};
    int target = 60;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {if (numbers[i]== target)
    {
        count++;
    }
       
    }
    cout << "Element " << target << " occurs " << count << " times." << endl;
    return 0;
}