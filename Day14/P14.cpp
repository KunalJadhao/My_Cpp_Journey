#include<iostream>
using namespace std;

class Test{
    public:
    int *data;

    Test(int val){
        data = new int(val);
    }
    test(const Test &t){
        data = t.data;
    }
    void show(){
        cout<<" Data: "<<data <<endl;
    }

};

int main(){
    Test a(5), b =a;
    *a.data =10;
    b.show();
    return 0;
}