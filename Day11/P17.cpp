#include<iostream>
class Myclass{
public:
  static int count;

   Myclass(){
    count++;
   }

   static void displaycount() { //Static member function
    std:: cout<<" Count: "<<count <<std::endl;
}
};

int Myclass::count = 0;

int main(){
    Myclass obj1;
    Myclass obj2;
    Myclass::displaycount(); //Calling the static memebr function
    return 0;
}