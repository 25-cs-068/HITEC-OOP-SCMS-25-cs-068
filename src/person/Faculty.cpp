#include "Faculty.h"
#include <iostream>
using namespace std;

Faculty::Faculty() : Person() {
    employeeID = "";
    department = "";
    designation = "";
    courseCount = 0;
}

Faculty::Faculty(string name, string cnic, int age, string contact, string empID, string dept, string desig) 
    : Person(name, cnic, age, contact) {
    employeeID = empID;
    department = dept;
    designation = desig;
    courseCount = 0;
}

Faculty::~Faculty() {
}

void Faculty::displayInfo() {
    cout << "--- Faculty Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "CNIC: " << cnic << endl;
    cout << "Age: " << age << endl;
    cout << "Contact: " << contact << endl;
    cout << "Employee ID: " << employeeID << endl;
    cout << "Department: " << department << endl;
    cout << "Designation: " << designation << endl;
}

void Faculty::setEmployeeID(string id) { employeeID = id; }
void Faculty::setDepartment(string dept) { department = dept; }
void Faculty::setDesignation(string desig) { designation = desig; }

string Faculty::getEmployeeID() { return employeeID; }
string Faculty::getDepartment() { return department; }
string Faculty::getDesignation() { return designation; }

void Faculty::addCourse(string course) {
    if (courseCount < 5) {
        assignedCourses[courseCount] = course;
        courseCount++;
    } else {
        cout << "Cannot assign more courses!" << endl;
    }
}