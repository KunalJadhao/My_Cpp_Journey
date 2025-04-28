#include <iostream>
#include <vector>
using namespace std;

class Workout {
public:
    string type;
    int duration; // in minutes

    Workout(string t, int d) : type(t), duration(d) {}
};

class FitnessTracker {
private:
    vector<Workout> workouts;

public:
    void addWorkout(const Workout& workout) {
        workouts.push_back(workout);
    }

    void displayWorkouts() const {
        if (workouts.empty()) {
            cout << "No workouts recorded.\n";
        } else {
            cout << "\n--- Workouts ---\n";
            for (const auto& workout : workouts) {
                cout << "Workout: " << workout.type << ", Duration: " << workout.duration << " minutes\n";
            }
        }
    }
};

int main() {
    FitnessTracker tracker;
    int choice;

    while (true) {
        cout << "\n--- Fitness Tracker ---\n";
        cout << "1. Add Workout\n";
        cout << "2. View Workouts\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string type;
            int duration;

            cout << "Enter workout type: ";
            cin.ignore(); // To handle getline properly after cin
            getline(cin, type);

            cout << "Enter duration (in minutes): ";
            cin >> duration;

            tracker.addWorkout(Workout(type, duration));
            cout << "Workout added successfully.\n";
        } 
        else if (choice == 2) {
            tracker.displayWorkouts();
        } 
        else if (choice == 3) {
            cout << "Thank you for using the Fitness Tracker.\n";
            break;
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
