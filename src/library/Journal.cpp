#include "Journal.h"
#include <iostream>
using namespace std;

Journal::Journal() : LibraryItem() {
    ISSN = "";
    volume = 0;
    issueNumber = 0;
}

Journal::Journal(string id, string t, string a, int year, string issn, int vol, int issue) 
    : LibraryItem(id, t, a, year) {
    ISSN = issn;
    volume = vol;
    issueNumber = issue;
}

Journal::~Journal() {
}

void Journal::checkout() {
    cout << "Journal checked out successfully." << endl;
}

string Journal::getISSN() const { return ISSN; }
int Journal::getVolume() const { return volume; }
int Journal::getIssueNumber() const { return issueNumber; }