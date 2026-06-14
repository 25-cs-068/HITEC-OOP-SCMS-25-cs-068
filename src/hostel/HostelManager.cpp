#include "HostelManager.h"
#include "../person/Student.h"
#include <iostream>
using namespace std;

HostelManager::HostelManager() : blockA("Block A"), blockB("Block B") {
}

HostelManager::~HostelManager() {
}

void HostelManager::initializeHostel() {
    blockA.addRoom(101, "single", 1);
    blockA.addRoom(102, "double", 1);
    blockB.addRoom(201, "single", 2);
    blockB.addRoom(202, "triple", 2);
}

void HostelManager::allocateRoom(Student* s) {
    Room* r = blockA.findEmptyRoom("single");
    if (r == nullptr) {
        r = blockB.findEmptyRoom("single");
    }
    
    if (r != nullptr) {
        r->addStudent(s);
        cout << "Room allocated to " << s->getName() << endl;
    } else {
        cout << "No empty room available!" << endl;
    }
}

void HostelManager::vacateRoom(string rollNo) {
    cout << "Student " << rollNo << " vacated room." << endl;
}

void HostelManager::generateReport() {
    cout << "--- Hostel Occupancy Report ---" << endl;
    blockA.displayBlockInfo();
    blockB.displayBlockInfo();
}