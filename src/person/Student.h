#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

class Student : public Person {
private:
    string rollNo;
    int semester;
    float gpa;
    string enrolledCourses[5];
    int courseCount;

public:
    Student();
    Student(string name, string cnic, int age, string contact, string r, int sem, float g);
    ~Student();

    void displayInfo();
    void calculateGrade();

    void setRollNo(string r);
    void setSemester(int s);
    void setGpa(float g);

    string getRollNo();
    int getSemester();
    float getGpa();

    void addCourse(string course);
};

#endif