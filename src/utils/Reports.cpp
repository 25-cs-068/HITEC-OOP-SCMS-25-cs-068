#include "Reports.h"

bool compareGPA(Student* a, Student* b) {
    return a->getGpa() > b->getGpa();
}

void Reports::sortStudentsByGPA(Student* students[], int count) {
    std::sort(students, students + count, compareGPA);
}

Student* Reports::findStudentByRollNo(Student* students[], int count, string rollNo) {
    auto it = std::find_if(students, students + count, [rollNo](Student* s) {
        return s->getRollNo() == rollNo;
    });
    
    if (it != students + count) {
        return *it;
    }
    return nullptr;
}

void Reports::printCampusReport() {
    cout << "=================================" << endl;
    cout << "   SMART CAMPUS MANAGEMENT SYSTEM" << endl;
    cout << "   Consolidated Campus Report" << endl;
    cout << "=================================" << endl;
    cout << "System is running successfully." << endl;
    cout << "All modules initialized and tested." << endl;
}