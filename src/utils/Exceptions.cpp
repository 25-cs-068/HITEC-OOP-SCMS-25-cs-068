#include "Exceptions.h"

CapacityExceededException::CapacityExceededException(string msg) {
    message = msg;
}

string CapacityExceededException::getMessage() {
    return message;
}

OverdueException::OverdueException(string msg, double f) {
    message = msg;
    fine = f;
}

string OverdueException::getMessage() {
    return message;
}

double OverdueException::getFine() {
    return fine;
}