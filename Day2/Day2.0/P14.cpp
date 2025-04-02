// A c++ Program to Move a Simple Robotic Arm

#include <iostream>
using namespace std;

class Robot
{
public:
    int x, y; // Robot's Initial Position Co-ordinate

    Robot() : x(0), y(0) {} // Initialize Position at (0,0)

    void moveforward()
    {
        y++;
        cout << "Moved Forward to (" << x << ", " << y << " )\n";
    }
    void moveBackward()
    {
        y--;
        cout << "Moved Backward to (" << x << ", " << y << ")\n";
    }
    void moveleft()
    {
        x--;
        cout << "Moved Left to(" << x << ", " << y << ")\n";
    }
    void moveright()
    {
        x++;
        cout << "Moved Right to(" << x << ", " << y << ")\n";
    }

    void displayPosition()
    {
        cout << "Cuurrent Position: (" << x << ", " << y << ")\n";
    }
};

int main()
{
    Robot myrobot;
    string Command;

    cout << "Robot Control Program\n";
    cout << "Commands: Forward, Backward, Left, Right, status, exit\n";

    while (true)
    {
        cout << "Enter Command:";
        cin >> Command;

        if (Command == "Forward")
        {
            myrobot.moveforward();
        }
        else if (Command == "Backward")
        {
            myrobot.moveBackward();
        }
        else if (Command == "Left")
        {
            myrobot.moveleft();
        }
        else if (Command == "Right")
        {
            myrobot.moveright();
        }
        else if (Command == "Status")
        {
            myrobot.displayPosition();
        }
        else if (Command == "exit")
        {
            cout << "Exiting the Program.\n";
            break;
        }
        else
        {
            cout << "Invalid Command. Please try again.\n";
        }
    }

    return 0;
}
