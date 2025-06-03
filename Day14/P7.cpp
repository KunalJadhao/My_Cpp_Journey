#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

void countNumbers(){
    for (int i = 1; i <=5; i++)
    {
        cout<<"Counting: "<<i <endl;
        this_thread::sleep_for(chrono::seconds(1)); 1.Second __cpp_decltype_auto
    }
    
}
int main(){
    thread t1(countNumbers);

    t1.join();

    cout<<" Counting Finished."<<endl;

    return 0
}