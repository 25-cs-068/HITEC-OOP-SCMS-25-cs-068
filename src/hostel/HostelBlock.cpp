#include "HostelBlock.h"
#include <iostream>
using namespace std;

HostelBlock::HostelBlock() {
    blockName = "";
    roomCount = 0;
}

HostelBlock::HostelBlock(string bName) {
    blockName = bName;
    roomCount = 0;
}

HostelBlock::~HostelBlock() {
}

void HostelBlock::addRoom(int rNum, string t, int f) {
    if (roomCount < 50) {
        rooms[roomCount] = Room(rNum, t, f);
        roomCount++;
    }
}

Room* HostelBlock::findEmptyRoom(string type) {
    for (int i = 0; i < roomCount; i++) {
        if (rooms[i].getType() == type && rooms[i].getOccupantCount() < 4) {
            return &rooms[i];
        }
    }
    return nullptr;
}

void HostelBlock::displayBlockInfo() {
    cout << "--- Block: " << blockName << " ---" << endl;
    for (int i = 0; i < roomCount; i++) {
        rooms[i].displayRoomInfo();
    }
}