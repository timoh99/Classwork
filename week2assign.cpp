// Week 2 - Task 1: Volume and Surface Area of a Cylinder
// Prompts the user to enter radius and height, then calculates
// the volume and surface area of a cylinder.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double radius, height;

    cout << "========================================" << endl;
    cout << "     Cylinder Calculator                " << endl;
    cout << "========================================" << endl;

    // Get user input
    cout << "Enter the radius of the cylinder (m): ";
    cin >> radius;

    cout << "Enter the height of the cylinder (m): ";
    cin >> height;

    // Calculate volume: V = π * r² * h
    double volume = PI * radius * radius * height;

    // Calculate surface area: SA = 2πr(r + h)
    double surfaceArea = 2 * PI * radius * (radius + height);

    // Display results
    cout << endl;
    cout << "========================================" << endl;
    cout << "             Results                    " << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(4);
    cout << "Radius         : " << radius << " m" << endl;
    cout << "Height         : " << height << " m" << endl;
    cout << "Volume         : " << volume << " m³" << endl;
    cout << "Surface Area   : " << surfaceArea << " m²" << endl;
    cout << "========================================" << endl;

    return 0;
}