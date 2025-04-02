//tempearute conversion
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number of Temperature to convert: ";
    cin>>number;

    for (int i = 1; i <= number; ++i)
    {
        double celsius;
        cout<<"Enter temprature in Celsius: ";
        cin>>celsius;
        double fahrenhit = (celsius*9/5)+32;
        cout<<"Tempeature in Fahrenheit: " <<fahrenhit <<endl;

    }
    return 0;
}