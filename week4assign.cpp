// Week 4: Loops Activity
// Covers: for loop, while loop (ATM & guessing game), do-while loop (password)

#include <iostream>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
using namespace std;

// ============================================================
// FOR LOOP: Print numbers 100 down to 50
// ============================================================
void forLoopDescending() {
    cout << "========================================" << endl;
    cout << "   For Loop: 100 Down to 50             " << endl;
    cout << "========================================" << endl;

    for (int i = 100; i >= 50; i--) {
        cout << i << endl;
    }

    cout << "========================================" << endl << endl;
}

// ============================================================
// WHILE LOOP 1: ATM Withdrawal Simulator
// ============================================================
void atmWithdrawal() {
    double balance;
    double withdrawal;

    cout << "========================================" << endl;
    cout << "         ATM Withdrawal System          " << endl;
    cout << "========================================" << endl;

    cout << "Enter your account balance (KES): ";
    cin >> balance;

    while (balance > 0) {
        cout << "\nCurrent balance: KES " << balance << endl;
        cout << "Enter amount to withdraw (KES): ";
        cin >> withdrawal;

        if (withdrawal <= 0) {
            cout << "Invalid amount. Please enter a positive value." << endl;
            continue;
        }

        balance -= withdrawal;

        if (balance < 0) {
            cout << "Insufficient funds. Transaction declined." << endl;
            balance += withdrawal; // restore balance
            break;
        }

        cout << "Withdrawal successful. Remaining balance: KES " << balance << endl;
    }

    if (balance <= 0) {
        cout << "\nYour account balance is zero. No more withdrawals possible." << endl;
    }

    cout << "========================================" << endl << endl;
}

// ============================================================
// WHILE LOOP 2: Number Guessing Game (1–20)
// ============================================================
void guessingGame() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator
    int secretNumber = (rand() % 20) + 1;     // Generate number between 1 and 20
    int guess;
    int attempts = 0;

    cout << "========================================" << endl;
    cout << "        Number Guessing Game            " << endl;
    cout << "  Guess a number between 1 and 20       " << endl;
    cout << "========================================" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "\nCongratulations! You guessed it!" << endl;
            cout << "The secret number was: " << secretNumber << endl;
            cout << "Total attempts: " << attempts << endl;
            break;
        }
    }

    cout << "========================================" << endl << endl;
}

// ============================================================
// DO-WHILE LOOP: Password System
// ============================================================
void passwordSystem() {
    const string CORRECT_PASSWORD = "1234";
    string enteredPassword;

    cout << "========================================" << endl;
    cout << "           Password System              " << endl;
    cout << "========================================" << endl;

    do {
        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredPassword != CORRECT_PASSWORD) {
            cout << "Incorrect password. Please try again." << endl;
        }

    } while (enteredPassword != CORRECT_PASSWORD);

    cout << "\nAccess Granted!" << endl;
    cout << "========================================" << endl << endl;
}

int main() {
    forLoopDescending();
    atmWithdrawal();
    guessingGame();
    passwordSystem();

    return 0;
}