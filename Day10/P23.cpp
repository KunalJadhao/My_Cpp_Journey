#include <iostream>
#include <vector>
using namespace std;

class Course {
public:
    string title;
    string instructor;

    Course(string t, string i) : title(t), instructor(i) {}
};

class Student {
public:
    string name;

    Student(string n) : name(n) {}
};

class LearningPlatform {
private:
    vector<Course> courses;

public:
    void addCourse(const Course& course) {
        courses.push_back(course);
    }

    void enrollStudent(const Student& student, const string& courseTitle) {
        for (const auto& course : courses) {
            if (course.title == courseTitle) {
                cout << student.name << " enrolled in " << course.title << " taught by " << course.instructor << ".\n";
                return;
            }
        }
        cout << "Course not found.\n";
    }

    void displayCourses() const {
        if (courses.empty()) {
            cout << "No courses available.\n";
        } else {
            cout << "\n--- Available Courses ---\n";
            for (const auto& course : courses) {
                cout << course.title << " - Instructor: " << course.instructor << "\n";
            }
        }
    }
};

int main() {
    LearningPlatform platform;
    int choice;

    while (true) {
        cout << "\n--- Online Learning Platform ---\n";
        cout << "1. Add Course\n";
        cout << "2. View Courses\n";
        cout << "3. Enroll in Course\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string title, instructor;

            cout << "Enter course title: ";
            cin.ignore();  // To handle getline properly after cin
            getline(cin, title);

            cout << "Enter instructor name: ";
            getline(cin, instructor);

            platform.addCourse(Course(title, instructor));
            cout << "Course added successfully.\n";
        }
        else if (choice == 2) {
            platform.displayCourses();
        }
        else if (choice == 3) {
            string studentName, courseTitle;

            cout << "Enter student's name: ";
            cin.ignore();
            getline(cin, studentName);

            Student student(studentName);

            cout << "Enter course title to enroll in: ";
            getline(cin, courseTitle);

            platform.enrollStudent(student, courseTitle);
        }
        else if (choice == 4) {
            cout << "Thank you for using the Online Learning Platform.\n";
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
