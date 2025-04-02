// Swtich

// Day of the week finder

#include <iostream>

using namespace std;

int main(){

    int day;

// Asking the user to enter the correspongindng to the day the work
cout << "ENTER THE NUMBER(1-7) TO GET THE DAY OF THE WEEK: ";
cin >> day; 

// taking the input via user

switch (day)
{
case 1:
    cout << "Monday" << endl;
    break;
case 2:
    cout << "Tuesday" << endl;
    break;
case 3:
    cout << "Wednesday" << endl;
    break;
case 4:
    cout << "Thursday" << endl;
    break;
case 5:
    cout << "Friday" << endl;
    break;
case 6:
    cout << "Saturday" << endl;
    break;
case 7:
    cout << "Sunday" << endl;
    break;

default:
    cout << "Invalid Input Please enter the value again between 1-7" << endl;
    break;
}
return 0;
}