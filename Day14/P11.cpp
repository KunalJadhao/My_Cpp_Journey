#include<iostream>
using namespace std;

int main(){
    try{
        throw 3.14; //throwing a double

    }
    catch (...){
        cout<<"caught an unknow exception!" <<endl;
    }
    return 0;
}