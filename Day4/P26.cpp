//3. Battery Level Monitoring

#include <iostream>
using namespace std;

int main() {
    int batteryLevel;

    cout << "Enter the battery level (0-100): ";
    cin >> batteryLevel;

    if (batteryLevel < 20) {
        cout << "Battery low! Returning to charging station." << endl;
    } else {
        cout << "Battery level is sufficient. Continuing operation." <<endl;
    }

    return 0;
}