//2. Temperature Control System

#include <iostream>
using namespace std;


int main() {
    float temperature;

    cout << "Enter the current temperature (in Celsius): ";
    cin >> temperature;

    if (temperature > 75.0) {
        cout << "Temperature is too high! Activating cooling system." <<endl;
    } else {
        cout << "Temperature is normal. No action needed." <<endl;
    }

    return 0;
}