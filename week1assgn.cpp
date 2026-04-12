// Week 1 - Task 1: Display Units on Offer
// This program displays all academic units offered this semester.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array of units offered this semester
    string units[] = {
        "Introduction to Programming",
        "Data Structures",
        "Computer Networks",
        "Database Systems",
        "Software Engineering"
    };

    int totalUnits = 5;

    cout << "" << endl;
    cout << "       Units Offered This Semester      " << endl;
    cout << "" << endl;

    // Loop through and display each unit
    for (int i = 0; i < totalUnits; i++) {
        cout << i + 1 << ". " << units[i] << endl;
    }

    cout << "" << endl;

    return 0;
}