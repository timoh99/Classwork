#include<iostream>
using namespace std;

class Employee {
    private:
         float salary;
    public :
          void setSalary(float sal){
            salary = sal
          }

          float getSalary(){
            return salary;
          }
}