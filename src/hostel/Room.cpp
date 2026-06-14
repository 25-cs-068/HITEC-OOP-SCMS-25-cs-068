#include "Room.h"
#include "../person/Student.h"
#include <iostream>
using namespace std;

Room::Room() {
    roomNumber = 0;
    type = "";
    floor = 0;
    occupantCount = 0;
    for (int i = 0; i < 4; i++) {
        occupants[i] = nullptr;
    }
}

Room::Room(int rNum, string t, int f) {
    roomNumber = rNum;
    type = t;
    floor = f;
    occupantCount = 0;
    for (int i = 0; i < 4; i++) {
        occupants[i] = nullptr;
    }
}

Room::~Room() {
}

bool Room::addStudent(Student* s) {
    if (occupantCount < 4) {
        occupants[occupantCount] = s;
        occupantCount++;
        return true;
    }
    return false;
}

bool Room::removeStudent(string rollNo) {
    for (int i = 0; i < occupantCount; i++) {
        if (occupants[i]->getRollNo() == rollNo) {
            for (int j = i; j < occupantCount - 1; j++) {
                occupants[j] = occupants[j + 1];
            }
            occupants[occupantCount - 1] = nullptr;
            occupantCount--;
            return true;
        }
    }
    return false;
}

void Room::displayRoomInfo() {
    cout << "Room: " << roomNumber << " | Type: " << type << " | Floor: " << floor << " | Occupants: " << occupantCount << "/4" << endl;
}

int Room::getRoomNumber() const { return roomNumber; }
string Room::getType() const { return type; }
int Room::getOccupantCount() const { return occupantCount; }