//Program to calculate the Income Tax

#include<iostream>

using namespace std;

int main(){

   int Income;
   cout<<"ENTER THE INCOME CTC: " <<endl;
   cin>>Income;
   if (Income<=2,50,000)
   {
    cout<<"THE PERSON HAS NO TAX";
   }
   else if (Income>=2,50,000)
   {
    cout<<"THE PERSRON HAS TO PAY 5% TAX";
   }
   else if (Income>=5,00,000)
   {
    cout<<"THIS PERSON HAS TO PAY 20% TAX";
   }
   if (Income>=10,00,000)
   {
    cout<<"THEN THE PERSON HAS TO PAY 30% TAX" <<endl;
   }
   return 0;

}
   
   