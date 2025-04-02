//3. Using <ctime> for date and time
#include<iostream>
#include<ctime> //for time function
using namespace std;

int main(){
    time_t now = time(0);  //Get value time
    char* dt = ctime(&now); //convert to string
    cout<<"The current local time is: " <<dt <<endl;
    return 0;
}