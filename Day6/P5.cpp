// 5. Reverse a number

#include <iostream>
using namespace std;

int reversenumber(int number)
{
    int reversed = 0;
    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>> number;
    cout<<" Reversed Number: " <<reversenumber(number) <<endl;
    return 0;

}