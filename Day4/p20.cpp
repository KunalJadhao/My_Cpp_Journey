// Jump statements

#include<iostream>
using namespace std;

int main(){
   int number;
   cout<<"Enter the number" <<endl;
   
   while (true)
   {
    cout<<"Number: ";
    cin>>number;
    if (number<0)
    {
        cout<<"Negative Number entered. Exiting the loop." <<endl;
        break;
    }
    
        cout<<"You've entered: " <<number <<endl; 
   }
   cout<<"Program ended." <<endl;
   return 0;
   
}