#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
using namespace std;

class Student;
class Faculty;

class Course {
private:
    string courseCode;
    string courseName;
    int creditHours;
    Faculty* instructor;
    int maxCapacity;
    int enrolledCount;
    Student** waitingList;
    int waitingCount;

public:
    Course();
    Course(string code, string name, int credits, Faculty* inst, int maxCap);
    ~Course();

    bool operator==(const Course& other) const;
    friend ostream& operator<<(ostream& out, const Course& c);
    Student** operator+(const Course& other) const;

    void enrollStudent(Student* s);
    
    string getCourseCode() const;
    string getCourseName() const;
    int getCreditHours() const;
    Faculty* getInstructor() const;
    int getMaxCapacity() const;
    int getEnrolledCount() const;
    int getWaitingCount() const;
};

#endif