#ifndef HOSTELBLOCK_H
#define HOSTELBLOCK_H

#include "Room.h"
#include <string>
using namespace std;

class HostelBlock {
private:
    string blockName;
    Room rooms[50];
    int roomCount;

public:
    HostelBlock();
    HostelBlock(string bName);
    ~HostelBlock();

    void addRoom(int rNum, string t, int f);
    Room* findEmptyRoom(string type);
    void displayBlockInfo();
};

#endif