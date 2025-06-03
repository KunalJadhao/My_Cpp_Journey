#include<iostream>
using namespace std;

class check{
    public:
    int *ptr;
    check(int val){
        ptr = new int (val);
    }
    check(const check &c){
        ptr = new int(*c.ptr);
    }
    void compare(check &c){
        if (ptr != c.ptr)
            cout<<" Pointers are different (deep copy)" <<endl;
            else
             cout<<" Pointer are same (shallow copy)"<<endl;
        
        
    }
};

int main(){
    check obj1(11), obj2 =obj1;
    obj1.compare(obj2);
    return 0;
}