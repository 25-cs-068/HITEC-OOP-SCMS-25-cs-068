#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>
using namespace std;

class CapacityExceededException {
private:
    string message;
public:
    CapacityExceededException(string msg);
    string getMessage();
};

class OverdueException {
private:
    string message;
    double fine;
public:
    OverdueException(string msg, double f);
    string getMessage();
    double getFine();
};

#endif