#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H

#include "BaseModule.h"
#include <string>
using namespace std;

class Student;

class Accommodation : virtual public BaseModule {
public:
    Accommodation();
    virtual ~Accommodation();

    virtual void allocateRoom(Student* s) = 0;
    virtual void vacateRoom(string rollNo) = 0;
};

#endif