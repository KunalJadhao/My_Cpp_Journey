// Employee Class creation
#include<iostream>
using namespace std;

class Employee {
    private:
    string name;
    double salary;

    public:
    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    void displayinfor() {
        cout << " Employee Name: " << name << ", Salary: Rs. " << salary << endl;
    }
};

int main() {
    Employee emp("Kunal", 90000);  
    emp.displayinfor();           
}
