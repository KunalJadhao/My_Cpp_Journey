//Finding a word in a string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string element = "This is a Sample Sentence";
    size_t pos = element.find("Sample");

    if (pos != string::npos)
    {
        cout<<"Word found at position: "<<pos <<endl;
    } else{
        cout<<"Word not found" <<endl;

    } return 0;
    
}