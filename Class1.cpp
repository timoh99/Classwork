#include <iostream>
#include <cmath>
using namespace std;

// function prototypes
float simpleInterest(float principle, float rate, int time);
float compoundInterest(float principle, float rate, int time);

int main() {
    float principle, rate;
    int time;

    
    cout << "Enter the principal amount: ";
    cin >> principle;

    cout << "Enter the rate of interest: ";
    cin >> rate;

    cout << "Enter the time  ";
    cin >> time;

    
    float si = simpleInterest(principle, rate, time);
    float ci = compoundInterest(principle, rate, time);

    
    cout << "\nSimple Interest = " << si << endl;
    cout << "Compound Interest = " << ci << endl;

}


float simpleInterest(float principle, float rate, int time) {
    return (principle * rate * time) / 100;
}


float compoundInterest(float principle, float rate, int time) {
    float amount = principle * pow((1 + rate / 100), time);
    return amount - principle;
}
