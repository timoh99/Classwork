//hybrid interface code 
#include <iostream>
using namespace std;

// Parent class
class A {
public:
    void show()  cout << "Class A" << endl; 
};

// Child 1
class B : public A {
public:
    void display()  cout << "Class B" << endl; 
};

// Child 2
class C : public A {
public:
    void print()  cout << "Class C" << endl; 
};

// Child 3 - Hybrid inheritance
class D : public B, public C {
public:
    void output()  cout << "Class D" << endl; 
};

int main() {
    D obj;
    obj.B::show();  // Access A through B
    obj.display();
    obj.print();
    obj.output();
    return 0;
}