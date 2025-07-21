#include <iostream>
using namespace std;
enum Traffic { RED, YELLOW, GREEN };
int main() {
    Traffic light = GREEN;
    if(light == GREEN) cout << "Go";
    else if(light == YELLOW) cout << "Slow";
    else cout << "Stop";
    return 0;
}