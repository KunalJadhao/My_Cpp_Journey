// A point structure to resprestn a point in 2D space

#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    Point p1;
    p1.x = 60;
    p1.y = 50;
    cout << "Point cordinates: (" << p1.x << ", " << p1.y << ")" << endl;
    return 0;
}