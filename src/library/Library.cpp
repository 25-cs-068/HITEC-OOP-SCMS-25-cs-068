#include "Library.h"
#include "Book.h"
#include "Journal.h"
#include "../utils/Exceptions.h"
#include <fstream>
#include <iostream>
using namespace std;

Library::Library() {
    catalogCount = 0;
    issuedCount = 0;
    for (int i = 0; i < 100; i++) {
        catalog[i] = nullptr;
    }
}

Library::~Library() {
    for (int i = 0; i < catalogCount; i++) {
        if (catalog[i] != nullptr) {
            delete catalog[i];
        }
    }
}

void Library::addItem(LibraryItem* item) {
    if (catalogCount < 100) {
        catalog[catalogCount] = item;
        catalogCount++;
    }
}

LibraryItem* Library::searchByTitle(string t) {
    for (int i = 0; i < catalogCount; i++) {
        if (catalog[i]->getTitle() == t) {
            return catalog[i];
        }
    }
    return nullptr;
}

void Library::saveCatalogToFile(string filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < catalogCount; i++) {
            file << catalog[i]->getItemID() << "," 
                 << catalog[i]->getTitle() << "," 
                 << catalog[i]->getAuthor() << "," 
                 << catalog[i]->getPublicationYear() << endl;
        }
        file.close();
    }
}

void Library::loadCatalogFromFile(string filename) {
    ifstream file(filename);
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << "Loaded: " << line << endl;
        }
        file.close();
    }
}

void Library::issueItem(string rollNo, string itemID, int days) {
    if (issuedCount < 100) {
        issuedRecords[issuedCount].rollNo = rollNo;
        issuedRecords[issuedCount].itemID = itemID;
        issuedRecords[issuedCount].daysHeld = days;
        issuedCount++;
        cout << "Item issued successfully." << endl;
    }
}

void Library::returnItem(string itemID, int daysHeld) {
    if (daysHeld > 14) {
        double fine = (daysHeld - 14) * 10.0;
        throw OverdueException("Item is overdue!", fine);
    }
    cout << "Item returned successfully. No fine." << endl;
}