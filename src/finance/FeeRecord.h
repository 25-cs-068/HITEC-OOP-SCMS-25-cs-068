#ifndef FEERECORD_H
#define FEERECORD_H

#include <string>
using namespace std;

class Student;

class FeeRecord {
private:
    Student* studentRef;
    double semesterFee;
    double hostelFee;
    double libraryFine;
    double totalPaid;
    double balance;
    string* remarks; 

public:
    FeeRecord();
    FeeRecord(Student* s, double semFee, double hFee, double lFine);
    
    FeeRecord(const FeeRecord& other);
    FeeRecord& operator=(const FeeRecord& other);
    
    ~FeeRecord();

    FeeRecord& operator-=(double amount);

    void displayRecord();
    
    double getBalance() const;
    void setLibraryFine(double fine);
};

#endif