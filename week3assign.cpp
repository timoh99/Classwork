// Week 3 - Task 1: Exam Eligibility Checker
// A student is eligible if attendance >= 75% AND average marks >= 40.

#include <iostream>
#include <iomanip>
using namespace std;

// ============================================================
// TASK 1: Exam Eligibility
// ============================================================
void examEligibility() {
    double attendance, averageMarks;

    cout << "========================================" << endl;
    cout << "        Exam Eligibility Checker        " << endl;
    cout << "========================================" << endl;

    cout << "Enter attendance percentage: ";
    cin >> attendance;
    cout << "Enter average marks: ";
    cin >> averageMarks;

    if (attendance >= 75 && averageMarks >= 40) {
        cout << "Result: Eligible for final exams." << endl;
    } else {
        cout << "Result: Not eligible." << endl;
        if (attendance < 75) {
            cout << "  - Attendance is below 75% (yours: " << attendance << "%)" << endl;
        }
        if (averageMarks < 40) {
            cout << "  - Average marks are below 40 (yours: " << averageMarks << ")" << endl;
        }
    }
    cout << "========================================" << endl << endl;
}

// ============================================================
// TASK 2: Water Bill Calculator
// ============================================================
void waterBillCalculator() {
    int units;
    double totalBill = 0.0;

    cout << "========================================" << endl;
    cout << "         Water Bill Calculator          " << endl;
    cout << "========================================" << endl;

    cout << "Enter water units consumed: ";
    cin >> units;

    // Rate tiers using if-else if-else
    if (units <= 30) {
        totalBill = units * 20.0;
    } else if (units <= 60) {
        // First 30 units at 20, remaining at 25
        totalBill = (30 * 20.0) + ((units - 30) * 25.0);
    } else {
        // First 30 at 20, next 30 at 25, remainder at 30
        totalBill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    cout << fixed << setprecision(2);
    cout << "Total water bill: " << totalBill << " KES" << endl;
    cout << "========================================" << endl << endl;
}

// ============================================================
// TASK 3: Mobile Data Bundle Purchase
// ============================================================
void dataBundlePurchase() {
    int choice;

    cout << "========================================" << endl;
    cout << "      Mobile Data Bundle Purchase       " << endl;
    cout << "========================================" << endl;
    cout << "Select data bundle:" << endl;
    cout << "  1. 100MB  @ 50 KES" << endl;
    cout << "  2. 500MB  @ 200 KES" << endl;
    cout << "  3. 1GB    @ 350 KES" << endl;
    cout << "  4. 2GB    @ 600 KES" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << endl;

    switch (choice) {
        case 1:
            cout << "You selected 100MB. Cost = 50 KES" << endl;
            break;
        case 2:
            cout << "You selected 500MB. Cost = 200 KES" << endl;
            break;
        case 3:
            cout << "You selected 1GB. Cost = 350 KES" << endl;
            break;
        case 4:
            cout << "You selected 2GB. Cost = 600 KES" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }
    cout << "========================================" << endl << endl;
}

int main() {
    examEligibility();
    waterBillCalculator();
    dataBundlePurchase();

    return 0;
}