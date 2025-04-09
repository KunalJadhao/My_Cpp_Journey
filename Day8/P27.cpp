//WORD COUNTER FOR THE SENTECE
#include<iostream>
#include<string>
using namespace std;

int main(){
    string sentence;
    int count = 1;


    cout<<"Enter a sentence: ";
    getline(cin, sentence);

    for (char c: sentence)
    {
         if (c==' ')
         {
            count++;
         }
         

    }
    cout<<"Number of Words: "<<count<<endl;
    return 0;
}