// C++ Program to Detect and Avoid Obsatracle

#include <iostream>
#include <string>
#include <cstdlib> //for rand() and Srand()
#include <ctime>   //for time()
using namespace std;

class Robot
{
public:
    int x, y;               // Robot's Initial Positon
    bool obstracleDetected; // Assumption of a Flag-pole

    // Constructor to initialzie position and obsteace Flag
    Robot() : x(0), y(0), obstracleDetected(false) {}

    // Simulate Obstracle Detection
    void detectedobstracle()
    {
        obstracleDetected = (rand() % 2 == 0); // Randomly detect an Object
    }

    // Move the robot Forward if no Obstracle is detected
    void moveforward()
    {
        detectedobstracle(); // chek for the obstracle before moving
        if (obstracleDetected)
        {
            cout << "Obstracle Detected! Can't Move Forward.\n";
        }
        else
        {
            y++; // Move forward in direction
            cout << "Moved Forward to(" << x << ", " << y << ")\n";
        }
    }

    // Display the current position of the robot
    void displayposition()
    {
        cout << "Current Positon: (" << x << ", " << y << ")\n";
    }
};

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed the random numnber generator

    Robot myRobot;  // Create a Robot Object
    string command; // variable to store the user command

    cout << "Robot Control Program with Obstracle Detection\n";
    cout << "Commands: Forward, status, exit\n";

    // main loop to accept user commands
    while (true)
    {
        cout << "Enter Command: ";
        cin >> command;

        if (command == "Forward")
        {
            myRobot.moveforward(); // to move forward the robot
        }
        else if (command == "status")
        {
            myRobot.displayposition(); // Dispaly the robot's current position
        }
        else if (command == "exit")
        {
            cout << "Exit the loop and Program.\n";
            break; // exit the loop and the Program
        }
        else
        {
            cout << "Invalid Command. Please try again.\n"; // Handle the invalid Commands
        }
    }

    return 0; // Indicate the sucessfull completion of the Program
}