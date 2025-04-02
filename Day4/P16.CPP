//guess the number game usiong while loop

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0))); //Seed the random number
    int number =rand()%100+1; //random number between 1 and 100
    int guess;
    int attempts =0;
    cout<<"GUESS THE NUMBER (BETWEEN 1-100): ";
    while (true)
    {
       cin>>guess;
       attempts++;
       if (guess>number)
       {
        cout<<"TOO HIGH! TRY AGAIN:";
       } else if (guess<number)
       {
        cout<<"TOO LOW! TRY AGAIN:";
       } else{
        cout<<"Congratulations! You've guessed the number in" <<attempts<< endl;
        break; //exit the loop
       }
       
       
    }
    
return 0;

    
}