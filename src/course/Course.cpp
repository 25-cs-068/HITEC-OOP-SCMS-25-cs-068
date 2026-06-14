#include "Course.h"
#include "../person/Student.h"
#include "../utils/Exceptions.h"

Course::Course() {
    courseCode = "";
    courseName = "";
    creditHours = 0;
    instructor = nullptr;
    maxCapacity = 0;
    enrolledCount = 0;
    waitingList = nullptr;
    waitingCount = 0;
}

Course::Course(string code, string name, int credits, Faculty* inst, int maxCap) {
    courseCode = code;
    courseName = name;
    creditHours = credits;
    instructor = inst;
    maxCapacity = maxCap;
    enrolledCount = 0;
    waitingList = new Student*[10]; 
    waitingCount = 0;
}

Course::~Course() {
    if (waitingList != nullptr) {
        delete[] waitingList;
    }
}

bool Course::operator==(const Course& other) const {
    return (this->courseCode == other.courseCode);
}

ostream& operator<<(ostream& out, const Course& c) {
    out << "Course Code: " << c.courseCode << endl;
    out << "Course Name: " << c.courseName << endl;
    out << "Credit Hours: " << c.creditHours << endl;
    out << "Max Capacity: " << c.maxCapacity << endl;
    out << "Enrolled: " << c.enrolledCount << endl;
    return out;
}

Student** Course::operator+(const Course& other) const {
    int total = this->waitingCount + other.waitingCount;
    Student** merged = new Student*[total];
    for (int i = 0; i < this->waitingCount; i++) {
        merged[i] = this->waitingList[i];
    }
    for (int i = 0; i < other.waitingCount; i++) {
        merged[this->waitingCount + i] = other.waitingList[i];
    }
    return merged;
}

void Course::enrollStudent(Student* s) {
    if (enrolledCount < maxCapacity) {
        s->addCourse(this->courseName);
        enrolledCount++;
    } else {
        if (waitingCount < 10) {
            waitingList[waitingCount] = s;
            waitingCount++;
        }
        throw CapacityExceededException("Course capacity exceeded!");
    }
}

string Course::getCourseCode() const { return courseCode; }
string Course::getCourseName() const { return courseName; }
int Course::getCreditHours() const { return creditHours; }
Faculty* Course::getInstructor() const { return instructor; }
int Course::getMaxCapacity() const { return maxCapacity; }
int Course::getEnrolledCount() const { return enrolledCount; }
int Course::getWaitingCount() const { return waitingCount; }