#include<iostream>
#include<string>
using namespace std;
int main(){
    //Acesssing C-Style Strings
    char cstr[] ="Sakshi";
    char *ptr  =cstr;
    cout <<"C-sty;e Strign access: \n";
    cout<<"Using array indexing :"<<cstr[0] <<"\n"; //output :H
    cout<<"Using pointer: " <<*ptr<< "\n"; //Output: H
    cout<<"Using pointer arithmetic: "<< *(cstr +1) <<"\n";
    for (int i = 0; cstr[i] != '\0'; i++)
    {
        cout<<cstr[i];
    }
    cout<<"\n";
}
//Acessing using C++ Method
string str = "Hello";
cout<<"\n Acess: \n";
cout<<"Using [] operator: "<<str[1] <<"\n"; //Output: e
cout<<"Using .at(): "<<str.at(2)<<"\n"; //output: 1
cout<<"Using .front(): "<<str.front() <<"\n"; //output: H
cout<<"Using .back(): "<<str.back()<<"\n"; //output: o
cout<<"Using iterators: ";
for (string iterator it = str.begin(); it != str.end(); ++it)
{
   cout<<*it;
}
cout<<"\n";
cout<<"Using range-based for loop: ";
for (char ch: str)
{ cout <<ch;

}
cout<<"\n";
cout<<"Using .c_str(): "<<str.c_str() <<"\n";
return 0;



