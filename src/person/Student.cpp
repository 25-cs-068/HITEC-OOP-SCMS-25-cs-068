#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() : Person() {
    rollNo = "";
    semester = 1;
    gpa = 0.0;
    courseCount = 0;
}

Student::Student(string name, string cnic, int age, string contact, string r, int sem, float g) 
    : Person(name, cnic, age, contact) {
    rollNo = r;
    semester = sem;
    gpa = g;
    courseCount = 0;
}

Student::~Student() {
}

void Student::displayInfo() {
    cout << "--- Student Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "CNIC: " << cnic << endl;
    cout << "Age: " << age << endl;
    cout << "Contact: " << contact << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Semester: " << semester << endl;
    cout << "GPA: " << gpa << endl;
}

void Student::calculateGrade() {
    if (gpa >= 3.5) {
        cout << "Grade: A" << endl;
    } else if (gpa >= 3.0) {
        cout << "Grade: B" << endl;
    } else if (gpa >= 2.0) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
}

void Student::setRollNo(string r) { rollNo = r; }
void Student::setSemester(int s) { semester = s; }
void Student::setGpa(float g) { gpa = g; }

string Student::getRollNo() { return rollNo; }
int Student::getSemester() { return semester; }
float Student::getGpa() { return gpa; }

void Student::addCourse(string course) {
    if (courseCount < 5) {
        enrolledCourses[courseCount] = course;
        courseCount++;
    } else {
        cout << "Cannot add more courses!" << endl;
    }
}