#ifndef JOURNAL_H
#define JOURNAL_H

#include "LibraryItem.h"
#include <string>
using namespace std;

class Journal : public LibraryItem {
private:
    string ISSN;
    int volume;
    int issueNumber;

public:
    Journal();
    Journal(string id, string t, string a, int year, string issn, int vol, int issue);
    ~Journal();

    void checkout();

    string getISSN() const;
    int getVolume() const;
    int getIssueNumber() const;
};

#endif