#include<iostream>
#include<thread>
using namespace std;

void task1(){
    cout<<" Task 1 is running..."<<endl;

}
void task2(){
    cout<<" Task 2 is running..."<endl;

}

int main(){
    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();

    cout<<" Both tasks Completed."<<endl;
    return 0;
}