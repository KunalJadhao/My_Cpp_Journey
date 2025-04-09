// Count the variable ins a string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string text ="Sakshi";
    int count= 0;
    for (char c:  text)
    {
      c = tolower(c);
      if (c== 'a' || c== 'e' ||c== 'i' ||c== 'o' ||c== 'u')

      
      {
        count++;
      }
      
    }
    cout<<"Number of Vowels: " <<count<< endl;
    return 0;
    
}