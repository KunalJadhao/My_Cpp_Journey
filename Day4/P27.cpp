//Speed Control Based on Terrain

#include <iostream>
#include <string>
using namespace std;


int main() {
    string terrain;
    int speed;

    cout << "Enter the type of terrain (flat, hilly, rough): ";
    cin >> terrain;

    if (terrain == "flat") {
        speed = 10; // Speed in meters per second
    } else if (terrain == "hilly") {
        speed = 5;
    } else if (terrain == "rough") {
        speed = 3;
    } else {
        cout << "Invalid terrain type!" << endl;
        return 1; // Exit with an error code
    }

    cout << "Setting speed to " << speed << " m/s for " << terrain << " terrain." << endl;

    return 0;
}