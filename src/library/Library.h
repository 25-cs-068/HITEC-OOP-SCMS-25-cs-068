#ifndef LIBRARY_H
#define LIBRARY_H

#include "LibraryItem.h"
#include <string>
using namespace std;

struct IssuedRecord {
    string rollNo;
    string itemID;
    int daysHeld;
};

class Library {
private:
    LibraryItem* catalog[100];
    int catalogCount;
    IssuedRecord issuedRecords[100];
    int issuedCount;

public:
    Library();
    ~Library();

    void addItem(LibraryItem* item);
    LibraryItem* searchByTitle(string t);
    
    void saveCatalogToFile(string filename);
    void loadCatalogFromFile(string filename);
    
    void issueItem(string rollNo, string itemID, int days);
    void returnItem(string itemID, int daysHeld);
};

#endif