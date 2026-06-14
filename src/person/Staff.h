#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
#include <string>
using namespace std;

class Staff : public Person {
private:
    string staffID;
    string role;
    double salary;

public:
    Staff();
    Staff(string name, string cnic, int age, string contact, string sID, string r, double sal);
    ~Staff();

    void displayInfo();

    void setStaffID(string id);
    void setRole(string r);
    void setSalary(double sal);

    string getStaffID();
    string getRole();
    double getSalary();
};

#endif