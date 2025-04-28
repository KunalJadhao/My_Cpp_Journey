/*
The this pointer is an implict pointer availabel within non-static member function of a class.
it points to the object for which the number function is called. This allows you ti acess the objects's
members and differentiate between member vairables and parameters with the same name.

Key features of this pointer:
1. It is called a constant pointer that holds the address of the currentn object.
2. It can be used to return the current objecs from a members function (useful for method chaining).
3. It helps in resolving naming conflicts between member variables and parameters
*/

#include<iostream>
class Myclass{
    private:
    int value;

public:
       Myclass(int value){ //Constructor pparamteter
        this->value = value; //using "this" to differentiate 
    }

    void display(){
        std::cout<<"Value: "<<this->value<<std::endl; //Acessing members 'this'
    }
    Myclass& setvalue(int value){
        this->value = value; //using 'this' for assignment

    return *this; //Returing the current object
    }

};
int main(){
    Myclass obj(10);
    obj.display();// Output: Value: 10
    obj.setvalue(20).display();  //Method chaning
    return 0;
}