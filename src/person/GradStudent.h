#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H

#include "Student.h"
#include <string>
using namespace std;

class GradStudent : public Student {
private:
    string thesisTitle;
    string researchArea;

public:
    GradStudent();
    GradStudent(string name, string cnic, int age, string contact, string r, int sem, float g, string thesis, string area);
    ~GradStudent();

    void displayInfo();
    
    string getThesisTitle() const;
    string getResearchArea() const;
};

#endif