#include <iostream>
using namespace std;

// Base class for student information
class Student {
protected:
    string name;
    int rollNumber;

public:
    void inputStudentDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

// Base class for mark details
class Marks {
protected:
    float mark1, mark2, mark3;

public:
    void inputMarks() {
        cout << "Enter marks for subject 1: ";
        cin >> mark1;
        cout << "Enter marks for subject 2: ";
        cin >> mark2;
        cout << "Enter marks for subject 3: ";
        cin >> mark3;
    }
};

// Derived class combining student details and marks
class StudentMarks : public Student, public Marks {
public:
    void displayMarkSheet() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks for Subject 1: " << mark1 << endl;
        cout << "Marks for Subject 2: " << mark2 << endl;
        cout << "Marks for Subject 3: " << mark3 << endl;
    }
};

int main() {
    StudentMarks student;
    student.inputStudentDetails();
    student.inputMarks();
    cout << "\n--- Student Mark Sheet ---\n";
    student.displayMarkSheet();
    return 0;
}
