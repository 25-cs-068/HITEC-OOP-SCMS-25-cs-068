Smart Campus Management System (SCMS)
Project Info
Students: Wasi Shah and Muhammad Haris 
Roll No: 25-CS-068 and 25-cs-127
Course: CS-104L: Object-Oriented Programming
Institution: HITEC University Taxila
Project Description
This is a Smart Campus Management System developed in C++ that manages university operations including students, faculty, courses, library, hostel, and fee management.	
OOP Concepts Demonstrated
Classes & Objects - All modules
Encapsulation - Getters/Setters in all classes
Constructors - Default, parameterized, copy constructors
Destructors - Library and HostelManager classes
Single Inheritance - Student : Person
Multi-level Inheritance - GradStudent : Student : Person
Multiple Inheritance - HostelManager
Virtual Inheritance - Diamond problem solution in Module 5
Abstract Classes & Pure Virtual - Person, LibraryItem, Accommodation
Runtime Polymorphism - displayInfo() via base pointer
Operator Overloading - Course (==, <<), FeeRecord (-=)
Friend Functions - operator<< for Course/Invoice
Static Members - Invoice::invoiceCounter
Copy Constructor (Deep Copy) - FeeRecord
Copy Constructor and Destructor - Invoice
Search Functions - searchByTitle() in Library
Array-based Collections - Library class with array of items
Arrays of Objects - Arrays used throughout all modules
Exception Handling - try/catch, custom exceptions
File I/O (fstream) - Library catalog persistence
Reporting & Utilities - Reports.h / Reports.cpp
Memory Management - new and delete used correctly
Sorting and Searching - Sorting students by GPA
Composition - HostelBlock inside HostelManager
Aggregation - Course holds Faculty* reference

Modules
Module 1: Person Hierarchy (Inheritance & Polymorphism)
Module 2: Course & Enrollment Management (Encapsulation + Operator Overloading)
Module 3: Library System (File I/O + Arrays)
Module 4: Fee & Finance Management (Static Members + Copy Semantics)
Module 5: Hostel Management (Multiple Inheritance + Composition)
Module 6: Reporting & Utilities
How to Compile & Run
On Windows (Dev-C++):
Open Dev-C++
Create new Console Application project
Add all .cpp files from src folder to project
Press F11 to compile and run
GitHub Repository
https://github.com/YOUR_USERNAME/HITEC-OOP-SCMS-YOUR_ROLLNO
