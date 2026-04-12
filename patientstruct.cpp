#include <iostream>

using namespace std;

struct Patient {
    string Name;
    int age;
    string diagnosis;
};


void displayPatient(const Patient& p){
    cout << "Name: " << p.Name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
   
}

int main(){

    Patient p1, p2;

    cout << "Enter patient 1 name: ";
    getline(cin, p1.Name);

    cout << "Enter patient 1 age: ";
    cin >> p1.age;
   

    cout << "Enter diagnosis: ";
    getline(cin, p1.diagnosis);

    displayPatient(p1);

 return 0;
}