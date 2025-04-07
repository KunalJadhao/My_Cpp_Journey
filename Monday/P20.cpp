//Creating a to do list
#include<iostream>
#include<string>
using namespace std;

int main(){
    const int maxtasks = 2;
    string tasks[maxtasks];

    //input tasks
    cout<<" Enter "<< maxtasks <<" tasks to add in your to-do list; \n";
    for (int i = 0; i < maxtasks; i++)
    {
        cout<<"Task " <<(i+1)<<": ";
        getline(cin, tasks[i]);
    }

    //Display to-do list
    cout<<"\nYour To-Do list is as follows: \n";
    for (int i = 0; i <maxtasks; i++)
    {
        cout<<(i+1) <<". "<< tasks[i] << endl;
    }
    return 0;
    
    
}