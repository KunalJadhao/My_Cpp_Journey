#include<iostream>
using namespace std;

enum class Direction {
    NORTH,
    SOUTH,
    EAST,
    WEST,
};

int main() {
    Direction dir = Direction::NORTH;
    if (dir == Direction::NORTH) {
        cout << "Heading North!" << endl;
    }
    return 0;
}
