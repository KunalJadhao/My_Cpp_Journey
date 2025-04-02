//employee bonus

#include<iostream>
using namespace std;

int main(){

    int Salary,SERVICE, Bonus;
    cout<<"ENTER THE SALARY OF THE  EMPLOYEE: " <<endl;
    cin>>Salary;
    cout<<"ENTER THE YEARS OF SERVICE: " <<endl;
    cin>>SERVICE;

    if (SERVICE>5)
    {
        cout<<"THE EMPLOYEE WILL RECIVE THE BONUS OF 10 PERCENTAGE" <<endl;
    }
    else if (SERVICE<5)
    {
        cout<<"THE EMPLOYEE WON'T RECIVE THE BONUS OF 10 PERCENTAGE" << Bonus <<endl;
    }
    return 0;

    
}s