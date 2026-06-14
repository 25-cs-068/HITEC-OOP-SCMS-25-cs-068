#include <iostream>
#include <string>
#include "person/Student.h"
#include "person/Faculty.h"
#include "course/Course.h"
#include "library/Library.h"
#include "library/Book.h"
#include "finance/FeeRecord.h"
#include "finance/Invoice.h"
#include "hostel/HostelManager.h"
#include "utils/Reports.h"
#include "utils/Utils.h"
#include "utils/Exceptions.h"

using namespace std;

int main() {
    cout << "Starting Smart Campus Management System..." << endl;

    Faculty* f1 = new Faculty("Dr. Ali", "12345-1234567-1", 45, "0300-1234567", "F001", "CS", "Professor");
    Student* s1 = new Student("Ahmed", "12345-1234567-2", 20, "0300-7654321", "CS-101", 3, 3.8);
    Student* s2 = new Student("Bilal", "12345-1234567-3", 21, "0300-1112223", "CS-102", 3, 3.2);

    Student* studentList[2] = {s1, s2};

    Reports::sortStudentsByGPA(studentList, 2);
    cout << "Top Student by GPA: " << studentList[0]->getName() << " (" << studentList[0]->getGpa() << ")" << endl;

    Course c1("CS-104L", "Object Oriented Programming", 3, f1, 30);
    cout << c1;

    try {
        c1.enrollStudent(s1);
        cout << "Enrollment successful for " << s1->getName() << endl;
    } catch (CapacityExceededException& e) {
        cout << "Error: " << e.getMessage() << endl;
    }

    Library lib;
    Book* b1 = new Book("B001", "C++ How to Program", "Deitel", 2020, "978-123", "Education", 5);
    lib.addItem(b1);
    lib.saveCatalogToFile("data/library_catalog.txt");

    try {
        lib.returnItem("B001", 20);
    } catch (OverdueException& e) {
        cout << "Overdue Error: " << e.getMessage() << " | Fine: Rs. " << e.getFine() << endl;
    }

    FeeRecord fr1(s1, 50000, 10000, 0);
    fr1 -= 20000;
    fr1.displayRecord();

    Invoice inv1("2023-10-25", 30000);
    inv1.addItem("Tuition Fee");
    inv1.displayInvoice();
    cout << "Total Invoices Generated So Far: " << Invoice::getInvoiceCounter() << endl;

    HostelManager hm;
    hm.initializeHostel();
    hm.allocateRoom(s1);
    hm.generateReport();

    Reports::printCampusReport();

    delete f1;
    delete s1;
    delete s2;

    cout << "System shutdown complete." << endl;
    return 0;
}