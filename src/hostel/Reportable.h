#ifndef REPORTABLE_H
#define REPORTABLE_H

#include "BaseModule.h"
#include <string>
using namespace std;

class Reportable : virtual public BaseModule {
public:
    Reportable();
    virtual ~Reportable();

    virtual void generateReport() = 0;
};

#endif