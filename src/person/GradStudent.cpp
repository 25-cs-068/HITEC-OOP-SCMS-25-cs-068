#include "GradStudent.h"
#include <iostream>
using namespace std;

GradStudent::GradStudent() : Student() {
    thesisTitle = "";
    researchArea = "";
}

GradStudent::GradStudent(string name, string cnic, int age, string contact, string r, int sem, float g, string thesis, string area) 
    : Student(name, cnic, age, contact, r, sem, g) {
    thesisTitle = thesis;
    researchArea = area;
}

GradStudent::~GradStudent() {
}

void GradStudent::displayInfo() {
    Student::displayInfo();
    cout << "Thesis Title: " << thesisTitle << endl;
    cout << "Research Area: " << researchArea << endl;
}

string GradStudent::getThesisTitle() const { return thesisTitle; }
string GradStudent::getResearchArea() const { return researchArea; }