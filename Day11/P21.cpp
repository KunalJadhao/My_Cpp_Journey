#include<iostream>
using namespace std;

//Base class 1
class Printer{
public: 
   void print(){
    cout<<"Printing Document!" <<endl;
   }
};

//Base Class 2
class  Scanner{
public:
   void scan(){
    cout<<"Scanning Document"<<endl;
   }
};

//Derieved class
class MultifunctionPrinter : public Printer, public Scanner{
};

int main(){
    MultifunctionPrinter mfp;
    mfp.print();
    mfp.print();
    mfp.scan();
    return 0;
}