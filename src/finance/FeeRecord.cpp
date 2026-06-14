#include "FeeRecord.h"
#include "../person/Student.h"
#include <iostream>
using namespace std;

FeeRecord::FeeRecord() {
    studentRef = nullptr;
    semesterFee = 0.0;
    hostelFee = 0.0;
    libraryFine = 0.0;
    totalPaid = 0.0;
    balance = 0.0;
    remarks = new string("No remarks");
}

FeeRecord::FeeRecord(Student* s, double semFee, double hFee, double lFine) {
    studentRef = s;
    semesterFee = semFee;
    hostelFee = hFee;
    libraryFine = lFine;
    totalPaid = 0.0;
    balance = semesterFee + hostelFee + libraryFine;
    remarks = new string("Initial record");
}

FeeRecord::FeeRecord(const FeeRecord& other) {
    studentRef = other.studentRef;
    semesterFee = other.semesterFee;
    hostelFee = other.hostelFee;
    libraryFine = other.libraryFine;
    totalPaid = other.totalPaid;
    balance = other.balance;
    remarks = new string(*other.remarks);
}

FeeRecord& FeeRecord::operator=(const FeeRecord& other) {
    if (this != &other) {
        studentRef = other.studentRef;
        semesterFee = other.semesterFee;
        hostelFee = other.hostelFee;
        libraryFine = other.libraryFine;
        totalPaid = other.totalPaid;
        balance = other.balance;
        delete remarks;
        remarks = new string(*other.remarks);
    }
    return *this;
}

FeeRecord::~FeeRecord() {
    delete remarks;
}

FeeRecord& FeeRecord::operator-=(double amount) {
    if (amount > 0) {
        totalPaid += amount;
        balance -= amount;
        if (balance < 0) {
            balance = 0;
        }
    }
    return *this;
}

void FeeRecord::displayRecord() {
    cout << "--- Fee Record ---" << endl;
    cout << "Semester Fee: " << semesterFee << endl;
    cout << "Hostel Fee: " << hostelFee << endl;
    cout << "Library Fine: " << libraryFine << endl;
    cout << "Total Paid: " << totalPaid << endl;
    cout << "Remaining Balance: " << balance << endl;
}

double FeeRecord::getBalance() const {
    return balance;
}

void FeeRecord::setLibraryFine(double fine) {
    libraryFine += fine;
    balance += fine;
}