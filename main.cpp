#include <iostream>
#include <string>
using namespace std;

/* ===========================
   Abstract Base Class: Person
   =========================== */
class Person {
private:
    int id;
    string name;

public:
    Person(int i = 0, string n = "") {
        id = i;
        name = n;
    }

    // Getters
    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    // Setters
    void setId(int i) {
        id = i;
    }

    void setName(string n) {
        name = n;
    }

    // Pure Virtual Function (Abstraction + Polymorphism)
    virtual void displayDetails() const = 0;

    virtual ~Person() {}
};

/* ===========================
   Course Class
   =========================== */
class Course {
private:
    string courseName;

public:
    Course(string name = "") {
        courseName = name;
    }

    void setCourseName(string name) {
        courseName = name;
    }

    string getCourseName() const {
        return courseName;
    }
};

/* ===========================
   Derived Class: Student
   =========================== */
class Student : public Person {
private:
    Course course;
    float marks;
    char grade;

    void calculateGrade() {
        if (marks >= 80)
            grade = 'A';
        else if (marks >= 70)
            grade = 'B';
        else if (marks >= 60)
            grade = 'C';
        else if (marks >= 50)
            grade = 'D';
        else
            grade = 'F';
    }

public:
    Student(int id = 0, string name = "", string courseName = "", float m = 0)
        : Person(id, name), course(courseName) {
        marks = m;
        calculateGrade();
    }

    void setMarks(float m) {
        marks = m;
        calculateGrade();
    }

    float getMarks() const {
        return marks;
    }

    char getGrade() const {
        return grade;
    }

    // Polymorphism (Overriding)
    void displayDetails() const override {
        cout << "\n===== Student Details =====" << endl;
        cout << "ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Course: " << course.getCourseName() << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

/* ===========================
   Main Application
   =========================== */
int main() {

    int id;
    string name;
    string courseName;
    float marks;

    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Course Name: ";
    getline(cin, courseName);

    cout << "Enter Marks: ";
    cin >> marks;

    Student student1(id, name, courseName, marks);

    student1.displayDetails();

    return 0;
}