#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <sstream>
using namespace std;

class Utils {
public:
    static string formatDate(int d, int m, int y);
    static bool isValidCNIC(string cnic);
};

#endif