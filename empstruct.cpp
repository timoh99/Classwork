#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Employee{
	string Empname;
	int  EmpId;
	float EmpSalary;
	int EmpcellNo;
};

int main(){
	Employee emp1,emp2;
 cout << "Please enter employee name: ";
    getline(cin , emp1.Empname);

    cout << "Please enter employee salary: ";
    cin >> emp2.EmpSalary;

    cout << "Name: " << emp1.Empname << endl;
    cout << "Salary: " << emp2.EmpSalary << endl;
}
