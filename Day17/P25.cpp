#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream out("student.txt");
    out << "Name: Kunal\nAge: 20\nMarks: 90";
    out.close();

    string line;
    ifstream in("student.txt");
    while(getline(in, line)) cout << line << endl;
    in.close();
    return 0;
}
