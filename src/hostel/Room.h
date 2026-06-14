#ifndef ROOM_H
#define ROOM_H

#include <string>
using namespace std;

class Student;

class Room {
private:
    int roomNumber;
    string type;
    int floor;
    Student* occupants[4];
    int occupantCount;

public:
    Room();
    Room(int rNum, string t, int f);
    ~Room();

    bool addStudent(Student* s);
    bool removeStudent(string rollNo);
    void displayRoomInfo();

    int getRoomNumber() const;
    string getType() const;
    int getOccupantCount() const;
};

#endif