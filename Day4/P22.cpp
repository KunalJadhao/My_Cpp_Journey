// Simple voting system
#include<iostream>
using namespace std;
int main(){
    int vote;
    int votesA =0, votesB= 0;
    do
    {
        cout<<"Vote for your  favourite candidate: \n";
        cout<<"1. Candiate A\n";
        cout<<"2. Candiate B\n";
        cout<<"3. Exit Voting\n";
        cout<<"Enter your choice: ";
        cin>>vote;

        switch (vote)
        {
        case 1:
            cout<<"You Voted for candidate A"<<endl;
            break;
        case 2: 
        cout<<"You voted for candidatae B" <<endl;
        break;
        case 3:
        cout<<"Exit Voting"<<endl;
        break;
        default: cout<<"Invalid choice ! Please try again." <<endl;
            break;
        }
    } while (vote!=3);//continue until the user chose to exit
    cout<<"Total votes for candidate A: " <<votesA <<endl;
    cout<<"Total votes for candidate B: "<<votesB<<endl;
    return 0;
    
}