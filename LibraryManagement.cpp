#include <iostream>
#include <string>
using namespace std;

class Person {
    protected:
    string name;
    public:
    void setName(string n) {
        name = n;
    }
    public:
    string getName() {
        return name;
    }
};

class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;
public:
    LibraryMember(string name, int id, int borrowed) {
        setName(name);
        memberID = id;
        booksBorrowed = borrowed;
    }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;
public:
    PremiumMember(string name, int id, int borrowed, double fee) : LibraryMember(name, id, borrowed) {
        membershipFee = fee;
    }
};