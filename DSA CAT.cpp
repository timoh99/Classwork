#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int studentID;
    string name;
    float marks[3];
    float average;

    // Constructor
    Student(int id = 0, string n = "", float m1 = 0, float m2 = 0, float m3 = 0) {
        studentID = id;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        computeAverage();
    }

    // Function to compute average
    void computeAverage() {
        average = (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    // Display student details
    void display() {
        cout << "ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: [" << marks[0] << ", "
             << marks[1] << ", "
             << marks[2] << "]" << endl;
        cout << "Average: " << average << endl;
        cout << "            " << endl;
    }
};

int main() {

    const int SIZE = 5;

    // Array of Student Objects
    Student students[SIZE] = {
        Student(11652, "Kelvin", 50, 90, 70),
        Student(10699, "Denno", 80, 90, 100),
        Student(6697, "Robert", 70, 85, 75),
        Student(6970, "Gee", 89, 99, 77),
        Student(10779, "Eve", 69, 59, 89)
    };

    cout << "ORIGINAL STUDENT RECORDS\n";
    for (int i = 0; i < SIZE; i++) {
        students[i].display();
    }

    // Search student by ID
    int searchID = 11652;
    bool found = false;

    for (int i = 0; i < SIZE; i++) {
        if (students[i].studentID == searchID) {
            cout << "\nStudent Found:\n";
            students[i].display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }

    // Bubble Sort (Descending by Average)
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (students[j].average < students[j + 1].average) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted by Average (Descending)\n";
    for (int i = 0; i < SIZE; i++) {
        students[i].display();
    }

    return 0;
}