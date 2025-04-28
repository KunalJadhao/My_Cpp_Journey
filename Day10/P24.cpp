#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;

    Student(string n) : name(n) {}
};

class Teacher {
public:
    string name;

    Teacher(string n) : name(n) {}
};

class Classroom {
private:
    vector<Student> students;
    Teacher teacher;

public:
    Classroom(Teacher t) : teacher(t) {}

    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayClassroom() const {
        cout << "Classroom led by " << teacher.name << ":\n";
        for (const auto& student : students) {
            cout << "Student: " << student.name << "\n";
        }
    }
};

int main() {
    string teacherName, studentName;
    int choice;

    cout << "Enter teacher's name: ";
    getline(cin, teacherName);
    Teacher teacher(teacherName);

    Classroom classroom(teacher);

    while (true) {
        cout << "\n--- Virtual Classroom System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Classroom\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To consume the newline character left by cin

        if (choice == 1) {
            cout << "Enter student's name: ";
            getline(cin, studentName);
            Student student(studentName);
            classroom.addStudent(student);
            cout << "Student added successfully.\n";
        }
        else if (choice == 2) {
            classroom.displayClassroom();
        }
        else if (choice == 3) {
            cout << "Thank you for using the Virtual Classroom System.\n";
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
