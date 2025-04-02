// Simple robot Interface

#include <iostream>
#include <string>
using namespace std;


int main() {
    string command;

    cout << "Enter a command for the robot (move, stop, turn left, turn right): ";
    cin >> command;

    if (command == "move") {
        cout << "Robot is moving forward." << endl;
    } else if (command == "stop") {
        cout << "Robot has stopped." << endl;
    } else if (command == "turn left") {
        cout << "Robot is turning left." << endl;
    } else if (command == "turn right") {
        cout << "Robot is turning right." << endl;
    } else {
        cout << "Invalid command!" << endl;
    }

    return 0;
}