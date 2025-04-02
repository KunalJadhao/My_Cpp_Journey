// to display the information of a person using Cpp as a Programming language
#include <iostream>
using namespace std;

int main()
{
    string Name;
    int Age;
    float Marks;
    bool isgettingadmittedinto_NUS;
    char Grade;

    // Take the values the Variables created via user input

    cout << "Enter the Name:";
    cin >> Name;
    cout << "Enter the Age:";
    cin >> Age;
    cout << "Enter the Marks:";
    cin >> Marks;
    cout << "Enter is gettingadmittedinto_NUS:";
    cin >> isgettingadmittedinto_NUS;
    cout << "Enter the Grade:";
    cin >> Grade;
    
    //Display the  data 
    //using the escape sequence 
    cout<<"\n -------------Display the data of the given Person------------ \n";
    cout<<"\n name: " <<Name;
    cout<<"\n age: " <<Age;
    cout<<"\n marks: " <<Marks;
    cout<<"\n grade:  "<<Grade;
    cout<<"\n isgettingadmittedinto_NUS:" <<isgettingadmittedinto_NUS << "\n" <<endl;
    return 0;



}