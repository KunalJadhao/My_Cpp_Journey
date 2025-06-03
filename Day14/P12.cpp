#include<iostream>
using namespace std;

class MyException {
    public:
    void message(){
        cout<<" Custom exception occured!"<<endl;
    }
};

int main(){
    try{
        throw MyException();

    }
    catch (MyException e){
        e.message();
    }
    return 0;
    
}