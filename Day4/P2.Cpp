//to calculate th grades of a person

#include<iostream>

using namespace std;

int main(){

    int Marks;
    cout<<"ENTER THE MARKS/PERCENTAGE: ";
    cin>>Marks;


    //Determine the Marks and Grade using the if else if
    if (Marks>=90 && Marks<=100)
    {
        cout<<"Grade: A" <<endl;
    }
    else if (Marks>=80 && Marks <90)
    {
        cout<<"Grade: B" <<endl;
    }
    else if (Marks>=70 && Marks<80)
    {
        cout<<"Grade: C" <<endl;
    }
    else if (Marks>=60 && Marks<70)
    {
        cout<<"Grade: D" <<endl;
    }
    else {
        cout<<"Invalid Marks and Perceantage Entered." <<endl;

    }
    return 0;
    
    
    
}