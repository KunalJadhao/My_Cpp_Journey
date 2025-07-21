#include <iostream>
using namespace std;
double area(double r) { return 3.14 * r * r; }
double area(double l, double b) { return l * b; }
int main() {
    cout << "Area Circle: " << area(5.0) << endl;
    cout << "Area Rectangle: " << area(5.0, 3.0);
    return 0;
}