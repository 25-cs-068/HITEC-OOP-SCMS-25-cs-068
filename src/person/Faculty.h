#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
#include <string>
using namespace std;

class Faculty : public Person {
private:
    string employeeID;
    string department;
    string designation;
    string assignedCourses[5];
    int courseCount;

public:
    Faculty();
    Faculty(string name, string cnic, int age, string contact, string empID, string dept, string desig);
    ~Faculty();

    void displayInfo();

    void setEmployeeID(string id);
    void setDepartment(string dept);
    void setDesignation(string desig);

    string getEmployeeID();
    string getDepartment();
    string getDesignation();

    void addCourse(string course);
};

#endif