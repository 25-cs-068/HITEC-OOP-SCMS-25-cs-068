#ifndef HOSTELMANAGER_H
#define HOSTELMANAGER_H

#include "Accommodation.h"
#include "Reportable.h"
#include "HostelBlock.h"
#include <string>
using namespace std;

class Student;

class HostelManager : public Accommodation, public Reportable {
private:
    HostelBlock blockA;
    HostelBlock blockB;

public:
    HostelManager();
    ~HostelManager();

    void allocateRoom(Student* s);
    void vacateRoom(string rollNo);
    void generateReport();
    
    void initializeHostel();
};

#endif