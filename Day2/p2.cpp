//using the c++ programming to calculate the marks of five students in the class
#include<iostream>
using namespace std;

int main(){
    // defining the variables 
    int S1, S2, S3, S4, S5;
    int totalmarks=0;

    //giving up the marks to the students via user input
    cout<<"Enter the Marks of S1:";
    cin>>S1;

    cout<<"Enter the Marks of S2:";
    cin>>S2;

    cout<<"Enter th Marks of S3:";
    cin>>S3;

    cout<<"Enter the marks of S4:";
    cin>>S4;

    cout<<"Enter the Marks of S5:";
    cin>>S5;

    // CALCULATING THE MARKS OF THE FIVE STUDENTS
    totalmarks = S1+S2+S3+S4+S5;

    //Display the total marks of the Students
    cout<<"Total Marks for Five Students:" <<totalmarks <<endl;
    return 0;
    

}