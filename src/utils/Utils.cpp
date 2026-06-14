#include "Utils.h"

string Utils::formatDate(int d, int m, int y) {
    stringstream ss;
    ss << d << "/" << m << "/" << y;
    return ss.str();
}

bool Utils::isValidCNIC(string cnic) {
    return cnic.length() == 13;
}