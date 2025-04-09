#include<iostream>
#include<string>

using namespace std;
int main(){
    string name;
    cout<<" Name of the writer: ";
    getline(cin, name);
    cout<<" Hello " <<name<<endl;
    return 0;
}