#include <iostream>
using namespace std;
class Rectangle {
    double length, width;
public:
    Rectangle() { length = width = 0; }
    Rectangle(double l, double w) { length = l; width = w; }
    double area() { return length * width; }
};
int main() {
    Rectangle r1, r2(5.0, 3.0);
    cout << r1.area() << endl;
    cout << r2.area();
    return 0;
}