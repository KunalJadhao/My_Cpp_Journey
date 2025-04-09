//To-Do List Manager

#include<iostream>
#include<string>
using namespace std;

int main(){
    string tasks[5];
    cout<<"Enter 5 Tasks for your to-do list: \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"Task"<<i+1<<"; ";
        getline(cin, tasks[i]);
    }
    cout<<"\nYour To-Do list: \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"- " <<tasks[i]<<endl;

    }
    return 0;
}