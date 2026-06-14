#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include <string>
using namespace std;

class Student;
class Course;

class Enrollment {
private:
    Student* student;
    Course* course;
    string enrollmentDate;
    string grade;

public:
    Enrollment();
    Enrollment(Student* s, Course* c, string date);
    ~Enrollment();

    void setGrade(string g);
    string getGrade() const;
    Student* getStudent() const;
    Course* getCourse() const;
};

#endif