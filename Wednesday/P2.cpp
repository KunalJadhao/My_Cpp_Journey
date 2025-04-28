#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

int main(){
    Point p1;
    p1.x = 10;
    p1.y = 60;
    cout<<"Point corodinates: (" << p1.x << ", " << p1.y << ")" << endl;
    return 0;
}