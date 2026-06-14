#ifndef REPORTS_H
#define REPORTS_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "../person/Student.h"
using namespace std;

class Reports {
public:
    static void printCampusReport();
    static void sortStudentsByGPA(Student* students[], int count);
    static Student* findStudentByRollNo(Student* students[], int count, string rollNo);
};

#endif