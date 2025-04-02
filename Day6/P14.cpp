//Pass by refernce
#include<iostream>
using namespace std;
void square( int &num){ // here & signifies the values stored in a particular address and the action being performed on that value.
    num =num*num;
}
int main(){
    int x=7;
    square(x);
    cout<<x; // output: 49 (unchanged)
}


// Pass by value: 
/* #include<isotream>
using namespace std; 
void sqaure (int num){
num = num*num;
}

int main(){
int x= 7;
sqaure(x);
cout<<x; //output:7 (unchnaged)
}
*/