// ROBOT CLASS
#include <iostream>
using namespace std;

class Robot {
    string name;
    string model;
    int batteryLevel;

public:
    // Constructor
    Robot(string n, string m) {
        name = n;
        model = m;
        batteryLevel = 100;
    }

    // Moving the robot
    void move(int distance) {
        if (batteryLevel > 0) {
            cout << name << " is moving " << distance << " meters." << endl;
            batteryLevel -= distance / 10;
            if (batteryLevel < 0)
                batteryLevel = 0;
        } else {
            cout << name << " cannot move, low battery!" << endl;
        }
    }

    // Charging the battery
    void charge(int amount) {
        batteryLevel += amount;
        if (batteryLevel > 100)
            batteryLevel = 100;
        cout << name << " is charging, current battery level: " << batteryLevel << "%" << endl;
    }

    // Method to display robot status
    void displayStatus() {
        cout << "Robot Name: " << name << ", Model: " << model << ", Battery Level: " << batteryLevel << "%" << endl;
    }
};

int main() {
    // Creating an object for the Robot
    Robot myRobot("RobotMaster", "RX-100");

    myRobot.displayStatus();

    myRobot.move(50);
    myRobot.displayStatus();

    myRobot.charge(30);
    myRobot.displayStatus();

    myRobot.move(100);
    myRobot.displayStatus();

    return 0;
}
