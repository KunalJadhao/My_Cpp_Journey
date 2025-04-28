#include<iostream>
using namespace std;

class Resource{
    public:
    Resource(){
        cout<<"Resource aquired."<<endl;
    }
    ~Resource(){
        cout<<"Resource released."<<endl;

    }
};
int main(){
    Resource res;// constructor called
    //Resource will be released when it goes out of scope 
    return 0;
}