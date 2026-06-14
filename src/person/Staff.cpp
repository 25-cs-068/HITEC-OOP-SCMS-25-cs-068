#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff() : Person() {
    staffID = "";
    role = "";
    salary = 0.0;
}

Staff::Staff(string name, string cnic, int age, string contact, string sID, string r, double sal) 
    : Person(name, cnic, age, contact) {
    staffID = sID;
    role = r;
    salary = sal;
}

Staff::~Staff() {
}

void Staff::displayInfo() {
    cout << "--- Staff Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "CNIC: " << cnic << endl;
    cout << "Age: " << age << endl;
    cout << "Contact: " << contact << endl;
    cout << "Staff ID: " << staffID << endl;
    cout << "Role: " << role << endl;
    cout << "Salary: " << salary << endl;
}

void Staff::setStaffID(string id) { staffID = id; }
void Staff::setRole(string r) { role = r; }
void Staff::setSalary(double sal) { salary = sal; }

string Staff::getStaffID() { return staffID; }
string Staff::getRole() { return role; }
double Staff::getSalary() { return salary; }