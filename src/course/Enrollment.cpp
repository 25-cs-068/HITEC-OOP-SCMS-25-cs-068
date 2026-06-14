#include "Enrollment.h"
#include "../person/Student.h"
#include "Course.h"

Enrollment::Enrollment() {
    student = nullptr;
    course = nullptr;
    enrollmentDate = "";
    grade = "";
}

Enrollment::Enrollment(Student* s, Course* c, string date) {
    student = s;
    course = c;
    enrollmentDate = date;
    grade = "Pending";
}

Enrollment::~Enrollment() {
}

void Enrollment::setGrade(string g) {
    grade = g;
}

string Enrollment::getGrade() const {
    return grade;
}

Student* Enrollment::getStudent() const {
    return student;
}

Course* Enrollment::getCourse() const {
    return course;
}